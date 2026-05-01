/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18003DF60
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x18003DE20 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x18017BED0 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180027E10 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18003AB30 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x18003E110 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetStateRegKey(
        CallerIdentity *this,
        const WCHAR *a2,
        const unsigned __int16 *a3,
        HKEY *a4)
{
  const WCHAR *v4; // rbx
  signed int LastError; // eax
  signed int Error; // edi
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  void *v12; // rax
  LSTATUS v13; // eax
  LSTATUS Key; // eax
  LSTATUS v16; // eax
  HKEY hKey; // [rsp+50h] [rbp-20h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-18h] BYREF
  LPVOID v19; // [rsp+60h] [rbp-10h] BYREF
  REGSAM samDesired; // [rsp+C0h] [rbp+50h]
  unsigned __int64 v21; // [rsp+C8h] [rbp+58h] BYREF

  samDesired = (unsigned int)a3;
  v4 = 0LL;
  *a4 = 0LL;
  LODWORD(v21) = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v21) )
    return (unsigned int)-2147418113;
  LastError = GetLastError();
  Error = LastError;
  if ( LastError > 0 )
    Error = (unsigned __int16)LastError | 0x80070000;
  if ( Error >= 0 )
    return (unsigned int)-2147467259;
  if ( Error == -2147024774 && (_DWORD)v21 )
  {
    CoTaskMemFree(0LL);
    v10 = v21;
    v19 = 0LL;
    v11 = (unsigned int)v21 + 1LL;
    if ( v11 < (unsigned int)v21 )
    {
      Error = -2147024362;
    }
    else
    {
      if ( !is_mul_ok(v11, 2uLL) )
      {
        Error = -2147024362;
LABEL_11:
        if ( Error >= 0 )
        {
          Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&hKey);
          if ( (unsigned int)GetSystemAppDataKey(this, &hKey, v4, &v21)
            || (Error = ResultFromKnownLastError(), Error >= 0) )
          {
            if ( a2 )
            {
              Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&phkResult);
              v13 = RegOpenKeyExW(hKey, v4, 0, 0x2001Fu, &phkResult);
              Error = v13;
              if ( v13 > 0 )
                Error = (unsigned __int16)v13 | 0x80070000;
              if ( Error >= 0 )
              {
                Key = RegCreateKeyExW(phkResult, a2, 0, 0LL, 0, samDesired, 0LL, a4, 0LL);
                Error = Key;
                if ( Key > 0 )
                  Error = (unsigned __int16)Key | 0x80070000;
              }
              CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&phkResult);
            }
            else
            {
              v16 = RegOpenKeyExW(hKey, v4, 0, samDesired, a4);
              Error = v16;
              if ( v16 > 0 )
                Error = (unsigned __int16)v16 | 0x80070000;
            }
          }
          CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
        }
        goto LABEL_21;
      }
      v12 = CoTaskMemAlloc(2 * v11);
      v19 = v12;
      v4 = (const WCHAR *)v12;
      if ( v12 )
      {
        Error = 0;
        StringCchCopyNExW((char *)v12, v11, 0LL, v10);
        goto LABEL_11;
      }
      Error = -2147024882;
    }
LABEL_21:
    CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&v19);
  }
  return (unsigned int)Error;
}

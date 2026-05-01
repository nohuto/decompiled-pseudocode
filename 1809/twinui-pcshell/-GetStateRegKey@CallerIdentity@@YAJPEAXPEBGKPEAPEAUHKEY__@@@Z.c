/*
 * XREFs of ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180029F00
 * Callers:
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180029DC0 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z @ 0x1801331D0 (-GetAppStateKey@@YAJPEBGKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ @ 0x18002A0C4 (--1-$CAutoHandle@PEAUHKEY__@@@@QEAA@XZ.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002C9D0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180033770 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
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
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // rax
  LSTATUS v14; // eax
  LSTATUS Key; // eax
  LSTATUS v17; // eax
  unsigned __int16 **phkResult; // [rsp+20h] [rbp-50h]
  unsigned __int64 *samDesired; // [rsp+28h] [rbp-48h]
  unsigned int lpSecurityAttributes; // [rsp+30h] [rbp-40h]
  HKEY hKey; // [rsp+50h] [rbp-20h] BYREF
  HKEY v22; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int16 *v23; // [rsp+60h] [rbp-10h] BYREF
  REGSAM v24; // [rsp+C0h] [rbp+50h]
  unsigned __int64 v25; // [rsp+C8h] [rbp+58h] BYREF

  v24 = (unsigned int)a3;
  v4 = 0LL;
  *a4 = 0LL;
  LODWORD(v25) = 0;
  if ( (unsigned int)GetSystemAppDataKey(this, 0LL, 0LL, &v25) )
    return (unsigned int)-2147418113;
  LastError = GetLastError();
  Error = LastError;
  if ( LastError > 0 )
    Error = (unsigned __int16)LastError | 0x80070000;
  if ( Error >= 0 )
    return (unsigned int)-2147467259;
  if ( Error == -2147024774 && (_DWORD)v25 )
  {
    CoTaskMemFree(0LL);
    v10 = v25;
    v11 = -1LL;
    v23 = 0LL;
    v12 = (unsigned int)v25 + 1LL;
    if ( v12 >= (unsigned int)v25 )
      v11 = (unsigned int)v25 + 1LL;
    Error = v12 < (unsigned int)v25 ? 0x80070216 : 0;
    if ( v12 >= (unsigned int)v25 )
    {
      v23 = 0LL;
      if ( is_mul_ok(v11, 2uLL) )
      {
        v13 = (unsigned __int16 *)CoTaskMemAlloc(2 * v11);
        v23 = v13;
        v4 = v13;
        if ( !v13 )
        {
          Error = -2147024882;
LABEL_23:
          CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&v23);
          return (unsigned int)Error;
        }
        Error = 0;
        StringCchCopyNExW(v13, v11, 0LL, v10, phkResult, samDesired, lpSecurityAttributes);
      }
      else
      {
        Error = -2147024362;
      }
    }
    if ( Error >= 0 )
    {
      Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&hKey);
      if ( (unsigned int)GetSystemAppDataKey(this, &hKey, v4, &v25) || (Error = ResultFromKnownLastError(), Error >= 0) )
      {
        if ( a2 )
        {
          Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v22);
          v14 = RegOpenKeyExW(hKey, v4, 0, 0x2001Fu, &v22);
          Error = v14;
          if ( v14 > 0 )
            Error = (unsigned __int16)v14 | 0x80070000;
          if ( Error >= 0 )
          {
            Key = RegCreateKeyExW(v22, a2, 0, 0LL, 0, v24, 0LL, a4, 0LL);
            Error = Key;
            if ( Key > 0 )
              Error = (unsigned __int16)Key | 0x80070000;
          }
          CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&v22);
        }
        else
        {
          v17 = RegOpenKeyExW(hKey, v4, 0, v24, a4);
          Error = v17;
          if ( v17 > 0 )
            Error = (unsigned __int16)v17 | 0x80070000;
        }
      }
      CAutoHandle<HKEY__ *>::~CAutoHandle<HKEY__ *>(&hKey);
    }
    goto LABEL_23;
  }
  return (unsigned int)Error;
}

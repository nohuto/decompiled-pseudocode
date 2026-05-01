/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18003D590
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x18003D7AC (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F554 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003FC34 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001AA8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180042850 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A5E (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        char *a2,
        unsigned __int16 *a3,
        char *a4,
        unsigned __int16 *a5)
{
  int v5; // r14d
  signed int v8; // edi
  signed int v9; // ebp
  unsigned int v10; // esi
  HANDLE v12; // r15
  signed int LastError; // eax
  signed int v14; // eax
  wchar_t *v15; // rax
  char *v16; // r8
  __int64 v17; // rcx
  _WORD *v18; // rax
  __int64 v19; // rcx
  WCHAR *v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r14
  unsigned __int16 *v23; // rbx
  DWORD dwSize; // [rsp+20h] [rbp-898h] BYREF
  unsigned __int16 *v26; // [rsp+28h] [rbp-890h]
  unsigned __int16 *v27; // [rsp+30h] [rbp-888h]
  WCHAR ExeName[1040]; // [rsp+40h] [rbp-878h] BYREF

  v5 = 0;
  v26 = a3;
  v27 = a5;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
    goto LABEL_7;
  LastError = GetLastError();
  v8 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v8 = LastError;
  if ( v8 >= 0 )
  {
LABEL_7:
    if ( !QueryFullProcessImageNameW(v12, 0, ExeName, &dwSize) )
    {
      v14 = GetLastError();
      v8 = (unsigned __int16)v14 | 0x80070000;
      if ( v14 <= 0 )
        v8 = v14;
    }
    if ( v8 >= 0 )
    {
      v15 = wcsrchr(ExeName, 0x5Cu);
      if ( v15 )
      {
        v16 = (char *)(v15 + 1);
        *v15 = 0;
        if ( a2 )
        {
          if ( v15 == (wchar_t *)-2LL )
          {
            v5 = (int)v27;
            v9 = -2147024809;
          }
          else
          {
            v17 = 0x7FFFFFFFLL;
            v18 = v15 + 1;
            do
            {
              if ( !*v18 )
                break;
              ++v18;
              --v17;
            }
            while ( v17 );
            v9 = v17 == 0 ? 0x80070057 : 0;
            if ( v17 )
              v5 = 0x7FFFFFFF - v17;
          }
          if ( v9 >= 0 )
          {
            v9 = StringCchCopyW(a2, *(unsigned int *)v26, v16);
            *(_DWORD *)v26 = v5 + 1;
          }
        }
        if ( a4 )
        {
          v19 = 0x7FFFFFFFLL;
          v20 = ExeName;
          do
          {
            if ( !*v20 )
              break;
            ++v20;
            --v19;
          }
          while ( v19 );
          v10 = v19 == 0 ? 0x80070057 : 0;
          v21 = v19 ? 0x7FFFFFFF - v19 : 0LL;
          v22 = v21 & -(__int64)(v19 != 0);
          if ( v19 )
          {
            v23 = v27;
            v10 = StringCchCopyW(a4, *(unsigned int *)v27, (char *)ExeName);
            *(_DWORD *)v23 = v22 + 1;
          }
        }
      }
      else
      {
        v8 = -2147418113;
      }
    }
    if ( v12 )
      CloseHandle(v12);
  }
  if ( v9 < 0 )
    v10 = v9;
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v10;
}

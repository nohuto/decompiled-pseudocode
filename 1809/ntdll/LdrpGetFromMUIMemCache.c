/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x180009C84
 * Callers:
 *     LdrResGetRCConfig @ 0x18003A160 (LdrResGetRCConfig.c)
 *     LdrpGetRcConfig @ 0x18003E0D0 (LdrpGetRcConfig.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180055B60 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // di
  _DWORD *v8; // rbx
  __int64 v9; // r13
  int v10; // r8d
  __int64 v11; // rcx
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v16 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v14 = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v14);
  v9 = v14;
  if ( !v14 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&MuiCacheSWRLock);
  v10 = AlternateResourceModuleCount - 1;
  v13 = AlternateResourceModuleCount - 1;
  while ( v10 >= 0 )
  {
    v11 = (__int64)v10 << 6;
    if ( *(_QWORD *)(v11 + AlternateResourceModules + 8) == a1 )
    {
      if ( *(_DWORD *)(v11 + AlternateResourceModules + 24) != *(_DWORD *)(v9 + 88) )
      {
        v16 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)(v11 + AlternateResourceModules + 16) )
        {
          _mm_lfence();
          v8 = *(_DWORD **)(((__int64)v13 << 6) + AlternateResourceModules + 16);
          v15 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v16 = 1;
            v8 = 0LL;
            v15 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)(v11 + AlternateResourceModules) == a2 )
      {
        v8 = *(_DWORD **)(v11 + AlternateResourceModules + 32);
        v15 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)(v11 + AlternateResourceModules + 48);
        break;
      }
    }
    v13 = --v10;
  }
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v16 )
    LdrUnloadAlternateResourceModuleEx(a1, 0LL);
  return v8;
}

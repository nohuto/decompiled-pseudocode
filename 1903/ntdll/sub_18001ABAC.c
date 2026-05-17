/*
 * XREFs of sub_18001ABAC @ 0x18001ABAC
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180018940 @ 0x180018940 (sub_180018940.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F560 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall sub_18001ABAC(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // si
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // r13
  int v13; // r8d
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  _DWORD *v18; // [rsp+30h] [rbp-38h]
  char v19; // [rsp+88h] [rbp+20h]

  v4 = a4;
  v8 = 0LL;
  v19 = 0;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v17 = 0LL;
  RtlImageNtHeaderEx(1LL, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v17);
  v12 = v17;
  if ( !v17 )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  RtlAcquireSRWLockShared(&qword_1801664B0, v9, v10, v11);
  v13 = dword_180164340 - 1;
  v16 = dword_180164340 - 1;
  while ( v13 >= 0 )
  {
    v14 = (__int64)v13 << 6;
    if ( *(_QWORD *)(v14 + qword_180164338 + 8) == a1 )
    {
      if ( *(_DWORD *)(v14 + qword_180164338 + 24) != *(_DWORD *)(v12 + 88) )
      {
        v19 = 1;
        break;
      }
      if ( (v4 & 8) != 0 )
      {
        if ( *(_QWORD *)(v14 + qword_180164338 + 16) )
        {
          _mm_lfence();
          v8 = *(_DWORD **)(((__int64)v16 << 6) + qword_180164338 + 16);
          v18 = v8;
          if ( (unsigned __int64)v8 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *v8 != -20054323 )
          {
            v19 = 1;
            v8 = 0LL;
            v18 = 0LL;
          }
          break;
        }
      }
      else if ( (v4 & 4) != 0 && a2 && *(_WORD *)(v14 + qword_180164338) == a2 )
      {
        v8 = *(_DWORD **)(v14 + qword_180164338 + 32);
        v18 = v8;
        if ( a3 )
          *a3 = *(_QWORD *)(v14 + qword_180164338 + 48);
        break;
      }
    }
    v16 = --v13;
  }
  RtlReleaseSRWLockShared(&qword_1801664B0);
  if ( v19 )
    LdrUnloadAlternateResourceModuleEx(a1, 0LL);
  return v8;
}

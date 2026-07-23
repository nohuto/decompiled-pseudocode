/*
 * XREFs of sub_1800151CC @ 0x1800151CC
 * Callers:
 *     sub_180007D24 @ 0x180007D24 (sub_180007D24.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x180008720 (RtlpMuiRegLoadRegistryInfo.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180074270 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall sub_1800151CC(__int64 a1, unsigned int a2)
{
  int v4; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool v9; // sf
  char v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v11 = 0LL;
  v10 = 0;
  if ( !a1 || a2 > 1 )
    return 3221225485LL;
  if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
    return 0LL;
  sub_180012D4C();
  RtlEnterCriticalSection(&CriticalSection);
  if ( (!*(_QWORD *)(a1 + 64) || a2 != 1) && (!*(_QWORD *)(a1 + 56) || a2) )
  {
    v4 = sub_180008C14(a1, v6, a2, 3, &v10, &v11);
    v8 = v11;
    if ( !v11 )
    {
      LOBYTE(v7) = a2 != 1;
      v8 = sub_18001564C(1LL, v7, a1);
      v11 = v8;
      if ( !v8 )
        v4 = -1073741801;
    }
    v9 = v4 < 0;
    if ( v4 )
    {
      if ( v4 != -1073741801 && v10 )
        v4 = 0;
      v9 = v4 < 0;
    }
    if ( !v9 )
    {
      *(_DWORD *)(v8 + 40) |= 0x10u;
      *(_DWORD *)(v8 + 40) |= 0x40u;
      if ( a2 == 1 )
      {
        *(_QWORD *)(a1 + 64) = v8;
        *(_DWORD *)a1 |= 0x20u;
      }
      else if ( !a2 )
      {
        *(_QWORD *)(a1 + 56) = v8;
        *(_DWORD *)a1 |= 0x10u;
      }
    }
  }
  RtlLeaveCriticalSection(&CriticalSection);
  return (unsigned int)v4;
}

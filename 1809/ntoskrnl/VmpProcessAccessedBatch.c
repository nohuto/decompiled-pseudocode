/*
 * XREFs of VmpProcessAccessedBatch @ 0x14030D298
 * Callers:
 *     VmpQueryAccessedState @ 0x14030D5E8 (VmpQueryAccessedState.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x14032C098 (HvlGetSparseGpaPagesAccessState.c)
 */

unsigned __int64 __fastcall VmpProcessAccessedBatch(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v5; // rbp
  __int64 v9; // rdx
  int SparseGpaPagesAccessState; // eax
  int v11; // r10d
  unsigned __int64 result; // rax
  _BYTE *i; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v16[32]; // [rsp+38h] [rbp-40h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    v9 = 0LL;
    if ( v5 == -1 )
    {
      v11 = -1073741823;
      v15 = 0LL;
    }
    else
    {
      LOBYTE(v9) = a5 != 0;
      SparseGpaPagesAccessState = HvlGetSparseGpaPagesAccessState(v5, v9, a3, a2, (__int64)&v15, (__int64)v16);
      v9 = v15;
      v11 = SparseGpaPagesAccessState;
    }
    result = (unsigned __int64)v16;
    for ( i = v16; i < &v16[v9]; ++a4 )
    {
      v14 = *a4;
      if ( (*i & 1) != 0 )
      {
        v14 |= 1uLL;
        *a4 = v14;
      }
      ++i;
      *a4 = v14 & 0xFFFFFFFFFFFFFFF9uLL | 4;
    }
    a2 += 8 * v9;
    a3 -= v9;
    if ( !a3 )
      break;
    if ( v11 < 0 )
    {
      result = *a4;
      if ( (*a4 & 4) == 0 )
      {
        result |= 6uLL;
        *a4 = result;
      }
      a2 += 8LL;
      ++a4;
      if ( !--a3 )
        break;
    }
  }
  return result;
}

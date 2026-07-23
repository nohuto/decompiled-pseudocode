/*
 * XREFs of MxMapPfnRange @ 0x1409BC688
 * Callers:
 *     MiCreateSparsePfnDatabase @ 0x1409BC4A4 (MiCreateSparsePfnDatabase.c)
 * Callees:
 *     MiPageToNode @ 0x14009CF50 (MiPageToNode.c)
 *     MiRestrictRangeToNode @ 0x14017F3EC (MiRestrictRangeToNode.c)
 *     MxMapVa @ 0x1409BC8F8 (MxMapVa.c)
 */

__int64 __fastcall MxMapPfnRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // r13d
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rdi
  __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+2Ch] [rbp-4Ch]
  __int64 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]
  unsigned int v23; // [rsp+40h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 48 * a1 - 0x58000000000LL;
  if ( v6 == (v6 & 0xFFFFFFFFFFE00000uLL) )
    v7 = 0LL;
  else
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 == -1LL || 48 * (a1 + a2) - 0x58000000000LL == ((48 * (a1 + a2) - 0x58000000000LL) & 0xFFFFFFFFFFE00000uLL) )
    v8 = 0LL;
  else
    v8 = (((48 * (a1 + a2) - 0x58000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = v7;
  v22 = v8;
  if ( !a2 )
    return 1LL;
  while ( 1 )
  {
    v9 = v4;
    if ( v4 == -1LL )
    {
      v4 = 0LL;
      v10 = MmPfnDatabase + (MxPfnAllocation << 12);
    }
    else
    {
      v9 = MiRestrictRangeToNode(v5, v4);
      v4 -= v9;
      v10 = 48 * (v5 + v9) - 0x58000000000LL;
    }
    v19 = MiPageToNode(v5, 0);
    v11 = ((48 * v5 - 0x58000000000LL) >> 9) & 0x7FFFFFFFF8LL;
    v5 += v9;
    v12 = v11 - 0x98000000000LL;
    v13 = (((unsigned __int64)(v10 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v12 <= v13 )
      break;
LABEL_19:
    if ( !v4 )
      return 1LL;
  }
  while ( 1 )
  {
    if ( v12 == v7 || (v14 = v3, v12 == v8) )
      v14 = 1;
    v23 = 0;
    v20 = v14;
    v18 = (__int64)(v12 << 25) >> 16;
    if ( !(unsigned int)MxMapVa(&v18) )
      return 0LL;
    if ( v23 )
    {
      v15 = v23;
      do
      {
        v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v15;
      }
      while ( v15 );
      v12 += 8LL;
      v3 = a3;
      v16 = v23;
      do
      {
        v12 = (__int64)(v12 << 25) >> 16;
        --v16;
      }
      while ( v16 );
    }
    else
    {
      v12 += 8LL;
    }
    if ( v12 > v13 )
      goto LABEL_19;
  }
}

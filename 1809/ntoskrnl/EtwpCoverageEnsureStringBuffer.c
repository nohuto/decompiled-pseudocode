/*
 * XREFs of EtwpCoverageEnsureStringBuffer @ 0x14075C628
 * Callers:
 *     EtwpCoverageRecord @ 0x1406B547C (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 * Callees:
 *     EtwpCoverageInitializeStringBuffer @ 0x14013BBD4 (EtwpCoverageInitializeStringBuffer.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageEnsureStringBuffer(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *i; // r8
  _QWORD *PoolWithTag; // rax
  unsigned int v5; // edi
  _QWORD *v6; // rsi
  _QWORD *v7; // rax

  v1 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v1; i = (_QWORD *)*i )
  {
    if ( i[2] - i[3] >= 0x200uLL )
    {
      *(_QWORD *)(a1 + 40) = i;
      return 0;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x56777445u);
  v5 = 0;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    EtwpCoverageInitializeStringBuffer(PoolWithTag, 0x2000u);
    *(_QWORD *)(a1 + 40) = v6;
    v7 = (_QWORD *)v1[1];
    if ( (_QWORD *)*v7 != v1 )
      __fastfail(3u);
    *v6 = v1;
    v6[1] = v7;
    *v7 = v6;
    v1[1] = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}

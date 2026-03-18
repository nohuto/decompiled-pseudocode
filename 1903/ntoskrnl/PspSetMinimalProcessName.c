/*
 * XREFs of PspSetMinimalProcessName @ 0x140769798
 * Callers:
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspSetProcessShortName @ 0x14062719C (PspSetProcessShortName.c)
 */

__int64 __fastcall PspSetMinimalProcessName(__int64 a1, const void **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rdi
  void *v6; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)a2 + 16LL, 0x6E497350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[1] = PoolWithTag + 2;
  *(_WORD *)PoolWithTag = *(_WORD *)a2;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)a2;
  memmove(PoolWithTag + 2, a2[1], *(unsigned __int16 *)a2);
  v6 = *(void **)(a1 + 1128);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  *(_QWORD *)(a1 + 1128) = v5;
  PspSetProcessShortName(a1, (unsigned __int16 *)a2);
  return 0LL;
}

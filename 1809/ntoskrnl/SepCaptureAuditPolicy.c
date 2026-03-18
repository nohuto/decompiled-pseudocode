/*
 * XREFs of SepCaptureAuditPolicy @ 0x14089FD64
 * Callers:
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D65E0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepCaptureAuditPolicy(
        unsigned __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7)
{
  _QWORD *PoolWithTag; // rax

  if ( a2 )
  {
    if ( (a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 31 > 0x7FFFFFFF0000LL || a1 + 31 < a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x61506553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = *(_OWORD *)a1;
  PoolWithTag[2] = *(_QWORD *)(a1 + 16);
  *((_DWORD *)PoolWithTag + 6) = *(_DWORD *)(a1 + 24);
  *((_WORD *)PoolWithTag + 14) = *(_WORD *)(a1 + 28);
  *((_BYTE *)PoolWithTag + 30) = *(_BYTE *)(a1 + 30);
  return 0LL;
}

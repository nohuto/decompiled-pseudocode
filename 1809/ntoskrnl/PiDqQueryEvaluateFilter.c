/*
 * XREFs of PiDqQueryEvaluateFilter @ 0x14059652C
 * Callers:
 *     PiDqQueryEnumObject @ 0x140596674 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     FilterEval @ 0x140596454 (FilterEval.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 */

__int64 __fastcall PiDqQueryEvaluateFilter(_QWORD *a1, void *a2, bool *a3)
{
  __int64 v6; // rax
  PVOID v7; // rbx
  PVOID PoolWithTag; // rsi
  int v9; // edi
  HANDLE Handle[6]; // [rsp+30h] [rbp-30h] BYREF
  int v12; // [rsp+90h] [rbp+30h] BYREF
  PVOID P; // [rsp+A0h] [rbp+40h] BYREF

  memset(Handle, 0, sizeof(Handle));
  v6 = a1[3];
  v7 = 0LL;
  P = 0LL;
  *a3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * *(unsigned int *)(v6 + 80), 0x58706E50u);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 48LL * *(unsigned int *)(a1[3] + 80LL));
    LODWORD(Handle[1]) = *(_DWORD *)(a1[3] + 80LL);
    Handle[2] = PoolWithTag;
    Handle[4] = a2;
    Handle[5] = a1;
    PiPnpRtlBeginOperation(&P);
    v9 = FilterEval(
           (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *))&PiDqPropertyCallback,
           (__int64)Handle,
           *(_DWORD *)(a1[3] + 80LL),
           *(_DWORD **)(a1[3] + 88LL),
           &v12);
    if ( v9 >= 0 )
      *a3 = v12 != 0;
    PnpFreeDevPropertyArray((unsigned int)Handle[3], (char *)PoolWithTag, 0x58706E50u);
    v7 = P;
  }
  else
  {
    v9 = -1073741670;
  }
  if ( (unsigned __int64)Handle[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ZwClose(Handle[0]);
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v9;
}

/*
 * XREFs of ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C013EC70
 * Callers:
 *     ?TdrInit@@YAXXZ @ 0x1C015AF44 (-TdrInit@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall TdrHistoryInit(UUID *Uuid)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 v7; // rax

  memset(Uuid, 0, 0xA18uLL);
  v2 = ExUuidCreate(Uuid);
  v6 = v2;
  if ( v2 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  Uuid[1].Data1 = KeQueryTimeIncrement();
}

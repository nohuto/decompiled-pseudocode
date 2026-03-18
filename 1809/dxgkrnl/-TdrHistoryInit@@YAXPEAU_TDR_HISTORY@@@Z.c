/*
 * XREFs of ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C012F7E0
 * Callers:
 *     ?TdrInit@@YAXXZ @ 0x1C01560C0 (-TdrInit@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

void __fastcall TdrHistoryInit(UUID *Uuid)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rax

  memset(Uuid, 0, 0xA18uLL);
  v2 = ExUuidCreate(Uuid);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
  }
  Uuid[1].Data1 = KeQueryTimeIncrement();
}

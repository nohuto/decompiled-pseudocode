/*
 * XREFs of ndisMDummyReceiveNetBufferLists @ 0x1C006DD94
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0004D70 (NdisMIndicateReceiveNetBufferLists.c)
 * Callees:
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMDummyReceiveNetBufferLists(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 5916) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 5864, a2, a3, 1LL, 0xC023001F);
  if ( (a5 & 2) == 0 )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 2472))(*(_QWORD *)(a1 + 2360), a2, a5 & 1);
}

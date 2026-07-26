/*
 * XREFs of ndisFakeFilterReceiveHandler @ 0x1C005BEE0
 * Callers:
 *     <none>
 * Callees:
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C005C2AC (ndisInvokeNextReceiveCompleteHandler.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v7; // r8

  if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 852) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 800, (__int64)a2, a3, 1LL, 0xC023001F);
  if ( (a5 & 2) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 )
      ndisInvokeNextReceiveCompleteHandler(a2, *(void **)(v7 + 544), *(void (**)(void))(v7 + 536));
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        *(void **)(*(_QWORD *)(a1 + 32) + 2544LL),
        *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2656LL));
  }
}

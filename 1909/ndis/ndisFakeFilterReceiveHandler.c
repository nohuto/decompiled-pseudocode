/*
 * XREFs of ndisFakeFilterReceiveHandler @ 0x1C008F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0090170 (ndisInvokeNextReceiveCompleteHandler.c)
 *     PktMonClientNblDropNdis @ 0x1C00C98AC (PktMonClientNblDropNdis.c)
 */

void __fastcall ndisFakeFilterReceiveHandler(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3, __int64 a4, char a5)
{
  __int64 v7; // r8

  if ( byte_1C00E5E20 && (*(_DWORD *)(a1 + 804) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 792, (_DWORD)a2, a3, 1, -1071448033, -536866814);
  if ( (a5 & 2) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 120);
    if ( v7 )
      ndisInvokeNextReceiveCompleteHandler(a2, *(void **)(v7 + 536), *(void (**)(void))(v7 + 528));
    else
      ndisInvokeNextReceiveCompleteHandler(
        a2,
        *(void **)(*(_QWORD *)(a1 + 32) + 2528LL),
        *(void (**)(void))(*(_QWORD *)(a1 + 32) + 2640LL));
  }
}

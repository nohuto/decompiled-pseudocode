/*
 * XREFs of ndisMFakeSendNetBufferLists @ 0x1C0023E20
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C0002DA0 (NdisSendNetBufferLists.c)
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001720 (ndisMSendCompleteNetBufferListsInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 */

void __fastcall ndisMFakeSendNetBufferLists(__int64 a1, struct _NET_BUFFER_LIST *a2, int a3, char a4)
{
  int v7; // ecx
  struct _NET_BUFFER_LIST *i; // rax

  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(91LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  if ( byte_1C009FE30 && (*(_DWORD *)(a1 + 5916) & 2) != 0 )
    PktMonClientNblDropNdis(a1 + 5864, (_DWORD)a2, a3, 2, *(_DWORD *)(a1 + 540), -536866811);
  v7 = *(_DWORD *)(a1 + 540);
  for ( i = a2; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
    i->Status = v7;
  ndisMSendCompleteNetBufferListsInternal(a1, a2, a4 & 1);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(92LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
}

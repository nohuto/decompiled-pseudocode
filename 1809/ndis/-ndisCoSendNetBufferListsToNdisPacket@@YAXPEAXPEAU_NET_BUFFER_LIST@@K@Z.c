/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0054050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E928 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00541F0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  char v3; // si
  char v5; // bl
  _SLIST_HEADER *Alignment; // rbx
  _SLIST_HEADER *v7; // rax
  struct _NDIS_PACKET **v8; // [rsp+20h] [rbp-E0h] BYREF
  int v9; // [rsp+28h] [rbp-D8h]
  struct _NET_BUFFER_LIST *v10; // [rsp+30h] [rbp-D0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-C8h]
  unsigned int v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+44h] [rbp-BCh]
  __int64 v14; // [rsp+48h] [rbp-B8h]
  char v15; // [rsp+50h] [rbp-B0h] BYREF

  v12 = 0;
  v8 = (struct _NDIS_PACKET **)&v15;
  v3 = a3;
  FirstNetBuffer = a2->FirstNetBuffer;
  v14 = a1[24];
  v9 = 64;
  v10 = a2;
  v13 = a3;
  do
  {
    v5 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v8, 0);
    if ( v12 )
      ndisCoSendPacketsToNdisPackets(a1, v8, v12);
  }
  while ( v5 );
  Alignment = (_SLIST_HEADER *)v10;
  if ( v10 )
  {
    if ( (unsigned __int8)byte_1C00A0252 >= 2u )
      WPP_SF_(0x12u, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids);
    if ( FirstNetBuffer != (_NET_BUFFER *)Alignment->Region )
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    if ( Alignment )
    {
      v7 = Alignment;
      do
      {
        *((_DWORD *)&v7[8].HeaderX64 + 3) = -1073741823;
        v7 = (_SLIST_HEADER *)v7->Alignment;
      }
      while ( v7 );
      ((void (__fastcall *)(_QWORD *, _SLIST_HEADER *, _QWORD))a1[32])(a1, Alignment, v3 & 1);
    }
  }
}

/*
 * XREFs of ?ndisCoSendNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0087CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B5CC (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E60 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 */

void __fastcall ndisCoSendNetBufferListsToNdisPacket(_QWORD *a1, struct _NET_BUFFER_LIST *a2, int a3)
{
  char v3; // si
  int v5; // edx
  char v6; // bl
  _SLIST_HEADER *Alignment; // rbx
  _SLIST_HEADER *v8; // rax
  struct _NDIS_PACKET **v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ch] [rbp-C4h]
  struct _NET_BUFFER_LIST *v12; // [rsp+40h] [rbp-C0h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+48h] [rbp-B8h]
  unsigned int v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+54h] [rbp-ACh]
  __int64 v16; // [rsp+58h] [rbp-A8h]
  char v17; // [rsp+60h] [rbp-A0h] BYREF

  v11 = 0;
  v14 = 0;
  v3 = a3;
  v9 = (struct _NDIS_PACKET **)&v17;
  FirstNetBuffer = a2->FirstNetBuffer;
  v16 = a1[24];
  v10 = 64;
  v12 = a2;
  v15 = a3;
  do
  {
    v6 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v9, 0);
    if ( v14 )
      ndisCoSendPacketsToNdisPackets(a1, v9, v14);
  }
  while ( v6 );
  Alignment = (_SLIST_HEADER *)v12;
  if ( v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        3,
        12,
        (struct _GUID *)&WPP_e982035bc9ca355b2dd1f2d762e385f5_Traceguids);
    }
    if ( FirstNetBuffer != (_NET_BUFFER *)Alignment->Region )
      Alignment = (_SLIST_HEADER *)Alignment->Alignment;
    if ( Alignment )
    {
      v8 = Alignment;
      do
      {
        *((_DWORD *)&v8[8].HeaderX64 + 3) = -1073741823;
        v8 = (_SLIST_HEADER *)v8->Alignment;
      }
      while ( v8 );
      ((void (__fastcall *)(_QWORD *, _SLIST_HEADER *, _QWORD))a1[32])(a1, Alignment, v3 & 1);
    }
  }
}

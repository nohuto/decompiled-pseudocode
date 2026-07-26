/*
 * XREFs of ndisMSendNetBufferListsToPackets @ 0x1C008B6E0
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B3FC (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 */

void __fastcall ndisMSendNetBufferListsToPackets(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        __int64 a3,
        int a4)
{
  char v4; // di
  char v6; // bl
  struct _NET_BUFFER_LIST *Alignment; // rdx
  struct _NET_BUFFER_LIST *v8; // rax
  _BYTE *v9; // [rsp+20h] [rbp-49h] BYREF
  int v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+2Ch] [rbp-3Dh]
  struct _NET_BUFFER_LIST *v12; // [rsp+30h] [rbp-39h]
  _NET_BUFFER *FirstNetBuffer; // [rsp+38h] [rbp-31h]
  int v14; // [rsp+40h] [rbp-29h]
  int v15; // [rsp+44h] [rbp-25h]
  struct _NDIS_MINIPORT_BLOCK *v16; // [rsp+48h] [rbp-21h]
  _BYTE v17[80]; // [rsp+50h] [rbp-19h] BYREF

  v11 = 0;
  v14 = 0;
  v4 = a4;
  v9 = v17;
  FirstNetBuffer = a2->FirstNetBuffer;
  v10 = 10;
  v12 = a2;
  v15 = a4;
  v16 = a1;
  do
  {
    v6 = ndisXlateSendNetBufferListsToPacketArray((__int64 *)&v9, 1);
    if ( v14 )
    {
      ((void (__fastcall *)(struct _NDIS_MINIPORT_BLOCK *, _BYTE *))a1->FinalSendPacketsHandler)(a1, v17);
      if ( !v6 )
        break;
    }
  }
  while ( v6 );
  Alignment = v12;
  if ( v12 )
  {
    if ( FirstNetBuffer != v12->FirstNetBuffer )
      Alignment = (struct _NET_BUFFER_LIST *)v12->Link.Alignment;
    if ( Alignment )
    {
      v8 = Alignment;
      do
      {
        v8->Status = -1073741670;
        v8 = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
      }
      while ( v8 );
      ndisMSendNetBufferListsCompleteInternal(a1, Alignment, v4 & 1);
    }
  }
}

/*
 * XREFs of ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0089B10
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C000DCC0 (ndisMSendNBLToMiniportInternal.c)
 * Callees:
 *     ?ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0089164 (-ndisDoLoopbackNetBufferList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C0089574 (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B6D4 (ndisMSendNetBufferListsCompleteInternal.c)
 */

void __fastcall ndisMLoopbackNetBufferLists(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        char a4,
        struct _NET_BUFFER_LIST **a5)
{
  _SLIST_HEADER *v5; // r14
  int v7; // r12d
  struct _NET_BUFFER_LIST *v8; // rbx
  struct _NET_BUFFER_LIST *v10; // rbp
  bool v11; // zf
  struct _NET_BUFFER_LIST *Alignment; // rsi
  struct _NET_BUFFER *FirstNetBuffer; // rdi
  unsigned int v14; // esi
  int v15; // ecx
  unsigned __int8 v16[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _NET_BUFFER_LIST *v17; // [rsp+38h] [rbp-40h]
  unsigned __int8 v18; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v5 = 0LL;
  v7 = 0;
  v8 = a2;
  v16[0] = 0;
  v18 = 0;
  v10 = a2;
  do
  {
    v11 = (v8->Flags & 0x800) == 0;
    Alignment = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
    v17 = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
    if ( !v11 )
    {
      v18 = 0;
LABEL_4:
      v5 = (_SLIST_HEADER *)v8;
      goto LABEL_5;
    }
    FirstNetBuffer = v8->FirstNetBuffer;
    v14 = v19;
    do
    {
      ndisMIsLoopbackNetBuffer(a1, FirstNetBuffer, v8, v16, &v18);
      if ( v16[0] == 1 )
      {
        v16[0] = 0;
        ndisDoLoopbackNetBufferList(a1, FirstNetBuffer, v8, v14, a4);
      }
      FirstNetBuffer = (struct _NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    Alignment = v17;
    if ( v18 != 1 )
      goto LABEL_4;
    v18 = 0;
    if ( v10 == v8 )
      v10 = v17;
    else
      v5->Alignment = (unsigned __int64)v17;
    v8->Link.Alignment = 0LL;
    v8->Status = 0;
    v15 = v7 | 1;
    if ( (a4 & 1) == 0 )
      v15 = v7;
    v7 = v15;
    ndisMSendNetBufferListsCompleteInternal(a1, v8);
LABEL_5:
    v8 = Alignment;
  }
  while ( Alignment );
  *a5 = v10;
}

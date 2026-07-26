/*
 * XREFs of ndisFLoopbackNetBufferLists @ 0x1C008F2EC
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C000BFC0 (NdisSendNetBufferLists.c)
 *     ndisFilterSendNetBufferLists @ 0x1C000E550 (ndisFilterSendNetBufferLists.c)
 *     ndisSendNBLToFilter @ 0x1C0040A80 (ndisSendNBLToFilter.c)
 * Callees:
 *     NdisFSendNetBufferListsComplete @ 0x1C000E210 (NdisFSendNetBufferListsComplete.c)
 *     ndisFDoLoopbackNetBufferList @ 0x1C008E704 (ndisFDoLoopbackNetBufferList.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C008F0E4 (ndisFIsLoopbackNetBuffer.c)
 */

PNET_BUFFER_LIST *__fastcall ndisFLoopbackNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        unsigned int a3,
        char a4,
        PNET_BUFFER_LIST *a5)
{
  _SLIST_HEADER *v5; // r14
  ULONG v7; // r12d
  PNET_BUFFER_LIST v8; // rbx
  PNET_BUFFER_LIST v10; // rbp
  bool v11; // zf
  struct _NET_BUFFER_LIST *Alignment; // rsi
  PNET_BUFFER_LIST *result; // rax
  $94E18E20480DA9B2C27FF8A8FF3A4150 *FirstNetBuffer; // rdi
  unsigned int v15; // esi
  ULONG v16; // ecx
  char v17[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _NET_BUFFER_LIST *v18; // [rsp+38h] [rbp-40h]
  char v19; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+18h]

  v20 = a3;
  v5 = 0LL;
  v7 = 0;
  v8 = NetBufferList;
  v17[0] = 0;
  v19 = 0;
  v10 = NetBufferList;
  do
  {
    v11 = (v8->Flags & 0x800) == 0;
    Alignment = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
    v18 = (struct _NET_BUFFER_LIST *)v8->Link.Alignment;
    if ( !v11 )
    {
      v19 = 0;
LABEL_4:
      v5 = (_SLIST_HEADER *)v8;
      goto LABEL_5;
    }
    FirstNetBuffer = ($94E18E20480DA9B2C27FF8A8FF3A4150 *)v8->FirstNetBuffer;
    v15 = v20;
    do
    {
      ndisFIsLoopbackNetBuffer((__int64)NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v8, v17, &v19);
      if ( v17[0] == 1 )
      {
        v17[0] = 0;
        ndisFDoLoopbackNetBufferList((__int64)NdisFilterHandle, (__int64)FirstNetBuffer, (__int64)v8, v15, a4);
      }
      FirstNetBuffer = ($94E18E20480DA9B2C27FF8A8FF3A4150 *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    Alignment = v18;
    if ( v19 != 1 )
      goto LABEL_4;
    v19 = 0;
    if ( v10 == v8 )
      v10 = v18;
    else
      v5->Alignment = (unsigned __int64)v18;
    v8->Link.Alignment = 0LL;
    v8->Status = 0;
    v16 = v7 | 1;
    if ( (a4 & 1) == 0 )
      v16 = v7;
    v7 = v16;
    NdisFSendNetBufferListsComplete(NdisFilterHandle, v8, v16);
LABEL_5:
    v8 = Alignment;
  }
  while ( Alignment );
  result = a5;
  *a5 = v10;
  return result;
}

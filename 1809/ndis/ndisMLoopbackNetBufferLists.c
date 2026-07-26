/*
 * XREFs of ndisMLoopbackNetBufferLists @ 0x1C00578B8
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C0005AC0 (ndisMSendNBLToMiniportInternal.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisDoLoopbackNetBufferList @ 0x1C0055D90 (ndisDoLoopbackNetBufferList.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C00572C4 (ndisMIsLoopbackNetBuffer.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 */

void __fastcall ndisMLoopbackNetBufferLists(
        struct _LOCK_STATE_EX *a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 *a5)
{
  _QWORD *v6; // r12
  unsigned int v7; // r13d
  __int64 v9; // rbx
  __int64 v10; // r15
  bool v11; // zf
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  unsigned int v14; // ecx
  char v15; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v16[7]; // [rsp+31h] [rbp-47h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]

  v15 = 0;
  v6 = 0LL;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x40u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
  v9 = a2;
  v15 = 0;
  v10 = a2;
  v16[0] = 0;
  do
  {
    v11 = (*(_DWORD *)(v9 + 136) & 0x800) == 0;
    v12 = *(_QWORD *)v9;
    v17 = *(_QWORD *)v9;
    if ( !v11 )
    {
      v16[0] = 0;
LABEL_17:
      v6 = (_QWORD *)v9;
      goto LABEL_18;
    }
    v13 = *(_QWORD **)(v9 + 8);
    do
    {
      ndisMIsLoopbackNetBuffer(a1, (__int64)v13, v9, &v15, v16);
      if ( v15 == 1 )
      {
        v15 = 0;
        ndisDoLoopbackNetBufferList((__int64)a1, (__int64)v13, v9, a3, a4);
      }
      v13 = (_QWORD *)*v13;
    }
    while ( v13 );
    v12 = v17;
    if ( v16[0] != 1 )
      goto LABEL_17;
    v16[0] = 0;
    if ( v10 == v9 )
      v10 = v17;
    else
      *v6 = v17;
    *(_QWORD *)v9 = 0LL;
    v14 = v7 | 1;
    *(_DWORD *)(v9 + 140) = 0;
    if ( (a4 & 1) == 0 )
      v14 = v7;
    v7 = v14;
    ndisMSendNetBufferListsCompleteInternal(a1, v9, v14, 0LL);
LABEL_18:
    v9 = v12;
  }
  while ( v12 );
  *a5 = v10;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qq(0x41u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1, a2);
}

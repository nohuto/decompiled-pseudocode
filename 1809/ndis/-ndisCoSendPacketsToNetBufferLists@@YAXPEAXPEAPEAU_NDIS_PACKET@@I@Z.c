/*
 * XREFs of ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0054440
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004ED18 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C0053E54 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 */

void __fastcall ndisCoSendPacketsToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v4; // r13
  unsigned int v6; // esi
  __int64 v7; // rdi
  struct _NDIS_PACKET **v8; // r15
  __int64 v9; // r12
  bool v10; // al
  struct _NDIS_PACKET **v11; // r9
  __int64 v12; // r12
  bool v13; // r13
  unsigned int v14; // r15d
  struct _NDIS_PACKET *v15; // rcx
  struct _NDIS_STACK_RESERVED *v16; // rax
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  struct _NDIS_PACKET **v22; // r14
  _QWORD v23[2]; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]
  unsigned int v26; // [rsp+50h] [rbp-18h]
  int v27; // [rsp+58h] [rbp-10h]
  struct _NDIS_STACK_RESERVED *v28; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v29; // [rsp+B8h] [rbp+50h]
  struct _LOCK_STATE_EX LockState; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+60h]

  v4 = a1[24];
  v29 = a1[9];
  v6 = 0;
  v7 = a3;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqd(0xDu, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids, a1, *a2, a3);
  v31 = *(_QWORD *)(v4 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v31 + 288), &LockState, 0);
  if ( *(_BYTE *)(a1[24] + 90LL) && (_DWORD)v7 )
  {
    v8 = a2;
    v9 = v7;
    do
    {
      ndisCoIndicatePromiscPacket(
        a1,
        (struct _NDIS_MINIPORT_BLOCK *)a1[24],
        *(struct _NDIS_OPEN_BLOCK **)(v4 + 56),
        *v8++,
        0);
      --v9;
    }
    while ( v9 );
  }
  v25 = 0LL;
  v26 = 0;
  v23[0] = a1;
  v23[1] = a2;
  v24 = v7;
  v27 = 2;
  do
  {
    v10 = ndisXlateSendPacketArrayToNetBufferLists((__int64)v23);
    v12 = v25;
    v13 = v10;
    if ( v25 )
    {
      v14 = v26;
      if ( v6 < v26 )
      {
        v11 = &a2[v6];
        do
        {
          v15 = *v11;
          ++*(_DWORD *)&v15[-1].ProtocolReserved[4];
          NDIS_STACK_RESERVED_FROM_PACKET(v15, &v28);
          v16 = v28;
          v11 = (struct _NDIS_PACKET **)(v17 + 8);
          *(_QWORD *)v28 = a1[10];
          *((_QWORD *)v16 + 1) = a1;
        }
        while ( v18 != 1 );
      }
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, struct _NDIS_PACKET **))a1[30])(a1[25], v12, 0LL, v11);
      v6 = v14;
    }
  }
  while ( v13 );
  if ( !v12 )
  {
    if ( (unsigned __int8)byte_1C00A0252 >= 2u )
      WPP_SF_(0xEu, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids);
    if ( v6 < (unsigned int)v7 )
    {
      v19 = v6;
      v20 = (unsigned int)v7 - v6;
      v21 = v29;
      v22 = &a2[v19];
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v21 + 48))(3221225626LL, *(_QWORD *)(v21 + 24), *v22++);
        --v20;
      }
      while ( v20 );
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v31 + 288), &LockState);
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0xFu, &WPP_4d0c893ac8ec3b5f26b43baabc605489_Traceguids, (__int64)a1);
}

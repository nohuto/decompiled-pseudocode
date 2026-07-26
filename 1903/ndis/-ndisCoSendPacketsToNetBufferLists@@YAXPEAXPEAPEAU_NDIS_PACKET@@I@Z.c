/*
 * XREFs of ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0087E90
 * Callers:
 *     <none>
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032754 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C007B7E8 (ndisXlateSendPacketArrayToNetBufferLists.c)
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C00878A0 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 */

void __fastcall ndisCoSendPacketsToNetBufferLists(_QWORD *a1, struct _NDIS_PACKET **a2, unsigned int a3)
{
  __int64 v3; // r13
  unsigned int v7; // edi
  struct _NDIS_PACKET **v8; // r14
  __int64 v9; // r15
  bool v10; // al
  int v11; // edx
  struct _NDIS_PACKET **v12; // r9
  __int64 v13; // r15
  bool v14; // r13
  unsigned int v15; // r14d
  struct _NDIS_PACKET *v16; // rcx
  struct _NDIS_STACK_RESERVED *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdi
  struct _NDIS_PACKET **v23; // rsi
  _QWORD v24[7]; // [rsp+30h] [rbp-38h] BYREF
  struct _NDIS_STACK_RESERVED *v25; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+50h]
  struct _LOCK_STATE_EX LockState; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+60h]

  v3 = a1[24];
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  memset(v24, 0, 0x30uLL);
  v26 = a1[9];
  v7 = 0;
  v28 = *(_QWORD *)(v3 + 400);
  NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(v28 + 288), &LockState, 0);
  if ( *(_BYTE *)(a1[24] + 90LL) && a3 )
  {
    v8 = a2;
    v9 = a3;
    do
    {
      ndisCoIndicatePromiscPacket(
        a1,
        (struct _NDIS_MINIPORT_BLOCK *)a1[24],
        *(struct _NDIS_OPEN_BLOCK **)(v3 + 56),
        *v8++,
        0);
      --v9;
    }
    while ( v9 );
  }
  v24[3] = 0LL;
  LODWORD(v24[4]) = 0;
  v24[0] = a1;
  v24[1] = a2;
  LODWORD(v24[2]) = a3;
  LODWORD(v24[5]) = 2;
  do
  {
    v10 = ndisXlateSendPacketArrayToNetBufferLists((__int64)v24);
    v13 = v24[3];
    v14 = v10;
    if ( v24[3] )
    {
      v15 = v24[4];
      if ( v7 < LODWORD(v24[4]) )
      {
        v12 = &a2[v7];
        do
        {
          v16 = *v12;
          ++*(_DWORD *)&v16[-1].ProtocolReserved[4];
          NDIS_STACK_RESERVED_FROM_PACKET(v16, &v25);
          v17 = v25;
          v12 = (struct _NDIS_PACKET **)(v18 + 8);
          *(_QWORD *)v25 = a1[10];
          *((_QWORD *)v17 + 1) = a1;
        }
        while ( v19 != 1 );
      }
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, struct _NDIS_PACKET **))a1[30])(a1[25], v13, 0LL, v12);
      v7 = v15;
    }
  }
  while ( v14 );
  if ( !v13 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        3,
        11,
        (struct _GUID *)&WPP_e982035bc9ca355b2dd1f2d762e385f5_Traceguids);
    }
    if ( v7 < a3 )
    {
      v20 = v7;
      v21 = a3 - v7;
      v22 = v26;
      v23 = &a2[v20];
      do
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v22 + 48))(3221225626LL, *(_QWORD *)(v22 + 24), *v23++);
        --v21;
      }
      while ( v21 );
    }
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v28 + 288), &LockState);
}

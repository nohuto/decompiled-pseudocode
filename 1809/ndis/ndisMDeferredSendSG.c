/*
 * XREFs of ndisMDeferredSendSG @ 0x1C0057030
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001F8F4 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMFreeSGList @ 0x1C004CEB8 (ndisMFreeSGList.c)
 *     ndisFreePaddedMdl @ 0x1C005613C (ndisFreePaddedMdl.c)
 *     ndisMLoopbackPacketX @ 0x1C0057A3C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0057C0C (ndisMSendCompletePacketToNetBufferLists.c)
 */

char __fastcall ndisMDeferredSendSG(__int64 a1)
{
  int v2; // r9d
  __int64 v3; // r14
  __int64 v4; // rcx
  unsigned int v5; // ebx
  KSPIN_LOCK *v6; // rbp
  unsigned int v7; // ebx
  char v8; // cl
  __int64 v9; // rcx
  struct _NDIS_STACK_RESERVED *v10; // r15
  __int64 v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  struct _NDIS_STACK_RESERVED *v17; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x28u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1);
  while ( 1 )
  {
    v15 = *(_QWORD *)(a1 + 144);
    if ( !v15 || (*(_DWORD *)(a1 + 120) & 0x400000) == 0 )
      break;
    NDIS_STACK_RESERVED_FROM_PACKET(*(struct _NDIS_PACKET **)(a1 + 144), &v17);
    *(_QWORD *)(a1 + 144) = 0LL;
    v3 = v15 + 64;
    v4 = *(_QWORD *)(v15 + 64);
    if ( v4 != a1 + 128 )
      *(_QWORD *)(a1 + 144) = v4 - 64;
    if ( ((v2 & 0x4000) != 0 || (v2 & 0x8800000) != 0 && *(_BYTE *)(v15 + 36) >= 0)
      && (unsigned __int8)ndisMLoopbackPacketX(a1, v15) )
    {
      v5 = 0;
      v6 = (KSPIN_LOCK *)(a1 + 96);
LABEL_11:
      v8 = *(_BYTE *)(v15 + 41) & 0xEF;
      *(_BYTE *)(v15 + 41) = v8;
      if ( v5 == -1073741670 )
      {
        *(_BYTE *)(v15 + 41) = v8;
        *(_DWORD *)(a1 + 120) &= ~0x400000u;
        *(_QWORD *)(a1 + 144) = v15;
      }
      else
      {
        v9 = *(_QWORD *)v3;
        v10 = v17;
        v11 = *(_QWORD *)v17;
        if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v12 = *(_QWORD **)(v15 + 72), *v12 != v3) )
          __fastfail(3u);
        *v12 = v9;
        *(_QWORD *)(v9 + 8) = v12;
        *(_QWORD *)(v15 + 72) = v15 + 64;
        *(_QWORD *)v3 = v3;
        *(_DWORD *)(a1 + 120) |= 0x400000u;
        *(_QWORD *)v10 = 1297040180LL;
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel(v6);
        if ( *(_QWORD *)(*(unsigned __int16 *)(v15 + 42) + v15 + 80) )
          ndisMFreeSGList(a1, v15, v13);
        *((_DWORD *)v10 + 2) = 0;
        if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && *(_QWORD *)(*(unsigned __int16 *)(v15 + 42) + v15 + 128) )
          ndisFreePaddedMdl(v15);
        v14 = *(unsigned __int16 *)(v15 + 42);
        *(_BYTE *)(v15 + 41) &= 0xC0u;
        if ( *(_QWORD *)(v14 + v15 + 112) )
          ndisMSendCompletePacketToNetBufferLists(a1, v15, v5);
        else
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(v11 + 112))(v11, v15, v5);
        KeAcquireSpinLockAtDpcLevel(v6);
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1864) = 1509908;
      }
    }
    else
    {
      v7 = *(_DWORD *)(v15 + 36);
      v6 = (KSPIN_LOCK *)(a1 + 96);
      *(_BYTE *)(v15 + 41) |= 0x10u;
      *(_QWORD *)(a1 + 520) = 0LL;
      *(_DWORD *)(a1 + 1864) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 4104))(*(_QWORD *)(a1 + 24), v15, v7);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
      *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 1864) = 1509890;
      if ( v5 != 259 )
        goto LABEL_11;
    }
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x29u, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1);
  return 0;
}

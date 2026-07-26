/*
 * XREFs of ndisMReset @ 0x1C009B920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F2C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061938 (McTemplateK0jqxq.c)
 *     NdisMResetComplete @ 0x1C0098830 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C009B2BC (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C009B7F8 (ndisMQueueWorkItem.c)
 */

__int64 __fastcall ndisMReset(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // edx
  KIRQL v4; // al
  KIRQL v5; // r15
  unsigned int v6; // edi
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v10; // edx
  __int64 v11; // rcx
  KIRQL v12; // si
  int v13; // edx
  BOOLEAN AddressingReset[4]; // [rsp+48h] [rbp-59h] BYREF
  unsigned int i; // [rsp+4Ch] [rbp-55h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+58h] [rbp-49h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      17,
      79,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v1);
  }
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v8 = (*(_DWORD *)(v1 + 124) & 0x80000) == 0;
  v5 = v4;
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  if ( !v8 )
  {
    v6 = -2147418111;
LABEL_30:
    *(_QWORD *)(v1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
    goto LABEL_31;
  }
  v7 = *(_DWORD *)(v1 + 120);
  v6 = -1073676275;
  if ( (v7 & 0x40000) != 0 )
    v8 = (v7 & 0x200000) == 0;
  else
    v8 = (unsigned int)ndisMQueueWorkItem(v1, 3, a1) == 0;
  if ( !v8 )
    goto LABEL_30;
  v6 = -2147418111;
  if ( *(_BYTE *)(v1 + 32) >= 6u || !*(_QWORD *)(*(_QWORD *)(v1 + 3760) + 192LL) )
    goto LABEL_30;
  ndisMReferenceOpen(a1, 8u);
  v9 = *(_DWORD *)(v1 + 120);
  *(_QWORD *)(v1 + 392) = a1;
  if ( (v9 & 0x40000) == 0 )
  {
    *(_DWORD *)(v1 + 120) = v9 | 0x100000;
    if ( !*(_BYTE *)(v1 + 89) )
    {
      *(_BYTE *)(v1 + 89) = 1;
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      ndisMProcessDeferred(v1);
      *(_BYTE *)(v1 + 89) = 0;
      *(_QWORD *)(v1 + 1864) = 0LL;
    }
    v6 = 259;
    goto LABEL_30;
  }
  AddressingReset[0] = 0;
  *(_DWORD *)(v1 + 120) = v9 | 0x280000;
  ndisMSwapOpenHandlers((struct _NDIS_MINIPORT_BLOCK *)v1, 1);
  while ( *(_DWORD *)(v1 + 1824) )
  {
    *(_QWORD *)(v1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
    for ( i = 0; i < 0x32; ++i )
      ;
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  }
  if ( *(_DWORD *)(v1 + 3868) != 1 )
  {
    *(_BYTE *)(v1 + 930) &= ~1u;
    v6 = -1073741637;
    *(_DWORD *)(v1 + 120) &= 0xFFD7FFFF;
    *(_DWORD *)(v1 + 540) = -1073741637;
    *(_QWORD *)(v1 + 392) = 0LL;
    ndisMDereferenceOpenLocked(a1, 8u);
    goto LABEL_30;
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v5);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = (void *)v1;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      12,
      80,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      v1);
  }
  if ( (byte_1C00E8081 & 4) != 0 )
    McTemplateK0jqxq(
      v11,
      &CallMiniportReset,
      (const GUID *)(v1 + 4008),
      v1 + 4008,
      *(_DWORD *)(v1 + 4056),
      *(_QWORD *)(v1 + 4024),
      2);
  v12 = KfRaiseIrql(2u);
  v6 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(v1 + 3760) + 192LL))(
         AddressingReset,
         *(_QWORD *)(v1 + 24));
  if ( v12 != 2 )
    KeLowerIrql(v12);
  if ( v6 != 259 )
  {
    NdisMResetComplete((NDIS_HANDLE)v1, v6, AddressingReset[0]);
    v6 = 259;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      17,
      81,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v1);
  }
  return v6;
}

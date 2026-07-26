/*
 * XREFs of ndisMReset @ 0x1C0063990
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     NdisMResetComplete @ 0x1C0060FE0 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C00632D4 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C00638BC (ndisMQueueWorkItem.c)
 */

__int64 __fastcall ndisMReset(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // al
  KIRQL v4; // r15
  unsigned int v5; // edi
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rcx
  KIRQL v10; // r14
  BOOLEAN AddressingReset[4]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int i; // [rsp+44h] [rbp-55h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-49h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_qq(0x51u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  v7 = (*(_DWORD *)(v1 + 124) & 0x80000) == 0;
  v4 = v3;
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1864) = 726455;
  if ( !v7 )
  {
    v5 = -2147418111;
LABEL_30:
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
    goto LABEL_31;
  }
  v6 = *(_DWORD *)(v1 + 120);
  v5 = -1073676275;
  if ( (v6 & 0x40000) != 0 )
    v7 = (v6 & 0x200000) == 0;
  else
    v7 = (unsigned int)ndisMQueueWorkItem(v1, 3, a1) == 0;
  if ( !v7 )
    goto LABEL_30;
  v5 = -2147418111;
  if ( *(_BYTE *)(v1 + 32) >= 6u || !*(_QWORD *)(*(_QWORD *)(v1 + 3792) + 192LL) )
    goto LABEL_30;
  ndisMReferenceOpen(a1, 8u);
  v8 = *(_DWORD *)(v1 + 120);
  *(_QWORD *)(v1 + 392) = a1;
  if ( (v8 & 0x40000) == 0 )
  {
    *(_DWORD *)(v1 + 120) = v8 | 0x100000;
    if ( !*(_BYTE *)(v1 + 89) )
    {
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1868) = 726602;
      *(_QWORD *)(v1 + 1872) = KeGetCurrentThread();
      ndisMProcessDeferred(v1);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1868) = 0;
      *(_QWORD *)(v1 + 1872) = 0LL;
    }
    v5 = 259;
    goto LABEL_30;
  }
  AddressingReset[0] = 0;
  *(_DWORD *)(v1 + 120) = v8 | 0x280000;
  ndisMSwapOpenHandlers(v1, 1u);
  while ( *(_DWORD *)(v1 + 1824) )
  {
    *(_QWORD *)(v1 + 520) = 0LL;
    *(_DWORD *)(v1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
    for ( i = 0; i < 0x32; ++i )
      ;
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v1 + 1864) = 726527;
  }
  if ( *(_DWORD *)(v1 + 3900) != 1 )
  {
    *(_BYTE *)(v1 + 930) &= ~1u;
    v5 = -1073741637;
    *(_DWORD *)(v1 + 120) &= 0xFFD7FFFF;
    *(_DWORD *)(v1 + 540) = -1073741637;
    *(_QWORD *)(v1 + 392) = 0LL;
    ndisMDereferenceOpenLocked(a1, 8u);
    goto LABEL_30;
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v4);
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = (void *)v1;
  StatusIndication.StatusCode = 1073807364;
  StatusIndication.StatusBuffer = 0LL;
  StatusIndication.StatusBufferSize = 0;
  NdisMIndicateStatusEx((NDIS_HANDLE)v1, &StatusIndication);
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_q(0x52u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v1);
  if ( (byte_1C00A2081 & 4) != 0 )
    McTemplateK0jqxq(
      v9,
      &CallMiniportReset,
      (const GUID *)(v1 + 4040),
      v1 + 4040,
      *(_DWORD *)(v1 + 4088),
      *(_QWORD *)(v1 + 4056),
      42);
  v10 = KfRaiseIrql(2u);
  v5 = (*(__int64 (__fastcall **)(BOOLEAN *, _QWORD))(*(_QWORD *)(v1 + 3792) + 192LL))(
         AddressingReset,
         *(_QWORD *)(v1 + 24));
  if ( v10 != 2 )
    KeLowerIrql(v10);
  if ( v5 != 259 )
  {
    NdisMResetComplete((NDIS_HANDLE)v1, v5, AddressingReset[0]);
    v5 = 259;
  }
LABEL_31:
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_qq(0x53u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v1);
  return v5;
}

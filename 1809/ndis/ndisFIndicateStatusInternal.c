/*
 * XREFs of ndisFIndicateStatusInternal @ 0x1C001817C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateInitialStateToFilter @ 0x1C0017CAC (ndisIndicateInitialStateToFilter.c)
 *     ndisFIndicateStatusWrapper @ 0x1C0018160 (ndisFIndicateStatusWrapper.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisSwapFilterHandlersForMediaDisconnect @ 0x1C0011174 (ndisSwapFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateOffloadChange @ 0x1C0013F18 (ndisFIndicateOffloadChange.c)
 *     ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001651C (ndisRestoreFilterHandlersForMediaDisconnect.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00186F0 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001889C (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019B2C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMAllocateMiniportOffload @ 0x1C001E334 (ndisMAllocateMiniportOffload.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0042EBC (ndisIfUpdateCurrentMacAddress.c)
 *     ndisIfUpdateL2MtuSize @ 0x1C0042F74 (ndisIfUpdateL2MtuSize.c)
 *     ndisFilterIndicatePMCapabilities @ 0x1C004A1D4 (ndisFilterIndicatePMCapabilities.c)
 *     ndisFilterIndicatePMOffloadReject @ 0x1C004A27C (ndisFilterIndicatePMOffloadReject.c)
 *     ndisFilterIndicateWoLPatternReject @ 0x1C004A2D0 (ndisFilterIndicateWoLPatternReject.c)
 *     ndisFIndicateTimestampChange @ 0x1C005B648 (ndisFIndicateTimestampChange.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 */

void __fastcall ndisFIndicateStatusInternal(__int64 a1, __int64 a2)
{
  BOOL v2; // ebx
  int v3; // r14d
  unsigned int v4; // r12d
  __int64 v5; // r15
  _QWORD *v7; // rdi
  int v9; // eax
  bool v10; // al
  KIRQL v11; // dl
  __int64 v12; // r8
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v14; // rbx
  KSPIN_LOCK *v15; // r14
  KIRQL v16; // al
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rdi
  void (__fastcall *v20)(_QWORD, __int64, __int64); // rax
  unsigned int v21; // r12d
  KIRQL v22; // dl
  unsigned int v23; // eax
  char v24; // bl
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  char v31; // al
  char v32; // al
  bool v33; // zf
  __int64 v34; // r8
  KIRQL NewIrql[4]; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v36; // [rsp+24h] [rbp-4Ch]
  BOOL v37; // [rsp+28h] [rbp-48h]
  unsigned int i; // [rsp+2Ch] [rbp-44h]
  int v39; // [rsp+30h] [rbp-40h]
  _QWORD v40[5]; // [rsp+38h] [rbp-38h] BYREF

  LOBYTE(v2) = 0;
  v4 = *(_DWORD *)(a2 + 20);
  LOBYTE(v3) = 0;
  v5 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(a2 + 48);
  v36 = *(_DWORD *)(a2 + 56);
  v37 = v2;
  v39 = v3;
  if ( v4 == 1073873072 )
  {
    if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) != DriverEntry )
      return;
    ndisIfUpdateCurrentMacAddress(*(_QWORD *)(a1 + 704), v7);
  }
  if ( v4 != 1073873073 )
    goto LABEL_3;
  if ( *(NTSTATUS (__stdcall **)(_DRIVER_OBJECT *, PUNICODE_STRING))(a2 + 8) == DriverEntry )
  {
    ndisIfUpdateL2MtuSize(*(_QWORD *)(a1 + 704), **(unsigned int **)(a2 + 48));
LABEL_3:
    memset(v40, 0, sizeof(v40));
    LODWORD(v40[1]) = *(_DWORD *)(a1 + 392);
    v40[2] = *(_QWORD *)(a1 + 400);
    v40[3] = *(_QWORD *)(a1 + 408);
    v40[4] = *(_QWORD *)(a1 + 416);
    LODWORD(v40[0]) = 2621824;
    NewIrql[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
    *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
    v9 = HIDWORD(v40[0]);
    if ( v4 == 1073807372 )
      v9 = 2;
    *(_DWORD *)(a1 + 160) = 2100484;
    HIDWORD(v40[0]) = v9;
    v10 = v4 == 1073807372;
    if ( v4 == 1073807371 )
    {
      HIDWORD(v40[0]) = 1;
      v10 = 1;
    }
    if ( v10 )
    {
      *(_DWORD *)(a2 + 20) = 1073807383;
      *(_QWORD *)(a2 + 48) = v40;
      v7 = v40;
      v4 = 1073807383;
      *(_DWORD *)(a2 + 56) = 40;
      v36 = 40;
    }
    if ( v4 == 1073807383 )
    {
      v25 = *(_DWORD *)(a1 + 388);
      v26 = *((_DWORD *)v7 + 1);
      if ( v25 != v26 )
      {
        if ( v26 == 1 )
        {
          LOBYTE(v3) = 1;
          v39 = v3;
        }
        else
        {
          v37 = v25 == 1;
        }
      }
      *(_DWORD *)(a1 + 388) = v26;
      *(_DWORD *)(a1 + 392) = *((_DWORD *)v7 + 2);
      *(_QWORD *)(a1 + 400) = v7[2];
      *(_QWORD *)(a1 + 408) = v7[3];
      *(_DWORD *)(a1 + 416) = *((_DWORD *)v7 + 8);
      *(_DWORD *)(a1 + 420) = *((_DWORD *)v7 + 9);
      *(_DWORD *)(*(_QWORD *)(a1 + 704) + 1220LL) = v26;
      *(_DWORD *)(*(_QWORD *)(a1 + 704) + 1224LL) = *(_DWORD *)(a1 + 392);
      *(_QWORD *)(*(_QWORD *)(a1 + 704) + 1208LL) = *(_QWORD *)(a1 + 408);
      *(_QWORD *)(*(_QWORD *)(a1 + 704) + 1200LL) = *(_QWORD *)(a1 + 400);
    }
    v11 = NewIrql[0];
    *(_QWORD *)(a1 + 152) = 0LL;
    *(_DWORD *)(a1 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v11);
    LOBYTE(v12) = 8;
    HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef(v5, a1, v12);
    v14 = HigherFilterWithPnpRef;
    if ( HigherFilterWithPnpRef )
    {
      v15 = (KSPIN_LOCK *)(HigherFilterWithPnpRef + 144);
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(HigherFilterWithPnpRef + 144));
      *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
      NewIrql[0] = v16;
      while ( 1 )
      {
        *(_DWORD *)(v14 + 160) = 2100553;
        v17 = *(_DWORD *)(v14 + 56);
        *(_QWORD *)(v14 + 152) = 0LL;
        *(_DWORD *)(v14 + 160) = 0;
        if ( (v17 & 0x2000) == 0 )
          break;
        KeReleaseSpinLock(v15, NewIrql[0]);
        if ( KeGetCurrentIrql() == 2 )
        {
          for ( i = 0; i < 0x32; ++i )
            ;
        }
        else
        {
          NdisMSleep(0x32u);
        }
        NewIrql[0] = KeAcquireSpinLockRaiseToDpc(v15);
        *(_QWORD *)(v14 + 152) = KeGetCurrentThread();
      }
      *(_DWORD *)(v14 + 56) = v17 | 0x2000;
      KeReleaseSpinLockFromDpcLevel(v15);
      if ( v4 == 1073807383 )
      {
        if ( !v7 )
          goto LABEL_21;
        v18 = v36;
        if ( v36 < 0x28 )
          goto LABEL_21;
        v29 = *(_DWORD *)(v14 + 352);
        v30 = *((_DWORD *)v7 + 1);
        if ( v29 != v30 )
        {
          if ( v30 == 1 )
          {
            LOBYTE(v39) = 1;
          }
          else
          {
            v31 = v37;
            if ( v29 == 1 )
              v31 = 1;
            LOBYTE(v37) = v31;
          }
        }
        *(_DWORD *)(v14 + 352) = v30;
        *(_DWORD *)(v14 + 356) = *((_DWORD *)v7 + 2);
        *(_QWORD *)(v14 + 368) = v7[3];
        *(_QWORD *)(v14 + 360) = v7[2];
        *(_DWORD *)(v14 + 376) = *((_DWORD *)v7 + 8);
        *(_DWORD *)(v14 + 380) = *((_DWORD *)v7 + 9);
      }
      else
      {
        v18 = v36;
      }
      if ( v4 == 1073872902 )
      {
        v32 = ndisFIndicateOffloadChange(v14, v7, v18);
      }
      else
      {
        if ( v4 == 1073938515 )
          ndisFilterIndicatePMCapabilities(v14, a2);
        if ( v4 == 1073938513 )
        {
          v32 = ndisFilterIndicateWoLPatternReject(v14, a2);
        }
        else if ( v4 == 1073938514 )
        {
          v32 = ndisFilterIndicatePMOffloadReject(v14, a2);
        }
        else
        {
          if ( v4 - 1074073600 > 1 )
            goto LABEL_21;
          v32 = ndisFIndicateTimestampChange(v14, v4, v7, v36);
        }
      }
      if ( !v32 )
      {
LABEL_30:
        KeAcquireSpinLockAtDpcLevel(v15);
        v22 = NewIrql[0];
        *(_DWORD *)(v14 + 56) &= ~0x2000u;
        *(_QWORD *)(v14 + 152) = 0LL;
        *(_DWORD *)(v14 + 160) = 0;
        KeReleaseSpinLock(v15, v22);
        ndisDereferenceRef((PKSPIN_LOCK)(v14 + 320));
        return;
      }
LABEL_21:
      v19 = *(_QWORD *)(v14 + 16);
      v20 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v19 + 288);
      if ( v20 )
      {
        v21 = *(_DWORD *)(a2 + 20);
        if ( (unsigned __int8)byte_1C00A0267 >= 4u )
        {
          WPP_SF_qD(127LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v14, v21);
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(v19 + 288))(*(_QWORD *)(v14 + 24), a2, v34);
        }
        else
        {
          v20(*(_QWORD *)(v14 + 24), a2, v18);
        }
        if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          WPP_SF_qD(128LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v14, v21);
      }
      else
      {
        ndisFIndicateStatusInternal(v14, a2);
      }
      if ( v37 )
        ndisSwapFilterHandlersForMediaDisconnect(v5, a1, v14);
      if ( (_BYTE)v39 )
        ndisRestoreFilterHandlersForMediaDisconnect(v5, a1, v14);
      goto LABEL_30;
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrql);
    v23 = v36;
    if ( v4 == 1073807383 && v7 && v36 >= 0x28 )
    {
      v27 = *(_DWORD *)(v5 + 480);
      v28 = *((_DWORD *)v7 + 1);
      if ( v27 == v28 )
      {
        v23 = v36;
      }
      else
      {
        v33 = v27 == 1;
        v23 = v36;
        if ( v33 )
        {
          v24 = 1;
LABEL_34:
          *(_DWORD *)(a2 + 24) |= 2u;
          if ( v4 != 1073872902 )
          {
LABEL_35:
            ndisIndicateStatusInternal(v5, a2);
            if ( v24 )
              ndisSwapFilterHandlersForMediaDisconnect(v5, a1, 0LL);
            if ( (_BYTE)v3 )
              ndisRestoreFilterHandlersForMediaDisconnect(v5, a1, 0LL);
            goto LABEL_39;
          }
          if ( v23 >= 0x70 && *(_BYTE *)v7 == 0xA7 && *((_WORD *)v7 + 1) >= 0x70u && *((_BYTE *)v7 + 1) )
          {
            if ( *(_QWORD *)(v5 + 4128) )
              goto LABEL_35;
            ndisMAllocateMiniportOffload(v5, 1LL);
          }
LABEL_39:
          ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v5, NewIrql[0]);
          return;
        }
        if ( v28 == 1 )
          LOBYTE(v3) = 1;
      }
    }
    v24 = v37;
    goto LABEL_34;
  }
}

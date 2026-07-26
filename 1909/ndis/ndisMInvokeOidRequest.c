/*
 * XREFs of ndisMInvokeOidRequest @ 0x1C00FB8A0
 * Callers:
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     ndisMSendPmParametersOidForSuspend @ 0x1C00B5BC8 (ndisMSendPmParametersOidForSuspend.c)
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00B68B0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisAddWoLDirectedMAC @ 0x1C01154EC (ndisAddWoLDirectedMAC.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C0115860 (ndisRemoveWoLDirectedMAC.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C01177A4 (ndisMInvokeBlockingOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     ndisOidCloneForCompatibility @ 0x1C0008630 (ndisOidCloneForCompatibility.c)
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C000883C (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0009B0C (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C0009B60 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(char *a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r13
  _NDIS_OID_REQUEST *v4; // rsi
  NDIS_STATUS v6; // eax
  int v7; // edx
  int v8; // r8d
  PNDIS_OID_REQUEST v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct NDISWATCHDOG__ *v13; // r14
  struct NDISWATCHDOG__ *v14; // rax
  __int64 v15; // r12
  int v16; // ebx
  struct NDISWATCHDOG__ *v17; // rbp
  char v18; // al
  char *v19; // rcx
  BOOLEAN v20; // al
  unsigned int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // edx
  int v27; // r8d
  unsigned __int16 v28; // r9
  ULONG v30; // eax
  unsigned int v31; // eax
  ULONG SecondsRemaining; // [rsp+90h] [rbp+8h] BYREF
  PNDIS_OID_REQUEST v33; // [rsp+98h] [rbp+10h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+18h]

  v2 = *((_QWORD *)a1 + 470);
  v3 = *(unsigned int *)(a2 + 32);
  v34 = v2;
  v33 = 0LL;
  v4 = (_NDIS_OID_REQUEST *)a2;
  v6 = ndisOidCloneForCompatibility(a1, a2, 1, &v33);
  v9 = v33;
  v10 = v6;
  if ( v6 )
    goto LABEL_25;
  v11 = *((_QWORD *)a1 + 470);
  if ( v33 )
    v4 = v33;
  v12 = *(_QWORD *)(v11 + 352);
  if ( !v12 || *(_QWORD *)(v12 + 64) == *(_QWORD *)(v11 + 176) )
    v13 = (struct NDISWATCHDOG__ *)*((_QWORD *)a1 + 681);
  else
    v13 = (struct NDISWATCHDOG__ *)*((_QWORD *)a1 + 682);
  if ( v13 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v14 = WatchdogFromHandle(v13);
    KeWaitForSingleObject(v14 + 42, Executive, 0, 0, 0LL);
  }
  v15 = *(_QWORD *)(v2 + 176);
  v16 = 35000;
  if ( v13 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v17 = WatchdogFromHandle(v13);
    *((_DWORD *)v17 + 50) = 846677070;
    v18 = *a1;
    if ( *a1 == 17 )
    {
      v19 = a1;
    }
    else if ( v18 == 5 )
    {
      v19 = (char *)*((_QWORD *)a1 + 4);
    }
    else
    {
      if ( v18 != 18 )
        goto LABEL_15;
      v19 = (char *)*((_QWORD *)a1 + 2);
    }
    if ( !v19 )
    {
LABEL_15:
      *((_DWORD *)v17 + 51) = v16;
      *((_QWORD *)v17 + 26) = &ndisGlobalTriageBlock;
      *((_QWORD *)v17 + 27) = a1;
      *((_QWORD *)v17 + 28) = MEMORY[0xFFFFF78000000008];
      *((_QWORD *)v17 + 29) = KeGetCurrentThread();
      v21 = g_ndisWatchdogSequenceNumber;
      *((_QWORD *)v17 + 30) = v3;
      *((_QWORD *)v17 + 32) = v15;
      g_ndisWatchdogSequenceNumber = v21 + 1;
      *((_DWORD *)v17 + 41) = v21 + 1;
      v22 = -10000LL * *((unsigned int *)v17 + 51);
      *((_DWORD *)v17 + 48) = 35;
      *((_DWORD *)v17 + 40) = 1;
      KeClearEvent((PRKEVENT)v17 + 7);
      KeSetTimerEx((PKTIMER)v17 + 1, (LARGE_INTEGER)v22, 0, (PKDPC)v17);
      v9 = v33;
      goto LABEL_16;
    }
    if ( (*((_DWORD *)v19 + 30) & 0x100) != 0 )
    {
      v20 = 0;
      goto LABEL_14;
    }
    v20 = PoQueryWatchdogTime(*((PDEVICE_OBJECT *)v19 + 479), &SecondsRemaining);
    if ( !v20 )
    {
LABEL_14:
      *((_BYTE *)v17 + 248) = v20;
      goto LABEL_15;
    }
    v30 = SecondsRemaining;
    if ( SecondsRemaining < 3 )
      v30 = 3;
    v31 = 1000 * v30 - 3000;
    if ( v31 < 0xBB8 )
    {
      v31 = 3000;
    }
    else if ( v31 >= 0x88B8 )
    {
LABEL_33:
      v20 = 1;
      goto LABEL_14;
    }
    v16 = v31;
    goto LABEL_33;
  }
LABEL_16:
  v23 = *((_QWORD *)a1 + 470);
  v24 = *(_QWORD *)(v23 + 352);
  if ( !v24 || *(_QWORD *)(v24 + 64) == *(_QWORD *)(v23 + 176) )
  {
    if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          v8,
          239,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1,
          v3,
          (char)v4);
      }
      v25 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
              (void *)*((_QWORD *)a1 + 3),
              v4,
              a1,
              (void *)*((_QWORD *)a1 + 620),
              *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v34 + 176));
      v10 = v25;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v28 = 240;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 4;
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          v8,
          241,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1,
          v3,
          (char)v4);
      }
      v25 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_OID_REQUEST *))(v34 + 176))(*((_QWORD *)a1 + 3), v4);
      v10 = v25;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_23;
      v28 = 242;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qDq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        v8,
        237,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1,
        v3,
        (char)v4);
    }
    v25 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_OID_REQUEST *))(v34 + 176))(*((_QWORD *)a1 + 3), v4);
    v10 = v25;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v28 = 238;
  }
  WPP_RECORDER_SF_qDqd(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v26,
    v27,
    v28,
    (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
    (char)a1,
    v3,
    (char)v4,
    v25);
LABEL_23:
  if ( v10 == 259 )
    return v10;
  ndisDisarmWatchdogAsync(v13);
LABEL_25:
  if ( v10 != 259 && v9 )
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v9, 1, 0LL);
  return v10;
}

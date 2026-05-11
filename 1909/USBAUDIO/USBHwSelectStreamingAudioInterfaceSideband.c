/*
 * XREFs of USBHwSelectStreamingAudioInterfaceSideband @ 0x1C002AA48
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C002AF60 (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     USBD_UrbFree @ 0x1C000FA30 (USBD_UrbFree.c)
 *     USBD_CreateHandle @ 0x1C0010034 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C0010478 (USBD_CloseHandle.c)
 *     USBD_GetEndpointOffloadInformationForIndex @ 0x1C00104F8 (USBD_GetEndpointOffloadInformationForIndex.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C001052C (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     memmove @ 0x1C0012500 (memmove.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0029CE0 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwFreePipes @ 0x1C002B2E8 (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C002B320 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterfaceSideband(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  USBD_HANDLE v3; // r12
  unsigned int v4; // edi
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // r15
  _QWORD *PoolWithTag; // rax
  ULONG v11; // r8d
  __int64 v12; // r13
  int v13; // ebx
  __int64 v14; // rdx
  PURB v15; // rdx
  int v17; // eax
  __int64 v18; // rdx
  unsigned __int16 v19; // r9
  unsigned int *EndpointOffloadInformationForIndex; // rax
  unsigned int v21; // edx
  __int16 v22; // r9
  unsigned int *v23; // rax
  unsigned int v24; // edx
  __int16 v25; // r9
  PURB v26; // rsi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  unsigned int *v32; // r15
  unsigned __int16 v33; // r9
  PVOID v34; // rax
  __int64 v35; // rdx
  unsigned __int16 v36; // r9
  unsigned int *v37; // rax
  unsigned int *v38; // r14
  PVOID v39; // rax
  unsigned int v40; // edx
  PVOID v41; // rax
  __int64 v42; // [rsp+30h] [rbp-28h]
  __int64 v43; // [rsp+40h] [rbp-18h]
  PURB Urb; // [rsp+A8h] [rbp+50h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+B0h] [rbp+58h] BYREF
  PVOID P; // [rsp+B8h] [rbp+60h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0LL;
  v4 = *(unsigned __int8 *)(a2 + 4);
  USBDHandle = 0LL;
  v43 = v2;
  v6 = *(_QWORD *)(v2 + 16);
  v7 = *(_QWORD *)(v2 + 144);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v8 + 72);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x61627845u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
        9u,
        0x1Du,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v12 = a1;
    v13 = -1073741670;
    goto LABEL_5;
  }
  PoolWithTag[1] = 0LL;
  *PoolWithTag = a2;
  v17 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(v6 + 24), *(PDEVICE_OBJECT *)(v6 + 40), v11, 0x39627845u, &USBDHandle);
  v3 = USBDHandle;
  v13 = v17;
  if ( v17 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_20:
      v12 = a1;
      goto LABEL_21;
    }
    v19 = 30;
LABEL_19:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      9u,
      v19,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v17);
    goto LABEL_20;
  }
  v17 = USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
          USBDHandle,
          *(_QWORD *)(v9 + 24),
          P,
          v4,
          (char **)&Urb);
  v13 = v17;
  if ( v17 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v19 = 31;
    goto LABEL_19;
  }
  EndpointOffloadInformationForIndex = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  *((_WORD *)EndpointOffloadInformationForIndex + 2) = v22;
  if ( *(_DWORD *)(v8 + 852) == 2 )
    *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, v21) + 6) = *(_DWORD *)(v7 + 224);
  if ( v4 > 1 )
  {
    if ( *(_QWORD *)(v7 + 176) )
    {
      v23 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
      *((_WORD *)v23 + 2) = v25;
      if ( *(_DWORD *)(v8 + 852) == 2 )
        *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, v24) + 6) = *(_DWORD *)(v7 + 228);
    }
  }
  v26 = Urb;
  v27 = *(_DWORD *)(v7 + 216) & 0xF000;
  if ( v27 )
  {
    if ( v27 == 4096 )
    {
      LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 3872;
      goto LABEL_37;
    }
    if ( v27 != 0x2000 )
      goto LABEL_37;
  }
  LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 500 * *(_DWORD *)(v7 + 220);
  if ( !*(_QWORD *)(v7 + 176) )
    HIDWORD(v26->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) |= 8u;
LABEL_37:
  v28 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v6 + 40), Urb, v3);
  v12 = a1;
  v13 = v28;
  if ( Urb->UrbHeader.Status < 0 )
    v13 = -1073741808;
  if ( v13 < 0 )
    goto LABEL_5;
  v29 = *(_QWORD *)(v43 + 152);
  USBHwFreeOffloadInformation(a1);
  v30 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  v32 = v30;
  if ( !v30 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_44:
      v13 = -1073741437;
      goto LABEL_5;
    }
    v33 = v31 + 32;
LABEL_43:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v31,
      9u,
      v33,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    goto LABEL_44;
  }
  v34 = ExAllocatePoolWithTag((POOL_TYPE)512, *v30, 0x62627845u);
  *(_QWORD *)(v29 + 80) = v34;
  if ( v34 )
  {
    memmove(v34, v32, *v32);
    if ( *(_QWORD *)(v7 + 176) )
    {
      v37 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
      v38 = v37;
      if ( !v37 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_44;
        v33 = v31 + 33;
        goto LABEL_43;
      }
      v39 = ExAllocatePoolWithTag((POOL_TYPE)512, *v37, 0x63627845u);
      *(_QWORD *)(v29 + 88) = v39;
      if ( !v39 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_50;
        v36 = 35;
        goto LABEL_49;
      }
      memmove(v39, v38, *v38);
    }
    v40 = (unsigned int)v26->UrbOSFeatureDescriptorRequest.hca.Reserved8[0];
    *(_DWORD *)(v29 + 56) = v40;
    *(_QWORD *)(v29 + 64) = v26->UrbControlTransfer.hca.Reserved8[2];
    if ( v40 > 0x14 )
    {
      v13 = -1073741438;
    }
    else
    {
      USBHwFreePipes(a1);
      v41 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * *(unsigned int *)(v29 + 56), 0x41627845u);
      *(_QWORD *)(v29 + 72) = v41;
      if ( !v41 )
        v13 = -1073741670;
    }
    if ( v13 < 0 )
      goto LABEL_5;
    memmove(
      *(void **)(v29 + 72),
      &v26->UrbOSFeatureDescriptorRequest.hca.Reserved8[1],
      24LL * *(unsigned int *)(v29 + 56));
LABEL_21:
    if ( v13 >= 0 )
      goto LABEL_7;
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = 33;
LABEL_49:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v35,
      9u,
      v36,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
  }
LABEL_50:
  v13 = -1073741670;
LABEL_5:
  USBHwFreeOffloadInformation(v12);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      0x24u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v12,
      v13);
LABEL_7:
  if ( P )
    ExFreePool(P);
  v15 = Urb;
  if ( Urb )
    USBD_UrbFree(v3, Urb);
  if ( v3 )
    USBD_CloseHandle(v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v42) = v13;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v15,
      9u,
      0x25u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v12,
      v42);
  }
  return (unsigned int)v13;
}

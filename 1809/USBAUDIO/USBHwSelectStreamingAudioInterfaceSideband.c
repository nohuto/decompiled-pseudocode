/*
 * XREFs of USBHwSelectStreamingAudioInterfaceSideband @ 0x1C00297EC
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C0029C54 (USBHwSelectStreamingAudioInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 *     USBD_UrbFree @ 0x1C000E60C (USBD_UrbFree.c)
 *     USBD_CreateHandle @ 0x1C000EBF8 (USBD_CreateHandle.c)
 *     USBD_CloseHandle @ 0x1C000F034 (USBD_CloseHandle.c)
 *     USBD_GetEndpointOffloadInformationForIndex @ 0x1C000F0B4 (USBD_GetEndpointOffloadInformationForIndex.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C000F0E8 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     memmove @ 0x1C0011080 (memmove.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0028AF0 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwFreePipes @ 0x1C0029F9C (USBHwFreePipes.c)
 *     USBHwFreeOffloadInformation @ 0x1C0029FD4 (USBHwFreeOffloadInformation.c)
 */

__int64 __fastcall USBHwSelectStreamingAudioInterfaceSideband(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  USBD_HANDLE v4; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // r15
  _QWORD *PoolWithTag; // rax
  __int64 v10; // rdx
  ULONG v11; // r8d
  int v12; // ebx
  __int64 v13; // rdx
  PURB v14; // rdx
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int16 v18; // r9
  unsigned int *EndpointOffloadInformationForIndex; // rax
  unsigned int v20; // edx
  __int16 v21; // r9
  unsigned int *v22; // rax
  unsigned int v23; // edx
  __int16 v24; // r9
  PURB v25; // rsi
  int v26; // eax
  __int64 v27; // rdi
  unsigned int *v28; // rax
  __int64 v29; // rdx
  unsigned int *v30; // r15
  unsigned __int16 v31; // r9
  PVOID v32; // rax
  __int64 v33; // rdx
  unsigned __int16 v34; // r9
  unsigned int *v35; // rax
  unsigned int *v36; // r14
  PVOID v37; // rax
  unsigned int v38; // edx
  PVOID v39; // rax
  __int64 v40; // [rsp+30h] [rbp-28h]
  _QWORD *v41; // [rsp+40h] [rbp-18h]
  PURB Urb; // [rsp+A0h] [rbp+48h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+A8h] [rbp+50h] BYREF
  __int64 v44; // [rsp+B0h] [rbp+58h]
  PVOID P; // [rsp+B8h] [rbp+60h]

  v2 = *(unsigned __int8 *)(a2 + 4);
  v4 = 0LL;
  v41 = *(_QWORD **)(a1 + 16);
  USBDHandle = 0LL;
  v6 = v41[18];
  v44 = v41[2];
  v7 = *(_QWORD *)(v44 + 16);
  v8 = *(_QWORD *)(v7 + 72);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x61627845u);
  P = PoolWithTag;
  if ( !PoolWithTag )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x1Du,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v12 = -1073741670;
LABEL_3:
    USBHwFreeOffloadInformation(a1);
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x24u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      a1,
      v12);
    goto LABEL_4;
  }
  PoolWithTag[1] = 0LL;
  *PoolWithTag = a2;
  v16 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(v44 + 24), *(PDEVICE_OBJECT *)(v44 + 40), v11, 0x39627845u, &USBDHandle);
  v4 = USBDHandle;
  v12 = v16;
  if ( v16 < 0 )
  {
    v18 = 30;
LABEL_13:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v17,
      9u,
      v18,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v16);
    goto LABEL_49;
  }
  v16 = USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
          USBDHandle,
          *(_QWORD *)(v8 + 24),
          P,
          v2,
          (char **)&Urb);
  v12 = v16;
  if ( v16 < 0 )
  {
    v18 = 31;
    goto LABEL_13;
  }
  EndpointOffloadInformationForIndex = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  *((_WORD *)EndpointOffloadInformationForIndex + 2) = v21;
  if ( *(_DWORD *)(v7 + 852) == 2 )
    *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, v20) + 6) = *(_DWORD *)(v6 + 224);
  if ( v2 > 1 )
  {
    if ( *(_QWORD *)(v6 + 176) )
    {
      v22 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
      *((_WORD *)v22 + 2) = v24;
      if ( *(_DWORD *)(v7 + 852) == 2 )
        *(unsigned int *)((char *)USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, v23) + 6) = *(_DWORD *)(v6 + 228);
    }
  }
  v25 = Urb;
  v26 = *(_DWORD *)(v6 + 216) & 0xF000;
  if ( v26 )
  {
    if ( v26 == 4096 )
    {
      LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 3872;
      goto LABEL_27;
    }
    if ( v26 != 0x2000 )
      goto LABEL_27;
  }
  LODWORD(Urb->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) = 500 * *(_DWORD *)(v6 + 220);
  if ( !*(_QWORD *)(v6 + 176) )
    HIDWORD(v25->UrbOSFeatureDescriptorRequest.hca.Reserved8[3]) |= 8u;
LABEL_27:
  v12 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(v44 + 40), Urb, v4);
  if ( Urb->UrbHeader.Status < 0 )
    v12 = -1073741808;
  if ( v12 < 0 )
    goto LABEL_3;
  v27 = v41[19];
  USBHwFreeOffloadInformation(a1);
  v28 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 0);
  v30 = v28;
  if ( !v28 )
  {
    v31 = v29 + 32;
LABEL_32:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v29,
      9u,
      v31,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v12 = -1073741437;
    goto LABEL_3;
  }
  v32 = ExAllocatePoolWithTag((POOL_TYPE)512, *v28, 0x62627845u);
  *(_QWORD *)(v27 + 80) = v32;
  if ( !v32 )
  {
    v34 = 33;
LABEL_36:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v33,
      9u,
      v34,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v12 = -1073741670;
    goto LABEL_3;
  }
  memmove(v32, v30, *v30);
  if ( *(_QWORD *)(v6 + 176) )
  {
    v35 = USBD_GetEndpointOffloadInformationForIndex((__int64)Urb, 1u);
    v36 = v35;
    if ( !v35 )
    {
      v31 = v29 + 33;
      goto LABEL_32;
    }
    v37 = ExAllocatePoolWithTag((POOL_TYPE)512, *v35, 0x63627845u);
    *(_QWORD *)(v27 + 88) = v37;
    if ( !v37 )
    {
      v34 = 35;
      goto LABEL_36;
    }
    memmove(v37, v36, *v36);
  }
  v38 = (unsigned int)v25->UrbOSFeatureDescriptorRequest.hca.Reserved8[0];
  *(_DWORD *)(v27 + 56) = v38;
  *(_QWORD *)(v27 + 64) = v25->UrbControlTransfer.hca.Reserved8[2];
  if ( v38 > 0x14 )
  {
    v12 = -1073741438;
  }
  else
  {
    USBHwFreePipes(a1);
    v39 = ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * *(unsigned int *)(v27 + 56), 0x41627845u);
    *(_QWORD *)(v27 + 72) = v39;
    if ( !v39 )
      v12 = -1073741670;
  }
  if ( v12 < 0 )
    goto LABEL_3;
  memmove(
    *(void **)(v27 + 72),
    &v25->UrbOSFeatureDescriptorRequest.hca.Reserved8[1],
    24LL * *(unsigned int *)(v27 + 56));
LABEL_49:
  if ( v12 < 0 )
    goto LABEL_3;
LABEL_4:
  if ( P )
    ExFreePool(P);
  v14 = Urb;
  if ( Urb )
    USBD_UrbFree(v4, Urb);
  if ( v4 )
    USBD_CloseHandle(v4);
  LODWORD(v40) = v12;
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v14,
    9u,
    0x25u,
    (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
    a1,
    v40);
  return (unsigned int)v12;
}

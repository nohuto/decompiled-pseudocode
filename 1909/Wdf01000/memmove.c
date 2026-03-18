/*
 * XREFs of memmove @ 0x1C001B400
 * Callers:
 *     imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0001010 (imp_WdfPdoRetrieveIdentificationDescription.c)
 *     imp_WdfRequestGetParameters @ 0x1C0001BC0 (imp_WdfRequestGetParameters.c)
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C000386C (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C0003900 (-CopyParameters@FxIoContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     FxIFR @ 0x1C00040B0 (FxIFR.c)
 *     imp_WdfRegistryQueryValue @ 0x1C0004330 (imp_WdfRegistryQueryValue.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0005000 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C000F694 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0018030 (-_PnpQueryId@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C00196F4 (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002FFE0 (imp_WdfDmaEnablerCreate.c)
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003A0EC (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     WppInitGlobalLoggerWdf @ 0x1C003B004 (WppInitGlobalLoggerWdf.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003C098 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C003C410 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C003C468 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003DD14 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FireEvent@FxWmiInstance@@QEAAJPEAXK@Z @ 0x1C003FC94 (-FireEvent@FxWmiInstance@@QEAAJPEAXK@Z.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C003FEC0 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0041DF0 (-_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z.c)
 *     imp_WdfDeviceAddQueryInterface @ 0x1C0042280 (imp_WdfDeviceAddQueryInterface.c)
 *     FxLibraryCommonRegisterClient @ 0x1C0042D08 (FxLibraryCommonRegisterClient.c)
 *     LibraryLogEvent @ 0x1C00433FC (LibraryLogEvent.c)
 *     imp_WdfDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C0045810 (imp_WdfDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     imp_WdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C0046290 (imp_WdfDeviceInitSetPnpPowerEventCallbacks.c)
 *     imp_WdfDeviceInitSetPowerPolicyEventCallbacks @ 0x1C0046400 (imp_WdfDeviceInitSetPowerPolicyEventCallbacks.c)
 *     imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback @ 0x1C004C6D0 (imp_WdfCxDeviceInitAssignWdmIrpPreprocessCallback.c)
 *     ?_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z @ 0x1C0054B4C (-_CopyPtrToPtr@IFxMemory@@KAJPEAX_KPEAU_WDFMEMORY_OFFSET@@012@Z.c)
 *     ??0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00552E8 (--0FxDriver@@QEAA@PEAU_DRIVER_OBJECT@@PEAU_WDF_DRIVER_CONFIG@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005565C (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 *     ?_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z @ 0x1C0055AA0 (-_InitializeTag@FxDriver@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DRIVER_CONFIG@@@Z.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C00604E0 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00608D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0061250 (imp_WdfRegistryQueryUnicodeString.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C0061EE0 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 *     ?FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z @ 0x1C00643E0 (-FxCopyMultiSz@@YAPEAGPEAGPEAUFxCollectionInternal@@@Z.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C0064474 (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C006458C (-FxDuplicateUnicodeStringToString@@YAPEAGPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfIoTargetOpen @ 0x1C0065F30 (imp_WdfIoTargetOpen.c)
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x1C0069844 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C006A364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00722F0 (-CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z.c)
 *     ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1C0072F18 (-GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C00736AC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0075758 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     imp_WdfInterruptCreate @ 0x1C007B2F0 (imp_WdfInterruptCreate.c)
 *     imp_WdfInterruptGetInfo @ 0x1C007B770 (imp_WdfInterruptGetInfo.c)
 *     ?Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C007C220 (-Initialize@FxPkgPdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C007CA50 (-_PnpQueryDeviceText@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00831C0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0083FD8 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0084258 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0084520 (-HandleQueryInterfaceForPowerThread@FxPkgPnp@@AEAAJPEAVFxIrp@@PEAE@Z.c)
 *     USBDInternal_BuildServicePath @ 0x1C009357C (USBDInternal_BuildServicePath.c)
 *     FxCacheBugCheckDriverInfo @ 0x1C0094958 (FxCacheBugCheckDriverInfo.c)
 *     FxPurgeBugCheckDriverInfo @ 0x1C0094BE8 (FxPurgeBugCheckDriverInfo.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00C84BC (SeSddlSecurityDescriptorFromSDDL.c)
 *     SepSddlAddAceToAcl @ 0x1C00C8580 (SepSddlAddAceToAcl.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00C9958 (CmRegUtilUcValueSetUcString.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto xmov40;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
xmov40:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto xcpy40;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
xcpy40:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}

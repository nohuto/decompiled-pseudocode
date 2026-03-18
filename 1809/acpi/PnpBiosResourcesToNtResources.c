/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C0099A10
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C00167A0 (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C004E3F0 (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C0096FB8 (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AC1E4 (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00AD8B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B2854 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0016B38 (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0016CC0 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C002F394 (WPP_RECORDER_SF_dqLD.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C005B960 (WPP_RECORDER_SF_d.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005C46C (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C009868C (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C00995E8 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0099744 (PnpiGrowResourceList.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0099FD0 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009A0DC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiClearAllocatedMemory @ 0x1C009A2EC (PnpiClearAllocatedMemory.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C009F444 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C009FE9C (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00AF5C0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00AF9C0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00AFD7C (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00AFDE0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00AFF3C (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00AFF98 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B0014 (PnpiBiosVendorToNtIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, _BYTE *a2, __int64 a3, unsigned int **a4)
{
  ULONG_PTR v4; // r13
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  PVOID v8; // r15
  unsigned int v9; // r12d
  unsigned __int8 v10; // r8
  int v11; // esi
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r9
  unsigned int v14; // edi
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  unsigned __int16 v18; // r9
  unsigned int v19; // edi
  unsigned int v20; // r13d
  unsigned int v21; // ebx
  int v22; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  char *v28; // rsi
  unsigned int i; // r14d
  __int64 result; // rax
  unsigned __int16 v31; // di
  unsigned __int16 v32; // si
  unsigned __int16 v33; // r12
  unsigned __int16 v34; // r13
  unsigned __int16 v35; // r9
  unsigned int v36; // eax
  unsigned __int8 v37; // di
  char v38; // si
  unsigned int v39; // edi
  __int64 v40; // r8
  unsigned __int8 v41; // r13
  int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  int v46; // eax
  __int64 v47; // rbx
  int v48; // eax
  int v49; // eax
  unsigned __int8 v50; // di
  unsigned __int8 v51; // di
  unsigned __int8 v52; // si
  unsigned __int8 v53; // al
  unsigned __int8 v54; // r8
  int DeviceExtension; // r12d
  unsigned __int16 v56; // r9
  int v57; // [rsp+28h] [rbp-49h]
  int v58; // [rsp+28h] [rbp-49h]
  int v59; // [rsp+28h] [rbp-49h]
  __int64 v60; // [rsp+30h] [rbp-41h]
  __int64 v61; // [rsp+30h] [rbp-41h]
  __int64 v62; // [rsp+38h] [rbp-39h]
  unsigned __int8 v63; // [rsp+58h] [rbp-19h]
  unsigned int v64; // [rsp+5Ch] [rbp-15h]
  char v65[4]; // [rsp+60h] [rbp-11h] BYREF
  int v66; // [rsp+64h] [rbp-Dh] BYREF
  int v67; // [rsp+68h] [rbp-9h]
  unsigned __int16 v68; // [rsp+6Ch] [rbp-5h]
  int v69; // [rsp+70h] [rbp-1h]
  unsigned int v70; // [rsp+74h] [rbp+3h]
  PVOID P[10]; // [rsp+78h] [rbp+7h] BYREF
  _BYTE *v73; // [rsp+E0h] [rbp+6Fh]
  unsigned int v74; // [rsp+E8h] [rbp+77h]

  v74 = a3;
  v73 = a2;
  v4 = (ULONG_PTR)a2;
  P[0] = 0LL;
  v66 = 0;
  v64 = 0;
  v5 = 0;
  v70 = 0;
  v65[0] = 0;
  v69 = 0;
  v67 = 0;
  v6 = PnpiGrowResourceList((const void **)P, &v66, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xDu,
      0x21u,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
      v6);
    return (unsigned int)v7;
  }
  v8 = P[0];
  v9 = 32;
  while ( 1 )
  {
    v10 = *(_BYTE *)v4;
    v63 = *(_BYTE *)v4;
    v11 = v5;
    if ( *(char *)v4 < 0 )
    {
      v12 = 35;
      v13 = *(_WORD *)(v4 + 1) + 3;
    }
    else
    {
      v12 = 34;
      v13 = (v10 & 7) + 1;
      v10 &= 0x78u;
      v63 = v10;
    }
    v68 = v13;
    v14 = v10;
    LODWORD(v62) = v13;
    LODWORD(v60) = v10;
    WPP_RECORDER_SF_LL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      v12,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
      v60,
      v62);
    if ( v63 == 120 )
      break;
    v16 = 1;
    ++v69;
    if ( v14 <= 0x84 )
    {
      switch ( v14 )
      {
        case 0x84u:
          v7 = 0;
          if ( a1 )
          {
            v49 = PnpiBiosVendorToNtIoDescriptor(a1, v4, v15, (_DWORD)v8, v64, v74, (__int64)v65);
            if ( v49 < 0 || !v65[0] )
              ++v67;
            LODWORD(v61) = v49;
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x35u,
              (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
              v61);
          }
          else
          {
            ++v67;
          }
          goto LABEL_17;
        case 0x20u:
          v31 = *(_WORD *)(v4 + 1);
          v32 = 0;
          v33 = 0;
          if ( v31 )
          {
            do
            {
              v34 = v31;
              if ( v7 < 0 )
                break;
              if ( (v31 & 1) != 0 )
                v7 = PnpiBiosIrqToIoDescriptor(v73, v32, (__int64)v8, v64, v33++);
              ++v32;
              v31 >>= 1;
            }
            while ( v34 >= 2u );
            v4 = (ULONG_PTR)v73;
          }
          v35 = 37;
LABEL_46:
          v36 = v33;
LABEL_47:
          LODWORD(v62) = v7;
          LODWORD(v60) = v36;
          WPP_RECORDER_SF_LL(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            v35,
            (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
            v60,
            v62);
          v9 = 32;
          goto LABEL_16;
        case 0x28u:
          v37 = *(_BYTE *)(v4 + 1);
          v38 = 0;
          v33 = 0;
          if ( v37 )
          {
            do
            {
              v41 = v37;
              if ( v7 < 0 )
                break;
              if ( (v37 & 1) != 0 )
              {
                LOBYTE(v16) = v38;
                v42 = PnpiBiosDmaToIoDescriptor((_DWORD)v73, v16, (_DWORD)v8, v64, v33);
                v16 = 1;
                v7 = v42;
                ++v33;
              }
              ++v38;
              v37 >>= 1;
            }
            while ( v41 >= 2u );
            v4 = (ULONG_PTR)v73;
          }
          v35 = 39;
          goto LABEL_46;
        case 0x30u:
          v39 = v70 + 1;
          v70 = v39;
          v64 = v39;
          LODWORD(v60) = v39;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            0x29u,
            (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
            v60);
          if ( v39 != v66 )
            goto LABEL_16;
          v48 = PnpiGrowResourceList((const void **)P, &v66, v40);
          v8 = P[0];
          break;
        case 0x38u:
          LODWORD(v60) = v64;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            0x2Au,
            (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
            v60);
          v64 = 0;
          goto LABEL_16;
        case 0x40u:
          v17 = PnpiBiosPortToIoDescriptor(v4, v8, v64, v74);
          v7 = v17;
          v18 = 43;
          goto LABEL_14;
        case 0x48u:
          v17 = PnpiBiosPortFixedToIoDescriptor(v4, v8, v64, v74);
          v7 = v17;
          v18 = 44;
          goto LABEL_14;
        case 0x50u:
          v17 = PnpiBiosDmaToIoDescriptorV3(v4, v8, v64);
          v7 = v17;
          v18 = 40;
          goto LABEL_14;
        case 0x70u:
          ++v67;
          v7 = 0;
          goto LABEL_17;
        case 0x81u:
LABEL_38:
          v17 = PnpiBiosMemoryToIoDescriptor((unsigned __int8 *)v4, (__int64)v8, v64);
          v7 = v17;
          v18 = 45;
          goto LABEL_14;
        default:
LABEL_77:
          LODWORD(v60) = v14;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xDu,
            0x36u,
            (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
            v60);
          v48 = 0;
          v69 = v11;
          break;
      }
LABEL_78:
      v7 = v48;
      goto LABEL_16;
    }
    if ( v14 <= 0x86 )
      goto LABEL_38;
    switch ( v14 )
    {
      case 0x87u:
        v17 = PnpiBiosAddressDoubleToIoDescriptor(v4);
        v7 = v17;
        v18 = 47;
        goto LABEL_14;
      case 0x88u:
        v17 = PnpiBiosAddressToIoDescriptor(v4);
        v7 = v17;
        v18 = 46;
        goto LABEL_14;
      case 0x89u:
        v51 = *(_BYTE *)(v4 + 4);
        v52 = 0;
        v53 = 4 * v51 + 5;
        if ( AcpiInterruptCombiningSupported != 1 || (v54 = *(_BYTE *)(v4 + 1) + 3, v54 <= v53) )
        {
          DeviceExtension = 0;
          if ( gAcpiHonorBiosPolarities && a1 )
            DeviceExtension = ACPIInternalGetDeviceExtension(a1);
          if ( v51 )
          {
            do
            {
              if ( v7 < 0 )
                break;
              LOBYTE(v15) = v52++;
              v7 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, v4, v15, (_DWORD)v8, v64);
            }
            while ( v52 < v51 );
          }
          v36 = v52;
          v35 = 38;
          goto LABEL_47;
        }
        if ( !a1 )
        {
          v7 = -1073741637;
LABEL_117:
          WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 0xDu, 0x38u, v57);
LABEL_36:
          PnpiClearAllocatedMemory(v8);
          return (unsigned int)v7;
        }
        v48 = PnpiBiosInterruptCombineToIoDescriptor(a1, v4, v54 - v53 - 1, (int)v8, v64, v74);
        goto LABEL_78;
      case 0x8Au:
        v17 = PnpiBiosAddressQuadToIoDescriptor(v4);
        v7 = v17;
        v18 = 48;
        goto LABEL_14;
      case 0x8Bu:
        v17 = PnpiBiosAddressExtendedToIoDescriptor(v4);
        v7 = v17;
        v18 = 49;
LABEL_14:
        LODWORD(v60) = v17;
LABEL_15:
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          v18,
          (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
          v60);
        goto LABEL_16;
    }
    if ( v14 != 140 )
    {
      if ( v14 == 142 )
      {
        if ( a1 )
          v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v4, v15, (_DWORD)v8, v64, v74);
        else
          v7 = -1073741637;
        v18 = 52;
        LODWORD(v60) = v7;
        goto LABEL_15;
      }
      goto LABEL_77;
    }
    v50 = 0;
    if ( a1 )
    {
      do
      {
        if ( v7 < 0 )
          break;
        v7 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v4, v15, (_DWORD)v8, v64, v74);
        ++v50;
      }
      while ( !v50 );
      v9 = 32;
    }
    else
    {
      v7 = -1073741637;
    }
    LODWORD(v62) = v7;
    LODWORD(v60) = v50;
    WPP_RECORDER_SF_LL(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0x33u,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
      v60,
      v62);
LABEL_16:
    if ( v7 < 0 )
      goto LABEL_117;
LABEL_17:
    v5 = v69;
    v4 += v68;
    v73 = (_BYTE *)v4;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xEu,
    0x24u,
    (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids);
  if ( !v69 || v67 == v69 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0x37u,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids);
    PnpiClearAllocatedMemory(v8);
    *a4 = 0LL;
    return (unsigned int)v7;
  }
  if ( *(_QWORD *)v8 )
    v19 = *(_DWORD *)(*(_QWORD *)v8 + 4LL);
  else
    v19 = 0;
  v20 = v70;
  v21 = 1;
  if ( v70 )
  {
    while ( 1 )
    {
      v43 = *((_QWORD *)v8 + v21);
      if ( !v43 )
        break;
      v44 = *(_DWORD *)(v43 + 4);
      if ( v44 )
      {
        v9 += 32 * (v19 + v44) + 8;
        WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x3Au, v58);
      }
      if ( ++v21 > v20 )
        goto LABEL_27;
    }
    LODWORD(v60) = v21;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xDu,
      0x39u,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
      v60);
  }
  else
  {
LABEL_27:
    if ( v20 )
      goto LABEL_31;
    if ( *(_QWORD *)v8 && (v22 = *(_DWORD *)(*(_QWORD *)v8 + 4LL)) != 0 )
    {
      v9 += 32 * v22 + 8;
LABEL_31:
      if ( v9 >= 0x48 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x52706341u);
        *a4 = PoolWithTag;
        LODWORD(v62) = v9;
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0xEu,
          0x3Du,
          (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
          PoolWithTag,
          v62);
        v24 = *a4;
        if ( *a4 )
        {
          memset(v24, 0, v9);
          v7 = 0;
          *(_QWORD *)(v24 + 1) = 15LL;
          *v24 = v9;
          v28 = (char *)(v24 + 8);
          for ( i = 1; i <= v20; ++i )
          {
            v45 = *((_QWORD *)v8 + i);
            v46 = *(_DWORD *)(v45 + 4);
            if ( v46 )
            {
              v47 = (unsigned int)(32 * v46 + 8);
              *(_DWORD *)(v45 + 4) = v19 + v46;
              WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, v25, v26, v27, v59);
              memmove(v28, *((const void **)v8 + i), (unsigned int)v47);
              v28 += v47;
              v7 = 0;
              if ( v19 )
              {
                memmove(v28, (const void *)(*(_QWORD *)v8 + 8LL), 32LL * v19);
                v28 += 32 * v19;
                v7 = 0;
              }
              ++(*a4)[7];
            }
          }
          if ( !v20 )
          {
            memmove(v28, *(const void **)v8, 32 * v19 + 8);
            ++(*a4)[7];
          }
        }
        else
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0xDu,
            0x3Eu,
            (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids);
          v7 = -1073741670;
        }
        goto LABEL_36;
      }
      v56 = 60;
    }
    else
    {
      v56 = 59;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xDu,
      v56,
      (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids);
  }
  PnpiClearAllocatedMemory(v8);
  result = 3221225473LL;
  *a4 = 0LL;
  return result;
}

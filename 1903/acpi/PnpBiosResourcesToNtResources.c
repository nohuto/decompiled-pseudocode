/*
 * XREFs of PnpBiosResourcesToNtResources @ 0x1C0095CE4
 * Callers:
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C000C2C8 (PnpDeviceBiosResourcesToNtResources.c)
 *     TranslateBindMutexResources @ 0x1C004FCEC (TranslateBindMutexResources.c)
 *     TranslateEjectInterface @ 0x1C00A04E8 (TranslateEjectInterface.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C00AF8FC (ACPIIoctlTranslateBiosResources.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00B1010 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6244 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dL @ 0x1C000C9EC (WPP_RECORDER_SF_dL.c)
 *     WPP_RECORDER_SF_LL @ 0x1C000CB74 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_dqLD @ 0x1C002FF94 (WPP_RECORDER_SF_dqLD.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D70C (WPP_RECORDER_SF_d.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C005E218 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1C009592C (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C00959E4 (PnpiGrowResourceList.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1C0096398 (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00964A4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiClearAllocatedMemory @ 0x1C00966C0 (PnpiClearAllocatedMemory.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A172C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1C00A1E70 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1C00A2B88 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2E88 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B32E0 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1C00B36F4 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00B3758 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00B38B4 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1C00B3910 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B398C (PnpiBiosVendorToNtIoDescriptor.c)
 */

__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, ULONG_PTR a2, __int64 a3, unsigned int **a4)
{
  ULONG_PTR v4; // r12
  int v5; // ebx
  __int64 v6; // r8
  PVOID v7; // r13
  int v8; // edx
  int v9; // ecx
  unsigned __int8 v10; // di
  int v11; // esi
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r9
  int v14; // eax
  unsigned __int16 v15; // r9
  unsigned int v16; // edi
  unsigned int v17; // r12d
  unsigned int v18; // ebx
  int v19; // eax
  unsigned int v20; // r12d
  unsigned int *PoolWithTag; // rax
  unsigned int *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  char *v26; // rsi
  unsigned int i; // r14d
  unsigned __int16 v29; // di
  unsigned __int16 v30; // r12
  unsigned __int16 v31; // si
  unsigned __int16 v32; // r14
  unsigned __int16 v33; // r9
  unsigned __int8 v34; // di
  char v35; // si
  unsigned int v36; // edi
  unsigned __int8 v37; // r14
  int v38; // esi
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  size_t v43; // rbx
  int v44; // eax
  unsigned __int8 v45; // si
  unsigned __int8 v46; // r14
  unsigned __int8 v47; // al
  int DeviceExtension; // edi
  int v49; // eax
  unsigned __int16 v50; // r9
  unsigned __int8 v51; // di
  unsigned __int16 v52; // r9
  int v53; // [rsp+28h] [rbp-49h]
  __int64 v54; // [rsp+30h] [rbp-41h]
  __int64 v55; // [rsp+38h] [rbp-39h]
  unsigned int v56; // [rsp+58h] [rbp-19h]
  char v57[4]; // [rsp+5Ch] [rbp-15h] BYREF
  int v58; // [rsp+60h] [rbp-11h]
  int v59; // [rsp+64h] [rbp-Dh] BYREF
  int v60; // [rsp+68h] [rbp-9h]
  unsigned __int16 v61; // [rsp+6Ch] [rbp-5h]
  unsigned int v62; // [rsp+70h] [rbp-1h]
  int v63; // [rsp+74h] [rbp+3h]
  int v64; // [rsp+78h] [rbp+7h]
  PVOID P[9]; // [rsp+80h] [rbp+Fh] BYREF
  ULONG_PTR v67; // [rsp+E0h] [rbp+6Fh]
  unsigned int v68; // [rsp+E8h] [rbp+77h]

  v68 = a3;
  v67 = a2;
  v4 = a2;
  P[0] = 0LL;
  v59 = 0;
  v56 = 0;
  v62 = 0;
  v57[0] = 0;
  v58 = 0;
  v60 = 0;
  v5 = PnpiGrowResourceList((const void **)P, &v59, a3);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x21u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        v5);
    return (unsigned int)v5;
  }
  v7 = P[0];
  v8 = 32;
  v64 = 32;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_BYTE *)v4;
    v11 = v9;
    if ( *(char *)v4 >= 0 )
    {
      v12 = (v10 & 7) + 1;
      v61 = v12;
      v10 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v13 = 34;
      goto LABEL_6;
    }
    v12 = *(_WORD *)(v4 + 1) + 3;
    v61 = v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 35;
LABEL_6:
      LODWORD(v55) = v12;
      LODWORD(v54) = v10;
      WPP_RECORDER_SF_LL(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        v13,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        v54,
        v55);
      v9 = v58;
      v8 = 32;
    }
LABEL_7:
    if ( v10 == 120 )
      break;
    v58 = v9 + 1;
    v63 = v10;
    if ( v10 > 0x84u )
    {
      if ( v10 > 0x8Au )
      {
        switch ( v10 )
        {
          case 0x8Bu:
            v14 = PnpiBiosAddressExtendedToIoDescriptor(v4);
            v5 = v14;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_19;
            v15 = 49;
            goto LABEL_17;
          case 0x8Cu:
            v51 = 0;
            if ( a1 )
            {
              do
              {
                if ( v5 < 0 )
                  break;
                v5 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v4, v6, (_DWORD)v7, v56, v68);
                ++v51;
              }
              while ( !v51 );
            }
            else
            {
              v5 = -1073741637;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_19;
            v49 = v51;
            v50 = 51;
            goto LABEL_132;
          case 0x8Du:
            if ( a1 )
              v5 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v4, v6, (_DWORD)v7, v56, v68);
            else
              v5 = -1073741637;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_19;
            v15 = 50;
LABEL_149:
            LODWORD(v54) = v5;
            goto LABEL_18;
          case 0x8Eu:
            if ( a1 )
              v5 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v4, v6, (_DWORD)v7, v56, v68);
            else
              v5 = -1073741637;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 52;
              goto LABEL_149;
            }
            goto LABEL_19;
        }
      }
      else
      {
        if ( v10 == 138 )
        {
          v14 = PnpiBiosAddressQuadToIoDescriptor(v4);
          v5 = v14;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_19;
          v15 = 48;
LABEL_17:
          LODWORD(v54) = v14;
LABEL_18:
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            v15,
            (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
            v54);
          goto LABEL_19;
        }
        if ( v10 >= 0x85u )
        {
          if ( v10 <= 0x86u )
          {
LABEL_52:
            v14 = PnpiBiosMemoryToIoDescriptor((unsigned __int8 *)v4, (__int64)v7, v56);
            v5 = v14;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_19;
            v15 = 45;
          }
          else if ( v10 == 135 )
          {
            v14 = PnpiBiosAddressDoubleToIoDescriptor(v4);
            v5 = v14;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_19;
            v15 = 47;
          }
          else
          {
            if ( v10 != 136 )
            {
              v45 = *(_BYTE *)(v4 + 4);
              v46 = 0;
              v47 = 4 * v45 + 5;
              if ( AcpiInterruptCombiningSupported == 1 )
              {
                LOBYTE(v6) = *(_BYTE *)(v4 + 1) + 3;
                if ( (unsigned __int8)v6 > v47 )
                {
                  if ( !a1 )
                  {
                    v5 = -1073741637;
LABEL_159:
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 0xDu, 0x38u, v53);
LABEL_50:
                    PnpiClearAllocatedMemory(v7);
                    return (unsigned int)v5;
                  }
                  v5 = PnpiBiosInterruptCombineToIoDescriptor(a1, v4, (unsigned __int8)v6 - v47 - 1, (int)v7, v56, v68);
                  goto LABEL_19;
                }
              }
              DeviceExtension = 0;
              if ( gAcpiHonorBiosPolarities && a1 )
                DeviceExtension = ACPIInternalGetDeviceExtension(a1);
              if ( v45 )
              {
                do
                {
                  if ( v5 < 0 )
                    break;
                  LOBYTE(v6) = v46++;
                  v5 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, v4, v6, (_DWORD)v7, v56);
                }
                while ( v46 < v45 );
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_19;
              v49 = v46;
              v50 = 38;
LABEL_132:
              LODWORD(v55) = v5;
              LODWORD(v54) = v49;
              WPP_RECORDER_SF_LL(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0xEu,
                v50,
                (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
                v54,
                v55);
              goto LABEL_19;
            }
            v14 = PnpiBiosAddressToIoDescriptor(v4);
            v5 = v14;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_19;
            v15 = 46;
          }
          goto LABEL_17;
        }
      }
    }
    else
    {
      switch ( v10 )
      {
        case 0x84u:
          v5 = 0;
          if ( a1 )
          {
            if ( (int)PnpiBiosVendorToNtIoDescriptor(a1, v4, v6, (_DWORD)v7, v56, v68, (__int64)v57) < 0 || !v57[0] )
              ++v60;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_L(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                4u,
                0xEu,
                0x35u,
                (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
          }
          else
          {
            ++v60;
          }
          goto LABEL_20;
        case 0x20u:
          v29 = *(_WORD *)(v4 + 1);
          v30 = 0;
          v31 = 0;
          if ( v29 )
          {
            do
            {
              v32 = v29;
              if ( v5 < 0 )
                break;
              if ( (v29 & 1) != 0 )
                v5 = PnpiBiosIrqToIoDescriptor(v67, v31, (_DWORD)v7, v56, v30++);
              ++v31;
              v29 >>= 1;
            }
            while ( v32 >= 2u );
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = 37;
            goto LABEL_61;
          }
LABEL_62:
          v4 = v67;
          goto LABEL_19;
        case 0x28u:
          v34 = *(_BYTE *)(v4 + 1);
          v30 = 0;
          v35 = 0;
          if ( v34 )
          {
            do
            {
              v37 = v34;
              if ( v5 < 0 )
                break;
              if ( (v34 & 1) != 0 )
              {
                LOBYTE(v8) = v35;
                v5 = PnpiBiosDmaToIoDescriptor(v67, v8, (_DWORD)v7, v56, v30++);
              }
              ++v35;
              v34 >>= 1;
            }
            while ( v37 >= 2u );
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v33 = 39;
LABEL_61:
            LODWORD(v55) = v5;
            LODWORD(v54) = v30;
            WPP_RECORDER_SF_LL(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              v33,
              (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
              v54,
              v55);
          }
          goto LABEL_62;
        case 0x30u:
          v36 = v62 + 1;
          v62 = v36;
          v56 = v36;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x29u,
              (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
          if ( v36 == v59 )
          {
            v44 = PnpiGrowResourceList((const void **)P, &v59, v6);
            v7 = P[0];
            v5 = v44;
          }
          goto LABEL_19;
        case 0x38u:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0xEu,
              0x2Au,
              (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
          v56 = 0;
          goto LABEL_19;
        case 0x40u:
          v14 = PnpiBiosPortToIoDescriptor(v4, v7, v56, v68);
          v5 = v14;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v15 = 43;
            goto LABEL_17;
          }
LABEL_19:
          if ( v5 < 0 )
            goto LABEL_159;
LABEL_20:
          v8 = 32;
LABEL_21:
          v9 = v58;
          goto LABEL_22;
        case 0x48u:
          v14 = PnpiBiosPortFixedToIoDescriptor(v4, v7, v56, v68);
          v5 = v14;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_19;
          v15 = 44;
          goto LABEL_17;
        case 0x50u:
          v14 = PnpiBiosDmaToIoDescriptorV3(v4, v7, v56, 1LL);
          v5 = v14;
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_19;
          v15 = 40;
          goto LABEL_17;
        case 0x70u:
          ++v60;
          v5 = 0;
          goto LABEL_21;
        case 0x81u:
          goto LABEL_52;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_L(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xDu,
        0x36u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
    v9 = v11;
    v58 = v11;
    v5 = 0;
    v8 = 32;
LABEL_22:
    v4 += v61;
    v67 = v4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0x24u,
      (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
  if ( !v58 || v60 == v58 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xEu,
        0x37u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
    PnpiClearAllocatedMemory(v7);
    *a4 = 0LL;
    return (unsigned int)v5;
  }
  if ( *(_QWORD *)v7 )
    v16 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
  else
    v16 = 0;
  v17 = v62;
  v18 = 1;
  if ( v62 )
  {
    v38 = 32;
    while ( 1 )
    {
      v39 = *((_QWORD *)v7 + v18);
      if ( !v39 )
        break;
      v40 = *(_DWORD *)(v39 + 4);
      if ( v40 )
      {
        v38 += 32 * (v16 + v40) + 8;
        v64 = v38;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 0xEu, 0x3Au, v53);
      }
      if ( ++v18 > v17 )
        goto LABEL_39;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v54) = v18;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xDu,
        0x39u,
        (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
        v54);
    }
  }
  else
  {
LABEL_39:
    if ( v17 )
    {
      v20 = v64;
LABEL_43:
      if ( v20 >= 0x48 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v20, 0x52706341u);
        *a4 = PoolWithTag;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = v20;
          WPP_RECORDER_SF_qD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0xEu,
            0x3Du,
            (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids,
            PoolWithTag,
            v55);
        }
        v22 = *a4;
        if ( *a4 )
        {
          memset(v22, 0, v20);
          v25 = v62;
          v5 = 0;
          *(_QWORD *)(v22 + 1) = 15LL;
          *v22 = v20;
          v26 = (char *)(v22 + 8);
          for ( i = 1; i <= (unsigned int)v25; ++i )
          {
            v41 = *((_QWORD *)v7 + i);
            v42 = *(_DWORD *)(v41 + 4);
            if ( v42 )
            {
              v43 = (unsigned int)(32 * v42 + 8);
              *(_DWORD *)(v41 + 4) = v16 + v42;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, v25, v23, v24, v53);
              memmove(v26, *((const void **)v7 + i), v43);
              v26 += v43;
              v5 = 0;
              if ( v16 )
              {
                memmove(v26, (const void *)(*(_QWORD *)v7 + 8LL), 32LL * v16);
                v26 += 32 * v16;
                v5 = 0;
              }
              v25 = v62;
              ++(*a4)[7];
            }
          }
          if ( !(_DWORD)v25 )
          {
            memmove(v26, *(const void **)v7, 32 * v16 + 8);
            ++(*a4)[7];
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0xDu,
              0x3Eu,
              (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
          v5 = -1073741670;
        }
        goto LABEL_50;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = 60;
LABEL_163:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          v52,
          (__int64)&WPP_64090418870a3b4ba73784fd867e52a9_Traceguids);
      }
    }
    else
    {
      if ( *(_QWORD *)v7 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)v7 + 4LL);
        if ( v19 )
        {
          v20 = 32 * v19 + v64 + 8;
          goto LABEL_43;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v52 = 59;
        goto LABEL_163;
      }
    }
  }
  PnpiClearAllocatedMemory(v7);
  *a4 = 0LL;
  return 3221225473LL;
}

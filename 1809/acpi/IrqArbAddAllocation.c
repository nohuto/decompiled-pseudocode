/*
 * XREFs of IrqArbAddAllocation @ 0x1C00901A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C000DF28 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     LinkNodeCrackPrt @ 0x1C000E844 (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C000EF34 (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C000F408 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000F6BC (ProcessorDeleteDeviceIdtAssignment.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C005B960 (WPP_RECORDER_SF_d.c)
 *     IcGetPossibleInput @ 0x1C008F808 (IcGetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1C008F890 (IcAddPossibleReference.c)
 *     IcIsInterruptTypeSecondary @ 0x1C0090E30 (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C0091218 (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C00914E4 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C0092974 (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C00929DC (IrqArbpLookupIsaOverrideByGsiv.c)
 *     MsiGetTargetInfo @ 0x1C009303C (MsiGetTargetInfo.c)
 *     ProcessorGetDestinationMode @ 0x1C00930E0 (ProcessorGetDestinationMode.c)
 *     IcSetPossibleInput @ 0x1C0093910 (IcSetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C00939F4 (IcRemovePossibleReference.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AB3F4 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B2834 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B2854 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2)
{
  int v2; // edi
  BOOL v3; // r12d
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  char v8; // r12
  _DWORD *v9; // r13
  __int64 v10; // rcx
  unsigned int v11; // eax
  ULONGLONG v12; // rcx
  _DWORD *v13; // r14
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int IsPciDevice; // r15d
  char v17; // r11
  __int16 v18; // di
  unsigned __int8 v19; // di
  __int64 v20; // r8
  bool v21; // zf
  ULONGLONG v22; // rax
  BOOL v23; // ecx
  __int64 v24; // r10
  __int16 v25; // dx
  unsigned int v26; // r12d
  void *v27; // r11
  int v28; // r9d
  ULONGLONG v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // ebx
  POOL_TYPE v33; // r10d
  _DWORD *PoolWithTag; // rax
  int v35; // edx
  int v36; // ecx
  ULONGLONG v37; // r8
  int v38; // edi
  _DWORD *v39; // rbx
  __int128 v40; // xmm0
  int v41; // eax
  int v42; // ecx
  unsigned int v43; // eax
  BOOL v44; // ebx
  const char *v45; // r9
  UCHAR v46; // di
  const char *v47; // rdx
  const char *v48; // r8
  NTSTATUS v49; // eax
  int PossibleInput; // eax
  int v51; // edx
  int v52; // eax
  BOOL v53; // eax
  char v54; // di
  int v55; // eax
  int v56; // r11d
  int v57; // eax
  __int64 v58; // rdx
  unsigned int v59; // ebx
  int Flags; // [rsp+20h] [rbp-B9h]
  int Flagsa; // [rsp+20h] [rbp-B9h]
  PVOID UserData; // [rsp+28h] [rbp-B1h]
  PVOID Owner; // [rsp+30h] [rbp-A9h]
  char v64; // [rsp+80h] [rbp-59h]
  char v65; // [rsp+81h] [rbp-58h] BYREF
  _BYTE v66[2]; // [rsp+82h] [rbp-57h] BYREF
  unsigned int v67; // [rsp+84h] [rbp-55h]
  char v68; // [rsp+88h] [rbp-51h]
  char v69; // [rsp+89h] [rbp-50h]
  int v70; // [rsp+8Ch] [rbp-4Dh]
  unsigned int v71; // [rsp+90h] [rbp-49h] BYREF
  char v72; // [rsp+94h] [rbp-45h]
  BOOL v73; // [rsp+98h] [rbp-41h]
  int v74; // [rsp+9Ch] [rbp-3Dh] BYREF
  PVOID P; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-31h]
  __int64 v77; // [rsp+B0h] [rbp-29h]
  _OWORD v78[2]; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v79[32]; // [rsp+D8h] [rbp-1h] BYREF

  v77 = a1;
  memset(v78, 0, sizeof(v78));
  Owner = *(PVOID *)(a2[4] + 32);
  WPP_RECORDER_SF_Dq((__int64)WPP_GLOBAL_Control->DeviceExtension, v5, v6, 0xDu, Flags);
  v7 = *(_DWORD *)a2;
  v8 = 0;
  v9 = 0LL;
  v64 = 0;
  v10 = *(unsigned int *)a2;
  P = 0LL;
  v69 = 0;
  v74 = v7;
  v11 = IrqArbGsivFromIrq(v10);
  v12 = a2[5];
  v71 = 0;
  LOBYTE(v2) = 0;
  v13 = 0LL;
  v67 = v11;
  v14 = v11;
  v70 = v2;
  v15 = *(_QWORD *)(v12 + 40);
  v68 = 0;
  if ( (*(_BYTE *)(v15 + 4) & 0x20) != 0 )
  {
    v17 = 0;
  }
  else
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v65);
    if ( IsPciDevice < 0 )
    {
LABEL_92:
      LODWORD(UserData) = IsPciDevice;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0x11u,
        (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
        UserData);
      v59 = v67;
      if ( DWORD1(v78[1]) )
        ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v67, DWORD1(v78[1]), 1);
      if ( v8 )
        --v9[7];
      if ( v69 )
      {
        LOBYTE(v58) = (a2[8] & 2) != 0;
        IcRemovePossibleReference(v59, v58);
      }
      if ( v13 )
      {
        if ( !(_BYTE)v2 )
          ExFreePoolWithTag(v13, 0);
      }
      return;
    }
    v17 = v65;
  }
  if ( (a2[8] & 2) != 0 && v17 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x14u,
      0xEu,
      (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
    return;
  }
  LOBYTE(v3) = 0;
  v66[0] = 0;
  v73 = v3;
  if ( v14 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v14, v15, v66);
    if ( PossibleInput >= 0 )
    {
      LOBYTE(v3) = PossibleInput != 263;
      v73 = PossibleInput != 263;
    }
  }
  if ( v17 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v19 = 3;
    if ( (a2[8] & 2) != 0 )
    {
LABEL_69:
      v20 = v14;
      goto LABEL_14;
    }
    v57 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v71, 1);
    v9 = P;
    IsPciDevice = v57;
    if ( v57 < 0 )
      goto LABEL_79;
    if ( !P )
    {
      v20 = v71;
      v67 = v71;
      goto LABEL_14;
    }
    IsPciDevice = LinkNodeGetPossibleResources(P, &P, &v65);
    if ( IsPciDevice < 0 )
      goto LABEL_79;
    ExFreePoolWithTag(P, 0);
    v19 = v65 & 2 | 1;
    if ( (int)LinkNodeGetPossibleGsiv(v9, &v71) < 0 )
    {
      if ( v9[7] )
      {
        IsPciDevice = -1073741823;
LABEL_79:
        v8 = 0;
LABEL_91:
        LOBYTE(v2) = v70;
        goto LABEL_92;
      }
      v9[9] = v14;
    }
    ++v9[7];
    v64 = 1;
    goto LABEL_88;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v14, &v71) )
  {
    v19 = byte_1C007F384[8 * v71];
    if ( v19 != 0xFF )
      goto LABEL_69;
  }
  v18 = *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(v14) )
  {
    v68 = 1;
    IsPciDevice = AcpiExternalQueryTranslatedDescriptorForGsiv(v14, v79);
    if ( IsPciDevice < 0 )
    {
      v8 = 0;
      goto LABEL_91;
    }
    v19 = v79[16] | ((v18 & 1) == 0);
LABEL_88:
    v20 = v14;
    goto LABEL_14;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v74, &v71) )
  {
    v19 = (v18 & 1) == 0 ? 3 : 0;
  }
  else
  {
    v19 = v71 | ((v18 & 1) == 0);
  }
  v20 = v14;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v19 |= 4u;
LABEL_14:
  v21 = (a2[8] & 2) == 0;
  v65 = 0;
  if ( !v21 )
  {
    v65 = 1;
    if ( v3 )
    {
      if ( ((v66[0] ^ v19) & 0xFFFFFFFB) != 0 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0xFu,
          (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
        LOBYTE(v2) = v70;
        IsPciDevice = -1073741823;
        v8 = v64;
        goto LABEL_92;
      }
    }
  }
  v22 = a2[5];
  v23 = 0;
  v24 = *(_QWORD *)(v22 + 40);
  v76 = v24;
  v25 = *(_WORD *)(v24 + 4);
  if ( (v25 & 2) != 0 )
  {
    v26 = *(_DWORD *)(v24 + 12) - *(_DWORD *)(v24 + 8) + 1;
  }
  else
  {
    v26 = 1;
    v23 = (*(_BYTE *)(v22 + 36) & 1) != 0;
  }
  v27 = (void *)a2[9];
  v28 = v23 | 2;
  P = v27;
  if ( (v25 & 8) == 0 )
    v28 = v23;
  v71 = 0;
  v74 = v28;
  v66[0] = v19 & 8;
  v72 = v19 & 1;
  v29 = a2[4];
  v71 = ((v19 & 8) != 0 ? 2 : 0) | !(v19 & 1);
  LODWORD(Owner) = v28;
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, void *, unsigned int, unsigned int, PVOID, int, _OWORD *))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(v29 + 32),
                  v24,
                  v20,
                  v27,
                  v26,
                  v71,
                  Owner,
                  1,
                  v78);
  if ( IsPciDevice < 0 )
  {
    v31 = 1LL;
    if ( v26 <= 1 )
    {
      v32 = v67;
    }
    else
    {
      v26 = 1;
      v32 = v67;
      IsPciDevice = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, unsigned int, int, int, _OWORD *))ProcessorReserveIdtEntries)(
                      *(_QWORD *)(a2[4] + 32),
                      *(_QWORD *)(a2[5] + 40),
                      v67,
                      P,
                      1,
                      (unsigned __int8)-((v19 & 8) != 0) & 2u | !(v19 & 1),
                      v74,
                      1,
                      v78);
    }
    if ( IsPciDevice < 0 )
      return;
  }
  else
  {
    v32 = v67;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    v33 = PagedPool;
  }
  else
  {
    if ( !v73 )
    {
      LOBYTE(v30) = v19;
      LOBYTE(v31) = (*(_BYTE *)(v76 + 4) & 8) != 0;
      IsPciDevice = IcSetPossibleInput(v32, v78, v30, v31);
      if ( IsPciDevice < 0 )
        goto LABEL_116;
    }
    IcAddPossibleReference(v32, (a2[8] & 2) != 0);
    v69 = v33;
  }
  v73 = 0;
  if ( (v19 & 4) == 0 )
  {
    v51 = v33;
    if ( ((unsigned __int8)v33 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v51 = 3;
    v73 = v51;
  }
  PoolWithTag = ExAllocatePoolWithTag(v33, 88LL * (v26 - 1) + 120, 0x49706341u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_116;
  memset(PoolWithTag, 0, 0x78uLL);
  *v13 = 1;
  v13[1] = 4;
  v35 = 4;
  v36 = *(_DWORD *)(a2[4] + 40);
  if ( v36 && v36 != 2 )
  {
    v35 = 5;
    v13[1] = 5;
  }
  v37 = a2[5];
  if ( (*(_DWORD *)(v37 + 36) & 4) != 0 )
  {
    v35 |= 2u;
    v13[1] = v35;
    v37 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 4LL) & 0x20) != 0 )
  {
    v13[1] = v35 | 0x10;
    v37 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 4LL) & 2) == 0 )
  {
    if ( v9 )
    {
      *((_QWORD *)v13 + 2) = v9;
      v52 = 2;
    }
    else
    {
      v52 = 1;
    }
    v13[2] = v52;
    v13[8] = 0;
    v13[9] = DWORD1(v78[1]);
    *(_OWORD *)(v13 + 14) = v78[0];
    v53 = (v68 || v66[0]) && !v72;
    v54 = v19 & 0xA;
    v13[12] = v53;
    switch ( v54 )
    {
      case 10:
        v55 = 3;
        break;
      case 8:
        v55 = 4;
        break;
      case 2:
        v55 = 2;
        break;
      default:
        v55 = v54 == 0;
        break;
    }
    v13[11] = v55;
    v13[22] = IrqArbGsivFromIrq(*a2);
    v13[23] ^= v56 & (v13[23] ^ (v13[1] >> 4));
    IsPciDevice = IrqArbGetDeviceIrql(v13 + 8, v13 + 10);
    if ( IsPciDevice >= 0 )
      goto LABEL_38;
LABEL_116:
    LOBYTE(v2) = v70;
LABEL_117:
    v8 = v64;
    goto LABEL_92;
  }
  v13[2] = 3;
  IsPciDevice = MsiGetTargetInfo(v78, DWORD1(v78[1]), v13 + 4);
  if ( IsPciDevice < 0 )
    goto LABEL_116;
  *((_BYTE *)v13 + 26) = BYTE8(v78[1]);
  ProcessorGetDestinationMode(v78, &v74);
  v38 = 0;
  if ( v26 )
  {
    v39 = v13 + 14;
    do
    {
      *(v39 - 6) = 3;
      v40 = v78[0];
      *(v39 - 3) = 0;
      *(v39 - 2) = 1;
      v41 = v74;
      *(_OWORD *)v39 = v40;
      v42 = v38 + DWORD1(v78[1]);
      v39[12] = v41;
      v43 = v67;
      *(v39 - 5) = v42;
      v39[8] = v38 + v43;
      IsPciDevice = IrqArbGetDeviceIrql(&v13[22 * v38 + 8], &v13[22 * v38 + 10]);
      if ( IsPciDevice < 0 )
        goto LABEL_116;
      v39 += 22;
    }
    while ( ++v38 < v26 );
  }
LABEL_38:
  v44 = v73;
  v45 = "RTL_RANGE_LIST_ADD_SHARED";
  v46 = v65;
  v47 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
  v48 = "ARBITER_RANGE_BOOT_ALLOCATED";
  if ( (v73 & 2) == 0 )
    v45 = " ";
  if ( !v73 )
    v47 = " ";
  if ( !v65 )
    v48 = " ";
  WPP_RECORDER_SF_DDDssDssqq(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v47,
    (__int64)v48,
    (__int64)v45,
    Flagsa);
  v49 = RtlAddRange(*(PRTL_RANGE_LIST *)(v77 + 48), *a2, a2[1], v46, v44 | 0x10, v13, *(PVOID *)(a2[4] + 32));
  IsPciDevice = v49;
  if ( v49 < 0 )
  {
    LOBYTE(v2) = v70;
    if ( v49 != -1073741823 )
      LOBYTE(v2) = 1;
    goto LABEL_117;
  }
}

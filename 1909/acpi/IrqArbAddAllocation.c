/*
 * XREFs of IrqArbAddAllocation @ 0x1C0098B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C001D9DC (WPP_RECORDER_SF_Dq.c)
 *     WPP_RECORDER_SF_DDDssDssqq @ 0x1C001DEE8 (WPP_RECORDER_SF_DDDssDssqq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C001E374 (ProcessorDeleteDeviceIdtAssignment.c)
 *     ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C001E618 (ACPIInternalInterruptPolarityCacheGetPolarity.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D70C (WPP_RECORDER_SF_d.c)
 *     IcIsInterruptTypeSecondary @ 0x1C009983C (IcIsInterruptTypeSecondary.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 *     PcisuppIsPciDevice @ 0x1C0099F54 (PcisuppIsPciDevice.c)
 *     IrqArbGetDeviceIrql @ 0x1C009B360 (IrqArbGetDeviceIrql.c)
 *     IrqArbpLookupIsaOverrideByGsiv @ 0x1C009B3C8 (IrqArbpLookupIsaOverrideByGsiv.c)
 *     MsiGetTargetInfo @ 0x1C009BA4C (MsiGetTargetInfo.c)
 *     ProcessorGetDestinationMode @ 0x1C009BB10 (ProcessorGetDestinationMode.c)
 *     IcSetPossibleInput @ 0x1C009C164 (IcSetPossibleInput.c)
 *     IcRemovePossibleReference @ 0x1C009C654 (IcRemovePossibleReference.c)
 *     IcGetPossibleInput @ 0x1C009C6A4 (IcGetPossibleInput.c)
 *     IcAddPossibleReference @ 0x1C009D714 (IcAddPossibleReference.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AEAB4 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     LinkNodeGetPossibleGsiv @ 0x1C00B6224 (LinkNodeGetPossibleGsiv.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B6244 (LinkNodeGetPossibleResources.c)
 */

void __fastcall IrqArbAddAllocation(__int64 a1, ULONGLONG *a2)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _DWORD *v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  ULONGLONG v10; // rcx
  void *v11; // r12
  _DWORD *v12; // r15
  __int64 v13; // rdx
  unsigned int v14; // ebx
  int IsPciDevice; // r14d
  unsigned __int8 v16; // r11
  __int16 v17; // di
  unsigned __int8 v18; // di
  bool v19; // zf
  ULONGLONG v20; // rax
  BOOL v21; // ecx
  __int64 v22; // r10
  __int16 v23; // r8
  unsigned int v24; // r12d
  int v25; // r9d
  ULONGLONG v26; // r8
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // ebx
  POOL_TYPE v30; // r10d
  _DWORD *PoolWithTag; // rax
  int v32; // edx
  int v33; // ecx
  ULONGLONG v34; // r8
  int v35; // edi
  _DWORD *v36; // rbx
  int v37; // eax
  __int128 v38; // xmm0
  int v39; // ecx
  unsigned int v40; // eax
  unsigned int v41; // ebx
  UCHAR v42; // di
  const char *v43; // r9
  const char *v44; // rdx
  const char *v45; // r8
  NTSTATUS v46; // eax
  int PossibleInput; // eax
  int v48; // edx
  int v49; // eax
  BOOL v50; // eax
  char v51; // di
  int v52; // eax
  int v53; // eax
  unsigned int v54; // ebx
  int Flags; // [rsp+20h] [rbp-E0h]
  int Flagsa; // [rsp+20h] [rbp-E0h]
  PVOID UserData; // [rsp+28h] [rbp-D8h]
  PVOID Owner; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v59; // [rsp+80h] [rbp-80h] BYREF
  char v60[3]; // [rsp+81h] [rbp-7Fh] BYREF
  unsigned int v61; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v62; // [rsp+88h] [rbp-78h]
  char v63; // [rsp+8Ch] [rbp-74h]
  char v64; // [rsp+8Dh] [rbp-73h]
  char v65; // [rsp+8Eh] [rbp-72h]
  int v66; // [rsp+90h] [rbp-70h]
  char v67; // [rsp+94h] [rbp-6Ch]
  int v68; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  BOOL v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  _OWORD v73[2]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v74[32]; // [rsp+E0h] [rbp-20h] BYREF

  v72 = a1;
  memset(v73, 0, sizeof(v73));
  memset(v74, 0, sizeof(v74));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    Owner = *(PVOID *)(a2[4] + 32);
    WPP_RECORDER_SF_Dq((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, 0xDu, Flags);
  }
  v6 = *(_DWORD *)a2;
  v7 = 0LL;
  v8 = *(unsigned int *)a2;
  P = 0LL;
  v64 = 0;
  v65 = 0;
  v68 = v6;
  v9 = IrqArbGsivFromIrq(v8);
  v10 = a2[5];
  v11 = &WPP_fb7c44d58a92392859b74839728b9b13_Traceguids;
  v61 = 0;
  LOBYTE(v2) = 0;
  v62 = v9;
  v12 = 0LL;
  v66 = v2;
  v13 = *(_QWORD *)(v10 + 40);
  v14 = v9;
  v63 = 0;
  if ( (*(_BYTE *)(v13 + 4) & 0x20) != 0 )
  {
    v16 = 0;
  }
  else
  {
    IsPciDevice = PcisuppIsPciDevice(*(_QWORD *)(a2[4] + 32), &v59);
    if ( IsPciDevice < 0 )
    {
LABEL_90:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(UserData) = IsPciDevice;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          0x14u,
          0x11u,
          (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids,
          UserData);
      }
      v54 = v62;
      if ( DWORD1(v73[1]) )
        ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(a2[4] + 32), v62, DWORD1(v73[1]), 1);
      if ( v64 )
        --v7[7];
      if ( v65 )
      {
        LOBYTE(v13) = (a2[8] & 2) != 0;
        IcRemovePossibleReference(v54, v13);
      }
      if ( v12 )
      {
        if ( !(_BYTE)v2 )
          ExFreePoolWithTag(v12, 0);
      }
      return;
    }
    v16 = v59;
  }
  if ( (a2[8] & 2) != 0 && v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x14u,
        0xEu,
        (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
    return;
  }
  LOBYTE(v11) = 0;
  v59 = 0;
  v70 = (int)v11;
  if ( v14 < 0xFFF00000 )
  {
    PossibleInput = IcGetPossibleInput(v14, v13, &v59);
    if ( PossibleInput >= 0 )
    {
      LOBYTE(v11) = PossibleInput != 263;
      v70 = PossibleInput != 263;
    }
  }
  if ( v16 && (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) == 0 )
  {
    v18 = 3;
    if ( (a2[8] & 2) != 0 )
    {
LABEL_74:
      v13 = v14;
      goto LABEL_16;
    }
    v53 = LinkNodeCrackPrt(*(_QWORD *)(a2[4] + 32), &P, &v61, 1);
    v7 = P;
    IsPciDevice = v53;
    if ( v53 < 0 )
      goto LABEL_89;
    if ( !P )
    {
      v13 = v61;
      v62 = v61;
      goto LABEL_16;
    }
    IsPciDevice = LinkNodeGetPossibleResources(P, &P, v60);
    if ( IsPciDevice < 0 )
      goto LABEL_89;
    ExFreePoolWithTag(P, 0);
    v18 = v60[0] & 2 | 1;
    if ( (int)LinkNodeGetPossibleGsiv(v7, &v61) < 0 )
    {
      if ( v7[7] )
      {
        IsPciDevice = -1073741823;
        goto LABEL_89;
      }
      v7[9] = v14;
    }
    ++v7[7];
    v64 = 1;
LABEL_97:
    v13 = v62;
    goto LABEL_16;
  }
  if ( (unsigned __int8)IrqArbpLookupIsaOverrideByGsiv(v14, &v61) )
  {
    v18 = byte_1C0081384[8 * v61];
    if ( v18 != 0xFF )
      goto LABEL_74;
  }
  v17 = *(_WORD *)(*(_QWORD *)(a2[5] + 40) + 4LL);
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(v14) )
  {
    v63 = 1;
    IsPciDevice = AcpiExternalQueryTranslatedDescriptorForGsiv(v14, v74);
    if ( IsPciDevice < 0 )
      goto LABEL_99;
    v18 = v74[16] | ((v17 & 1) == 0);
    goto LABEL_97;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0
    || !ACPIInternalInterruptPolarityCacheGetPolarity(*(_QWORD *)(a2[4] + 32), v68, &v61) )
  {
    v18 = (v17 & 1) == 0 ? 3 : 0;
  }
  else
  {
    v18 = v61 | ((v17 & 1) == 0);
  }
  v13 = v62;
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
    v18 |= 4u;
LABEL_16:
  v19 = (a2[8] & 2) == 0;
  v60[0] = 0;
  if ( !v19 )
  {
    v60[0] = 1;
    if ( (_BYTE)v11 )
    {
      if ( ((v59 ^ v18) & 0xFFFFFFFB) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            0x14u,
            0xFu,
            (__int64)&WPP_fb7c44d58a92392859b74839728b9b13_Traceguids);
        LOBYTE(v2) = v66;
        IsPciDevice = -1073741823;
        goto LABEL_90;
      }
    }
  }
  v20 = a2[5];
  v21 = 0;
  v22 = *(_QWORD *)(v20 + 40);
  v71 = v22;
  v23 = *(_WORD *)(v22 + 4);
  if ( (v23 & 2) != 0 )
  {
    v24 = *(_DWORD *)(v22 + 12) - *(_DWORD *)(v22 + 8) + 1;
  }
  else
  {
    v24 = 1;
    v21 = (*(_BYTE *)(v20 + 36) & 1) != 0;
  }
  v25 = v21 | 2;
  v19 = (v23 & 8) == 0;
  v26 = a2[9];
  if ( v19 )
    v25 = v21;
  P = (PVOID)a2[9];
  v59 = v18 & 8;
  v67 = v18 & 1;
  v68 = v25;
  LODWORD(Owner) = v25;
  v61 = !(v18 & 1) | ((v18 & 8) != 0 ? 2 : 0);
  IsPciDevice = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, ULONGLONG, unsigned int, unsigned int, PVOID, int, _OWORD *))ProcessorReserveIdtEntries)(
                  *(_QWORD *)(a2[4] + 32),
                  v22,
                  (unsigned int)v13,
                  v26,
                  v24,
                  v61,
                  Owner,
                  1,
                  v73);
  if ( IsPciDevice < 0 )
  {
    v28 = 1LL;
    if ( v24 <= 1 )
    {
      v29 = v62;
    }
    else
    {
      v24 = 1;
      v29 = v62;
      IsPciDevice = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, PVOID, int, int, int, int, _OWORD *))ProcessorReserveIdtEntries)(
                      *(_QWORD *)(a2[4] + 32),
                      *(_QWORD *)(a2[5] + 40),
                      v62,
                      P,
                      1,
                      !(v18 & 1) | (unsigned __int8)((v18 & 8) != 0 ? 2 : 0),
                      v68,
                      1,
                      v73);
    }
    if ( IsPciDevice < 0 )
      return;
  }
  else
  {
    v29 = v62;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2[5] + 40) + 4LL) & 2) != 0 )
  {
    v30 = PagedPool;
  }
  else
  {
    if ( !v70 )
    {
      LOBYTE(v27) = v18;
      LOBYTE(v28) = (*(_BYTE *)(v71 + 4) & 8) != 0;
      IsPciDevice = IcSetPossibleInput(v29, v73, v27, v28);
      if ( IsPciDevice < 0 )
        goto LABEL_89;
    }
    LOBYTE(v13) = (a2[8] & 2) != 0;
    IcAddPossibleReference(v29, v13);
    v65 = v30;
  }
  v61 = 0;
  if ( (v18 & 4) == 0 )
  {
    v48 = v30;
    if ( ((unsigned __int8)v30 & *(_BYTE *)(a2[5] + 36)) != 0 )
      v48 = 3;
    v61 = v48;
  }
  PoolWithTag = ExAllocatePoolWithTag(v30, 88LL * (v24 - 1) + 120, 0x49706341u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_89;
  memset(PoolWithTag + 2, 0, 0x70uLL);
  *v12 = 1;
  v12[1] = 4;
  v32 = 4;
  v33 = *(_DWORD *)(a2[4] + 40);
  if ( v33 && v33 != 2 )
  {
    v32 = 5;
    v12[1] = 5;
  }
  v34 = a2[5];
  if ( (*(_DWORD *)(v34 + 36) & 4) != 0 )
  {
    v32 |= 2u;
    v12[1] = v32;
    v34 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 4LL) & 0x20) != 0 )
  {
    v12[1] = v32 | 0x10;
    v34 = a2[5];
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v34 + 40) + 4LL) & 2) == 0 )
  {
    if ( v7 )
    {
      *((_QWORD *)v12 + 2) = v7;
      v49 = 2;
    }
    else
    {
      v49 = 1;
    }
    v12[2] = v49;
    v12[8] = 0;
    v19 = v63 == 0;
    v12[9] = DWORD1(v73[1]);
    *(_OWORD *)(v12 + 14) = v73[0];
    v50 = (!v19 || v59) && !v67;
    v51 = v18 & 0xA;
    v12[12] = v50;
    switch ( v51 )
    {
      case 10:
        v52 = 3;
        break;
      case 8:
        v52 = 4;
        break;
      case 2:
        v52 = 2;
        break;
      default:
        v52 = v51 == 0;
        break;
    }
    v12[11] = v52;
    v12[22] = IrqArbGsivFromIrq(*a2);
    v12[23] ^= (v12[23] ^ (v12[1] >> 4)) & 1;
    IsPciDevice = IrqArbGetDeviceIrql(v12 + 8, v12 + 10);
    if ( IsPciDevice >= 0 )
      goto LABEL_40;
LABEL_99:
    LOBYTE(v2) = v66;
    goto LABEL_90;
  }
  v12[2] = 3;
  IsPciDevice = MsiGetTargetInfo(v73, DWORD1(v73[1]), v12 + 4);
  if ( IsPciDevice < 0 )
  {
LABEL_89:
    LOBYTE(v2) = v66;
    goto LABEL_90;
  }
  *((_BYTE *)v12 + 26) = BYTE8(v73[1]);
  ProcessorGetDestinationMode(v73, &v68);
  v35 = 0;
  if ( v24 )
  {
    v36 = v12 + 14;
    do
    {
      v37 = v68;
      *(v36 - 6) = 3;
      v38 = v73[0];
      *(v36 - 3) = 0;
      *(v36 - 2) = 1;
      *(_OWORD *)v36 = v38;
      v39 = v35 + DWORD1(v73[1]);
      v36[12] = v37;
      v40 = v62;
      *(v36 - 5) = v39;
      v36[8] = v35 + v40;
      IsPciDevice = IrqArbGetDeviceIrql(&v12[22 * v35 + 8], &v12[22 * v35 + 10]);
      if ( IsPciDevice < 0 )
        goto LABEL_89;
      v36 += 22;
    }
    while ( ++v35 < v24 );
  }
LABEL_40:
  v41 = v61;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = v60[0];
  }
  else
  {
    v42 = v60[0];
    v43 = "RTL_RANGE_LIST_ADD_SHARED";
    v44 = "RTL_RANGE_LIST_ADD_IF_CONFLICT";
    v45 = "ARBITER_RANGE_BOOT_ALLOCATED";
    if ( (v61 & 2) == 0 )
      v43 = " ";
    if ( (v61 & 1) == 0 )
      v44 = " ";
    if ( !v60[0] )
      v45 = " ";
    WPP_RECORDER_SF_DDDssDssqq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v44,
      (__int64)v45,
      (__int64)v43,
      Flagsa);
  }
  v46 = RtlAddRange(*(PRTL_RANGE_LIST *)(v72 + 48), *a2, a2[1], v42, v41 | 0x10, v12, *(PVOID *)(a2[4] + 32));
  IsPciDevice = v46;
  if ( v46 < 0 )
  {
    LOBYTE(v2) = v66;
    if ( v46 != -1073741823 )
      LOBYTE(v2) = 1;
    goto LABEL_90;
  }
}

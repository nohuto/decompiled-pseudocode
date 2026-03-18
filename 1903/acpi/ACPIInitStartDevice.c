/*
 * XREFs of ACPIInitStartDevice @ 0x1C000BF1C
 * Callers:
 *     ACPIEcStartDevice @ 0x1C0053640 (ACPIEcStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C0093BE0 (ACPIFilterIrpStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C00A2450 (ACPIBusIrpStartDevice.c)
 *     ACPICMButtonStart @ 0x1C00A310C (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C00A31D0 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C00B1AB0 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000CC54 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DBF8 (ACPIThermalAcquireCoolingInterfaces.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     PnpCmResourcesToBiosResources @ 0x1C00A215C (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v6; // r14d
  int v8; // edi
  _QWORD *DeviceExtension; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // r13
  _DWORD *v14; // r14
  _DWORD *v15; // rsi
  void *v16; // rdi
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rcx
  void *v20; // rax
  unsigned int v21; // ebx
  int v23; // esi
  unsigned int v24; // esi
  PVOID v25; // rax
  void *v26; // r14
  char v27; // si
  _OWORD *v28; // rax
  _QWORD *v29; // r13
  KIRQL v30; // al
  void *v31; // rcx
  KIRQL v32; // di
  void *v33; // rcx
  unsigned int v34; // r8d
  unsigned int v35; // edx
  _BYTE *v36; // rcx
  size_t v37; // r15
  PVOID PoolWithTag; // rax
  PVOID v39; // r14
  __int64 v40; // rax
  void *v41; // rdx
  void *v42; // rcx
  __int64 v43; // rax
  void *v44; // rdx
  void *v45; // rcx
  void *v46; // rcx
  __int64 v47; // rcx
  int v48; // edx
  void *v49; // rax
  __int64 v50; // rcx
  int v51; // edx
  void *v52; // rax
  __int64 v53; // rcx
  int v54; // edx
  void *v55; // rax
  __int64 v56; // rcx
  int v57; // edx
  void *v58; // rax
  __int64 v59; // rax
  int v60; // edx
  void *v61; // rcx
  __int64 v62; // [rsp+30h] [rbp-50h]
  __int64 v63; // [rsp+38h] [rbp-48h]
  size_t v64; // [rsp+50h] [rbp-30h]
  _BYTE v65[40]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD *Src; // [rsp+C8h] [rbp+48h]

  v6 = (int)a3;
  v8 = a4;
  memset(v65, 0, sizeof(v65));
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v10 = 0LL;
  v11 = 0LL;
  v12 = DeviceExtension;
  v13 = DeviceExtension[89];
  if ( a2 )
  {
    v14 = *(_DWORD **)(a2 + 8);
    v15 = *(_DWORD **)(a2 + 16);
    Src = v14;
    if ( !v14 || *v14 != 1 )
      goto LABEL_12;
    v16 = &unk_1C006FE7D;
    if ( v15 && *v15 == 1 && (DeviceExtension[119] & 0x100000000LL) != 0 )
    {
      v34 = v15[4];
      v35 = 0;
      if ( v34 )
      {
        v36 = v15 + 5;
        while ( *v36 != 2 || (v36[2] & 0x20) == 0 )
        {
          ++v35;
          v36 += 20;
          if ( v35 >= v34 )
            goto LABEL_48;
        }
        v37 = 20 * (v34 + 1);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v37, 0x53706341u);
        v39 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v15, v37);
          v46 = (void *)v12[79];
          if ( v46 )
            ExFreePoolWithTag(v46, 0);
          v12[79] = v39;
          v14 = Src;
        }
        else
        {
          v40 = v12[1];
          v41 = &unk_1C006FE7D;
          v42 = &unk_1C006FE7D;
          if ( (v40 & 0x200000000000LL) != 0 )
          {
            v41 = (void *)v12[70];
            if ( (v40 & 0x400000000000LL) != 0 )
              v42 = (void *)v12[71];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v63 = (__int64)v41;
            LOBYTE(v41) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v41,
              1,
              21,
              (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
              v37,
              (char)v12,
              v63,
              (__int64)v42);
          }
          v14 = Src;
        }
      }
      else
      {
LABEL_48:
        v43 = DeviceExtension[1];
        v44 = &unk_1C006FE7D;
        v45 = &unk_1C006FE7D;
        if ( (v43 & 0x200000000000LL) != 0 )
        {
          v44 = (void *)v12[70];
          if ( (v43 & 0x400000000000LL) != 0 )
            v45 = (void *)v12[71];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v62 = (__int64)v44;
          LOBYTE(v44) = 2;
          WPP_RECORDER_SF_qss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v44,
            17,
            20,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            (char)v12,
            v62,
            (__int64)v45);
        }
        _InterlockedAnd64(v12 + 1, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64(v12 + 119, 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64(v12 + 119, 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v10 = AMLIGetNamedChild(v13, 1397900127LL);
    v17 = AMLIGetNamedChild(v13, 1397904223LL);
    v11 = v17;
    if ( v10 && v17 )
    {
      v23 = AMLIEvalNameSpaceObject(v10, v65, 0LL, 0LL);
      if ( v23 < 0 )
      {
        v47 = v12[1];
        v48 = 0;
        v49 = &unk_1C006FE7D;
        if ( (v47 & 0x200000000000LL) != 0 )
        {
          v16 = (void *)v12[70];
          v48 = 0;
          if ( (v47 & 0x400000000000LL) != 0 )
            v49 = (void *)v12[71];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v48) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v48,
            1,
            23,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            v23,
            (char)v12,
            (__int64)v16,
            (__int64)v49);
        }
        goto LABEL_89;
      }
      if ( *(_WORD *)&v65[2] != 3 || !*(_DWORD *)&v65[24] || !*(_QWORD *)&v65[32] )
      {
        v59 = v12[1];
        v60 = 0;
        v61 = &unk_1C006FE7D;
        if ( (v59 & 0x200000000000LL) != 0 )
        {
          v16 = (void *)v12[70];
          v60 = 0;
          if ( (v59 & 0x400000000000LL) != 0 )
            v61 = (void *)v12[71];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v60) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v60,
            1,
            24,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            v65[2],
            (char)v12,
            (__int64)v16,
            (__int64)v61);
        }
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeDataBuffs(v65, 1LL);
        v23 = -1073741823;
        goto LABEL_89;
      }
      v24 = 20 * (v14[4] + 1);
      v64 = v24;
      v25 = ExAllocatePoolWithTag(PagedPool, v24, 0x53706341u);
      v26 = v25;
      if ( v25 )
      {
        memmove(v25, Src, v24);
        v27 = v65[24] + 40;
        v28 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(*(_DWORD *)&v65[24] + 40), 0x4F706341u);
        v29 = v28;
        if ( v28 )
        {
          *v28 = *(_OWORD *)v65;
          v28[1] = *(_OWORD *)&v65[16];
          *((_QWORD *)v28 + 4) = (char *)v28 + 40;
          memmove((char *)v28 + 40, *(const void **)&v65[32], *(unsigned int *)&v65[24]);
          dword_1C0082858 = 0;
          pszDest = 0;
          FreeDataBuffs(v65, 1LL);
          v23 = PnpCmResourcesToBiosResources(v12, v26, v29[4], *((unsigned int *)v29 + 6));
          if ( v23 < 0 )
          {
            v56 = v12[1];
            v57 = 0;
            v58 = &unk_1C006FE7D;
            if ( (v56 & 0x200000000000LL) != 0 )
            {
              v16 = (void *)v12[70];
              v57 = 0;
              if ( (v56 & 0x400000000000LL) != 0 )
                v58 = (void *)v12[71];
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v57) = 2;
              WPP_RECORDER_SF_Lqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v57,
                1,
                27,
                (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
                v23,
                (char)v12,
                (__int64)v16,
                (__int64)v58);
            }
            ExFreePoolWithTag(v26, 0);
            ExFreePoolWithTag(v29, 0);
            goto LABEL_89;
          }
          memmove(v26, Src, v64);
          v30 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v31 = (void *)v12[80];
          v32 = v30;
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          v12[80] = v29;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v32);
          v33 = (void *)v12[78];
          if ( v33 )
            ExFreePoolWithTag(v33, 0);
          v12[78] = v26;
          goto LABEL_11;
        }
        v53 = v12[1];
        v54 = 0;
        v55 = &unk_1C006FE7D;
        if ( (v53 & 0x200000000000LL) != 0 )
        {
          v16 = (void *)v12[70];
          v54 = 0;
          if ( (v53 & 0x400000000000LL) != 0 )
            v55 = (void *)v12[71];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v54) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v54,
            1,
            26,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            v27,
            (char)v12,
            (__int64)v16,
            (__int64)v55);
        }
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeDataBuffs(v65, 1LL);
        ExFreePoolWithTag(v26, 0);
      }
      else
      {
        v50 = v12[1];
        v51 = 0;
        v52 = &unk_1C006FE7D;
        if ( (v50 & 0x200000000000LL) != 0 )
        {
          v16 = (void *)v12[70];
          v51 = 0;
          if ( (v50 & 0x400000000000LL) != 0 )
            v52 = (void *)v12[71];
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v51) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v51,
            1,
            25,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            v24,
            (char)v12,
            (__int64)v16,
            (__int64)v52);
        }
        dword_1C0082858 = 0;
        pszDest = 0;
        FreeDataBuffs(v65, 1LL);
      }
      v23 = -1073741670;
LABEL_89:
      a3(v12, a4, (unsigned int)v23);
      if ( v10 )
        AMLIDereferenceHandleEx(v10);
      if ( v11 )
        AMLIDereferenceHandleEx(v11);
      return (unsigned int)v23;
    }
    v19 = v12[1];
    v20 = &unk_1C006FE7D;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v16 = (void *)v12[70];
      v18 = 0;
      if ( (v19 & 0x400000000000LL) != 0 )
        v20 = (void *)v12[71];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v18,
        1,
        22,
        (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
        (char)v12,
        (__int64)v16,
        (__int64)v20);
    }
LABEL_11:
    v8 = a4;
LABEL_12:
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v12);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v12[119] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v12 + 84) == 1 )
  {
    v23 = 0;
    goto LABEL_89;
  }
  v21 = ACPIDeviceInternalDeviceRequest((_DWORD)v12, 1, v6, v8, 4);
  if ( v21 == -1073741802 )
    v21 = 259;
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  return v21;
}

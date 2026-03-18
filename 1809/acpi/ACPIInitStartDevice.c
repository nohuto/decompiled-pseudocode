/*
 * XREFs of ACPIInitStartDevice @ 0x1C000D6A8
 * Callers:
 *     ACPIEcStartDevice @ 0x1C0051CA0 (ACPIEcStartDevice.c)
 *     ACPICMButtonStart @ 0x1C008E39C (ACPICMButtonStart.c)
 *     ACPIInternalDeviceClockIrpStartDevice @ 0x1C008E420 (ACPIInternalDeviceClockIrpStartDevice.c)
 *     ACPIBusIrpStartDevice @ 0x1C008E9D0 (ACPIBusIrpStartDevice.c)
 *     ACPIFilterIrpStartDevice @ 0x1C008EF70 (ACPIFilterIrpStartDevice.c)
 *     ACPIProcessorContainerStartDevice @ 0x1C00AE2B0 (ACPIProcessorContainerStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DA34 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DB28 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     PnpCmResourcesToBiosResources @ 0x1C008E450 (PnpCmResourcesToBiosResources.c)
 */

__int64 __fastcall ACPIInitStartDevice(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, _QWORD),
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  int v6; // r13d
  _QWORD *DeviceExtension; // rax
  __int64 v9; // r8
  unsigned __int64 *v10; // r15
  __int64 v11; // r14
  _QWORD *v12; // rbx
  _DWORD *v13; // r13
  _DWORD *v14; // rsi
  void *v15; // rdi
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  void *v22; // rax
  unsigned int v23; // ebx
  int v25; // esi
  SIZE_T v26; // rsi
  PVOID v27; // rax
  void *v28; // r12
  char v29; // si
  _OWORD *v30; // rax
  _QWORD *v31; // r13
  KIRQL v32; // al
  void *v33; // rcx
  KIRQL v34; // di
  void *v35; // rcx
  unsigned int v36; // r8d
  unsigned int v37; // edx
  _BYTE *v38; // rcx
  size_t v39; // r15
  PVOID PoolWithTag; // rax
  PVOID v41; // r14
  __int64 v42; // rax
  void *v43; // rdx
  void *v44; // rcx
  __int64 v45; // rax
  void *v46; // rdx
  void *v47; // rcx
  void *v48; // rcx
  __int64 v49; // rcx
  int v50; // edx
  void *v51; // rax
  __int64 v52; // rax
  int v53; // edx
  void *v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  void *v57; // rcx
  __int64 v58; // rax
  int v59; // edx
  void *v60; // rcx
  __int64 v61; // rax
  int v62; // edx
  void *v63; // rcx
  __int64 v64; // [rsp+30h] [rbp-50h]
  __int64 v65; // [rsp+38h] [rbp-48h]
  size_t v66; // [rsp+50h] [rbp-30h]
  size_t v67; // [rsp+50h] [rbp-30h]
  __int128 v68; // [rsp+58h] [rbp-28h] BYREF
  __int128 v69; // [rsp+68h] [rbp-18h]
  void *v70; // [rsp+78h] [rbp-8h]
  void *Src; // [rsp+C8h] [rbp+48h]

  v5 = a4;
  v6 = (int)a3;
  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v10 = 0LL;
  v11 = 0LL;
  v12 = DeviceExtension;
  v66 = DeviceExtension[89];
  if ( a2 )
  {
    v13 = *(_DWORD **)(a2 + 8);
    v14 = *(_DWORD **)(a2 + 16);
    Src = v13;
    if ( !v13 || *v13 != 1 )
      goto LABEL_11;
    v15 = &unk_1C006E28A;
    v16 = 0x200000000000LL;
    if ( v14 && *v14 == 1 && (DeviceExtension[119] & 0x100000000LL) != 0 )
    {
      v36 = v14[4];
      v37 = 0;
      if ( v36 )
      {
        v38 = v14 + 5;
        while ( *v38 != 2 || (v38[2] & 0x20) == 0 )
        {
          ++v37;
          v38 += 20;
          if ( v37 >= v36 )
            goto LABEL_45;
        }
        v39 = 20 * (v36 + 1);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v39, 0x53706341u);
        v41 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v14, v39);
          v48 = (void *)v12[79];
          if ( v48 )
            ExFreePoolWithTag(v48, 0);
          v12[79] = v41;
        }
        else
        {
          v42 = v12[1];
          v43 = &unk_1C006E28A;
          v44 = &unk_1C006E28A;
          if ( (v42 & 0x200000000000LL) != 0 )
          {
            v43 = (void *)v12[70];
            if ( (v42 & 0x400000000000LL) != 0 )
              v44 = (void *)v12[71];
          }
          v65 = (__int64)v43;
          LOBYTE(v43) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v43,
            1,
            21,
            (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
            v39,
            (char)v12,
            v65,
            (__int64)v44);
        }
      }
      else
      {
LABEL_45:
        v45 = DeviceExtension[1];
        v46 = &unk_1C006E28A;
        v47 = &unk_1C006E28A;
        if ( (v45 & 0x200000000000LL) != 0 )
        {
          v46 = (void *)v12[70];
          if ( (v45 & 0x400000000000LL) != 0 )
            v47 = (void *)v12[71];
        }
        v64 = (__int64)v46;
        LOBYTE(v46) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v46,
          17,
          20,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          (char)v12,
          v64,
          (__int64)v47);
        _InterlockedAnd64(v12 + 1, 0xFFFFFFFFFFFEFFFFuLL);
        _InterlockedAnd64(v12 + 119, 0xFFFFFFFEFFFFFFFFuLL);
        _InterlockedAnd64(v12 + 119, 0xFFFFFFFFFFEFFFFFuLL);
      }
    }
    v10 = (unsigned __int64 *)AMLIGetNamedChild(v66, 1397900127LL, v9, v16);
    v19 = AMLIGetNamedChild(v66, 1397904223LL, v17, v18);
    v11 = v19;
    if ( v10 && v19 )
    {
      v25 = AMLIEvalNameSpaceObject(v10, &v68, 0, 0LL);
      if ( v25 < 0 )
      {
        v49 = v12[1];
        v50 = 0;
        v51 = &unk_1C006E28A;
        if ( (v49 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v50 = 0;
          if ( (v49 & 0x400000000000LL) != 0 )
            v51 = (void *)v12[71];
        }
        LOBYTE(v50) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v50,
          1,
          23,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          v25,
          (char)v12,
          (__int64)v15,
          (__int64)v51);
        goto LABEL_75;
      }
      if ( WORD1(v68) != 3 || !DWORD2(v69) || !v70 )
      {
        v61 = v12[1];
        v62 = 0;
        v63 = &unk_1C006E28A;
        if ( (v61 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v62 = 0;
          if ( (v61 & 0x400000000000LL) != 0 )
            v63 = (void *)v12[71];
        }
        LOBYTE(v62) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v62,
          1,
          24,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          SBYTE2(v68),
          (char)v12,
          (__int64)v15,
          (__int64)v63);
        dword_1C0080868 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v68, 1u);
        v25 = -1073741823;
        goto LABEL_75;
      }
      v26 = (unsigned int)(20 * (v13[4] + 1));
      v67 = (unsigned int)v26;
      v27 = ExAllocatePoolWithTag(PagedPool, v26, 0x53706341u);
      v28 = v27;
      if ( v27 )
      {
        memmove(v27, v13, (unsigned int)v26);
        v29 = BYTE8(v69) + 40;
        v30 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(DWORD2(v69) + 40), 0x4F706341u);
        v31 = v30;
        if ( v30 )
        {
          *v30 = v68;
          v30[1] = v69;
          *((_QWORD *)v30 + 4) = (char *)v30 + 40;
          memmove((char *)v30 + 40, v70, DWORD2(v69));
          dword_1C0080868 = 0;
          pszDest = 0;
          FreeDataBuffs((__int64)&v68, 1u);
          v25 = PnpCmResourcesToBiosResources(v12, v28, v31[4], *((unsigned int *)v31 + 6));
          if ( v25 < 0 )
          {
            v58 = v12[1];
            v59 = 0;
            v60 = &unk_1C006E28A;
            if ( (v58 & 0x200000000000LL) != 0 )
            {
              v15 = (void *)v12[70];
              v59 = 0;
              if ( (v58 & 0x400000000000LL) != 0 )
                v60 = (void *)v12[71];
            }
            LOBYTE(v59) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v59,
              1,
              27,
              (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
              v25,
              (char)v12,
              (__int64)v15,
              (__int64)v60);
            ExFreePoolWithTag(v28, 0);
            ExFreePoolWithTag(v31, 0);
            goto LABEL_75;
          }
          memmove(v28, Src, v67);
          v32 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v33 = (void *)v12[80];
          v34 = v32;
          if ( v33 )
            ExFreePoolWithTag(v33, 0);
          v12[80] = v31;
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v34);
          v35 = (void *)v12[78];
          if ( v35 )
            ExFreePoolWithTag(v35, 0);
          v12[78] = v28;
          goto LABEL_10;
        }
        v55 = v12[1];
        v56 = 0;
        v57 = &unk_1C006E28A;
        if ( (v55 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v56 = 0;
          if ( (v55 & 0x400000000000LL) != 0 )
            v57 = (void *)v12[71];
        }
        LOBYTE(v56) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v56,
          1,
          26,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          v29,
          (char)v12,
          (__int64)v15,
          (__int64)v57);
        dword_1C0080868 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v68, 1u);
        ExFreePoolWithTag(v28, 0);
      }
      else
      {
        v52 = v12[1];
        v53 = 0;
        v54 = &unk_1C006E28A;
        if ( (v52 & 0x200000000000LL) != 0 )
        {
          v15 = (void *)v12[70];
          v53 = 0;
          if ( (v52 & 0x400000000000LL) != 0 )
            v54 = (void *)v12[71];
        }
        LOBYTE(v53) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v53,
          1,
          25,
          (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
          v26,
          (char)v12,
          (__int64)v15,
          (__int64)v54);
        dword_1C0080868 = 0;
        pszDest = 0;
        FreeDataBuffs((__int64)&v68, 1u);
      }
      v25 = -1073741670;
LABEL_75:
      a3(v12, a4, (unsigned int)v25);
      if ( v10 )
        AMLIDereferenceHandleEx((__int64)v10);
      if ( v11 )
        AMLIDereferenceHandleEx(v11);
      return (unsigned int)v25;
    }
    v20 = v12[1];
    v21 = 0;
    v22 = &unk_1C006E28A;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v15 = (void *)v12[70];
      v21 = 0;
      if ( (v20 & 0x400000000000LL) != 0 )
        v22 = (void *)v12[71];
    }
    LOBYTE(v21) = 2;
    WPP_RECORDER_SF_qss(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      1,
      22,
      (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
      (char)v12,
      (__int64)v15,
      (__int64)v22);
LABEL_10:
    v5 = a4;
LABEL_11:
    v6 = (int)a3;
  }
  ACPIThermalAcquireCoolingInterfaces(v12);
  *(_BYTE *)(*(_QWORD *)(a5 + 184) + 3LL) |= 1u;
  if ( (v12[119] & 0xC0000LL) == 0xC0000 && *((_DWORD *)v12 + 84) == 1 )
  {
    v25 = 0;
    goto LABEL_75;
  }
  v23 = ACPIDeviceInternalDeviceRequest((_DWORD)v12, 1, v6, v5, 4);
  if ( v23 == -1073741802 )
    v23 = 259;
  if ( v10 )
    AMLIDereferenceHandleEx((__int64)v10);
  if ( v11 )
    AMLIDereferenceHandleEx(v11);
  return v23;
}

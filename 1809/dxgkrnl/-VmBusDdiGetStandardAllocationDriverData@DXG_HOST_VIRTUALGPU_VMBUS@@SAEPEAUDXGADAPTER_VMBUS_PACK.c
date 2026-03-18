/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EDF00
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATION@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0036544 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATIO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F88FC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  char v4; // r15
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r12d
  int *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v23; // rax
  __int64 v24; // rax
  const GUID *v25; // r8
  __int64 v26; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  __int64 v33; // rax
  _BYTE v34[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v35; // [rsp+28h] [rbp-58h]
  char v36; // [rsp+30h] [rbp-50h]
  _BYTE v37[24]; // [rsp+38h] [rbp-48h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v38; // [rsp+50h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v37,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEALLOCATION>((__int64)a1);
    v8 = v6;
    if ( !v6 )
      goto LABEL_3;
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v10 = *(unsigned int *)(v9 + 256);
    if ( *(_DWORD *)(v6 + 36) >= (unsigned int)v10 )
    {
      v11 = WdLogNewEntry5_WdWarning(v10, v9, v7);
      *(_QWORD *)(v11 + 24) = 2238LL;
      WdLogEvent5_WdWarning(v11);
      goto LABEL_3;
    }
    v12 = *(_DWORD *)(v6 + 28) + 36;
    if ( v12 < 0x24 )
      goto LABEL_3;
    v13 = v12 + *(_DWORD *)(v8 + 32);
    if ( v13 < v12 )
      goto LABEL_3;
    v14 = v12 + *(_DWORD *)(v8 + 32);
    v4 = 1;
    v15 = (int *)operator new(v13, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( !v15 )
      goto LABEL_3;
    memset(&v38, 0, sizeof(v38));
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v38.StandardAllocationType = *(_DWORD *)(v8 + 24);
    v38.PhysicalAdapterIndex = *(_DWORD *)(v8 + 36);
    v19 = (unsigned int)(*(_DWORD *)(v8 + 24) - 1);
    if ( *(_DWORD *)(v8 + 24) == 1 )
    {
      v23 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v8 + 40);
      if ( !*(_DWORD *)(v8 + 44)
        || !v23->Width
        || (v19 = *(unsigned int *)(v8 + 48), !(_DWORD)v19)
        || (int)v19 > 199
        || !*(_DWORD *)(v8 + 52)
        || !*(_DWORD *)(v8 + 56)
        || *(_DWORD *)(v8 + 60) )
      {
        v24 = WdLogNewEntry5_WdWarning(v19, v16, v17);
        *(_QWORD *)(v24 + 24) = 2330LL;
        goto LABEL_69;
      }
    }
    else
    {
      v20 = (unsigned int)(*(_DWORD *)(v8 + 24) - 2);
      if ( *(_DWORD *)(v8 + 24) == 2 )
      {
        v23 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v8 + 40);
        if ( !*(_DWORD *)(v8 + 44)
          || !v23->Width
          || *(_DWORD *)(v8 + 52)
          || (v20 = *(unsigned int *)(v8 + 48), !(_DWORD)v20)
          || (int)v20 > 199 )
        {
          v24 = WdLogNewEntry5_WdWarning(v20, v16, v17);
          *(_QWORD *)(v24 + 24) = 2289LL;
          goto LABEL_69;
        }
      }
      else
      {
        v21 = (unsigned int)(*(_DWORD *)(v8 + 24) - 3);
        if ( *(_DWORD *)(v8 + 24) == 3 )
        {
          v23 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v8 + 40);
          if ( !*(_DWORD *)(v8 + 44) || !v23->Width || *(_DWORD *)(v8 + 48) )
          {
            v24 = WdLogNewEntry5_WdWarning(v21, v16, v17);
            *(_QWORD *)(v24 + 24) = 2271LL;
            goto LABEL_69;
          }
        }
        else
        {
          if ( *(_DWORD *)(v8 + 24) != 4 )
          {
            v22 = WdLogNewEntry5_WdError(v21);
            *(_QWORD *)(v22 + 24) = 2341LL;
            WdLogEvent5_WdError(v22);
LABEL_70:
            *v15 = -1073741811;
LABEL_71:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v15, v14);
            operator delete[](v15);
            goto LABEL_4;
          }
          v23 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v8 + 40);
          if ( !*(_DWORD *)(v8 + 44)
            || !v23->Width
            || (v21 = *(unsigned int *)(v8 + 52), !(_DWORD)v21)
            || (int)v21 > 8
            || *(_DWORD *)(v8 + 60)
            || (v16 = *(unsigned int *)(v8 + 48), !(_DWORD)v16) && (_DWORD)v21 != 7
            || (int)v16 > 199
            || *(_DWORD *)(v8 + 56) )
          {
            v24 = WdLogNewEntry5_WdWarning(v21, v16, v17);
            *(_QWORD *)(v24 + 24) = 2310LL;
LABEL_69:
            WdLogEvent5_WdWarning(v24);
            goto LABEL_70;
          }
        }
      }
    }
    v38.pCreateSharedPrimarySurfaceData = v23;
    v35 = v18;
    v36 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    if ( *(_DWORD *)(v18 + 176) != 1 )
    {
      *v15 = -1073741130;
      goto LABEL_45;
    }
    if ( !*(_DWORD *)(v8 + 28) )
    {
      LODWORD(v26) = 0;
      if ( !*(_DWORD *)(v8 + 32) )
        goto LABEL_54;
    }
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v18 + 2528),
                                     &v38,
                                     v25);
    *v15 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData < 0 )
    {
LABEL_50:
      v30 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v30 + 24) = *v15;
LABEL_51:
      WdLogEvent5_WdError(v30);
      goto LABEL_45;
    }
    v26 = *(unsigned int *)(v8 + 28);
    if ( v38.AllocationPrivateDriverDataSize > (unsigned int)v26
      || v38.ResourcePrivateDriverDataSize > *(_DWORD *)(v8 + 32) )
    {
      v33 = WdLogNewEntry5_WdWarning(v26, v28, v25);
      *(_QWORD *)(v33 + 24) = 2369LL;
      WdLogEvent5_WdWarning(v33);
      *v15 = -1073741811;
    }
    else
    {
LABEL_54:
      v38.AllocationPrivateDriverDataSize = v26;
      if ( (_DWORD)v26 )
        v38.pAllocationPrivateDriverData = v15 + 9;
      v38.ResourcePrivateDriverDataSize = *(_DWORD *)(v8 + 32);
      if ( v38.ResourcePrivateDriverDataSize )
        v38.pResourcePrivateDriverData = (char *)v15 + (unsigned int)v26 + 36;
      v31 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*(ADAPTER_RENDER **)(v18 + 2528), &v38, v25);
      *v15 = v31;
      if ( v31 < 0 )
        goto LABEL_50;
      v15[1] = v38.AllocationPrivateDriverDataSize;
      v15[2] = v38.ResourcePrivateDriverDataSize;
      if ( v38.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
      {
        if ( v38.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
        {
          *(_OWORD *)(v15 + 3) = *(_OWORD *)v38.pCreateSharedPrimarySurfaceData;
          goto LABEL_45;
        }
        if ( v38.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
        {
          pCreateSharedPrimarySurfaceData = v38.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v15 + 3) = *(_QWORD *)v38.pCreateSharedPrimarySurfaceData;
          v15[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_45;
        }
        if ( v38.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
        {
          v30 = WdLogNewEntry5_WdError((unsigned int)(v38.StandardAllocationType - 3));
          *(_QWORD *)(v30 + 24) = 2410LL;
          goto LABEL_51;
        }
      }
      *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v15 + 3) = *v38.pCreateSharedPrimarySurfaceData;
    }
LABEL_45:
    if ( v36 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
    goto LABEL_71;
  }
  v3 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v3 + 24) = 2232LL;
  WdLogEvent5_WdError(v3);
LABEL_3:
  v4 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
  return v4;
}

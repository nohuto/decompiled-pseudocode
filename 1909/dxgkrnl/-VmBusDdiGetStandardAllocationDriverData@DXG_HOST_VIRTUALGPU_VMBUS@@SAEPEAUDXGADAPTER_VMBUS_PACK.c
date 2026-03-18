/*
 * XREFs of ?VmBusDdiGetStandardAllocationDriverData@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021DF50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA8C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F364C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDdiGetStandardAllocationDriverData(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  char v6; // r15
  _DWORD *v8; // rax
  __int64 v9; // r8
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  int *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *v24; // rax
  __int64 v25; // rax
  const GUID *v26; // r8
  __int64 v27; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  D3DKMDT_SHAREDPRIMARYSURFACEDATA *pCreateSharedPrimarySurfaceData; // rax
  __int64 v34; // rax
  _BYTE v35[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v36; // [rsp+28h] [rbp-58h]
  char v37; // [rsp+30h] [rbp-50h]
  _BYTE v38[24]; // [rsp+38h] [rbp-48h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v39; // [rsp+50h] [rbp-30h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v38,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v8 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY>((__int64)a1);
    v10 = v8;
    if ( !v8 )
      goto LABEL_3;
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v12 = *(unsigned int *)(v11 + 256);
    if ( v8[9] >= (unsigned int)v12 )
    {
      v13 = WdLogNewEntry5_WdWarning(v12, v11, v9);
      *(_QWORD *)(v13 + 24) = 2200LL;
      WdLogEvent5_WdWarning(v13);
      goto LABEL_3;
    }
    v14 = v8[7] + 36;
    if ( v8[7] >= 0xFFFFFFDC )
      goto LABEL_3;
    v15 = v14 + v8[8];
    if ( v15 < v14 )
      goto LABEL_3;
    v6 = 1;
    v16 = (int *)operator new(v15, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( !v16 )
      goto LABEL_3;
    memset(&v39, 0, sizeof(v39));
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
    v39.StandardAllocationType = v10[6];
    v39.PhysicalAdapterIndex = v10[9];
    v20 = (unsigned int)(v10[6] - 1);
    if ( v10[6] == 1 )
    {
      v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v10 + 10);
      if ( !v10[11]
        || !v24->Width
        || (v20 = (unsigned int)v10[12], !(_DWORD)v20)
        || (int)v20 > 199
        || !v10[13]
        || !v10[14]
        || v10[15] )
      {
        v25 = WdLogNewEntry5_WdWarning(v20, v17, v18);
        *(_QWORD *)(v25 + 24) = 2292LL;
        goto LABEL_69;
      }
    }
    else
    {
      v21 = (unsigned int)(v10[6] - 2);
      if ( v10[6] == 2 )
      {
        v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v10 + 10);
        if ( !v10[11] || !v24->Width || v10[13] || (v21 = (unsigned int)v10[12], !(_DWORD)v21) || (int)v21 > 199 )
        {
          v25 = WdLogNewEntry5_WdWarning(v21, v17, v18);
          *(_QWORD *)(v25 + 24) = 2251LL;
          goto LABEL_69;
        }
      }
      else
      {
        v22 = (unsigned int)(v10[6] - 3);
        if ( v10[6] == 3 )
        {
          v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v10 + 10);
          if ( !v10[11] || !v24->Width || v10[12] )
          {
            v25 = WdLogNewEntry5_WdWarning(v22, v17, v18);
            *(_QWORD *)(v25 + 24) = 2233LL;
            goto LABEL_69;
          }
        }
        else
        {
          if ( v10[6] != 4 )
          {
            v23 = WdLogNewEntry5_WdError(v22, v17, v18);
            *(_QWORD *)(v23 + 24) = 2303LL;
            WdLogEvent5_WdError(v23);
LABEL_70:
            *v16 = -1073741811;
LABEL_71:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v16, v15);
            operator delete[](v16);
            goto LABEL_4;
          }
          v24 = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v10 + 10);
          if ( !v10[11]
            || !v24->Width
            || (v22 = (unsigned int)v10[13], !(_DWORD)v22)
            || (int)v22 > 8
            || v10[15]
            || (v17 = (unsigned int)v10[12], !(_DWORD)v17) && (_DWORD)v22 != 7
            || (int)v17 > 199
            || v10[14] )
          {
            v25 = WdLogNewEntry5_WdWarning(v22, v17, v18);
            *(_QWORD *)(v25 + 24) = 2272LL;
LABEL_69:
            WdLogEvent5_WdWarning(v25);
            goto LABEL_70;
          }
        }
      }
    }
    v39.pCreateSharedPrimarySurfaceData = v24;
    v36 = v19;
    v37 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    if ( *(_DWORD *)(v19 + 176) != 1 )
    {
      *v16 = -1073741130;
      goto LABEL_45;
    }
    if ( !v10[7] )
    {
      LODWORD(v27) = 0;
      if ( !v10[8] )
        goto LABEL_54;
    }
    StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(
                                     *(ADAPTER_RENDER **)(v19 + 2560),
                                     &v39,
                                     v26);
    *v16 = StandardAllocationDriverData;
    if ( StandardAllocationDriverData < 0 )
    {
LABEL_50:
      v31 = WdLogNewEntry5_WdError(v30, v29, v26);
      *(_QWORD *)(v31 + 24) = *v16;
LABEL_51:
      WdLogEvent5_WdError(v31);
      goto LABEL_45;
    }
    v27 = (unsigned int)v10[7];
    if ( v39.AllocationPrivateDriverDataSize > (unsigned int)v27 || v39.ResourcePrivateDriverDataSize > v10[8] )
    {
      v34 = WdLogNewEntry5_WdWarning(v27, v29, v26);
      *(_QWORD *)(v34 + 24) = 2331LL;
      WdLogEvent5_WdWarning(v34);
      *v16 = -1073741811;
    }
    else
    {
LABEL_54:
      v39.AllocationPrivateDriverDataSize = v27;
      if ( (_DWORD)v27 )
        v39.pAllocationPrivateDriverData = v16 + 9;
      v39.ResourcePrivateDriverDataSize = v10[8];
      if ( v39.ResourcePrivateDriverDataSize )
        v39.pResourcePrivateDriverData = (char *)v16 + (unsigned int)v27 + 36;
      v32 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(*(ADAPTER_RENDER **)(v19 + 2560), &v39, v26);
      *v16 = v32;
      if ( v32 < 0 )
        goto LABEL_50;
      v16[1] = v39.AllocationPrivateDriverDataSize;
      v16[2] = v39.ResourcePrivateDriverDataSize;
      if ( v39.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_SHAREDPRIMARYSURFACE )
      {
        if ( v39.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_SHADOWSURFACE )
        {
          *(_OWORD *)(v16 + 3) = *(_OWORD *)v39.pCreateSharedPrimarySurfaceData;
          goto LABEL_45;
        }
        if ( v39.StandardAllocationType == D3DKMDT_STANDARDALLOCATION_STAGINGSURFACE )
        {
          pCreateSharedPrimarySurfaceData = v39.pCreateSharedPrimarySurfaceData;
          *(_QWORD *)(v16 + 3) = *(_QWORD *)v39.pCreateSharedPrimarySurfaceData;
          v16[5] = pCreateSharedPrimarySurfaceData->Format;
          goto LABEL_45;
        }
        if ( v39.StandardAllocationType != D3DKMDT_STANDARDALLOCATION_GDISURFACE )
        {
          v31 = WdLogNewEntry5_WdError((unsigned int)(v39.StandardAllocationType - 3), v29, v26);
          *(_QWORD *)(v31 + 24) = 2372LL;
          goto LABEL_51;
        }
      }
      *(D3DKMDT_SHAREDPRIMARYSURFACEDATA *)(v16 + 3) = *v39.pCreateSharedPrimarySurfaceData;
    }
LABEL_45:
    if ( v37 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
    goto LABEL_71;
  }
  v5 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v5 + 24) = 2194LL;
  WdLogEvent5_WdError(v5);
LABEL_3:
  v6 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  return v6;
}

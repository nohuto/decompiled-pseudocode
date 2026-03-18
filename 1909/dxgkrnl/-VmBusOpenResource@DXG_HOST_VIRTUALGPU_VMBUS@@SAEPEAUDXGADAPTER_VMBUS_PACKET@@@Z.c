/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0221450
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000CE08 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CB54 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F02B0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkOpenResource @ 0x1C00F2740 (DxgkOpenResource.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rax
  char v7; // r14
  PVOID v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // eax
  _DWORD *v13; // r15
  SIZE_T v14; // rax
  PVOID v15; // r12
  __int64 v16; // rsi
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  const GUID *v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  const GUID *v34; // r8
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rcx
  _QWORD v38[14]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v39[24]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v40[72]; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned int v41; // [rsp+100h] [rbp+67h]
  PVOID v42; // [rsp+108h] [rbp+6Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v40,
    (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 216LL));
  v5 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v42 = 0LL;
    v9 = 0LL;
    v10 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    v11 = v10;
    if ( !v10 )
      goto LABEL_3;
    v12 = *(_DWORD *)(v10 + 36);
    if ( v12 > 0x8000 )
      goto LABEL_3;
    v7 = 1;
    v41 = 4 * v12 + 8;
    v13 = operator new(v41, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( !v13 )
      goto LABEL_3;
    v14 = 80LL * *(unsigned int *)(v11 + 36);
    if ( !is_mul_ok(*(unsigned int *)(v11 + 36), 0x50uLL) )
      v14 = -1LL;
    v15 = operator new(v14, 0x4B677844u, 1, PagedPool);
    if ( !v15 )
      goto LABEL_11;
    v17 = *(_DWORD *)(v11 + 40);
    if ( v17 )
    {
      if ( v17 > 0x20000 )
      {
        LODWORD(v16) = -1073741811;
        goto LABEL_35;
      }
      v42 = operator new(*(unsigned int *)(v11 + 40), 0x4B677844u, 1, PagedPool);
      v9 = v42;
      if ( !v42 )
      {
LABEL_11:
        LODWORD(v16) = -1073741801;
LABEL_35:
        v13[1] = v16;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v13, v41);
        operator delete[](v13);
        operator delete[](v15);
        operator delete[](v42);
        goto LABEL_4;
      }
    }
    if ( *(_BYTE *)(v11 + 28) )
    {
      memset(v38, 0, 0x68uLL);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v39,
        *((struct _KTHREAD ***)a1 + 7));
      v19 = *(unsigned int *)(v11 + 32);
      v20 = *((_QWORD *)a1 + 7);
      v21 = (*(_DWORD *)(v11 + 32) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 224) )
        goto LABEL_23;
      v22 = *(_QWORD *)(v20 + 208);
      v18 = (unsigned int)v21;
      v19 = ((unsigned int)v19 >> 25) & 0x60;
      v20 = *(unsigned int *)(v22 + 16 * v21 + 8);
      if ( (_BYTE)v19 != (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60) || (v20 & 0x2000) != 0 || (v20 & 0x1F) == 0 )
        goto LABEL_23;
      v18 = 2LL * (unsigned int)v21;
      v20 &= 0x1Fu;
      if ( (_BYTE)v20 != 13 )
      {
        v23 = WdLogNewEntry5_WdError(v20, v18, v19);
        *(_QWORD *)(v23 + 24) = 267LL;
        WdLogEvent5_WdError(v23);
LABEL_23:
        v24 = WdLogNewEntry5_WdError(v20, v18, v19);
        *(_QWORD *)(v24 + 24) = *(unsigned int *)(v11 + 32);
        WdLogEvent5_WdError(v24);
        LODWORD(v16) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
        goto LABEL_35;
      }
      v25 = *(_QWORD *)(v22 + 16LL * (unsigned int)v21);
      if ( !v25 )
        goto LABEL_23;
      if ( *(_DWORD *)v25 != 4 )
        goto LABEL_23;
      v20 = *(_QWORD *)(v25 + 16);
      if ( !v20 )
        goto LABEL_23;
      v38[1] = *(_QWORD *)(v25 + 16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
      LODWORD(v38[0]) = *(_DWORD *)(v11 + 24);
      LODWORD(v38[2]) = *(_DWORD *)(v11 + 36);
      LODWORD(v38[8]) = *(_DWORD *)(v11 + 40);
      v38[3] = v15;
      v38[9] = v9;
      v28 = DxgkOpenResourceFromNtHandle((ULONG64)v38, v26, v27);
      v16 = v28;
      if ( v28 >= 0 )
      {
        *v13 = v38[10];
        if ( *(_DWORD *)(v11 + 36) )
        {
          do
          {
            v32 = v5++;
            v13[v32 + 2] = *((_DWORD *)v15 + 20 * v32);
          }
          while ( v5 < *(_DWORD *)(v11 + 36) );
        }
        goto LABEL_35;
      }
    }
    else
    {
      memset(v38, 0, 0x48uLL);
      LODWORD(v38[0]) = *(_DWORD *)(v11 + 24);
      HIDWORD(v38[0]) = *(_DWORD *)(v11 + 32);
      LODWORD(v38[1]) = *(_DWORD *)(v11 + 36);
      LODWORD(v38[8]) = *(_DWORD *)(v11 + 40);
      v38[2] = v15;
      v38[7] = v9;
      v35 = DxgkOpenResource((ULONG64)v38, v33, v34);
      v16 = v35;
      if ( v35 >= 0 )
      {
        *v13 = HIDWORD(v38[8]);
        if ( *(_DWORD *)(v11 + 36) )
        {
          do
          {
            v37 = v5++;
            v13[v37 + 2] = *((_DWORD *)v15 + 20 * v37);
          }
          while ( v5 < *(_DWORD *)(v11 + 36) );
        }
        goto LABEL_35;
      }
    }
    v36 = WdLogNewEntry5_WdError(v30, v29, v31);
    *(_QWORD *)(v36 + 24) = v16;
    WdLogEvent5_WdError(v36);
    goto LABEL_35;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2, v4);
  *(_QWORD *)(v6 + 24) = 1146LL;
  WdLogEvent5_WdError(v6);
LABEL_3:
  v7 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
  return v7;
}

/*
 * XREFs of ?VmBusOpenResource@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01F1140
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0010FB0 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003660C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU@@@@YAPEAUDXGKVMB_COMMAND_WAITFOR.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkOpenResourceFromNtHandle @ 0x1C00F17E0 (DxgkOpenResourceFromNtHandle.c)
 *     DxgkOpenResource @ 0x1C00F4AA0 (DxgkOpenResource.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenResource(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax
  char v5; // r14
  PVOID v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  _DWORD *v11; // r15
  SIZE_T v12; // rax
  PVOID v13; // r12
  __int64 v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  const GUID *v23; // r8
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  const GUID *v28; // r8
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD v32[14]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v33[24]; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v34[72]; // [rsp+A8h] [rbp+Fh] BYREF
  unsigned int v35; // [rsp+100h] [rbp+67h]
  PVOID v36; // [rsp+108h] [rbp+6Fh]

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v34,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)a1 + 5) + 216LL));
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 5) + 157LL) )
  {
    v36 = 0LL;
    v7 = 0LL;
    v8 = CastToVmBusCommand<DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMGPU>((__int64)a1);
    v9 = v8;
    if ( !v8 )
      goto LABEL_3;
    v10 = *(_DWORD *)(v8 + 36);
    if ( v10 > 0x8000 )
      goto LABEL_3;
    v5 = 1;
    v35 = 4 * v10 + 8;
    v11 = operator new(v35, 0x4B677844u, 1, (POOL_TYPE)512);
    if ( !v11 )
      goto LABEL_3;
    v12 = 80LL * *(unsigned int *)(v9 + 36);
    if ( !is_mul_ok(*(unsigned int *)(v9 + 36), 0x50uLL) )
      v12 = -1LL;
    v13 = operator new(v12, 0x4B677844u, 1, PagedPool);
    if ( !v13 )
      goto LABEL_11;
    v15 = *(_DWORD *)(v9 + 40);
    if ( v15 )
    {
      if ( v15 > 0x20000 )
      {
        LODWORD(v14) = -1073741811;
        goto LABEL_35;
      }
      v36 = operator new(*(unsigned int *)(v9 + 40), 0x4B677844u, 1, PagedPool);
      v7 = v36;
      if ( !v36 )
      {
LABEL_11:
        LODWORD(v14) = -1073741801;
LABEL_35:
        v11[1] = v14;
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v11, v35);
        operator delete[](v11);
        operator delete[](v13);
        operator delete[](v36);
        goto LABEL_4;
      }
    }
    if ( *(_BYTE *)(v9 + 28) )
    {
      memset(v32, 0, 0x68uLL);
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)v33,
        *((struct _KTHREAD ***)a1 + 7));
      v16 = *((_QWORD *)a1 + 7);
      v17 = (*(_DWORD *)(v9 + 32) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 248) )
        goto LABEL_23;
      v18 = *(_QWORD *)(v16 + 232);
      v16 = *(unsigned int *)(v18 + 16 * v17 + 8);
      if ( ((*(_DWORD *)(v9 + 32) >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
        || (v16 & 0x2000) != 0
        || (v16 & 0x1F) == 0 )
      {
        goto LABEL_23;
      }
      v16 &= 0x1Fu;
      if ( (_BYTE)v16 != 13 )
      {
        v19 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v19 + 24) = 316LL;
        WdLogEvent5_WdError(v19);
LABEL_23:
        v20 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v20 + 24) = *(unsigned int *)(v9 + 32);
        WdLogEvent5_WdError(v20);
        LODWORD(v14) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
        goto LABEL_35;
      }
      v21 = *(_QWORD *)(v18 + 16LL * (unsigned int)v17);
      if ( !v21 )
        goto LABEL_23;
      if ( *(_DWORD *)v21 != 4 )
        goto LABEL_23;
      v16 = *(_QWORD *)(v21 + 16);
      if ( !v16 )
        goto LABEL_23;
      v32[1] = *(_QWORD *)(v21 + 16);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
      LODWORD(v32[0]) = *(_DWORD *)(v9 + 24);
      LODWORD(v32[2]) = *(_DWORD *)(v9 + 36);
      LODWORD(v32[8]) = *(_DWORD *)(v9 + 40);
      v32[3] = v13;
      v32[9] = v7;
      v24 = DxgkOpenResourceFromNtHandle((ULONG64)v32, v22, v23);
      v14 = v24;
      if ( v24 >= 0 )
      {
        *v11 = v32[10];
        if ( *(_DWORD *)(v9 + 36) )
        {
          do
          {
            v26 = v3++;
            v11[v26 + 2] = *((_DWORD *)v13 + 20 * v26);
          }
          while ( v3 < *(_DWORD *)(v9 + 36) );
        }
        goto LABEL_35;
      }
    }
    else
    {
      memset(v32, 0, 0x48uLL);
      LODWORD(v32[0]) = *(_DWORD *)(v9 + 24);
      HIDWORD(v32[0]) = *(_DWORD *)(v9 + 32);
      LODWORD(v32[1]) = *(_DWORD *)(v9 + 36);
      LODWORD(v32[8]) = *(_DWORD *)(v9 + 40);
      v32[2] = v13;
      v32[7] = v7;
      v29 = DxgkOpenResource((ULONG64)v32, v27, v28);
      v14 = v29;
      if ( v29 >= 0 )
      {
        *v11 = HIDWORD(v32[8]);
        if ( *(_DWORD *)(v9 + 36) )
        {
          do
          {
            v31 = v3++;
            v11[v31 + 2] = *((_DWORD *)v13 + 20 * v31);
          }
          while ( v3 < *(_DWORD *)(v9 + 36) );
        }
        goto LABEL_35;
      }
    }
    v30 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v30 + 24) = v14;
    WdLogEvent5_WdError(v30);
    goto LABEL_35;
  }
  v4 = WdLogNewEntry5_WdError(v2);
  *(_QWORD *)(v4 + 24) = 1151LL;
  WdLogEvent5_WdError(v4);
LABEL_3:
  v5 = 0;
LABEL_4:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
  return v5;
}

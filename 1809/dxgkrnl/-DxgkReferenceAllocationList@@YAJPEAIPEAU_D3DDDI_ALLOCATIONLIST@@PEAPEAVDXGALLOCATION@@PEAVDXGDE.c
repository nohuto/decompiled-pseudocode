/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C01151A0
 * Callers:
 *     DxgkRender @ 0x1C00EAB30 (DxgkRender.c)
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z @ 0x1C0115420 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@@Z.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EAD90 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // r15
  __int64 *ThreadProperty; // rax
  __int64 *v11; // rbx
  __int64 v12; // rdx
  struct DXGALLOCATION **v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // r14d
  unsigned int i; // esi
  __int64 hAllocation; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  unsigned int v29; // [rsp+24h] [rbp-54h]
  _BYTE v30[24]; // [rsp+38h] [rbp-40h] BYREF

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v11 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v11;
      }
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, (struct _KTHREAD **)v9);
  v15 = *a1;
  v29 = *a1;
  v16 = 0;
  for ( i = 0; i < v15; ++i )
  {
    hAllocation = a2->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v19 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v19 >= *(_DWORD *)(v9 + 248) )
        goto LABEL_14;
      v14 = (unsigned int)v19;
      v20 = *(_QWORD *)(v9 + 232);
      v12 = *(unsigned int *)(v20 + 16 * v19 + 8);
      v13 = (struct DXGALLOCATION **)(((unsigned int)hAllocation >> 25) & 0x60);
      if ( (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
        || (v12 & 0x2000) != 0
        || (v12 & 0x1F) == 0 )
      {
        goto LABEL_14;
      }
      v14 = 2LL * (unsigned int)v19;
      v12 &= 0x1Fu;
      if ( (_BYTE)v12 != 5 )
      {
        v21 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v21 + 24) = 316LL;
        WdLogEvent5_WdError(v21);
LABEL_14:
        v22 = WdLogNewEntry5_WdWarning(v13, v12, v14);
        *(_QWORD *)(v22 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v22);
        v16 = -1071775468;
        break;
      }
      v23 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v19);
      if ( !v23 )
        goto LABEL_14;
      if ( a4 )
      {
        v24 = *((_QWORD *)a4 + 2);
        if ( *(_QWORD *)(v24 + 16) != *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) )
        {
          v25 = WdLogNewEntry5_WdWarning(v24, v12, v14);
          *(_QWORD *)(v25 + 24) = hAllocation;
          WdLogEvent5_WdWarning(v25);
          v16 = -1071775467;
          break;
        }
      }
      if ( !ExAcquireRundownProtection(v23 + 11) )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26);
        v27[3] = 275LL;
        v27[4] = 38LL;
        v27[5] = v23;
        v27[6] = 0LL;
        v27[7] = 0LL;
        WdLogEvent5_WdCriticalError(v27);
      }
      v13 = a3;
      a3[i] = (struct DXGALLOCATION *)v23;
      v15 = v29;
    }
    ++a2;
  }
  *a1 = i;
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30);
  return v16;
}

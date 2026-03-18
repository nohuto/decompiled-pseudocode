/*
 * XREFs of ?DxgkReferenceAllocationList@@YAJPEAIPEAU_D3DDDI_ALLOCATIONLIST@@PEAPEAVDXGALLOCATION@@PEAVDXGDEVICE@@@Z @ 0x1C0115F00
 * Callers:
 *     ?DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z @ 0x1C01160D0 (-DxgkCddGdiCommand@@YAJPEAU_DXGKCDD_SUBMITRENDERTOHWQUEUE@@PEAD@Z.c)
 *     DxgkRender @ 0x1C011C610 (DxgkRender.c)
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021A720 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02386DC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkReferenceAllocationList(
        unsigned int *a1,
        struct _D3DDDI_ALLOCATIONLIST *a2,
        struct DXGALLOCATION **a3,
        struct DXGDEVICE *a4)
{
  struct _D3DDDI_ALLOCATIONLIST *v4; // rsi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct DXGALLOCATION **v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  unsigned int i; // ebx
  __int64 hAllocation; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // r9
  struct _EX_RUNDOWN_REF *v20; // r14
  __int64 v21; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  _BYTE v28[88]; // [rsp+30h] [rbp-58h] BYREF
  struct _D3DDDI_ALLOCATIONLIST *v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v23 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v8 = *v23;
    }
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)v8);
  v12 = *a1;
  v13 = 0;
  for ( i = 0; i < v12; ++i )
  {
    hAllocation = v4->hAllocation;
    if ( (_DWORD)hAllocation )
    {
      v16 = ((unsigned int)hAllocation >> 6) & 0xFFFFFF;
      if ( (unsigned int)v16 >= *(_DWORD *)(v8 + 224) )
        goto LABEL_7;
      v11 = (unsigned int)v16;
      v19 = *(_QWORD *)(v8 + 208);
      v9 = *(unsigned int *)(v19 + 16 * v16 + 8);
      v10 = (struct DXGALLOCATION **)(((unsigned int)hAllocation >> 25) & 0x60);
      if ( (((unsigned int)hAllocation >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v16 + 8) & 0x60)
        || (v9 & 0x2000) != 0
        || (v9 & 0x1F) == 0 )
      {
        goto LABEL_7;
      }
      v11 = 2LL * (unsigned int)v16;
      v9 &= 0x1Fu;
      if ( (_BYTE)v9 != 5 )
      {
        v24 = WdLogNewEntry5_WdError(v10, v9, v11);
        *(_QWORD *)(v24 + 24) = 267LL;
        WdLogEvent5_WdError(v24);
LABEL_7:
        v17 = WdLogNewEntry5_WdWarning(v10, v9, v11);
        *(_QWORD *)(v17 + 24) = hAllocation;
        WdLogEvent5_WdWarning(v17);
        v13 = -1071775468;
        break;
      }
      v20 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * (unsigned int)v16);
      if ( !v20 )
        goto LABEL_7;
      if ( a4 )
      {
        v25 = *((_QWORD *)a4 + 2);
        if ( *(_QWORD *)(v25 + 16) != *(_QWORD *)(*(_QWORD *)(v20[1].Count + 16) + 16LL) )
        {
          v26 = WdLogNewEntry5_WdWarning(v25, v9, v11);
          *(_QWORD *)(v26 + 24) = hAllocation;
          WdLogEvent5_WdWarning(v26);
          v13 = -1071775467;
          break;
        }
      }
      if ( !ExAcquireRundownProtection(v20 + 11) )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v9);
        v27[3] = 275LL;
        v27[4] = 38LL;
        v27[5] = v20;
        v27[6] = 0LL;
        v27[7] = 0LL;
        WdLogEvent5_WdCriticalError(v27);
      }
      v10 = a3;
      a3[i] = (struct DXGALLOCATION *)v20;
    }
    v4 = ++v29;
  }
  *a1 = i;
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28);
  return v13;
}

/*
 * XREFs of ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0076B40
 * Callers:
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0071350 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C007FE0C (-TerminateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FL.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchSubmitDeviceCommand @ 0x1C0002D20 (VidSchSubmitDeviceCommand.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0p @ 0x1C0025AA4 (McTemplateK0p.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     VidSchFlushDevice @ 0x1C007B810 (VidSchFlushDevice.c)
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C007C598 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TerminateOneAllocation(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        __int64 a3,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a4,
        struct DXGTERMINATIONTRACKER *a5)
{
  char v6; // bl
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // r15
  bool v12; // zf
  __int64 v13; // r14
  __int64 v14; // rcx
  const GUID *v15; // r8
  char v16; // al
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD v29[4]; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v30[8]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v31; // [rsp+60h] [rbp-69h]
  int v32; // [rsp+68h] [rbp-61h]
  _QWORD v33[18]; // [rsp+78h] [rbp-51h] BYREF

  v6 = (char)a4.0;
  v8 = **a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v8 + 320));
  *((_DWORD *)a2 + 8) |= 1u;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 320));
  v11 = a2[1];
  a2[24] = (__int64 *)a5;
  v12 = *v11 == -41240;
  v13 = *v11 + 41240;
  *((_BYTE *)v11 + 48) = 1;
  v31 = v13;
  if ( !v12 && *(struct _KTHREAD **)(v13 + 8) == KeGetCurrentThread() )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v27 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v27);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v26 = *(_DWORD *)(v13 + 16);
      if ( v26 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, (const EVENT_DESCRIPTOR *)"g", v15, v26);
    }
    ExAcquirePushLockExclusiveEx(v13, 0LL);
  }
  *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
  v16 = *((_DWORD *)v11 + 13) & 7;
  v32 = 2;
  if ( v16 == 4 )
  {
    VIDMM_DEVICE::MoveToPenaltyBoxBandNoLock(v11, 3LL);
    KeSetEvent(*(PRKEVENT *)(*(_QWORD *)*v11 + 152LL), 0, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v30);
  while ( *((_DWORD *)a2 + 40) )
    KeWaitForSingleObject(a2 + 21, Executive, 0, 0, 0LL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0p(v17, &EventTerminateAllocation, v18, a2);
  v19 = **a2;
  v20 = *(_QWORD *)(v19 + 16);
  if ( (**(_DWORD **)(v19 + 504) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)this + 1936);
    *((_QWORD *)this + 969) += v20;
  }
  else
  {
    ++*((_DWORD *)this + 1940);
    *((_QWORD *)this + 971) += v20;
  }
  v29[1] = a2;
  v29[0] = 1LL;
  memset(v33, 0, 0x88uLL);
  v33[6] = v29;
  LODWORD(v33[0]) = (v6 & 1) == 0 || (**(_DWORD **)(v8 + 504) & 0x4000) != 0;
  v21 = a2[1][4];
  v22 = VidSchSubmitDeviceCommand(v21, (__int64)v33);
  v25 = v22;
  if ( v22 < 0 )
  {
    v28 = WdLogNewEntry5_WdWarning(v24, v23);
    *(_QWORD *)(v28 + 24) = v25;
    WdLogEvent5_WdWarning(v28);
    v29[2] = 5LL;
    v29[3] = 0LL;
    VidSchFlushDevice(v21);
    LODWORD(v33[0]) = 0;
    VidSchSubmitDeviceCommand(v21, (__int64)v33);
  }
}

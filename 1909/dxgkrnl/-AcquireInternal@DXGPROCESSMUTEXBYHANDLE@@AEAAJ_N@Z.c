/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013F72C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C5650 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C013F130 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C013F370 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C0152920 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0204C38 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C02086CC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F2F4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0240028 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C025FBB0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C025FE30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0260240 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C02603B0 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C02607D0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C02613C0 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018DCC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C013F81C (-GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  bool v3; // bl
  struct _KAPC_STATE *v4; // rbp
  _BYTE *v5; // r14
  __int64 v6; // rdx
  int v7; // ebx
  DXGPROCESS *v8; // rsi
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  DXGPROCESS *v11; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rax
  void *v15; // rdi
  __int64 v16; // rdx
  _BYTE v17[16]; // [rsp+40h] [rbp-28h] BYREF
  DXGPROCESS *v18; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v17, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v4 = (struct _KAPC_STATE *)((char *)this + 32);
  v5 = (char *)this + 29;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_DWORD *)this + 6),
         v3,
         (bool *)this + 29,
         (bool *)this + 30,
         (struct _KAPC_STATE *)((char *)this + 32),
         &v18);
  if ( v7 >= 0 )
  {
    v8 = v18;
    DXGPROCESS::AcquireReference(v18, v6);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)v8 + 13) + 16LL) == CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(CurrentThread, v9);
      *(_QWORD *)(v13 + 24) = 2736LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v9);
      v14[3] = 275LL;
      v14[4] = 4LL;
      v14[5] = this;
      v14[6] = 0LL;
      v14[7] = 0LL;
      WdLogEvent5_WdCriticalError(v14);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v8 + 13));
    v11 = v18;
    if ( *((_DWORD *)v18 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v18;
      v7 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v8 + 13));
      v15 = (void *)*((_QWORD *)v11 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
      DXGPROCESS::ReleaseReference(v11, v16);
      if ( *v5 )
      {
        KeUnstackDetachProcess(v4);
        *v5 = 0;
      }
      ObfDereferenceObject(v15);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
      v7 = -1073741130;
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v7;
}

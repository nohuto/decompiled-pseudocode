/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C012EA08
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00B3150 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C012FA90 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C012FB80 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C013DF50 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C01D6738 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C01D9BDC (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C050 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C020CD00 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C022ACB0 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C022AF30 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C022B340 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C022B4B0 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C022B8D0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C022C4B0 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0010340 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C001048C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C012EAF8 (-GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall DXGPROCESSMUTEXBYHANDLE::AcquireInternal(DXGPROCESSMUTEXBYHANDLE *this, bool a2)
{
  struct _KAPC_STATE *v4; // rbp
  _BYTE *v5; // r14
  int v6; // ebx
  DXGPROCESS *v7; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  DXGPROCESS *v9; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  void *v13; // rdi
  _BYTE v14[16]; // [rsp+40h] [rbp-28h] BYREF
  DXGPROCESS *v15; // [rsp+70h] [rbp+8h] BYREF

  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v4 = (struct _KAPC_STATE *)((char *)this + 32);
  v5 = (char *)this + 29;
  v6 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_DWORD *)this + 6),
         a2,
         (bool *)this + 29,
         (bool *)this + 30,
         (struct _KAPC_STATE *)((char *)this + 32),
         &v15);
  if ( v6 >= 0 )
  {
    v7 = v15;
    DXGPROCESS::AcquireReference(v15);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
    CurrentThread = KeGetCurrentThread();
    if ( *(struct _KTHREAD **)(*((_QWORD *)v7 + 14) + 8LL) == CurrentThread )
    {
      v11 = WdLogNewEntry5_WdAssertion(CurrentThread);
      *(_QWORD *)(v11 + 24) = 2732LL;
      WdLogEvent5_WdAssertion(v11);
    }
    if ( *((_BYTE *)this + 28) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
      v12[3] = 275LL;
      v12[4] = 4LL;
      v12[5] = this;
      v12[6] = 0LL;
      v12[7] = 0LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v7 + 14));
    v9 = v15;
    if ( *((_DWORD *)v15 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v15;
      v6 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v7 + 14));
      v13 = (void *)*((_QWORD *)v9 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
      DXGPROCESS::ReleaseReference(v9);
      if ( *v5 )
      {
        KeUnstackDetachProcess(v4);
        *v5 = 0;
      }
      ObfDereferenceObject(v13);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
      v6 = -1073741130;
    }
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return (unsigned int)v6;
}

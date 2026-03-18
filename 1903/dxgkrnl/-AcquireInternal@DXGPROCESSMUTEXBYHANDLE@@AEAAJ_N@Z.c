/*
 * XREFs of ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C013C31C
 * Callers:
 *     DxgkQueryVideoMemoryInfo @ 0x1C00C48A0 (DxgkQueryVideoMemoryInfo.c)
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C013BD20 (DxgkSetProcessSchedulingPriorityClass.c)
 *     DxgkQueryProcessOfferInfo @ 0x1C013BF60 (DxgkQueryProcessOfferInfo.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C014EA60 (DxgkQueryVidPnExclusiveOwnership.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02045C8 (DxgkQueryStatisticsInternal.c)
 *     DxgkChangeVideoMemoryReservationInternal @ 0x1C020805C (DxgkChangeVideoMemoryReservationInternal.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023EC84 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C023F9B8 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C025F520 (DxgkGetProcessDeviceRemovalSupport.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C025F7A0 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C025FBB0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C025FD20 (DxgkReleaseProcessVidPnSourceOwners.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0260140 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkTrimProcessCommitment @ 0x1C0260D30 (DxgkTrimProcessCommitment.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00073A4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018950 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C013C40C (-GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z.c)
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
  _BYTE v16[16]; // [rsp+40h] [rbp-28h] BYREF
  DXGPROCESS *v17; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v16, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v4 = (struct _KAPC_STATE *)((char *)this + 32);
  v5 = (char *)this + 29;
  v7 = DXGPROCESS::GetByHandle(
         *((HANDLE *)this + 1),
         *((_DWORD *)this + 6),
         v3,
         (bool *)this + 29,
         (bool *)this + 30,
         (struct _KAPC_STATE *)((char *)this + 32),
         &v17);
  if ( v7 >= 0 )
  {
    v8 = v17;
    DXGPROCESS::AcquireReference(v17, v6);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
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
    v11 = v17;
    if ( *((_DWORD *)v17 + 10) == 1 )
    {
      *((_QWORD *)this + 2) = v17;
      v7 = 0;
      *((_BYTE *)this + 28) = 1;
    }
    else
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v8 + 13));
      v15 = (void *)*((_QWORD *)v11 + 7);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
      DXGPROCESS::ReleaseReference(v11);
      if ( *v5 )
      {
        KeUnstackDetachProcess(v4);
        *v5 = 0;
      }
      ObfDereferenceObject(v15);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
      v7 = -1073741130;
    }
  }
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return (unsigned int)v7;
}

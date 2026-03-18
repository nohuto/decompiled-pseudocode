/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C013C27C
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C013BD20 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023EC84 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C023F9B8 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D01C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C025FBB0 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C025FD20 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C00073A4 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018920 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  DXGPROCESS *v5; // rcx
  void *v6; // rdi
  _QWORD *v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  v3 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v3 + 104));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v8, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v6 = (void *)*((_QWORD *)v5 + 7);
  DXGPROCESS::ReleaseReference(v5);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v6);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}

/*
 * XREFs of ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C013F68C
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C013F130 (DxgkSetProcessSchedulingPriorityClass.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F2F4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0240028 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C025D6AC (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     DxgkGetProcessSchedulingPriorityClass @ 0x1C0260240 (DxgkGetProcessSchedulingPriorityClass.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C02603B0 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0018D9C (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::Release(DXGPROCESSMUTEXBYHANDLE *this, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  DXGPROCESS *v5; // rcx
  void *v6; // rdi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v8[3] = 275LL;
    v8[4] = 4LL;
    v8[5] = this;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v3 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 28) = 0;
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v3 + 104));
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v9, v4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v5 = (DXGPROCESS *)*((_QWORD *)this + 2);
  v6 = (void *)*((_QWORD *)v5 + 7);
  DXGPROCESS::ReleaseReference(v5, v7);
  *((_QWORD *)this + 2) = 0LL;
  if ( *((_BYTE *)this + 29) )
  {
    KeUnstackDetachProcess((PRKAPC_STATE)((char *)this + 32));
    *((_BYTE *)this + 29) = 0;
  }
  ObfDereferenceObject(v6);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}

/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00F5300
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0115DE0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C022411C (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C0269354 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0269574 (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, __int64 a2)
{
  __int64 v2; // rbp
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // r8
  __int64 v12; // rsi
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v20; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v26; // ebx
  struct DXGGLOBAL *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 *v30; // rsi

  v2 = (unsigned int)a2;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  if ( !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)Global + 43)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v20 + 24) = 2268LL;
    WdLogEvent5_WdAssertion(v20);
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v22 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v22;
    }
  }
  if ( (_DWORD)v2 )
  {
    if ( *((_BYTE *)this + 277) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v11);
      if ( HostHandle )
      {
        v26 = *(_DWORD *)(v12 + 368);
        v27 = DXGGLOBAL::GetGlobal(v24, v23);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v27 + 164), v26, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v12 + 184));
    HMGRTABLE::FreeHandle((HMGRTABLE *)(v12 + 208), v2);
    *(_QWORD *)(v12 + 192) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 184, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v28 + 24) = 2294LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v10);
  v13[3] = this;
  v13[4] = v2;
  v16 = PsGetCurrentProcess(v15, v14);
  v17 = PsGetProcessDxgProcess(v16);
  v18 = v17;
  if ( !v17 || (*(_BYTE *)(v17 + 299) & 4) != 0 )
  {
    v29 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v30 = v29;
    if ( v29 )
    {
      ObfDereferenceObject(v29);
      v18 = *v30;
    }
  }
  v13[5] = v18;
  WdLogEvent5_WdEvent(v13);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}

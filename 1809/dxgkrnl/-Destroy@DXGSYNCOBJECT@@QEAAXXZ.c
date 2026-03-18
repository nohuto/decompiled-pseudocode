/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00DDC2C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0011834 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00DDDA4 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00DDE48 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C0234608 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C0234AAC (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this)
{
  __int64 v2; // rdx
  signed __int64 v3; // rcx
  _QWORD *v4; // rbp
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v10; // rsi
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 1804LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 42) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v2 = *((unsigned int *)this + 18);
  if ( (_DWORD)v2 )
  {
    if ( *((_BYTE *)this + 254) )
    {
      DXGPROCESS::FreeResourceHandleNoRefSafe(*((DXGPROCESS **)this + 32), v2);
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v11);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 18));
      if ( v11[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
    }
    *((_DWORD *)this + 18) = 0;
  }
  if ( (*((_DWORD *)this + 43) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v3 = *((_QWORD *)this + 37);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 37, 0LL, v3) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 35) + 520LL) + 8LL) + 616LL))();
  }
  v4 = (_QWORD *)WdLogNewEntry5_WdEvent(v3, v2);
  v4[3] = this;
  v4[4] = *((unsigned int *)this + 18);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v10 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v10;
      }
    }
  }
  v4[5] = v7;
  WdLogEvent5_WdEvent(v4);
  if ( (*((_DWORD *)this + 43) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 264));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}

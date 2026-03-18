/*
 * XREFs of ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00F5454
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F5BA0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000C9C4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0019390 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00F55E0 (--1DXGSYNCOBJECT@@IEAA@XZ.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x1C00F5894 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C0268E28 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C02692CC (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECT::Destroy(DXGSYNCOBJECT *this, __int64 a2)
{
  __int64 v3; // rdx
  signed __int64 v4; // rcx
  _QWORD *v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v14; // rsi
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 1826LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 48) == 6 )
    DXGSYNCOBJECT::DestroyPeriodicFrameNotification(this);
  v3 = *((unsigned int *)this + 18);
  if ( (_DWORD)v3 )
  {
    if ( *((_BYTE *)this + 278) )
    {
      DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 35), v3);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal((__int64)this, v3);
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)Global + 136), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((unsigned int *)this + 18));
      if ( v15[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    }
    *((_DWORD *)this + 18) = 0;
  }
  if ( (*((_DWORD *)this + 49) & 4) != 0 )
  {
    DXGSYNCOBJECTCA::Destroy(this);
  }
  else
  {
    v4 = *((_QWORD *)this + 40);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 40, 0LL, v4) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 520LL) + 8LL) + 616LL))();
  }
  v5 = (_QWORD *)WdLogNewEntry5_WdEvent(v4);
  v5[3] = this;
  v6 = *((unsigned int *)this + 18);
  v5[4] = v6;
  CurrentProcess = PsGetCurrentProcess(v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v14 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v10 = *v14;
    }
  }
  v5[5] = v10;
  WdLogEvent5_WdEvent(v5);
  if ( (*((_DWORD *)this + 49) & 4) == 0 )
    DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGSYNCOBJECT *)((char *)this + 288));
  DXGSYNCOBJECT::~DXGSYNCOBJECT(this);
  operator delete(this);
}

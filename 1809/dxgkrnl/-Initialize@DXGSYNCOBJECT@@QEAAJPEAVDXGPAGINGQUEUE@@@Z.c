/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00DE40C
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000E448 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C00184F8 (-AllocHandle@DXGGLOBAL@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DE628 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C0234DE0 (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  DXGSYNCOBJECT *v3; // rsi
  int v4; // eax
  bool v5; // bp
  __int64 v6; // r15
  char v7; // bl
  int v8; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v20; // rbx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  unsigned __int64 Current; // rax
  char v25; // cl
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v29; // rsi
  _BYTE v30[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 253) && (unsigned int)(*((_DWORD *)this + 42) - 5) <= 1 )
  {
    v4 = *((_DWORD *)this + 43);
    if ( (v4 & 0x80u) != 0 )
    {
      v5 = 1;
    }
    else if ( (v4 & 4) != 0 )
    {
      v5 = 0;
    }
    else
    {
      this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 35) + 16LL);
      v5 = (*((_DWORD *)this + 472) & 0x20) == 0;
    }
    *((_BYTE *)v3 + 252) = v5;
    if ( *((_DWORD *)v3 + 42) == 6 )
      v6 = 0LL;
    else
      v6 = *((_QWORD *)v3 + 22);
    v7 = *((_BYTE *)v3 + 255);
    v8 = *((_DWORD *)v3 + 43);
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    LOBYTE(v10) = v7 != 0;
    LOBYTE(v11) = v8 & 1;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, bool))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL)
                                                                                         + 912LL))(
               (__int64)v3 + 120,
               v11,
               v10,
               0LL,
               v6,
               v5);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v13 = *((_QWORD *)a2 + 4);
    else
      v13 = 0LL;
    *((_QWORD *)v3 + 18) = v13;
  }
  if ( (*((_DWORD *)v3 + 43) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(v3);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)v3 + 264), v3);
  if ( (int)result >= 0 )
  {
    v16 = *((_DWORD *)v3 + 43);
    if ( (v16 & 1) != 0 && ((v16 & 2) == 0 || *((_BYTE *)v3 + 254)) )
    {
      if ( *((_BYTE *)v3 + 254) )
      {
        Current = (unsigned __int64)DXGPROCESS::GetCurrent();
        v25 = *(_BYTE *)(Current + 323);
        if ( (v25 & 8) != 0 )
          v26 = *(_QWORD *)(Current + 456);
        else
          v26 = Current & -(__int64)((v25 & 4) != 0);
        *((_DWORD *)v3 + 18) = DXGPROCESS::AllocHandleSafe(v26, (__int64)v3, 8u);
      }
      else
      {
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
        v21 = DXGGLOBAL::AllocHandle(*((_QWORD *)v3 + 2), (__int64)v3, 8u);
        v22 = v30[8] == 0;
        *((_DWORD *)v3 + 18) = v21;
        if ( !v22 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
      }
      v23 = *((_DWORD *)v3 + 18);
      if ( !v23 )
      {
        v27 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v27 + 24) = v3;
        *(_QWORD *)(v27 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v27);
        return 3221225495LL;
      }
      *((_DWORD *)v3 + 60) = v23;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v14);
    v17[3] = v3;
    v17[4] = *((unsigned int *)v3 + 18);
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v20 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v20 = *v29;
      }
    }
    v17[5] = v20;
    WdLogEvent5_WdEvent(v17);
    return 0LL;
  }
  return result;
}

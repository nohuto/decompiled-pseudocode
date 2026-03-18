/*
 * XREFs of ?Initialize@DXGSYNCOBJECT@@QEAAJPEAVDXGPAGINGQUEUE@@@Z @ 0x1C00FABDC
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00FA870 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C000C918 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C00FAE3C (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00FFDD0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGSYNCOBJECTCA@@QEAAJXZ @ 0x1C0269D5C (-Initialize@DXGSYNCOBJECTCA@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::Initialize(DXGSYNCOBJECT *this, struct DXGPAGINGQUEUE *a2)
{
  DXGSYNCOBJECT *v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rbx
  int v14; // eax
  bool v15; // bp
  __int64 v16; // r15
  char v17; // bl
  int v18; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  struct DXGGLOBAL *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  bool v31; // zf
  int v32; // eax
  unsigned __int64 Current; // rax
  char v34; // cl
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v39; // rsi
  _BYTE v40[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 277) && (unsigned int)(*((_DWORD *)this + 48) - 5) <= 1 )
  {
    v14 = *((_DWORD *)this + 49);
    if ( (v14 & 0x80u) != 0 )
    {
      v15 = 1;
    }
    else if ( (v14 & 4) != 0 )
    {
      v15 = 0;
    }
    else
    {
      this = *(DXGSYNCOBJECT **)(*((_QWORD *)this + 38) + 16LL);
      v15 = (*((_DWORD *)this + 478) & 0x20) == 0;
    }
    *((_BYTE *)v3 + 276) = v15;
    if ( *((_DWORD *)v3 + 48) == 6 )
      v16 = 0LL;
    else
      v16 = *((_QWORD *)v3 + 25);
    v17 = *((_BYTE *)v3 + 279);
    v18 = *((_DWORD *)v3 + 49);
    Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
    LOBYTE(v20) = v17 != 0;
    LOBYTE(v21) = v18 & 1;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, bool))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL)
                                                                                         + 912LL))(
               (__int64)v3 + 120,
               v21,
               v20,
               0LL,
               v16,
               v15);
    if ( (int)result < 0 )
      return result;
    if ( a2 )
      v22 = *((_QWORD *)a2 + 4);
    else
      v22 = 0LL;
    *((_QWORD *)v3 + 18) = v22;
  }
  if ( (*((_DWORD *)v3 + 49) & 4) != 0 )
    result = DXGSYNCOBJECTCA::Initialize(v3);
  else
    result = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGSYNCOBJECT *)((char *)v3 + 288), v3);
  if ( (int)result >= 0 )
  {
    v7 = *((_DWORD *)v3 + 49);
    if ( (v7 & 1) != 0 && ((v7 & 2) == 0 || *((_BYTE *)v3 + 278)) )
    {
      if ( *((_BYTE *)v3 + 278) )
      {
        Current = (unsigned __int64)DXGPROCESS::GetCurrent();
        v34 = *(_BYTE *)(Current + 299);
        if ( (v34 & 8) != 0 )
          v35 = *(_QWORD *)(Current + 432);
        else
          v35 = Current & -(__int64)((v34 & 4) != 0);
        *((_DWORD *)v3 + 18) = DXGPROCESS::AllocHandleSafe(v35, (__int64)v3, 8u);
      }
      else
      {
        v23 = DXGGLOBAL::GetGlobal(v6, v5);
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (struct DXGGLOBAL *)((char *)v23 + 136), 0);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
        v26 = *((_QWORD *)v3 + 2);
        if ( *(struct _KTHREAD **)(v26 + 152) != KeGetCurrentThread() )
        {
          v36 = WdLogNewEntry5_WdAssertion(v25, v24);
          *(_QWORD *)(v36 + 24) = 1015LL;
          WdLogEvent5_WdAssertion(v36);
        }
        v27 = HMGRTABLE::AllocHandle(v26 + 176, v3, 8LL);
        v31 = v40[8] == 0;
        *((_DWORD *)v3 + 18) = v27;
        if ( !v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40);
      }
      v32 = *((_DWORD *)v3 + 18);
      if ( !v32 )
      {
        v37 = WdLogNewEntry5_WdLowResource(v6, v28, v29, v30);
        *(_QWORD *)(v37 + 24) = v3;
        *(_QWORD *)(v37 + 32) = -1073741801LL;
        WdLogEvent5_WdLowResource(v37);
        return 3221225495LL;
      }
      *((_DWORD *)v3 + 66) = v32;
    }
    v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v6);
    v8[3] = v3;
    v9 = *((unsigned int *)v3 + 18);
    v8[4] = v9;
    CurrentProcess = PsGetCurrentProcess(v9, v10);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v13 = ProcessDxgProcess;
    if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v39 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v13 = *v39;
      }
    }
    v8[5] = v13;
    WdLogEvent5_WdEvent(v8);
    return 0LL;
  }
  return result;
}

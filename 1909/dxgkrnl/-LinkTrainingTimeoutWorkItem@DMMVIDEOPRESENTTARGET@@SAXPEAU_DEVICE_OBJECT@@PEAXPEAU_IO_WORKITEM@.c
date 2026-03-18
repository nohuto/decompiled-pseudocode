/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02BBDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000281C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFI.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00078E0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BE8C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiPollSingleDisplayChild @ 0x1C029D378 (DpiPollSingleDisplayChild.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02BA6C0 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02BC694 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  unsigned int v4; // r12d
  void *v5; // rbx
  signed __int32 v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct DXGADAPTER *v10; // r14
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r15
  signed __int32 v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  VIDPN_MGR *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _IO_WORKITEM *v27; // rcx
  unsigned __int8 v28[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v30[10]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v32[64]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v33[72]; // [rsp+E0h] [rbp-28h] BYREF

  v4 = 0;
  v28[0] = 0;
  v5 = 0LL;
  v6 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v7 = v6;
  v8 = (unsigned int)(v6 - 2);
  if ( (v8 & 0xFFFFFFFD) == 0 )
  {
    v10 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v31, *(struct DXGADAPTER *const *)Context, 0LL);
    v14 = (int)COREADAPTERACCESS::AcquireExclusive(&v31, (unsigned int)(v11 + 2));
    v15 = _InterlockedCompareExchange(Context + 38, 0, 5);
    v7 = v15;
    v16 = (unsigned int)(v15 - 2);
    if ( (v16 & 0xFFFFFFFD) != 0 )
    {
      if ( v15 != -1 && v15 != 5 )
      {
        v17 = WdLogNewEntry5_WdDmmEvent(v16, v12);
        *(_QWORD *)(v17 + 24) = v10;
        *(_QWORD *)(v17 + 32) = v7;
        WdLogEvent5_WdDmmEvent(v17);
      }
    }
    else if ( (int)v14 >= 0 )
    {
      v19 = *(VIDPN_MGR **)(*((_QWORD *)v10 + 319) + 88LL);
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, (__int64)v19);
      v4 = *(_DWORD *)(*((_QWORD *)Context + 1) + 24LL);
      VIDPN_MGR::HandleLinkTrainingTimeout(v19, v4, (_DWORD)v7 == 2, &v28[1], v28);
      if ( v28[1] )
      {
        if ( (_DWORD)v7 != 2 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v21, v20);
          WdLogEvent5_WdAssertion(v22);
        }
        DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
      }
      v5 = (void *)*((_QWORD *)v10 + 24);
      if ( v5 )
      {
        ObfReferenceObject(*((PVOID *)v10 + 24));
      }
      else
      {
        v23 = WdLogNewEntry5_WdAssertion(v21, v20);
        WdLogEvent5_WdAssertion(v23);
        v28[0] = 0;
      }
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40));
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v16, v12, v13);
      *(_QWORD *)(v18 + 24) = v10;
      *(_QWORD *)(v18 + 32) = v14;
      WdLogEvent5_WdError(v18);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v33);
    COREACCESS::~COREACCESS((COREACCESS *)v32);
    if ( v28[0] )
    {
      memset(v30, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v30[1]);
      v30[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v30[3]) = 64;
      LOBYTE(v30[6]) = -1;
      v26 = WdLogNewEntry5_WdDmmEvent(v25, v24);
      *(_QWORD *)(v26 + 24) = v4;
      *(_QWORD *)(v26 + 32) = *(_QWORD *)Context;
      WdLogEvent5_WdDmmEvent(v26);
      DpiPollSingleDisplayChild((__int64)v5, v4, (__int64)v30);
    }
    if ( v5 )
      ObfDereferenceObject(v5);
LABEL_23:
    if ( (_DWORD)v7 != -1 )
      return;
    goto LABEL_24;
  }
  if ( v6 != -1 )
  {
    if ( v6 != 5 )
    {
      v9 = WdLogNewEntry5_WdDmmEvent(v8, Context);
      *(_QWORD *)(v9 + 24) = *(_QWORD *)Context;
      *(_QWORD *)(v9 + 32) = v7;
      WdLogEvent5_WdDmmEvent(v9);
    }
    goto LABEL_23;
  }
LABEL_24:
  if ( *(_QWORD *)Context )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
  v27 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
  if ( v27 )
    IoFreeWorkItem(v27);
  operator delete((void *)Context);
}

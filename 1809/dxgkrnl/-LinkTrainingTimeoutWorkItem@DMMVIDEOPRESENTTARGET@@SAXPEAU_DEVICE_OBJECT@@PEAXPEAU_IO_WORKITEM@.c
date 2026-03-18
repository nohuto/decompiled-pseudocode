/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0283A50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0010860 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C02825B8 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C0284270 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  signed __int32 v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGADAPTER *v9; // rsi
  int v10; // r8d
  __int64 v11; // rbp
  VIDPN_MGR *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  signed __int32 v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct _IO_WORKITEM *v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v24[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v25[40]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v26; // [rsp+98h] [rbp+10h] BYREF

  v5 = _InterlockedCompareExchange(Context + 42, 0, 5);
  v6 = v5;
  v7 = (unsigned int)(v5 - 2);
  if ( (v7 & 0xFFFFFFFD) == 0 )
  {
    v9 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v23, *(struct DXGADAPTER *const *)Context, 0LL);
    v11 = (int)COREADAPTERACCESS::AcquireExclusive(&v23, (unsigned int)(v10 + 2));
    v12 = *(VIDPN_MGR **)(*((_QWORD *)v9 + 315) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v26, (__int64)v12);
    v16 = _InterlockedCompareExchange(Context + 42, 0, 5);
    v6 = v16;
    v17 = (unsigned int)(v16 - 2);
    if ( (v17 & 0xFFFFFFFD) != 0 )
    {
      if ( v16 != -1 && v16 != 5 )
      {
        v18 = WdLogNewEntry5_WdDmmEvent(v17, v13, v14, v15);
        *(_QWORD *)(v18 + 24) = v9;
        *(_QWORD *)(v18 + 32) = v6;
        WdLogEvent5_WdDmmEvent(v18);
      }
    }
    else if ( (int)v11 >= 0 )
    {
      if ( VIDPN_MGR::HandleLinkTrainingTimeout(v12, *(_DWORD *)(*((_QWORD *)Context + 1) + 24LL), v16 == 2) )
      {
        if ( (_DWORD)v6 != 2 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v21);
        }
        DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
      }
    }
    else
    {
      v19 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v19 + 24) = v9;
      *(_QWORD *)(v19 + 32) = v11;
      WdLogEvent5_WdError(v19);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    COREACCESS::~COREACCESS((COREACCESS *)v24);
LABEL_16:
    if ( (_DWORD)v6 != -1 )
      return;
    goto LABEL_17;
  }
  if ( v5 != -1 )
  {
    if ( v5 != 5 )
    {
      v8 = WdLogNewEntry5_WdDmmEvent(v7, Context, IoWorkItem, a4);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)Context;
      *(_QWORD *)(v8 + 32) = v6;
      WdLogEvent5_WdDmmEvent(v8);
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( *(_QWORD *)Context )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
  v22 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 20);
  if ( v22 )
    IoFreeWorkItem(v22);
  operator delete((void *)Context);
}

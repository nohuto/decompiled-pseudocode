/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01C2530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0002210 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0005C70 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00114A8 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00131E4 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C0019180 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C00193BC (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00CED80 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00D93A0 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA118 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C011EDE8 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C013D954 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C013D988 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01C3E9C (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v5; // rax
  __int64 v6; // rcx
  struct DXGSESSIONDATA *v7; // r15
  __int64 v8; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v10; // rcx
  struct DXGDEVICE *v11; // rbx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  DXGADAPTER **v15; // rsi
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r14
  _QWORD *v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r14
  struct DXGGLOBAL *v26; // rax
  struct DXGCONTEXT *v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  struct DXGCONTEXT *v31; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v32; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v33[8]; // [rsp+40h] [rbp-C0h] BYREF
  DXGADAPTER *v34; // [rsp+48h] [rbp-B8h]
  char v35; // [rsp+50h] [rbp-B0h]
  _BYTE v36[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[8]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  char v39; // [rsp+80h] [rbp-80h]
  _QWORD v40[3]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v41[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v43[56]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v44[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v45[8]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v46[32]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v47[56]; // [rsp+168h] [rbp+68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1A0h] [rbp+A0h] BYREF
  char v49; // [rsp+1D0h] [rbp+D0h]

  v32 = 0LL;
  v31 = 0LL;
  Global = DXGGLOBAL::GetGlobal(IoObject);
  v5 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 77));
  v7 = v5;
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 297LL;
    WdLogEvent5_WdError(v8);
    operator delete[](Context);
    return;
  }
  v49 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v5 + 2328));
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v32, &v31, 0LL);
  v11 = v32;
  v12 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36, v32);
    v15 = *(DXGADAPTER ***)(*((_QWORD *)v11 + 216) + 2520LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v44,
      &v31,
      1u);
    v34 = v15[2];
    v35 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v11, 1, v16, 0);
    if ( v44[0] )
    {
      v19 = COREDEVICEACCESS::AcquireExclusive((__int64)v41, 1LL);
      v21 = v19;
      if ( v19 >= 0 )
      {
        if ( !DXGADAPTER::UsingSetTimingsFromVidPn(v15[2])
          || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v15, Context[1].LowPart)
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v15, Context[1].LowPart) != 3 )
        {
          goto LABEL_18;
        }
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v15, Context[1].LowPart, 0) )
          goto LABEL_18;
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v15, Context[1].LowPart) )
          goto LABEL_18;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v15, Context[1].LowPart) )
          goto LABEL_18;
        v23 = ADAPTER_DISPLAY::PresentCddPrimary(
                (ADAPTER_DISPLAY *)v15,
                v31,
                Context[1].LowPart,
                (struct COREDEVICEACCESS *)v41);
        v25 = v23;
        if ( v23 >= 0 )
          goto LABEL_18;
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v24);
        v22[3] = Context[1].LowPart;
        v22[4] = v15[2];
        v22[5] = v25;
      }
      else
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v22[3] = v11;
        v22[4] = v21;
      }
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v18 + 24) = 347LL;
      WdLogEvent5_WdLowResource(v18);
    }
LABEL_18:
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    if ( v35 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v33);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v44);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v36);
    goto LABEL_21;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v13[3] = Context->HighPart;
  v13[4] = Context->LowPart;
  v13[5] = v12;
  WdLogEvent5_WdError(v13);
LABEL_21:
  v26 = DXGGLOBAL::GetGlobal(v14);
  DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((struct DXGSESSIONDATA ***)v26 + 77), v7);
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v27 = v31;
      v28 = *((_QWORD *)v31 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v40,
        (struct DXGDEVICE *)v28);
      v29 = *((_QWORD *)v27 + 2);
      v39 = 0;
      v38 = *(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, v28, 2, v30, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v45);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v28, (struct DXGCONTEXT ***)v31, (struct COREDEVICEACCESS *)v45);
      COREACCESS::~COREACCESS((COREACCESS *)v47);
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      if ( v39 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
      if ( v40[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v40);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v28 + 16), (struct DXGDEVICE *)v28);
    }
    v11 = v32;
  }
  if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)v11 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v32 + 2), v32);
  operator delete[](Context);
  if ( v49 )
    KeUnstackDetachProcess(&ApcState);
}

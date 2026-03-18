/*
 * XREFs of ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F1820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0001D10 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0002010 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003AD8 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000CDD4 (-AcquireExclusive@COREDEVICEACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILE.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A710 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A838 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C00CD000 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1C00DF050 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00E6778 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01209A8 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C014DAE8 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C014DB1C (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 *     ?PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01F2DA0 (-PresentCddPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DxgkpDelayPresentCddPrimary(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGSESSIONDATA *v9; // r13
  __int64 v10; // rax
  int CddDeviceAndContextForCurrentSession; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGDEVICE *v15; // rbx
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  volatile signed __int64 *v20; // r14
  DXGADAPTER **v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r15
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r15
  struct DXGGLOBAL *v39; // rax
  struct DXGCONTEXT *v40; // rbx
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r9
  struct DXGCONTEXT *v44; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v45; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v46[2]; // [rsp+48h] [rbp-C0h] BYREF
  char v47; // [rsp+58h] [rbp-B0h]
  _QWORD v48[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h]
  _QWORD v50[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v51[16]; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v52[7]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v53[8]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v54[64]; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v55[88]; // [rsp+120h] [rbp+18h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+178h] [rbp+70h] BYREF
  char v57; // [rsp+1A8h] [rbp+A0h]
  _BYTE v58[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v59[64]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v60[88]; // [rsp+200h] [rbp+F8h] BYREF

  v45 = 0LL;
  v44 = 0LL;
  Global = DXGGLOBAL::GetGlobal(IoObject, (__int64)Context);
  v5 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 74));
  v9 = v5;
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v10 + 24) = 295LL;
    WdLogEvent5_WdError(v10);
    operator delete[](Context);
    return;
  }
  v57 = 0;
  CPROCESSATTACHHELPER::Attach(&ApcState, *((PRKPROCESS *)v5 + 2328));
  CddDeviceAndContextForCurrentSession = DxgkGetCddDeviceAndContextForCurrentSession(Context, &v45, &v44, 0LL, 0);
  v15 = v45;
  v16 = CddDeviceAndContextForCurrentSession;
  if ( CddDeviceAndContextForCurrentSession >= 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v51, v45);
    v21 = *(DXGADAPTER ***)(*((_QWORD *)v15 + 216) + 2552LL);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v52,
      &v44,
      1u);
    v46[1] = v21[2];
    v47 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v53, (__int64)v15, 1, v22, 0);
    v20 = (volatile signed __int64 *)v44;
    if ( v52[0] )
    {
      v28 = COREDEVICEACCESS::AcquireExclusive((__int64)v53, 1LL);
      v32 = v28;
      if ( v28 >= 0 )
      {
        if ( !DXGADAPTER::UsingSetTimingsFromVidPn(v21[2])
          || (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v21, Context[1].LowPart)
          && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v21, Context[1].LowPart) != 3 )
        {
          goto LABEL_18;
        }
        if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation((ADAPTER_DISPLAY *)v21, Context[1].LowPart, 0) )
          goto LABEL_18;
        if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v21, Context[1].LowPart) )
          goto LABEL_18;
        if ( ADAPTER_DISPLAY::IsVidPnSourceVisible((ADAPTER_DISPLAY *)v21, Context[1].LowPart) )
          goto LABEL_18;
        v34 = ADAPTER_DISPLAY::PresentCddPrimary(
                (ADAPTER_DISPLAY *)v21,
                (struct DXGCONTEXT *)v20,
                Context[1].LowPart,
                (struct COREDEVICEACCESS *)v53);
        v38 = v34;
        if ( v34 >= 0 )
          goto LABEL_18;
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v37);
        v33[3] = Context[1].LowPart;
        v33[4] = v21[2];
        v33[5] = v38;
      }
      else
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29, v31);
        v33[3] = v15;
        v33[4] = v32;
      }
      WdLogEvent5_WdError(v33);
    }
    else
    {
      v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = 345LL;
      WdLogEvent5_WdLowResource(v27);
    }
LABEL_18:
    COREACCESS::~COREACCESS((COREACCESS *)v55);
    COREACCESS::~COREACCESS((COREACCESS *)v54);
    if ( v47 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v46);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v52);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v51);
    goto LABEL_21;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12, v14);
  v17[3] = Context->HighPart;
  v17[4] = Context->LowPart;
  v17[5] = v16;
  WdLogEvent5_WdError(v17);
  v20 = (volatile signed __int64 *)v44;
LABEL_21:
  v39 = DXGGLOBAL::GetGlobal(v19, v18);
  DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((struct DXGSESSIONDATA ***)v39 + 74), v9);
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd64(v20 + 4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v40 = v44;
      v41 = *((_QWORD *)v44 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v50,
        (struct DXGDEVICE *)v41);
      v42 = *((_QWORD *)v40 + 2);
      LOBYTE(v49) = 0;
      v48[1] = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v58, v41, 2, v43, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v58);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v41, (struct DXGCONTEXT ***)v44, (struct COREDEVICEACCESS *)v58);
      COREACCESS::~COREACCESS((COREACCESS *)v60);
      COREACCESS::~COREACCESS((COREACCESS *)v59);
      if ( (_BYTE)v49 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      if ( v50[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v50);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v41 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v41 + 16), (struct DXGDEVICE *)v41);
    }
    v15 = v45;
  }
  if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
  operator delete[](Context);
  if ( v57 )
    KeUnstackDetachProcess(&ApcState);
}

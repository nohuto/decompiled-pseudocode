/*
 * XREFs of ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0240114
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006EC8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000C678 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D630 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120D00 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkpEscapeVidMmDelayExecution(
        struct DXGDEVICE *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 *a5)
{
  __int64 v6; // rsi
  unsigned int v7; // r14d
  __int64 v9; // rax
  _QWORD *v11; // rcx
  struct DXGPAGINGQUEUE *v12; // rbx
  __int64 v13; // r9
  struct _KTHREAD **Current; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPAGINGQUEUE *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  struct DXGPAGINGQUEUE *v28; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGPAGINGQUEUE *v29; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v30[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h]
  char v32; // [rsp+60h] [rbp-A0h]
  _QWORD v33[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v34[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v35[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v36[88]; // [rsp+C8h] [rbp-38h] BYREF

  v6 = (unsigned int)a3;
  v7 = a2;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v9 + 24) = 1040LL;
LABEL_3:
    WdLogEvent5_WdWarning(v9);
    return 3221225485LL;
  }
  v11 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( *(_DWORD *)(v11[2] + 256LL) < (unsigned int)a2 )
  {
    v9 = WdLogNewEntry5_WdWarning(v11, a2, a3);
    *(_QWORD *)(v9 + 24) = 1046LL;
    goto LABEL_3;
  }
  v12 = 0LL;
  v13 = 0LL;
  v28 = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_13;
  v29 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v11, a2);
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v28, v6, Current, &v29, 1);
  v18 = v29;
  if ( v29 )
  {
    if ( a1 != *((struct DXGDEVICE **)v29 + 2) )
    {
      v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
      *(_QWORD *)(v19 + 24) = a1;
      *(_QWORD *)(v19 + 32) = v18;
      goto LABEL_11;
    }
    v13 = *((_QWORD *)v29 + 4);
    v12 = v28;
    v11 = (_QWORD *)*((_QWORD *)a1 + 2);
LABEL_13:
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, unsigned __int64 *))(*(_QWORD *)(v11[68] + 8LL)
                                                                                     + 1224LL))(
      v11[69],
      *((_QWORD *)a1 + 81),
      v7,
      v13,
      a4,
      a5);
    v22 = 0;
    goto LABEL_14;
  }
  v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v19 + 24) = v6;
LABEL_11:
  WdLogEvent5_WdWarning(v19);
  v12 = v28;
  v22 = -1073741811;
LABEL_14:
  if ( v12 )
  {
    v23 = _InterlockedDecrement64((volatile signed __int64 *)v12 + 8);
    if ( v23 < 0 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v21, v20);
      *(_QWORD *)(v24 + 24) = 67LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( !v23 )
    {
      v25 = *((_QWORD *)v28 + 2);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v33,
        (struct DXGDEVICE *)v25);
      v26 = *(_QWORD *)(v25 + 16);
      v32 = 0;
      v31 = *(_QWORD *)(v26 + 16);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, v25, 2, v27, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v34);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyPagingQueue((PERESOURCE *)v25, v28, (struct COREDEVICEACCESS *)v34);
      COREACCESS::~COREACCESS((COREACCESS *)v36);
      COREACCESS::~COREACCESS((COREACCESS *)v35);
      if ( v32 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
      if ( v33[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v33);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v25 + 16), (struct DXGDEVICE *)v25);
    }
  }
  return v22;
}

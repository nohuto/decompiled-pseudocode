/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C026C550
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006810 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0006E84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0019914 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0140FA0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C026A788 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct DXGDEVICE *Current; // rsi
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG64 v11; // rax
  unsigned int v12; // ebx
  _BYTE *v13; // r9
  __int64 v14; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v16; // rcx
  __int64 v17; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  struct DXGDEVICE *v24; // rax
  __int64 v25; // r9
  UINT *v26; // rdx
  __int64 v27; // r8
  int v28; // r14d
  ULONG64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // edi
  __int64 v33; // rax
  PERESOURCE *Global; // rax
  unsigned int v35; // edi
  struct DXGDEVICE *v36[2]; // [rsp+30h] [rbp-178h] BYREF
  __int64 v37; // [rsp+40h] [rbp-168h] BYREF
  char v38; // [rsp+48h] [rbp-160h]
  struct DXGDEVICE *v39; // [rsp+50h] [rbp-158h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-150h] BYREF
  _BYTE v41[16]; // [rsp+78h] [rbp-130h] BYREF
  PVOID v42; // [rsp+88h] [rbp-120h] BYREF
  _BYTE v43[16]; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp-108h]
  PVOID P; // [rsp+A8h] [rbp-100h] BYREF
  _BYTE v46[32]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned int v47; // [rsp+D0h] [rbp-D8h]
  _BYTE v48[160]; // [rsp+E0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2);
  v36[1] = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v6);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  v42 = 0LL;
  v44 = 0;
  P = 0LL;
  v47 = 0;
  *(_QWORD *)&Src.Flags.0 = 0LL;
  v11 = a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v11;
  Src.FenceValueArray = *(const UINT64 **)(v11 + 16);
  Src.Flags.Value = 0;
  v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v12 )
  {
    P = 0LL;
    v47 = 0;
    v42 = 0LL;
    v44 = 0;
    return 3221225485LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v42, v12);
  v13 = v42;
  if ( !v42 )
  {
    if ( P != v46 && P )
    {
      ExFreePoolWithTag(P, 0);
      v13 = v42;
    }
    P = 0LL;
    v47 = 0;
    if ( v13 != v43 )
    {
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
    v42 = 0LL;
    v44 = 0;
    return 3221225495LL;
  }
  v14 = v44;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v14] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v14] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v13, ObjectHandleArray, v14 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v42;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, v12);
  v16 = P;
  if ( !P )
  {
    P = 0LL;
    v47 = 0;
    if ( v42 != v43 && v42 )
      ExFreePoolWithTag(v42, 0);
    v42 = 0LL;
    v44 = 0;
    return 3221225495LL;
  }
  v17 = v47;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v17] < Src.FenceValueArray || &Src.FenceValueArray[v17] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v16, FenceValueArray, v17 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v36, Src.hDevice, (struct _KTHREAD **)Current, &v39);
  if ( !v39 )
  {
    v23 = WdLogNewEntry5_WdError(v21, v20, v22);
    *(_QWORD *)(v23 + 24) = hDevice;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    v24 = v36[0];
    if ( !v36[0] )
    {
LABEL_31:
      if ( P != v46 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v47 = 0;
      if ( v42 != v43 && v42 )
        ExFreePoolWithTag(v42, 0);
      return 3221225485LL;
    }
LABEL_29:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
    goto LABEL_31;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v37, v39);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v48, (__int64)v39, 0, v25, 0);
  v28 = COREDEVICEACCESS::AcquireShared((__int64)v48, 0xFFFFFFFF, 0LL);
  if ( v28 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
    if ( P != v46 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v47 = 0;
    if ( v42 != v43 && v42 )
      ExFreePoolWithTag(v42, 0);
    return (unsigned int)v28;
  }
  v29 = *((_QWORD *)v39 + 2);
  v30 = *(_QWORD *)(v29 + 16);
  if ( !v30 )
  {
    v31 = WdLogNewEntry5_WdError(v29, v26, v27);
    *(_QWORD *)(v31 + 24) = hDevice;
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
LABEL_53:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
    if ( v37 && v38 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
      KeLeaveCriticalRegion();
    }
    v24 = v36[0];
    if ( !v36[0] )
      goto LABEL_31;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v30 + 1728) >= 0x5020u )
  {
    v26 = (UINT *)(a1 + 24);
    v29 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v26 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v26;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v26, v27);
      *(_QWORD *)(v33 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_63:
      WdLogEvent5_WdWarning(v33);
      goto LABEL_53;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v26, v27);
      *(_QWORD *)(v33 + 24) = 5137LL;
      goto LABEL_63;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v29, (__int64)v26);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v41, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v41);
  v35 = SignalSynchronizationObjectFromCpu(&Src, Current, v39);
  if ( v41[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v41);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v48);
  if ( v37 && v38 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v37 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v36[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v36[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v36[0] + 2), v36[0]);
  if ( P != v46 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v47 = 0;
  if ( v42 != v43 && v42 )
    ExFreePoolWithTag(v42, 0);
  return v35;
}

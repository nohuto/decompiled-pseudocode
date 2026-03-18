/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C0237C70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C003C370 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0213058 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0235EBC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rcx
  struct DXGDEVICE *Current; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG64 v8; // rax
  unsigned int v9; // ebx
  _BYTE *v10; // r9
  __int64 v11; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v13; // rcx
  __int64 v14; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // esi
  __int64 v21; // r8
  ULONG64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  UINT *v25; // rdx
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v27; // rax
  PERESOURCE *Global; // rax
  unsigned int v29; // ebx
  struct DXGDEVICE *v30[2]; // [rsp+30h] [rbp-138h] BYREF
  __int64 v31; // [rsp+40h] [rbp-128h] BYREF
  char v32; // [rsp+48h] [rbp-120h]
  struct DXGDEVICE *v33; // [rsp+50h] [rbp-118h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-110h] BYREF
  _BYTE v35[24]; // [rsp+78h] [rbp-F0h] BYREF
  _BYTE v36[96]; // [rsp+90h] [rbp-D8h] BYREF
  PVOID v37; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v38[16]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v39; // [rsp+108h] [rbp-60h]
  PVOID P; // [rsp+110h] [rbp-58h] BYREF
  _BYTE v41[32]; // [rsp+118h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+138h] [rbp-30h]

  Current = DXGPROCESS::GetCurrent();
  v30[1] = Current;
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = PsGetCurrentProcess(v6, v5);
    *(_QWORD *)(v4 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  v37 = 0LL;
  v39 = 0;
  P = 0LL;
  v42 = 0;
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v8;
  Src.FenceValueArray = *(const UINT64 **)(v8 + 16);
  Src.Flags.Value = 0;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Src.hDevice, 4));
  if ( !v9 )
  {
    P = 0LL;
    v42 = 0;
    v37 = 0LL;
    v39 = 0;
    return 3221225485LL;
  }
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v37, v9);
  v10 = v37;
  if ( !v37 )
  {
    if ( P != v41 && P )
    {
      ExFreePoolWithTag(P, 0);
      v10 = v37;
    }
    P = 0LL;
    v42 = 0;
    if ( v10 != v38 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    v37 = 0LL;
    v39 = 0;
    return 3221225495LL;
  }
  v11 = v39;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v11] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v11] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v10, ObjectHandleArray, v11 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v37;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, v9);
  v13 = P;
  if ( !P )
  {
    P = 0LL;
    v42 = 0;
    if ( v37 != v38 && v37 )
      ExFreePoolWithTag(v37, 0);
    v37 = 0LL;
    v39 = 0;
    return 3221225495LL;
  }
  v14 = v42;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v14] < Src.FenceValueArray || &Src.FenceValueArray[v14] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, FenceValueArray, v14 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v30, Src.hDevice, (struct _KTHREAD **)Current, &v33);
  if ( !v33 )
  {
    v18 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v18 + 24) = hDevice;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v18);
LABEL_56:
    if ( v30[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v30[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30[0] + 2), v30[0]);
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    v42 = 0;
    P = 0LL;
    if ( v37 != v38 && v37 )
      ExFreePoolWithTag(v37, 0);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v31, v33);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v33, 0, v19, 0);
  v20 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36);
  if ( v20 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    if ( v31 && v32 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v31 + 104));
      KeLeaveCriticalRegion();
    }
    if ( v30[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v30[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30[0] + 2), v30[0]);
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v42 = 0;
    if ( v37 != v38 && v37 )
      ExFreePoolWithTag(v37, 0);
    return (unsigned int)v20;
  }
  v22 = *((_QWORD *)v33 + 2);
  v23 = *(_QWORD *)(v22 + 16);
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = hDevice;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_53:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
    if ( v31 && v32 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v31 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v23 + 1712) >= 0x5020u )
  {
    v25 = (UINT *)(a1 + 24);
    v22 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v25 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v25;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v25, v21);
      *(_QWORD *)(v27 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_52:
      WdLogEvent5_WdWarning(v27);
      goto LABEL_53;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v25, v21);
      *(_QWORD *)(v27 + 24) = 5155LL;
      goto LABEL_52;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v22);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35, Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v35);
  v29 = SignalSynchronizationObjectFromCpu(&Src, Current, v33);
  if ( v35[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v35);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
  if ( v31 && v32 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v31 + 104));
    KeLeaveCriticalRegion();
  }
  if ( v30[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v30[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30[0] + 2), v30[0]);
  if ( P != v41 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v42 = 0;
  if ( v37 != v38 && v37 )
    ExFreePoolWithTag(v37, 0);
  return v29;
}

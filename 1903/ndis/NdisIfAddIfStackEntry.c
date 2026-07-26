/*
 * XREFs of NdisIfAddIfStackEntry @ 0x1C002A1F0
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C008F4AC (ndisFilterAttachCleanUp.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIfFindInterface @ 0x1C002A3AC (ndisIfFindInterface.c)
 *     WPP_RECORDER_SF_llL @ 0x1C002A3E4 (WPP_RECORDER_SF_llL.c)
 *     ?ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z @ 0x1C002A488 (-ndisIfFindStackEntry@@YAPEAU_NDIS_IF_STACK_ENTRY@@KK@Z.c)
 *     ?ndisIfStackTablePathExist@@YAEKKG@Z @ 0x1C002A4B8 (-ndisIfStackTablePathExist@@YAEKKG@Z.c)
 *     WPP_RECORDER_SF_ll @ 0x1C002A528 (WPP_RECORDER_SF_ll_ea_1C002A528.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 */

NDIS_STATUS __stdcall NdisIfAddIfStackEntry(NET_IFINDEX HigherLayerIfIndex, NET_IFINDEX LowerLayerIfIndex)
{
  int v2; // r8d
  ULONG_PTR v3; // rdi
  ULONG_PTR v4; // rsi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  KIRQL v7; // r14
  __int64 v8; // rcx
  __int64 Interface; // rax
  __int64 v10; // r10
  _QWORD *v11; // rcx
  NDIS_STATUS v12; // ebp
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  ULONG VerifierFlags; // [rsp+70h] [rbp+18h] BYREF

  v3 = LowerLayerIfIndex;
  v4 = HigherLayerIfIndex;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ll(*((_QWORD *)WPP_GLOBAL_Control + 8), LowerLayerIfIndex, v2);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6669444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[3] = 0LL;
  PoolWithTag[4] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = v4;
  *((_DWORD *)PoolWithTag + 5) = v3;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  if ( (_DWORD)v4 == (_DWORD)v3 || ndisIfStackTablePathExist(v4, v3, 0) )
  {
    if ( MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) )
    {
      VerifierFlags = 0;
      if ( MmIsVerifierEnabled(&VerifierFlags) < 0 || (VerifierFlags & 0x400000) == 0 )
        ndisBugCheckEx(0x1BuLL, v4, v3, 0LL);
    }
    v12 = -1073741811;
    goto LABEL_12;
  }
  if ( ndisIfFindStackEntry(v4, v3) )
  {
    ExFreePoolWithTag(v6, 0);
    v6 = 0LL;
  }
  else
  {
    ndisIfFindInterface(v8);
    Interface = ndisIfFindInterface((unsigned int)v3);
    if ( !v10 || !Interface )
    {
      v12 = -1071448021;
      goto LABEL_12;
    }
    v6[3] = v10;
    v6[4] = Interface;
    v11 = ndisIfStackEntryList;
    if ( *((PVOID **)ndisIfStackEntryList + 1) != &ndisIfStackEntryList )
      __fastfail(3u);
    *v6 = ndisIfStackEntryList;
    v6[1] = &ndisIfStackEntryList;
    v11[1] = v6;
    ndisIfStackEntryList = v6;
    ++*(_DWORD *)(v10 + 1296);
    ++*(_DWORD *)(Interface + 1300);
  }
  v12 = 0;
LABEL_12:
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v7);
  if ( v12 )
    ExFreePoolWithTag(v6, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_llL(*((_QWORD *)WPP_GLOBAL_Control + 8), v13, v14, v15);
  return v12;
}

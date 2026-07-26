/*
 * XREFs of ndisReinitializeMiniportBlock @ 0x1C013AC78
 * Callers:
 *     ndisPnPStartDevice @ 0x1C002D22C (ndisPnPStartDevice.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C00802A0 (ndisIMInitializeDeviceInstanceInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisOpenULongRef @ 0x1C0095DC8 (ndisOpenULongRef.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C012EEC0 (ndisMInitializeMiniportBlockFront.c)
 */

_UNKNOWN **__fastcall ndisReinitializeMiniportBlock(__int64 a1)
{
  int v1; // esi
  __int64 v3; // rbp
  KIRQL v4; // r13
  int v5; // edi
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rcx
  __int16 v10; // ax
  void *v11; // rcx
  void *v12; // rcx
  _UNKNOWN **result; // rax
  unsigned __int16 v14; // [rsp+60h] [rbp+8h]

  v1 = 0;
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      98,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v5 = *(_DWORD *)(a1 + 120) & 0x40000000;
  v6 = *(_DWORD *)(a1 + 124) & 0x8613000;
  v7 = *(_DWORD *)(a1 + 2684) & 0x200;
  v8 = *(_DWORD *)(a1 + 1872) & 0x4000;
  v14 = *(_WORD *)(a1 + 2);
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    v1 = *(_DWORD *)(a1 + 568) & 8;
  }
  memset((void *)(a1 + 4), 0, 0xE58uLL);
  ndisMInitializeMiniportBlockFront((char *)a1, v14);
  *(_DWORD *)(a1 + 4416) = 0;
  *(_DWORD *)(a1 + 4420) = 0;
  v9 = *(_QWORD *)(a1 + 3760);
  *(_DWORD *)(a1 + 124) = v6;
  *(_DWORD *)(a1 + 2684) = v7;
  *(_DWORD *)(a1 + 120) = v5;
  *(_DWORD *)(a1 + 1872) = v8;
  v10 = *(_WORD *)(v9 + 26);
  if ( (v10 & 0x40) != 0 )
  {
    v5 |= 0x80u;
    *(_DWORD *)(a1 + 568) = v1;
    *(_DWORD *)(a1 + 120) = v5;
    *(_QWORD *)(a1 + 24) = v3;
    v10 = *(_WORD *)(v9 + 26);
  }
  if ( (v10 & 1) != 0 )
    *(_DWORD *)(a1 + 120) = v5 | 0x8000;
  v11 = *(void **)(a1 + 3152);
  if ( v11 )
    memset(v11, 0, 112LL * ndisMaxNumberOfProcessors);
  v12 = *(void **)(a1 + 4096);
  if ( v12 )
    memset(v12, 0, 0x538uLL);
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  ndisOpenULongRef((PKSPIN_LOCK)(a1 + 4432));
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4,
                          1,
                          99,
                          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
                          a1);
  return result;
}

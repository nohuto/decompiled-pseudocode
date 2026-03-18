/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C000FC40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C00101E0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002C91C (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030144 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1C00548E8 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v5; // rax
  ULONG_PTR v6; // rdx
  unsigned int v7; // edx
  ULONG_PTR v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  if ( *(_QWORD *)(v1 + 440) || *(_QWORD *)(v1 + 392) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C0082858 = 0;
    pszDest = 0;
LABEL_31:
    FreeDataBuffs(v2, 1LL);
    goto LABEL_6;
  }
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 861098079LL);
  *(_QWORD *)(v1 + 440) = v5;
  if ( !v5 )
    *(_QWORD *)(v1 + 440) = *(_QWORD *)(v1 + 432);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( *(_WORD *)(v2 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v15 = ACPIBuildDevicePowerNodes(v1, v6);
    dword_1C0082858 = 0;
    v3 = v15;
    pszDest = 0;
    goto LABEL_31;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v1 + 952) & 0x400040) == 0 )
  {
    v7 = 0;
    v8 = v1 + 360;
    while ( !*(_QWORD *)v8 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 96LL) )
    {
      ++v7;
      v8 += 8LL;
      if ( v7 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 56);
    if ( v14 )
      AMLIDereferenceHandleEx(v14);
    *(_QWORD *)(a1 + 56) = 0LL;
    v9 = 31;
  }
  else
  {
    v9 = 30;
  }
  *(_DWORD *)(a1 + 32) = v9;
  v10 = *(_QWORD *)(v1 + 8);
  v11 = &unk_1C006FE7D;
  v12 = &unk_1C006FE7D;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(void **)(v1 + 560);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      6,
      42,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v3,
      v1,
      (__int64)v11,
      (__int64)v12);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}

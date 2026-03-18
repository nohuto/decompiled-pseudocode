/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C000FAB0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00101E0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  void *v4; // rax
  __int64 v5; // rcx
  void *v6; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( v8 )
    {
      AMLIDereferenceHandleEx(v8);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v9 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 )
      v3 = AMLIAsyncEvalObject(v9, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
  }
  *(_DWORD *)(a1 + 32) = 5;
  v4 = &unk_1C006FE7D;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C006FE7D;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v4 = *(void **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 568);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      6,
      31,
      (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
      v3,
      v1,
      (__int64)v4,
      v10);
  }
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}

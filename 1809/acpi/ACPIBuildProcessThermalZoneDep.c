/*
 * XREFs of ACPIBuildProcessThermalZoneDep @ 0x1C002FF10
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C00159F0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( v8 )
    {
      AMLIDereferenceHandleEx(v8);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v9 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1346716767);
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 )
      v3 = AMLIAsyncEvalObject(v9, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C006E28A;
  v6 = &unk_1C006E28A;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(void **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 568);
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x4Bu,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v5,
    (__int64)v6);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}

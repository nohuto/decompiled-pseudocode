/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C0015120
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

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rax
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 952) & 0x20) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 56);
    if ( v10 )
    {
      AMLIDereferenceHandleEx(v10);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v11 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1346716767LL, v4, v5);
    *(_QWORD *)(a1 + 56) = v11;
    if ( v11 )
      v3 = AMLIAsyncEvalObject(v11, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
  }
  *(_DWORD *)(a1 + 32) = 5;
  v6 = &unk_1C006E28A;
  v7 = *(_QWORD *)(v1 + 8);
  v8 = &unk_1C006E28A;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v6 = *(void **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 568);
  }
  v12 = (__int64)v8;
  LOBYTE(v8) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v8,
    6,
    31,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v3,
    v1,
    (__int64)v6,
    v12);
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}

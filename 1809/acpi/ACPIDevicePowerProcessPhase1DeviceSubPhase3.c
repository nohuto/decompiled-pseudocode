/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011A80
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001D208 (WPP_RECORDER_SF_qLdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r14
  __int64 v10; // rdx
  void *v11; // rax
  void *v12; // rcx
  int v14; // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  if ( (v1[1] & 0x200000000000000LL) != 0 )
    v6 = *(_QWORD *)(v1[23] + 712LL);
  else
    v6 = v1[89];
  v7 = AMLIGetNamedChild(v6, 1096045407LL, v4, v5);
  v8 = 0;
  v9 = v7;
  if ( v7 )
  {
    if ( *(_WORD *)(*(_QWORD *)v7 + 66LL) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v8 = AMLIAsyncEvalObject(v7, v2, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v9);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  v10 = v1[1];
  v11 = &unk_1C006E28A;
  v12 = &unk_1C006E28A;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = (void *)v1[70];
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = (void *)v1[71];
  }
  WPP_RECORDER_SF_qLdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    0,
    59,
    v14,
    a1,
    v8,
    *(_DWORD *)(a1 + 212),
    (char)v1,
    (__int64)v11,
    (__int64)v12);
  if ( v8 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v8, 0LL, a1);
  return v8;
}

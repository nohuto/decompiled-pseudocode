/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0028240
 * Callers:
 *     <none>
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0028640 (WPP_RECORDER_SF_qLdqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp
  __int64 *v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // esi
  volatile signed __int32 *v7; // r14

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  if ( (v1[1] & 0x200000000000000LL) != 0 )
    v4 = *(__int64 **)(v1[23] + 712LL);
  else
    v4 = (__int64 *)v1[89];
  v5 = AMLIGetNamedChild(v4, 1096045407);
  v6 = 0;
  v7 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    if ( *(_WORD *)(*v5 + 66) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v6 = AMLIAsyncEvalObject(v5, (_SLIST_ENTRY *)v2, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v7);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, (unsigned int)&WPP_RECORDER_INITIALIZED, 0, 59);
  if ( v6 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return v6;
}

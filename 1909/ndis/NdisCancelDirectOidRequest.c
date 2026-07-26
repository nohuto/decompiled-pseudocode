/*
 * XREFs of NdisCancelDirectOidRequest @ 0x1C0068E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C006A6E0 (ndisDoCancelDirectOidRequest.c)
 */

void __stdcall NdisCancelDirectOidRequest(NDIS_HANDLE NdisBindingHandle, PVOID RequestId)
{
  KSPIN_LOCK *v2; // rbp
  KSPIN_LOCK v3; // rbx
  KSPIN_LOCK v4; // rdi
  char v5; // si
  char v6; // r14
  KIRQL v7; // r12
  KSPIN_LOCK v8; // rcx
  int v9; // [rsp+70h] [rbp+8h] BYREF

  v2 = (KSPIN_LOCK *)*((_QWORD *)NdisBindingHandle + 2);
  v3 = 0LL;
  v4 = 0LL;
  v5 = (char)RequestId;
  v6 = (char)NdisBindingHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      186,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)NdisBindingHandle,
      (char)RequestId);
  v7 = KeAcquireSpinLockRaiseToDpc(v2 + 12);
  v2[65] = (KSPIN_LOCK)KeGetCurrentThread();
  v8 = v2[332];
  if ( *(_BYTE *)v8 == 5 )
  {
    v3 = v2[332];
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v8 + 312), 2u, &v9) )
      v3 = 0LL;
  }
  else
  {
    v4 = v2[332];
  }
  v2[65] = 0LL;
  KeReleaseSpinLock(v2 + 12, v7);
  if ( v4 || v3 )
    ndisDoCancelDirectOidRequest(v4, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      187,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v6,
      v5);
}

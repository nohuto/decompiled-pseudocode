/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1C008E280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C006A510 (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *Parameter)
{
  __int64 v1; // rbp
  KSPIN_LOCK *v2; // rbx
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK *v4; // rsi
  bool v5; // r14
  KIRQL v6; // r12
  KSPIN_LOCK v7; // rax
  int v8; // [rsp+70h] [rbp+8h] BYREF

  v1 = Parameter[3];
  v2 = 0LL;
  v3 = (KSPIN_LOCK *)Parameter[1];
  v4 = 0LL;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      58,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v3,
      v1);
  v6 = KeAcquireSpinLockRaiseToDpc(v3 + 18);
  v3[19] = (KSPIN_LOCK)KeGetCurrentThread();
  v7 = v3[88];
  if ( *(_BYTE *)v7 == 5 )
  {
    v2 = (KSPIN_LOCK *)v3[88];
    v5 = ndisReferenceRefEx((PKSPIN_LOCK)(v7 + 312), 2u, &v8);
    if ( !v5 )
      v2 = 0LL;
  }
  else
  {
    v4 = (KSPIN_LOCK *)v3[88];
  }
  v3[19] = 0LL;
  KeReleaseSpinLock(v3 + 18, v6);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1);
  if ( v5 )
    ndisDereferenceRef(v2 + 39, 2u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      59,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)v3,
      v1);
}

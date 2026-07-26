/*
 * XREFs of ndisFCancelDirectOidRequestInternal @ 0x1C005B0A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C00447E0 (ndisDoCancelDirectOidRequest.c)
 */

void __fastcall ndisFCancelDirectOidRequestInternal(_QWORD *Parameter)
{
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  bool v5; // r14
  KIRQL v6; // r12
  __int64 v7; // rax
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v1 = Parameter[3];
  v2 = 0LL;
  v3 = Parameter[1];
  v4 = 0LL;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x37u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v3, v1);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 144));
  *(_QWORD *)(v3 + 152) = KeGetCurrentThread();
  v7 = *(_QWORD *)(v3 + 712);
  *(_DWORD *)(v3 + 160) = 2101399;
  if ( *(_BYTE *)v7 == 5 )
  {
    v2 = v7;
    v5 = ndisReferenceRefEx((PKSPIN_LOCK)(v7 + 320), 2u, &v8);
    if ( !v5 )
      v2 = 0LL;
  }
  else
  {
    v4 = v7;
  }
  *(_QWORD *)(v3 + 152) = 0LL;
  *(_DWORD *)(v3 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 144), v6);
  if ( v4 || v2 )
    ndisDoCancelDirectOidRequest(v4, v2, v1);
  if ( v5 )
    ndisDereferenceRef((PKSPIN_LOCK)(v2 + 320), 2u);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x38u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, v3, v1);
}

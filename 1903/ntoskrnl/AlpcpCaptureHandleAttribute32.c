/*
 * XREFs of AlpcpCaptureHandleAttribute32 @ 0x1406F7FF8
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 * Callees:
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406CB630 (AlpcpCaptureHandleAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureHandleAttribute32(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-20h]
  __int64 v5; // [rsp+40h] [rbp-18h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  LODWORD(v3) = *(_DWORD *)a1;
  v4 = *(int *)(a1 + 4);
  v5 = *(_QWORD *)(a1 + 8);
  return AlpcpCaptureHandleAttributeInternal((__int64)&v3, a2);
}

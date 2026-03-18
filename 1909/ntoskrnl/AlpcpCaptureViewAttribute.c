/*
 * XREFs of AlpcpCaptureViewAttribute @ 0x14065E55C
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3860 (AlpcpCaptureAttributes.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14065E5E8 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  _OWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v9[0] = *a2;
    v9[1] = a2[1];
    a2 = v9;
  }
  return AlpcpCaptureViewAttributeInternal(a1, a2, a3, a4);
}

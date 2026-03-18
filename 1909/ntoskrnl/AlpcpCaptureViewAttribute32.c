/*
 * XREFs of AlpcpCaptureViewAttribute32 @ 0x1406EB8E8
 * Callers:
 *     AlpcpCaptureAttributes @ 0x1405E3860 (AlpcpCaptureAttributes.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14065E5E8 (AlpcpCaptureViewAttributeInternal.c)
 */

__int64 __fastcall AlpcpCaptureViewAttribute32(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v9, 0, 0x20uLL);
  LODWORD(v9[0]) = *a2;
  v9[1] = (unsigned int)a2[1];
  v9[2] = (unsigned int)a2[2];
  v9[3] = (unsigned int)a2[3];
  return AlpcpCaptureViewAttributeInternal(a1, (__int64)v9, a3, a4);
}

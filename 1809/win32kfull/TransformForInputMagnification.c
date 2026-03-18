/*
 * XREFs of TransformForInputMagnification @ 0x1C01BEFF0
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ConvertPointCoordinates @ 0x1C01BECC8 (ConvertPointCoordinates.c)
 *     AcquireMagInputLock @ 0x1C01ECA68 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C01ECB04 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C01ECBBC (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12[6]; // [rsp+30h] [rbp-18h] BYREF

  AcquireMagInputLock();
  v6 = MagInputTransform();
  if ( v6 )
  {
    if ( PtInRect((_DWORD *)(v6 + 16), *a3) )
    {
      MagnificationTransformPoint(v7, a3);
      v8 = *a3;
      v9 = *(_OWORD *)(a1 + 176);
      *(_OWORD *)v12 = *(_OWORD *)(a1 + 160);
      v11 = v9;
      if ( !ConvertPointCoordinates(v8, v12, (int *)&v11, a2) )
        *a2 = 0LL;
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}

/*
 * XREFs of TransformForInputMagnification @ 0x1C01D2B50
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     ConvertPointCoordinates @ 0x1C01D2808 (ConvertPointCoordinates.c)
 *     AcquireMagInputLock @ 0x1C0203074 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C0203104 (MagInputTransform.c)
 *     MagnificationTransformPoint @ 0x1C02031BC (MagnificationTransformPoint.c)
 */

__int64 __fastcall TransformForInputMagnification(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int128 v9; // xmm0
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int128 v13; // [rsp+40h] [rbp-18h]

  AcquireMagInputLock();
  v6 = MagInputTransform();
  if ( v6 )
  {
    if ( PtInRect((_DWORD *)(v6 + 16), *a3) )
    {
      MagnificationTransformPoint(v7, a3);
      v8 = *a3;
      v9 = *(_OWORD *)(a1 + 176);
      v13 = *(_OWORD *)(a1 + 160);
      v11 = v9;
      v12 = v13;
      if ( !(unsigned int)ConvertPointCoordinates(v8, (int *)&v12, (int *)&v11, a2) )
        *a2 = 0LL;
    }
  }
  _InterlockedExchange64(&gpMagInputLock, 0LL);
  return 1LL;
}

/*
 * XREFs of AddMagnificationOutputTransform @ 0x1C0115B00
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     memcmp @ 0x1C0162B10 (memcmp.c)
 *     AcquireMagInputLock @ 0x1C0203324 (AcquireMagInputLock.c)
 *     MagInputTransform @ 0x1C02033B4 (MagInputTransform.c)
 *     MagnificationInverseTransformPoint @ 0x1C02033D4 (MagnificationInverseTransformPoint.c)
 */

__int64 __fastcall AddMagnificationOutputTransform(unsigned __int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdi
  float v6; // xmm2_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  __int64 v11; // rcx

  result = grpdeskRitInput;
  v5 = *(_QWORD *)(grpdeskRitInput + 224LL);
  if ( v5 )
  {
    result = *(unsigned int *)(v5 + 16);
    if ( (result & 2) != 0 )
    {
      if ( memcmp((const void *)(v5 + 88), &gMagOutTransformIdentity, 0x20uLL) )
      {
        v6 = *(double *)(v5 + 88);
        v7 = *(double *)(v5 + 104);
        v8 = *(double *)(v5 + 112);
        if ( v6 != 1.0 || v7 != 0.0 || v8 != 0.0 )
        {
          v9 = v7 + *(float *)(a2 + 48);
          v10 = v8 + *(float *)(a2 + 52);
          *(float *)(a2 + 48) = v9;
          *(float *)(a2 + 52) = v10;
          if ( v6 != 1.0 )
          {
            *(_DWORD *)(a2 + 40) = 1065353216;
            *(_DWORD *)(a2 + 60) = 1065353216;
            *(float *)(a2 + 48) = v9 * v6;
            *(float *)a2 = v6;
            *(float *)(a2 + 52) = v10 * v6;
            *(float *)(a2 + 20) = v6;
          }
        }
      }
      AcquireMagInputLock();
      result = MagInputTransform();
      if ( result )
      {
        result = PtInRect((_DWORD *)result, *a1);
        if ( (_DWORD)result )
          result = MagnificationInverseTransformPoint(v11, a1);
      }
      _InterlockedExchange64(&gpMagInputLock, 0LL);
    }
  }
  return result;
}

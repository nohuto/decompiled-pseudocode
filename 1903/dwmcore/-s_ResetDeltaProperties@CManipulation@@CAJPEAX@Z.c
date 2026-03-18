/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x1801E4980
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(char *a1)
{
  char v1; // dl
  unsigned int v2; // ebx

  if ( a1 )
  {
    v1 = a1[440];
    v2 = 0;
    if ( (v1 & 1) != 0 )
    {
      v1 &= ~1u;
      *(_QWORD *)(a1 + 268) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a1 + 69) = 0;
      a1[440] = v1;
    }
    if ( (v1 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 292) = _mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
      *((_DWORD *)a1 + 75) = 1065353216;
      a1[440] = v1 & 0xFD;
    }
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x80070057, 0x429u, 0LL);
  }
  return v2;
}

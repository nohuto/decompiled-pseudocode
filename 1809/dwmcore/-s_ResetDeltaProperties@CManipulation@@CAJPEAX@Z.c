/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x1801A77B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?attach@?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z @ 0x1801A7778 (-attach@-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVCManipulation@@@Z.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(char *a1)
{
  unsigned int v2; // ebx
  char v3; // cl
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  v2 = a1 == 0LL ? 0x80070057 : 0;
  if ( a1 )
  {
    wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::attach(&v5, (__int64)a1);
    v3 = a1[440];
    if ( (v3 & 1) != 0 )
    {
      v3 &= ~1u;
      *(_QWORD *)(a1 + 268) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a1 + 69) = 0;
      a1[440] = v3;
    }
    if ( (v3 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 292) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
      *((_DWORD *)a1 + 75) = 1065353216;
      a1[440] = v3 & 0xFD;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v2, 0x431u);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
  return v2;
}

/*
 * XREFs of ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x18002D3DC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001C7B0 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002D580 (-SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationTransform::ProcessSetComponents(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v15; // [rsp+38h] [rbp-28h]
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+38h] [rbp-28h]
  unsigned __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  int v20; // [rsp+48h] [rbp-18h]

  (*(void (__fastcall **)(CManipulationTransform *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  v15 = *((_DWORD *)a3 + 4);
  v19 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 2), (__m128)*((unsigned int *)a3 + 3)).m128_u64[0];
  v20 = v15;
  v5 = CManipulationTransform::SetProperty(this, 0LL, 52LL, &v19);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x58u, 0LL);
  }
  else
  {
    v16 = *((_DWORD *)a3 + 7);
    v19 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 5), (__m128)*((unsigned int *)a3 + 6)).m128_u64[0];
    v20 = v16;
    v8 = CManipulationTransform::SetProperty(this, 1LL, 52LL, &v19);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x5Bu, 0LL);
    }
    else
    {
      v17 = *((_DWORD *)a3 + 10);
      v19 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 8), (__m128)*((unsigned int *)a3 + 9)).m128_u64[0];
      v20 = v17;
      v10 = CManipulationTransform::SetProperty(this, 2LL, 52LL, &v19);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x5Eu, 0LL);
      }
      else
      {
        v18 = *((_DWORD *)a3 + 13);
        v19 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 11), (__m128)*((unsigned int *)a3 + 12)).m128_u64[0];
        v20 = v18;
        v12 = CManipulationTransform::SetProperty(this, 3LL, 52LL, &v19);
        v7 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x61u, 0LL);
        }
        else
        {
          if ( *((_BYTE *)this + 264) )
          {
            CManipulationTransform::CalculateMatrixFromDelta(
              (CManipulationTransform *)((char *)this + 152),
              (CManipulationTransform *)((char *)this + 176),
              (CManipulationTransform *)((char *)this + 188),
              (CManipulationTransform *)((char *)this + 200));
            *((_BYTE *)this + 264) = 0;
          }
          return 0;
        }
      }
    }
  }
  return v7;
}

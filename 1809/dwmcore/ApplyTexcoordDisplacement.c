/*
 * XREFs of ApplyTexcoordDisplacement @ 0x18022AEDC
 * Callers:
 *     PrepareSamplerTexcoord @ 0x1800E2DD8 (PrepareSamplerTexcoord.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800DF418 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     GetChannelSelectorXFunction_32_ @ 0x18022ACF4 (GetChannelSelectorXFunction_32_.c)
 *     GetChannelSelectorYFunction_32_ @ 0x18022ADE8 (GetChannelSelectorYFunction_32_.c)
 */

__int64 __fastcall ApplyTexcoordDisplacement(__int64 a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r14
  int v8; // edi
  char v10; // cl
  __int16 v11; // di
  __int16 v12; // r14
  int appended; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rcx
  _WORD v19[2]; // [rsp+30h] [rbp-50h] BYREF
  _WORD v20[6]; // [rsp+34h] [rbp-4Ch] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  int v22; // [rsp+50h] [rbp-30h]
  _BYTE v23[32]; // [rsp+58h] [rbp-28h] BYREF

  v4 = *(_WORD *)(a3 + 20);
  v22 = (unsigned __int8)a2;
  v8 = *(_DWORD *)(a1 + 80);
  v10 = *(_BYTE *)(a3 + 18);
  *(_DWORD *)(a1 + 80) = v8 + 1;
  v11 = v8 | 0x600;
  v12 = v4 | 0x200;
  GetChannelSelectorXFunction_32_(v10, a2, v23);
  *(_QWORD *)&v21 = 2LL;
  *((_QWORD *)&v21 + 1) = v19;
  v19[0] = a2;
  v19[1] = v12;
  appended = CShaderLinkingGraphBuilder::AppendNode(a1, v11, (__int64)psz, a4, (__int64)v23, &v21);
  v15 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, appended, 0x24Eu);
  }
  else
  {
    GetChannelSelectorYFunction_32_(*(_BYTE *)(a3 + 19), v22, v23);
    *(_QWORD *)&v21 = 2LL;
    *((_QWORD *)&v21 + 1) = v20;
    v20[0] = v11;
    v20[1] = v12;
    v16 = CShaderLinkingGraphBuilder::AppendNode(a1, a2, (__int64)psz, a4, (__int64)v23, &v21);
    v15 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x257u);
  }
  return v15;
}

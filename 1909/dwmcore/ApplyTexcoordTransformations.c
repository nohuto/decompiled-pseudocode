/*
 * XREFs of ApplyTexcoordTransformations @ 0x180032870
 * Callers:
 *     PerformSample @ 0x1800317BC (PerformSample.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x180032580 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ApplyTexcoordExtendMode @ 0x180032914 (ApplyTexcoordExtendMode.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall ApplyTexcoordTransformations(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, void *a5)
{
  unsigned __int16 v6; // bp
  __int64 v7; // rsi
  _BYTE *v10; // rsi
  char v11; // dl
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int64 v16; // r12
  int v17; // eax
  unsigned int v18; // ecx
  __int16 v19; // r9
  int v20; // eax
  unsigned int v21; // ecx
  int appended; // eax
  unsigned int v23; // ecx
  __int128 v24; // [rsp+40h] [rbp-28h] BYREF
  char v25; // [rsp+80h] [rbp+18h] BYREF
  char v26; // [rsp+82h] [rbp+1Ah] BYREF

  v6 = a4;
  v7 = a3;
  v10 = (_BYTE *)(a2 + 32 * v7);
  LOBYTE(a4) = v10[16];
  if ( (_BYTE)a4 == v10[17] )
  {
    v11 = 0;
    if ( !*(_BYTE *)(a2 + 156) )
      v11 = v10[16];
    LOBYTE(a4) = v11;
    v12 = ApplyTexcoordExtendMode(a1, v6, a3, a4, v10[20], (__int64)a5, 0LL);
    v14 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x236u, 0LL);
  }
  else
  {
    v16 = (__int64)a5;
    v17 = ApplyTexcoordExtendMode(a1, v6, a3, a4, v10[20], (__int64)a5, (__int64)&v25);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x23Cu, 0LL);
    }
    else
    {
      LOBYTE(v19) = v10[17];
      v20 = ApplyTexcoordExtendMode(a1, v6, a3, v19, v10[20], v16, (__int64)&v26);
      v14 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x23Du, 0LL);
      }
      else
      {
        *(_QWORD *)&v24 = 2LL;
        *((_QWORD *)&v24 + 1) = &v25;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v6,
                     (__int64)byte_18028123E,
                     v16,
                     (__int64)"BorderEffectCombine",
                     &v24);
        v14 = appended;
        if ( appended < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, appended, 0x23Fu, 0LL);
      }
    }
  }
  return v14;
}

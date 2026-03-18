/*
 * XREFs of ?Update@CAtlasImageSource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x18001A164
 * Callers:
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180019FA8 (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 * Callees:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18001A1C4 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasImageSource::Update(__int64 a1, __int128 *a2, char a3)
{
  __int64 v5; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v10; // ecx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v5 = a1 + 32;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v11 = *a2;
    CAtlasTexture::UpdateGradientStrip(v7, v5, &v11);
    v8 = 0;
    *(_BYTE *)(a1 + 56) = a3;
    *(_BYTE *)(a1 + 57) = 1;
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003304307, 0x2Cu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003304307, 0xAAu, 0LL);
  }
  return v8;
}

/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@ULightInfo@@$0A@@@QEAAJPEFBULightInfo@@I@Z @ 0x180015AC0
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18000790C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<LightInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  __int128 v7; // xmm0
  _OWORD *v8; // rdx
  int v10; // eax
  unsigned int v11; // ecx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 240LL, 1LL, a2);
      v5 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC3u, 0LL);
    }
    else
    {
      v6 = (_OWORD *)(*(_QWORD *)a1 + 240 * v2);
      *v6 = *a2;
      v6[1] = a2[1];
      v6[2] = a2[2];
      v6[3] = a2[3];
      v6[4] = a2[4];
      v6[5] = a2[5];
      v6[6] = a2[6];
      v6 += 8;
      v7 = a2[7];
      v8 = a2 + 8;
      *(v6 - 1) = v7;
      *v6 = *v8;
      v6[1] = v8[1];
      v6[2] = v8[2];
      v6[3] = v8[3];
      v6[4] = v8[4];
      v6[5] = v8[5];
      v6[6] = v8[6];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}

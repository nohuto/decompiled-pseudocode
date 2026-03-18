/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x180017BD8
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  _OWORD *v9; // rcx

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
    if ( v4 <= *(_DWORD *)(a1 + 20) )
    {
      v9 = (_OWORD *)(*(_QWORD *)a1 + 80 * v2);
      *v9 = *a2;
      v9[1] = a2[1];
      v9[2] = a2[2];
      v9[3] = a2[3];
      v9[4] = a2[4];
      *(_DWORD *)(a1 + 24) = v4;
    }
    else
    {
      v6 = DynArrayImpl<0>::AddMultipleAndSet(a1, 80LL, 1LL, a2);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xC3u, 0LL);
    }
  }
  return v5;
}

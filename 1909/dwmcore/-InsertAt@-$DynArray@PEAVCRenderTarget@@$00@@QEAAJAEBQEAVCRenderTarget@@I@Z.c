/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x180028468
 * Callers:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028390 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800AADF4 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CRenderTarget *,1>::InsertAt(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _QWORD *v11; // r9
  _QWORD *v13; // r9
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *((_DWORD *)a1 + 6) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)a1, 0LL, 0, -2147024809, 0x1CEu, 0LL);
  }
  else
  {
    v14 = a2;
    v5 = DynArrayImpl<1>::Grow((_DWORD)a1, 8, 1, 0, (__int64)&v14);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1D8u, 0LL);
    }
    else
    {
      v8 = *((unsigned int *)a1 + 6);
      v9 = *a1;
      *((_DWORD *)a1 + 6) = v8 + 1;
      if ( (unsigned int)v8 > (unsigned int)v4 )
      {
        v13 = (_QWORD *)(v9 + 8 * v8);
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *v13-- = *(_QWORD *)(v9 + 8 * v8);
        }
        while ( (unsigned int)v8 > (unsigned int)v4 );
      }
      v10 = v14;
      v11 = (_QWORD *)(v9 + 8 * v4);
      if ( v14 >= v11 && (unsigned __int64)v14 < v9 + 8 * ((unsigned __int64)*((unsigned int *)a1 + 6) - 1) )
        v10 = v14 + 1;
      *v11 = *v10;
    }
  }
  return v7;
}

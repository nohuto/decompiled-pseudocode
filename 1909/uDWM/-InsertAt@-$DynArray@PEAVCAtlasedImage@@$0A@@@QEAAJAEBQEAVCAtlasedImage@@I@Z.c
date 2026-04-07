/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x18001674C
 * Callers:
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x180001F24 (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180025188 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800175C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CAtlasedImage *,0>::InsertAt(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // r9
  _QWORD *v12; // r9
  void *v13; // [rsp+28h] [rbp-10h]
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *((_DWORD *)a1 + 6) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u, v13);
  }
  else
  {
    v14 = a2;
    v5 = DynArrayImpl<0>::Grow((_DWORD)a1, 8, 1, 0, (__int64)&v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1CDu, v13);
    }
    else
    {
      v7 = *((unsigned int *)a1 + 6);
      v8 = *a1;
      *((_DWORD *)a1 + 6) = v7 + 1;
      if ( (unsigned int)v7 > (unsigned int)v4 )
      {
        v12 = (_QWORD *)(v8 + 8 * v7);
        do
        {
          v7 = (unsigned int)(v7 - 1);
          *v12-- = *(_QWORD *)(v8 + 8 * v7);
        }
        while ( (unsigned int)v7 > (unsigned int)v4 );
      }
      v9 = v14;
      v10 = (_QWORD *)(v8 + 8 * v4);
      if ( v14 >= v10 && (unsigned __int64)v14 < v8 + 8 * ((unsigned __int64)*((unsigned int *)a1 + 6) - 1) )
        v9 = v14 + 1;
      *v10 = *v9;
    }
  }
  return v6;
}

/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJAEBQEAVCWindowData@@I@Z @ 0x180039378
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180018A90 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180016F50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CWindowData *,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  char *v8; // r8
  char *v9; // r9
  char *v10; // rdx
  char *v11; // r9
  void *v13; // [rsp+28h] [rbp-10h]
  char *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 > *(_DWORD *)(a1 + 24) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u, v13);
  }
  else
  {
    v14 = (char *)a2;
    v5 = DynArrayImpl<0>::Grow((char **)a1, 8u, 1, 0, (unsigned __int64 *)&v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1CDu, v13);
    }
    else
    {
      v7 = *(unsigned int *)(a1 + 24);
      v8 = *(char **)a1;
      *(_DWORD *)(a1 + 24) = v7 + 1;
      if ( (unsigned int)v7 > (unsigned int)v4 )
      {
        v9 = &v8[8 * v7];
        do
        {
          v7 = (unsigned int)(v7 - 1);
          *(_QWORD *)v9 = *(_QWORD *)&v8[8 * v7];
          v9 -= 8;
        }
        while ( (unsigned int)v7 > (unsigned int)v4 );
      }
      v10 = v14;
      v11 = &v8[8 * v4];
      if ( v14 >= v11 && v14 < &v8[8 * *(unsigned int *)(a1 + 24) - 8] )
        v10 = v14 + 8;
      *(_QWORD *)v11 = *(_QWORD *)v10;
    }
  }
  return v6;
}

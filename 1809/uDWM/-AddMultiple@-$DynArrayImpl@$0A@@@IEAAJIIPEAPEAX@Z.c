/*
 * XREFs of ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1800B1840
 * Callers:
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x180096CA4 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArrayImpl<0>::AddMultiple(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  int v8; // eax
  unsigned int v9; // edi

  v8 = DynArrayImpl<0>::Grow((char **)a1, a2, a3, 0, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( a4 )
      *a4 = *(_QWORD *)a1 + a2 * *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 24) += a3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1A7u);
  }
  return v9;
}

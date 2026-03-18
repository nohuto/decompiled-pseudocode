/*
 * XREFs of ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C02B788C
 * Callers:
 *     NtGdiUpdateColors @ 0x1C02B0950 (NtGdiUpdateColors.c)
 * Callees:
 *     ?pCreateXlate@@YAPEAVXLATE@@K@Z @ 0x1C02B7E8C (-pCreateXlate@@YAPEAVXLATE@@K@Z.c)
 *     ?vCheckForTrivial@XLATE@@QEAAXXZ @ 0x1C02B7FB8 (-vCheckForTrivial@XLATE@@QEAAXXZ.c)
 */

XLATE **__fastcall XLATEMEMOBJ::XLATEMEMOBJ(XLATE **a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  struct XLATE *Xlate; // rax
  unsigned int v8; // edx
  XLATE *v9; // rcx
  __int64 i; // r8
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax

  v4 = 0;
  *a1 = 0LL;
  Xlate = pCreateXlate(*(_DWORD *)(a2 + 28));
  *a1 = Xlate;
  if ( Xlate )
  {
    *((_QWORD *)Xlate + 5) = a2;
    v8 = 0;
    *((_QWORD *)*a1 + 6) = a2;
    *((_QWORD *)*a1 + 7) = a3;
    v9 = *a1;
    for ( i = (__int64)*a1 + 84; v8 < *((_DWORD *)*a1 + 3); v9 = *a1 )
    {
      *(_DWORD *)(i + 4LL * v8) = v8;
      ++v8;
    }
    v11 = *(_QWORD *)(a3 + 88);
    v12 = *(_QWORD *)(a3 + 80);
    if ( *(_DWORD *)(a3 + 28) )
    {
      do
      {
        v13 = v4++;
        *(_DWORD *)(i + 4LL * *(unsigned __int8 *)(v11 + v13 + 4)) = *(unsigned __int8 *)(v12 + v13 + 4);
      }
      while ( v4 < *(_DWORD *)(a3 + 28) );
      v9 = *a1;
    }
    XLATE::vCheckForTrivial(v9);
  }
  return a1;
}

/*
 * XREFs of ?UnmapDeferredSharedSectionViews@CComposition@@IEAAXXZ @ 0x180177DF8
 * Callers:
 *     ??1CComposition@@MEAA@XZ @ 0x180176B24 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CComposition::UnmapDeferredSharedSectionViews(CComposition *this)
{
  __int64 v2; // rdi

  if ( *((_DWORD *)this + 194) )
  {
    v2 = 0LL;
    do
    {
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 94) + 8 * v2));
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 194) );
    *((_DWORD *)this + 194) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 752, 8u);
  }
}

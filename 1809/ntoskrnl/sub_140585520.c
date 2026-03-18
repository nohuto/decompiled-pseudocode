/*
 * XREFs of sub_140585520 @ 0x140585520
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     sub_140585FE0 @ 0x140585FE0 (sub_140585FE0.c)
 */

__int64 __fastcall sub_140585520(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, size_t Size)
{
  int v9; // edi
  size_t v10; // rcx
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  Src = 0LL;
  *(_BYTE *)Size = 1;
  v9 = sub_140585FE0((unsigned __int64)&Src & -(__int64)(a2 != 0LL), &Size);
  if ( v9 >= 0 )
  {
    v10 = (unsigned int)Size;
    *a4 = Size;
    if ( a1 )
      *a1 = 3;
    if ( (unsigned int)v10 > a3 )
    {
      v9 = -1073741789;
    }
    else if ( a2 )
    {
      memmove(a2, Src, v10);
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v9;
}

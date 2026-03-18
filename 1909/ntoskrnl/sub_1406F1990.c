/*
 * XREFs of sub_1406F1990 @ 0x1406F1990
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_1406265C0 @ 0x1406265C0 (sub_1406265C0.c)
 */

__int64 __fastcall sub_1406F1990(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, size_t Size)
{
  int v9; // edi
  size_t v10; // rcx
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  Src = 0LL;
  *(_BYTE *)Size = 1;
  v9 = sub_1406265C0((PVOID *)((unsigned __int64)&Src & -(__int64)(a2 != 0LL)), &Size);
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

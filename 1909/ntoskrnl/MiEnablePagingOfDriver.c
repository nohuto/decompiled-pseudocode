/*
 * XREFs of MiEnablePagingOfDriver @ 0x14074F8AC
 * Callers:
 *     MiEnablePagingTheExecutive @ 0x1409F1488 (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x1406A5638 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x140712BC8 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = MiImagePagable(a1, *(_QWORD *)(a1 + 48));
  if ( result )
  {
    v3 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v3, 1, 0LL, &v4, &v5);
      v3 = result;
      if ( v4 )
        result = (__int64)MiSetPagingOfDriver(a1, v4, v5);
    }
    while ( v3 );
  }
  return result;
}

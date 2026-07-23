/*
 * XREFs of MiEnablePagingOfDriver @ 0x14072C760
 * Callers:
 *     MiEnablePagingTheExecutive @ 0x1409BDDDC (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x140654D40 (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x140654DA0 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(_QWORD *a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  result = (__int64)MiImagePagable(a1, a1[6]);
  if ( result )
  {
    v3 = 0;
    do
    {
      result = MiSnapDriverRange((__int64)a1, v3, 1, 0LL, &v4, &v5);
      v3 = result;
      if ( v4 )
        result = (__int64)MiSetPagingOfDriver((__int64)a1, v4, v5);
    }
    while ( v3 );
  }
  return result;
}

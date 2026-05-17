/*
 * XREFs of sub_180112D84 @ 0x180112D84
 * Callers:
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_180112D84(__int64 *a1)
{
  __int64 *v1; // rbx
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = (__int64 *)*a1;
      v3 = (__int64)v1 + 12;
      if ( *((_WORD *)a1 + 5) )
      {
        v4 = *((unsigned __int16 *)a1 + 5);
        do
        {
          ZwClose();
          v3 += 4LL;
          --v4;
        }
        while ( v4 );
      }
      result = ZwFreeVirtualMemory();
      a1 = v2;
      v1 = v2;
    }
    while ( v2 );
  }
  return result;
}

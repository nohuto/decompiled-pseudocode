/*
 * XREFs of sub_18000C5DC @ 0x18000C5DC
 * Callers:
 *     sub_18000C3A8 @ 0x18000C3A8 (sub_18000C3A8.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000C5DC(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( (_DWORD)a3 )
  {
    v3 = a2 - (_QWORD)a1;
    a3 = (unsigned int)a3;
    do
    {
      result = _byteswap_ulong(*(_DWORD *)((char *)a1 + v3));
      *a1++ = result;
      --a3;
    }
    while ( a3 );
  }
  return result;
}

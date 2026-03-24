/*
 * XREFs of ?RtlULongMult@@YAJKKPEAK@Z @ 0x140323E48
 * Callers:
 *     sub_1406244D4 @ 0x1406244D4 (sub_1406244D4.c)
 *     sub_1406917AC @ 0x1406917AC (sub_1406917AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongMult(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // ecx

  v3 = a2 * (unsigned __int64)a1;
  v4 = -1;
  if ( v3 <= 0xFFFFFFFF )
    v4 = v3;
  *a3 = v4;
  return v3 > 0xFFFFFFFF ? 0xC0000095 : 0;
}

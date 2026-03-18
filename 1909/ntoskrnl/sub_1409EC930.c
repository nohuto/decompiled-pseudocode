/*
 * XREFs of sub_1409EC930 @ 0x1409EC930
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 */

void __fastcall sub_1409EC930(_BYTE *Parameter)
{
  Parameter[28] = sub_1409D1EB4(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}

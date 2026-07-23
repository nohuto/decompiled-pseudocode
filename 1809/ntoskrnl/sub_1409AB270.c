/*
 * XREFs of sub_1409AB270 @ 0x1409AB270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 */

void __fastcall sub_1409AB270(_BYTE *Parameter)
{
  Parameter[28] = sub_140990E9C(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}

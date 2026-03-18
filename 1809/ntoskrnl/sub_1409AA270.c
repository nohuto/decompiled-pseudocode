/*
 * XREFs of sub_1409AA270 @ 0x1409AA270
 * Callers:
 *     <none>
 * Callees:
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 */

void __fastcall sub_1409AA270(_BYTE *Parameter)
{
  Parameter[28] = sub_14098FE9C(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}

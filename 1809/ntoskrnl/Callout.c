/*
 * XREFs of Callout @ 0x1406869A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_140686A00(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}

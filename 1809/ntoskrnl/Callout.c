/*
 * XREFs of Callout @ 0x140685800
 * Callers:
 *     <none>
 * Callees:
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_140685860(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}

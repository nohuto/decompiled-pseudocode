/*
 * XREFs of Callout @ 0x1406857E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 */

void __fastcall Callout(_DWORD *Parameter)
{
  Parameter[7] = sub_140685840(
                   *(_QWORD *)Parameter,
                   Parameter[2],
                   Parameter[3],
                   (int)Parameter + 16,
                   (__int64)(Parameter + 6));
}

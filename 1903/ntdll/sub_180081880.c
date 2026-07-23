/*
 * XREFs of sub_180081880 @ 0x180081880
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180081880(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 124) )
    RtlReleasePath(*(PWSTR *)a1);
}

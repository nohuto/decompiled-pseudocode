/*
 * XREFs of iswdigit @ 0x180090720
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x1800285E0 (RtlpIsDosDeviceName_Ustr.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}

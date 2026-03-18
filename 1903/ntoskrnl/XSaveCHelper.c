/*
 * XREFs of XSaveCHelper @ 0x1401CC9B0
 * Callers:
 *     RtlXSave @ 0x14012E4A4 (RtlXSave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveCHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsavec  byte ptr [rcx] }
  return result;
}

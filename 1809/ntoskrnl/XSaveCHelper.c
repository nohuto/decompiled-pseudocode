/*
 * XREFs of XSaveCHelper @ 0x1401C6540
 * Callers:
 *     RtlXSave @ 0x14012E84C (RtlXSave.c)
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

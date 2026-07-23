/*
 * XREFs of XSaveSHelper @ 0x1401C6560
 * Callers:
 *     RtlXSaveS @ 0x140141E20 (RtlXSaveS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XSaveSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xsaves  byte ptr [rcx] }
  return result;
}

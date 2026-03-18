/*
 * XREFs of XSaveSHelper @ 0x1401CC9D0
 * Callers:
 *     RtlXSaveS @ 0x14012E47C (RtlXSaveS.c)
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

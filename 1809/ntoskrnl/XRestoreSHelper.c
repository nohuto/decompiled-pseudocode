/*
 * XREFs of XRestoreSHelper @ 0x1401C6400
 * Callers:
 *     RtlXRestoreS @ 0x1401421D8 (RtlXRestoreS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XRestoreSHelper(__int64 _RCX, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  __asm { xrstors byte ptr [rcx] }
  return result;
}

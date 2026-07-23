/*
 * XREFs of VfPnpAdvanceIrpStatus @ 0x140941150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VfPnpAdvanceIrpStatus(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a2 >= 0x100 )
    return 0LL;
  result = 1LL;
  if ( ++*a3 == 259 )
    *a3 = 260;
  return result;
}

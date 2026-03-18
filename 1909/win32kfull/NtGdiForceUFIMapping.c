/*
 * XREFs of NtGdiForceUFIMapping @ 0x1C00E56C0
 * Callers:
 *     <none>
 * Callees:
 *     GreForceUFIMapping @ 0x1C00E570C (GreForceUFIMapping.c)
 */

__int64 __fastcall NtGdiForceUFIMapping(HDC a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    return GreForceUFIMapping(a1);
  return result;
}

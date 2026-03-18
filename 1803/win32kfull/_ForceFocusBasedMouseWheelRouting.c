/*
 * XREFs of _ForceFocusBasedMouseWheelRouting @ 0x1C01F9410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForceFocusBasedMouseWheelRouting(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = PsGetCurrentProcessWin32Process(a1);
  if ( result )
  {
    *(_DWORD *)(result + 812) = *(_DWORD *)(result + 812) & 0xFFFF7FFF | (v1 != 0 ? 0x8000 : 0);
    return 1LL;
  }
  return result;
}

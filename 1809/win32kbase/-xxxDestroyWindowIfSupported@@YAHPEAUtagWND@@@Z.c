/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1C00877A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = IsxxxDestroyWindowSupported();
  v3 = 0;
  if ( v2 >= 0 )
    return (unsigned int)xxxDestroyWindow(a1, 0LL);
  return v3;
}

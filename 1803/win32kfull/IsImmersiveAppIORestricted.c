/*
 * XREFs of IsImmersiveAppIORestricted @ 0x1C00C19D4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsImmersiveAppIORestricted(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 812);
  return (v1 & 0x30) == 0x10 && (v1 & 0x200) == 0;
}

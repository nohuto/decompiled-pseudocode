/*
 * XREFs of LdrpReleaseDllPath @ 0x1800716E4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpReleaseDllPath(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 124) )
    RtlReleasePath(*(PWSTR *)a1);
}

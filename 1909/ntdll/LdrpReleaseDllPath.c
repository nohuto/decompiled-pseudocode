/*
 * XREFs of LdrpReleaseDllPath @ 0x180081F20
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpReleaseDllPath(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 124) )
    RtlReleasePath(*(PWSTR *)a1);
}

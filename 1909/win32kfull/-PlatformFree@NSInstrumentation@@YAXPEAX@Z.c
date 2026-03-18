/*
 * XREFs of ?PlatformFree@NSInstrumentation@@YAXPEAX@Z @ 0x1C00EF350
 * Callers:
 *     PlaySoundPostMessage @ 0x1C0368008 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::PlatformFree(PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}

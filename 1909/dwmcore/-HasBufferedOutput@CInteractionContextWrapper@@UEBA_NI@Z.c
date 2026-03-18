/*
 * XREFs of ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z @ 0x180232F30
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180232990 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 */

bool __fastcall CInteractionContextWrapper::HasBufferedOutput(CInteractionContextWrapper *this, int a2)
{
  return *((_DWORD *)this + 140) && (!a2 || CInteractionContextWrapper::FindBufferedOutputPointer(this, a2));
}

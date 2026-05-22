/*
 * XREFs of ?SetDropInputForCurrentSession@ActivationContext@@UEAAX_N@Z @ 0x1800C5210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ActivationContext::SetDropInputForCurrentSession(ActivationContext *this, char a2)
{
  *((_BYTE *)this + 68) = a2;
}

/*
 * XREFs of ?GetSize@CRenderTarget@@UEBAXPEAI0@Z @ 0x1800DA390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::GetSize(CRenderTarget *this, unsigned int *a2, unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 22);
  *a3 = *((_DWORD *)this + 23);
}

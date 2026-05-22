/*
 * XREFs of ?OnSipcSharedBuffer@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@0_K@Z @ 0x180071010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LampArrayRawInputProvider::OnSipcSharedBuffer(void *a1, struct ISIPCEndpoint *a2, void *a3)
{
  (*(void (__fastcall **)(struct ISIPCEndpoint *, void *))(*(_QWORD *)a2 + 40LL))(a2, a3);
}

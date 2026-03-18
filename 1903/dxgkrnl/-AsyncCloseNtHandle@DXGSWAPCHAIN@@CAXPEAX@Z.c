/*
 * XREFs of ?AsyncCloseNtHandle@DXGSWAPCHAIN@@CAXPEAX@Z @ 0x1C0285D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 */

void __fastcall DXGSWAPCHAIN::AsyncCloseNtHandle(void *a1)
{
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)a1 + 4), &ApcState);
  ObCloseHandle(*((HANDLE *)a1 + 5), 1);
  KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObject(*((PVOID *)a1 + 4));
  operator delete(a1);
}

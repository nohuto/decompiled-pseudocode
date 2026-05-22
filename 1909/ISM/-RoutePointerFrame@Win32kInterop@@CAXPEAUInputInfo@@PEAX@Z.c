/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800BEC50
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBB40 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x1800BC230 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18002CB4C (--_U@YAPEAX_K@Z.c)
 */

void __fastcall Win32kInterop::RoutePointerFrame(struct InputInfo *a1, void *a2)
{
  unsigned int *v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  unsigned int *i; // rdi
  const struct std::nothrow_t *v8; // rdx

  v4 = (unsigned int *)operator new[](saturated_mul(*((unsigned int *)a1 + 53), 4uLL));
  v5 = *((_DWORD *)a1 + 53);
  v6 = 0LL;
  for ( i = v4; (unsigned int)v6 < v5; v5 = *((_DWORD *)a1 + 53) )
  {
    v4[v6] = *((_DWORD *)a1 + 36 * v6 + 55);
    v6 = (unsigned int)(v6 + 1);
  }
  NtUserSetManipulationInputTarget(*((_DWORD *)a1 + 56), a2, v5, v4);
  operator delete(i, v8);
}

/*
 * XREFs of ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x180084744
 * Callers:
 *     ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180084240 (-DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18012C95C (--_U@YAPEAX_K@Z.c)
 */

void __fastcall Win32kInterop::RoutePointerFrame(struct InputInfo *a1, void *a2)
{
  unsigned int *v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  unsigned int *i; // rdi
  const struct std::nothrow_t *v8; // rdx

  v4 = (unsigned int *)operator new[](saturated_mul(*((unsigned int *)a1 + 12), 4uLL));
  v5 = *((_DWORD *)a1 + 12);
  v6 = 0LL;
  for ( i = v4; (unsigned int)v6 < v5; v5 = *((_DWORD *)a1 + 12) )
  {
    v4[v6] = *((_DWORD *)a1 + 8 * (unsigned int)v6 + 14);
    v6 = (unsigned int)(v6 + 1);
  }
  MITSetManipulationInputTarget(*((_DWORD *)a1 + 13), a2, v5, v4);
  operator delete(i, v8);
}

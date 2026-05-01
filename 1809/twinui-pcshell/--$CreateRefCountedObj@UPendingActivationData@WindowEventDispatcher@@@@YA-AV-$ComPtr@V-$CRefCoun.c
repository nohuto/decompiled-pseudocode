/*
 * XREFs of ??$CreateRefCountedObj@UPendingActivationData@WindowEventDispatcher@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@@WRL@Microsoft@@XZ @ 0x18007E9E8
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18001E254 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall CreateRefCountedObj<WindowEventDispatcher::PendingActivationData>(char **a1)
{
  char *v2; // rax
  char *v3; // rdi

  v2 = (char *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2 + 8, 0, 0x20uLL);
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    *((_DWORD *)v3 + 10) = 0;
    *(_QWORD *)v3 = &CRefCountedObject<WindowEventDispatcher::PendingActivationData>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
  return a1;
}

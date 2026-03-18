/*
 * XREFs of ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C0215930
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_PARAV::DestroyVirtualGpu(struct _KTHREAD **this, struct DXGK_VIRTUAL_GPU *a2)
{
  DXGPUSHLOCK *v3; // rcx
  __int64 v5; // rsi
  struct DXGK_VIRTUAL_GPU **v6; // rdx
  struct DXGK_VIRTUAL_GPU **v7; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v3 = (DXGPUSHLOCK *)(this + 5);
  v10 = v3;
  if ( this[6] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v3);
    v11 = 2;
  }
  v5 = *((unsigned int *)a2 + 6);
  --*((_DWORD *)this + 4);
  v6 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 14);
  if ( v6[1] != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 112)
    || (v7 = (struct DXGK_VIRTUAL_GPU **)*((_QWORD *)a2 + 15), *v7 != (struct DXGK_VIRTUAL_GPU *)((char *)a2 + 112)) )
  {
    __fastfail(3u);
  }
  *v7 = (struct DXGK_VIRTUAL_GPU *)v6;
  v6[1] = (struct DXGK_VIRTUAL_GPU *)v7;
  (*(void (__fastcall **)(struct DXGK_VIRTUAL_GPU *))(*(_QWORD *)a2 + 8LL))(a2);
  (**(void (__fastcall ***)(struct DXGK_VIRTUAL_GPU *, __int64))a2)(a2, 1LL);
  *((_QWORD *)this[3] + v5) = 0LL;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  return 0LL;
}

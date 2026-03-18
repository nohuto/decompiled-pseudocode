/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C02151F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C500 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C003C7A0 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C7E4 (-RemoveVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_PARAV::DestroyVirtualGpu(DXGPROCESS **this)
{
  DXGPROCESS *v2; // rcx
  __int64 v3; // rdx
  char *v4; // rcx
  char *v5; // rax
  __int64 v6; // rdx
  _BYTE v7[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF

  (*((void (__fastcall **)(DXGPROCESS **, _QWORD, _QWORD))*this + 2))(this, 0LL, 0LL);
  v2 = this[11];
  if ( v2 )
  {
    v3 = (__int64)this[12];
    if ( v3 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v8, (struct _KTHREAD **)(v3 + 64));
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v7, this + 7);
      v4 = (char *)(this + 30);
      while ( 1 )
      {
        v5 = *(char **)v4;
        if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD *)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
          __fastfail(3u);
        *(_QWORD *)v4 = v6;
        *(_QWORD *)(v6 + 8) = v4;
        if ( v5 == v4 )
          break;
        *((_QWORD *)v5 - 1) = 0LL;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
      DXGVIRTUALMACHINE::RemoveVirtualGpu((struct _KTHREAD **)this[12], (struct _LIST_ENTRY *)this + 8);
      this[12] = 0LL;
      v2 = this[11];
    }
    DXGPROCESS::ReleaseReferenceSafe(v2, v3);
    this[11] = 0LL;
  }
}

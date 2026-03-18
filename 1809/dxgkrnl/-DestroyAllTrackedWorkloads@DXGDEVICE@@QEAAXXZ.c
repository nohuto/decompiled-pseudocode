/*
 * XREFs of ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1C00EF9F0
 * Callers:
 *     ?DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z @ 0x1C00EF694 (-DxgkDestroyDeviceImpl@@YAJPEBU_D3DKMT_DESTROYDEVICE@@E@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C02602D4 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::DestroyAllTrackedWorkloads(struct _KTHREAD **this)
{
  char *v2; // rbx
  DXGTRACKEDWORKLOAD *v3; // rdi
  __int64 v4; // rax
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (char *)(this + 53);
  while ( *(char **)v2 != v2 )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 55);
    v3 = *(DXGTRACKEDWORKLOAD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2
      || (v4 = *(_QWORD *)v3, *(DXGTRACKEDWORKLOAD **)(*(_QWORD *)v3 + 8LL) != v3) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
    DXGTRACKEDWORKLOAD::DestroyTrackedWorkload(v3);
  }
}

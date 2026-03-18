/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58
 * Callers:
 *     ?Get@?$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z @ 0x1C00400B4 (-Get@-$CCachedData@VBLTENTRY@@$02@@QEAAPEAVBLTENTRY@@K@Z.c)
 *     ?Ensure@?$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z @ 0x1C0042910 (-Ensure@-$CDynamicArray@VVIDPNSOURCEINFO@@$07@@QEAAPEAVVIDPNSOURCEINFO@@K@Z.c)
 *     ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00F5510 (-AllocateElements@-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENC.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ @ 0x1C00F5560 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAA@XZ.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z @ 0x1C01235A0 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@H@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C013EB64 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     DxgkPinDirectFlipResources @ 0x1C013F0D0 (DxgkPinDirectFlipResources.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C013FFE0 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C014EA68 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0153678 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C015503C (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C0156514 (--0DXGGLOBAL@@AEAA@XZ.c)
 *     DxgkUpdateGpuVirtualAddress @ 0x1C01DB6D0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?Initialize@DripsBlockerInfoList@@QEAAJXZ @ 0x1C020FE3C (-Initialize@DripsBlockerInfoList@@QEAAJXZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ @ 0x1C022164C (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0CI@@@QEAA@XZ.c)
 *     ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C022FFE8 (-SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z.c)
 *     DxgkCheckDisplayState @ 0x1C025FE70 (DxgkCheckDisplayState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}

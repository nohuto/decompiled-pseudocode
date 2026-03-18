/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0144058
 * Callers:
 *     ?DisablePinnedHardware@DXGDEVICE@@QEAAXXZ @ 0x1C0143FBC (-DisablePinnedHardware@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C001A0FC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013F99C (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct _VIDMM_MULTI_ALLOC **a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rax
  struct DXGALLOCATION *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = (struct DXGALLOCATION *)a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v7 + 24) = 452LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( ((_DWORD)a2[9] & 0x800) != 0 )
  {
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
      a2[3]);
    *((_DWORD *)a2 + 18) &= ~0x800u;
  }
  v6 = *((_DWORD *)a2[6] + 1);
  if ( (v6 & 0x2000) != 0 )
  {
    if ( a2[3] )
      DXGDEVICE::UnpinDirectFlipAllocation(this, (v6 >> 6) & 0xF, v5, &v8, 0LL);
  }
}

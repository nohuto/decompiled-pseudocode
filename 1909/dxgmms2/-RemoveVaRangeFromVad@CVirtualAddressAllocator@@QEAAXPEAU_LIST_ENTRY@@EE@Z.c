/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C006A43C
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00744BC (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00777B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002474 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000288C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00777B0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3,
        char a4)
{
  struct _LIST_ENTRY **p_Blink; // r14
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v9; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v11; // rcx
  int v12; // ecx
  __int64 **VidMmAllocFromOwner; // r8
  struct _LIST_ENTRY *v14; // rcx
  struct _LIST_ENTRY *v15; // rdx
  struct _LIST_ENTRY *v16; // rax
  char *v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  char **v20; // rax

  p_Blink = &a2[-1].Blink;
  Blink = a2[-1].Blink;
  v9 = (LODWORD(a2[3].Blink) >> 4) & 0x3F;
  if ( *(&Blink[7].Flink + 3 * v9) == a2 )
    *((_QWORD *)&Blink[7].Flink + 3 * v9) = 0LL;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 )
    goto LABEL_16;
  v11 = a2->Blink;
  if ( v11->Flink != a2 )
    goto LABEL_16;
  v11->Flink = Flink;
  Flink->Blink = v11;
  v12 = *((_DWORD *)p_Blink + 16);
  a2->Flink = 0LL;
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v12 << 28 >> 28, (__int64)p_Blink[7]);
  if ( !VidMmAllocFromOwner )
    goto LABEL_6;
  v14 = (struct _LIST_ENTRY *)(p_Blink + 3);
  v15 = p_Blink[3];
  if ( v15 )
  {
    if ( v15->Blink != v14 )
      goto LABEL_16;
    v16 = p_Blink[4];
    if ( v16->Flink != v14 )
      goto LABEL_16;
    v16->Flink = v15;
    v15->Blink = v16;
    v14->Flink = 0LL;
  }
  v17 = (char *)(p_Blink + 5);
  if ( !p_Blink[5] )
    goto LABEL_6;
  v18 = **VidMmAllocFromOwner;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v18 + 352, 0LL);
  v19 = *(_QWORD *)v17;
  if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || (v20 = (char **)p_Blink[6], *v20 != v17) )
LABEL_16:
    __fastfail(3u);
  *v20 = (char *)v19;
  *(_QWORD *)(v19 + 8) = v20;
  *(_QWORD *)v17 = 0LL;
  ExReleasePushLockExclusiveEx(v18 + 352, 0LL);
  KeLeaveCriticalRegion();
LABEL_6:
  --HIDWORD(Blink[4].Blink);
  if ( a4 )
    *p_Blink = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)p_Blink);
  if ( a3 && ((__int64)Blink[4].Blink & 0xF) == 3 && !HIDWORD(Blink[4].Blink) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)Blink);
}

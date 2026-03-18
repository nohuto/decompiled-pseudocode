/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x18021502C
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x180214FD0 (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x180215100 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  WPF::ProcessHeapImpl::Free(this[80]);
  this[80] = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 74);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 67);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}

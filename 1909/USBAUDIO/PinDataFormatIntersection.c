/*
 * XREFs of PinDataFormatIntersection @ 0x1C0022720
 * Callers:
 *     <none>
 * Callees:
 *     IntersectConvertDatarangeToFormat @ 0x1C0023184 (IntersectConvertDatarangeToFormat.c)
 *     IntersectFindDataRange @ 0x1C002349C (IntersectFindDataRange.c)
 */

__int64 __fastcall PinDataFormatIntersection(
        __int64 a1,
        IRP *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int *a8)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v11; // ebx
  const KSFILTER_DESCRIPTOR *Descriptor; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 DataRange; // rax
  unsigned int v16; // ecx

  FilterFromIrp = KsGetFilterFromIrp(a2);
  v11 = 0;
  if ( FilterFromIrp
    && (Descriptor = FilterFromIrp->Descriptor,
        v13 = *(unsigned int *)(a3 + 24),
        (unsigned int)v13 < Descriptor->PinDescriptorsCount) )
  {
    v14 = (__int64)Descriptor->PinDescriptors + 176 * v13;
    DataRange = IntersectFindDataRange(a4, *(_QWORD *)(v14 + 56), *(unsigned int *)(v14 + 48));
    if ( DataRange )
    {
      if ( *(_OWORD *)(DataRange + 32) == KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF
        || *(_OWORD *)(DataRange + 32) == KSDATAFORMAT_SUBTYPE_DOLBY_MP3_SPDIF
        || *(_OWORD *)(DataRange + 32) == KSDATAFORMAT_SUBTYPE_WMA_SPDIF
        || *(_DWORD *)(DataRange + 104) <= 0x10u && *(_DWORD *)(DataRange + 64) <= 2u )
      {
        v16 = 82;
      }
      else
      {
        v16 = 104;
      }
      *a8 = v16;
      if ( a6 )
      {
        if ( v16 <= a6 )
          IntersectConvertDatarangeToFormat(v14, DataRange, a7);
        else
          return (unsigned int)-1073741789;
      }
      else
      {
        return (unsigned int)-2147483643;
      }
    }
    else
    {
      return (unsigned int)-1073741198;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v11;
}

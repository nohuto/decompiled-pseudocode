/*
 * XREFs of KiSetCacheInformationAmd @ 0x14057C798
 * Callers:
 *     KiSetCacheInformation @ 0x1405730C4 (KiSetCacheInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiSetStandardizedCacheInformation @ 0x140573210 (KiSetStandardizedCacheInformation.c)
 *     KiGetL2L3AssociativityAmd @ 0x14057C758 (KiGetL2L3AssociativityAmd.c)
 */

char KiSetCacheInformationAmd()
{
  struct _KPRCB *CurrentPrcb; // r8
  int v6; // eax
  _CACHE_DESCRIPTOR *Cache; // r10
  unsigned int i; // r9d
  char v14; // r14
  int v15; // esi
  unsigned __int16 v16; // r15
  unsigned int v17; // edx
  unsigned int v18; // r11d
  unsigned int v19; // r11d
  __int64 v20; // rbx
  _QWORD *v21; // rdi

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  CurrentPrcb->CacheCount = 0;
  if ( (_RCX & 0x400000) != 0 )
  {
    LOBYTE(v6) = KiSetStandardizedCacheInformation((__int64)CurrentPrcb, 0x8000001D);
  }
  else
  {
    Cache = CurrentPrcb->Cache;
    for ( i = 0; i < 4; ++i )
    {
      if ( i <= 1 )
      {
        _RAX = 2147483653LL;
        v14 = 1;
        __asm { cpuid }
        if ( !i )
          LODWORD(_RDX) = _RCX;
        v16 = (unsigned __int8)_RDX;
        v19 = BYTE3(_RDX) << 10;
        v17 = WORD1(_RDX);
        v6 = -i;
        v15 = 2 - (i != 0);
      }
      else if ( i == 2 )
      {
        _RAX = 2147483654LL;
        __asm { cpuid }
        v16 = (unsigned __int8)_RCX;
        v15 = 0;
        v14 = 2;
        LOBYTE(v6) = KiGetL2L3AssociativityAmd(BYTE1(_RCX) >> 4);
        LOBYTE(v17) = v6;
      }
      else
      {
        _RAX = 2147483654LL;
        __asm { cpuid }
        v14 = 3;
        v15 = 0;
        v16 = (unsigned __int8)_RDX;
        LOBYTE(v6) = KiGetL2L3AssociativityAmd(BYTE1(_RDX) >> 4);
        LOBYTE(v17) = v6;
        v19 = v18 >> 18 << 19;
        if ( !v19 )
          return v6;
        if ( CurrentPrcb->CpuType <= 21 )
        {
          v20 = 0LL;
          CurrentPrcb->CacheProcessorMask[3] = CurrentPrcb->GroupSetMember;
          for ( LOBYTE(v6) = KeNumberProcessors_0;
                (unsigned int)v20 < (unsigned int)KeNumberProcessors_0;
                v20 = (unsigned int)(v20 + 1) )
          {
            v21 = (_QWORD *)KiProcessorBlock[v20];
            if ( (_KNODE *)v21[24] == CurrentPrcb->ParentNode
              && ((CurrentPrcb->PackageProcessorSet.Bitmap[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v20] >> 6] >> (KiProcessorIndexToNumberMappingTable[v20] & 0x3F)) & 1) != 0 )
            {
              CurrentPrcb->CacheProcessorMask[3] |= v21[25];
              v21[3121] |= CurrentPrcb->GroupSetMember;
            }
            LOBYTE(v6) = KeNumberProcessors_0;
          }
        }
      }
      Cache->Type = v15;
      Cache->Level = v14;
      Cache->Associativity = v17;
      Cache->LineSize = v16;
      Cache->Size = v19;
      ++Cache;
      ++CurrentPrcb->CacheCount;
    }
  }
  return v6;
}

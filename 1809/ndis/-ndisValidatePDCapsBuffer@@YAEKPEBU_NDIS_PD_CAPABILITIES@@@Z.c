/*
 * XREFs of ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C007BF80
 * Callers:
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C007C160 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 * Callees:
 *     ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C007BD6C (-ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C007BEC4 (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C007C1F8 (-ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z.c)
 */

char __fastcall ndisValidatePDCapsBuffer(unsigned int a1, const struct _NDIS_PD_CAPABILITIES *a2)
{
  char v4; // bl
  unsigned int CapabilityFlags; // edx
  unsigned int ModerationIntervalGranularity; // r8d
  unsigned int MaximumModerationInterval; // ecx
  unsigned int MinimumModerationInterval; // eax
  unsigned int ExactMatchProfileArrayNumElements; // r14d
  unsigned int ExactMatchProfileArrayOffset; // r13d
  unsigned int ExactMatchProfileArrayElementSize; // r12d
  unsigned int WildcardMatchProfileArrayNumElements; // r15d
  unsigned int v13; // r8d
  int v14; // esi
  int v15; // esi
  unsigned int WildcardMatchProfileArrayOffset; // [rsp+70h] [rbp+8h]
  unsigned int WildcardMatchProfileArrayElementSize; // [rsp+80h] [rbp+18h]

  if ( a1 < 0x60 || a2->Header.Size < 0x5Cu || a2->Header.Type != 0x80 || a2->Header.Revision != 1 )
    return 0;
  v4 = 0;
  if ( !a2->Flags )
  {
    CapabilityFlags = a2->CapabilityFlags;
    if ( (CapabilityFlags & 0xFFFFFFF0) == 0
      && a2->RxFilterContextWidth <= 0x40u
      && a2->MaxNumberOfTxQueues
      && a2->MaxNumberOfTxQueuesForDefaultVport
      && a2->MaxNumberOfTxQueuesPerNonDefaultVport
      && ((CapabilityFlags & 0xC) == 0 || (CapabilityFlags & 2) != 0) )
    {
      if ( (CapabilityFlags & 4) != 0 )
      {
        ModerationIntervalGranularity = a2->ModerationIntervalGranularity;
        if ( !ModerationIntervalGranularity )
          return v4;
        MaximumModerationInterval = a2->MaximumModerationInterval;
        if ( !MaximumModerationInterval )
          return v4;
        MinimumModerationInterval = a2->MinimumModerationInterval;
        if ( !MinimumModerationInterval
          || MaximumModerationInterval < MinimumModerationInterval
          || MinimumModerationInterval % ModerationIntervalGranularity
          || MaximumModerationInterval % ModerationIntervalGranularity )
        {
          return v4;
        }
      }
      else if ( (CapabilityFlags & 8) != 0
             || a2->ModerationIntervalGranularity
             || a2->MaximumModerationInterval
             || a2->MinimumModerationInterval )
      {
        return v4;
      }
      ExactMatchProfileArrayNumElements = a2->ExactMatchProfileArrayNumElements;
      ExactMatchProfileArrayOffset = a2->ExactMatchProfileArrayOffset;
      ExactMatchProfileArrayElementSize = a2->ExactMatchProfileArrayElementSize;
      if ( ndisValidateTrailingElementSpace(
             a1,
             &a2->Header,
             ExactMatchProfileArrayOffset,
             ExactMatchProfileArrayNumElements,
             ExactMatchProfileArrayElementSize) )
      {
        WildcardMatchProfileArrayNumElements = a2->WildcardMatchProfileArrayNumElements;
        WildcardMatchProfileArrayElementSize = a2->WildcardMatchProfileArrayElementSize;
        WildcardMatchProfileArrayOffset = a2->WildcardMatchProfileArrayOffset;
        if ( ndisValidateTrailingElementSpace(
               a1,
               &a2->Header,
               WildcardMatchProfileArrayOffset,
               WildcardMatchProfileArrayNumElements,
               WildcardMatchProfileArrayElementSize) )
        {
          v14 = 0;
          if ( ExactMatchProfileArrayNumElements )
          {
            while ( ndisValidateGFPExactMatchProfileBuffer(
                      a1 - (ExactMatchProfileArrayOffset + v14 * ExactMatchProfileArrayElementSize),
                      (const struct _NDIS_GFP_EXACT_MATCH_PROFILE *)(&a2->Header.Type
                                                                   + ExactMatchProfileArrayOffset
                                                                   + v14 * ExactMatchProfileArrayElementSize)) )
            {
              if ( ++v14 >= ExactMatchProfileArrayNumElements )
              {
                v13 = WildcardMatchProfileArrayOffset;
                goto LABEL_30;
              }
            }
          }
          else
          {
LABEL_30:
            v15 = 0;
            if ( WildcardMatchProfileArrayNumElements )
            {
              while ( ndisValidateGFPWildcardMatchProfileBuffer(
                        a1 - (v13 + v15 * WildcardMatchProfileArrayElementSize),
                        (const struct _NDIS_GFP_WILDCARD_MATCH_PROFILE *)(&a2->Header.Type
                                                                        + v13
                                                                        + v15 * WildcardMatchProfileArrayElementSize)) )
              {
                v13 = WildcardMatchProfileArrayOffset;
                if ( ++v15 >= WildcardMatchProfileArrayNumElements )
                  return 1;
              }
            }
            else
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return v4;
}

/*
 * XREFs of WheapLoadPolicy @ 0x1409AEBE8
 * Callers:
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1401BAB10 (ZwQueryLicenseValue.c)
 */

__int64 WheapLoadPolicy()
{
  bool v0; // zf
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h]
  int v5; // [rsp+60h] [rbp+18h] BYREF

  if ( WheaRegPolicyDisableOffline != -1 )
    WheapPolicyDisableOffline = WheaRegPolicyDisableOffline != 0;
  if ( WheaRegPolicyMemPersistOffline != -1 )
  {
    v0 = WheaRegPolicyMemPersistOffline == 0;
    goto LABEL_8;
  }
  RtlInitUnicodeString(&DestinationString, L"Kernel-PersistDefectiveMemoryList");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v3, (__int64)&v5) >= 0 && v3 == 4 && v4 == 4 )
  {
    v0 = v5 == 0;
LABEL_8:
    WheapPolicyMemPersistOffline = !v0;
  }
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheapPolicyMemPfaDisable = WheaRegPolicyMemPfaDisable != 0;
  if ( (unsigned int)(WheaRegPolicyMemPfaPageCount - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaPageCount = WheaRegPolicyMemPfaPageCount;
  }
  else if ( (unsigned int)(WheapMaxCorrectedMCEOutstanding - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaPageCount = WheapMaxCorrectedMCEOutstanding;
  }
  if ( (unsigned int)(WheaRegPolicyMemPfaThreshold - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaThreshold = WheaRegPolicyMemPfaThreshold;
  }
  else if ( (unsigned int)(WheapSingleBitEccErrorThreshold - 1) <= 0xFFFF )
  {
    WheapPolicyMemPfaThreshold = WheapSingleBitEccErrorThreshold;
  }
  if ( (unsigned int)WheaRegPolicyMemPfaTimeout <= 0x93A80 )
    WheapPolicyMemPfaTimeout = 10000000LL * (unsigned int)WheaRegPolicyMemPfaTimeout;
  if ( !WheapPolicyMemPfaPageCount || !WheapPolicyMemPfaThreshold )
    WheapPolicyMemPfaDisable = 1;
  result = (unsigned int)WheaRegPolicyIgnoreDummyWrite;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheapPolicyIgnoreDummyWrite = WheaRegPolicyIgnoreDummyWrite != 0;
  if ( WheaRegPolicyDisableOffline != -1 )
    WheaRegistryKeysPresent |= 1u;
  if ( WheaRegPolicyMemPersistOffline != -1 )
    WheaRegistryKeysPresent |= 2u;
  if ( WheaRegPolicyMemPfaDisable != -1 )
    WheaRegistryKeysPresent |= 4u;
  if ( WheaRegPolicyMemPfaPageCount != -1 )
    WheaRegistryKeysPresent |= 8u;
  if ( WheaRegPolicyMemPfaThreshold != -1 )
    WheaRegistryKeysPresent |= 0x10u;
  if ( WheaRegPolicyMemPfaTimeout != -1 )
    WheaRegistryKeysPresent |= 0x20u;
  if ( WheapSingleBitEccErrorThreshold != -1 )
    WheaRegistryKeysPresent |= 0x40u;
  if ( WheapMaxCorrectedMCEOutstanding != -1 )
    WheaRegistryKeysPresent |= 0x80u;
  if ( WheaRegPolicyIgnoreDummyWrite != -1 )
    WheaRegistryKeysPresent |= 0x100u;
  return result;
}

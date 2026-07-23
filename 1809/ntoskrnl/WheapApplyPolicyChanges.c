/*
 * XREFs of WheapApplyPolicyChanges @ 0x1408DD37C
 * Callers:
 *     WheapPfaReset @ 0x1408DE008 (WheapPfaReset.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 */

void WheapApplyPolicyChanges()
{
  unsigned int v0; // edx
  __int64 v1; // r9
  unsigned __int64 v2; // r8
  int *v3; // rcx
  BOOL v4; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  do
  {
    if ( WheaRegPolicyTableChanged[v1] )
    {
      if ( v2 >= 21 )
        _report_rangecheckfailure();
      v3 = (&off_14090AE28)[v2];
      WheaRegPolicyTableChanged[v1] = 0;
      if ( v0 )
      {
        switch ( v0 )
        {
          case 1u:
            WheapPolicyMemPersistOffline = *v3 != 0;
            WheaRegistryKeysPresent |= 2u;
            break;
          case 2u:
            WheapPolicyMemPfaDisable = *v3 != 0;
            WheaRegistryKeysPresent |= 4u;
            break;
          case 3u:
            v7 = *v3;
            WheaRegistryKeysPresent |= 8u;
            WheapPolicyMemPfaPageCount = v7;
            break;
          case 4u:
            v6 = *v3;
            WheaRegistryKeysPresent |= 0x10u;
            WheapPolicyMemPfaThreshold = v6;
            break;
          case 5u:
            v5 = (unsigned int)*v3;
            WheaRegistryKeysPresent |= 0x20u;
            WheapPolicyMemPfaTimeout = 10000000 * v5;
            break;
          default:
            v4 = *v3 != 0;
            WheaRegistryKeysPresent |= 0x100u;
            WheaRegPolicyIgnoreDummyWrite = v4;
            break;
        }
      }
      else
      {
        WheapPolicyDisableOffline = *v3 != 0;
        WheaRegistryKeysPresent |= 1u;
      }
    }
    ++v0;
    ++v1;
    v2 += 3LL;
  }
  while ( v0 < 7 );
}

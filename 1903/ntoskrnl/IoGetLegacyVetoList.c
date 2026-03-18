/*
 * XREFs of IoGetLegacyVetoList @ 0x1406A23A4
 * Callers:
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 *     PnprLegacyDeviceDriversPresent @ 0x14086FC18 (PnprLegacyDeviceDriversPresent.c)
 *     ExpQueryLegacyDriverInformation @ 0x140909B28 (ExpQueryLegacyDriverInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C6194 (IopGetLegacyVetoListDrivers.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     IopGetLegacyVetoListDeviceNode @ 0x1406A2E90 (IopGetLegacyVetoListDeviceNode.c)
 *     IopAppendLegacyVeto @ 0x140875510 (IopAppendLegacyVeto.c)
 */

__int64 __fastcall IoGetLegacyVetoList(PVOID *a1, _DWORD *a2)
{
  bool v4; // zf
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+20h] [rbp-30h] BYREF
  const WCHAR *v7; // [rsp+28h] [rbp-28h]
  PVOID *v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h]
  int v10; // [rsp+3Ch] [rbp-14h]
  _DWORD *v11; // [rsp+40h] [rbp-10h]
  unsigned int *v12; // [rsp+48h] [rbp-8h]
  unsigned int v13; // [rsp+60h] [rbp+10h] BYREF

  v10 = 0;
  v6[1] = 0;
  if ( a1 )
    *a1 = 0LL;
  v4 = PnPInitialized == 0;
  *a2 = 0;
  v13 = 0;
  if ( v4 )
    return 0LL;
  v8 = a1;
  v12 = &v13;
  v9 = 0;
  v11 = a2;
  IopGetLegacyVetoListDrivers((__int64)&v8);
  result = v13;
  if ( (v13 & 0x80000000) != 0 )
    goto LABEL_14;
  if ( !*a2 )
  {
    PpDevNodeLockTree(0LL);
    IopGetLegacyVetoListDeviceNode(IopRootDeviceNode, &v8);
    PpDevNodeUnlockTree(0LL);
    result = v13;
  }
  if ( (int)result < 0 )
    goto LABEL_14;
  if ( *a2 && a1 )
  {
    v6[0] = 0x20000;
    v7 = &word_14078CDD0;
    IopAppendLegacyVeto(&v8, v6);
    result = v13;
  }
  if ( (int)result < 0 )
  {
LABEL_14:
    if ( a1 )
    {
      if ( *a1 )
      {
        ExFreePoolWithTag(*a1, 0);
        result = v13;
        *a1 = 0LL;
      }
    }
  }
  return result;
}

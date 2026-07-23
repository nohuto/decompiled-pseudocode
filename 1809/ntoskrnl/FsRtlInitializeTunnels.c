/*
 * XREFs of FsRtlInitializeTunnels @ 0x1409D8CF4
 * Callers:
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializePagedLookasideList @ 0x14067CE70 (ExInitializePagedLookasideList.c)
 *     FsRtlGetTunnelParameterValue @ 0x140759138 (FsRtlGetTunnelParameterValue.c)
 */

void FsRtlInitializeTunnels()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  if ( (_BYTE)dword_14054119C )
    TunnelMaxEntries = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxEntries);
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxAge);
  if ( !TunnelMaxAge )
    TunnelMaxEntries = 0;
  TunnelMaxAge *= 10000000;
  if ( (unsigned int)TunnelMaxEntries > 0xFFFF )
  {
    Depth = 256;
  }
  else
  {
    Depth = (unsigned __int16)TunnelMaxEntries >> 4;
    if ( !((unsigned __int16)TunnelMaxEntries >> 4) )
    {
      if ( !TunnelMaxEntries )
        goto LABEL_9;
      Depth = TunnelMaxEntries + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
LABEL_9:
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}

/*
 * XREFs of PipProcessStartPhase1 @ 0x140719D68
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070443C (PipProcessDevNodeTree.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     McTemplateK0dz @ 0x1402A0DD4 (McTemplateK0dz.c)
 *     PnpStartDeviceNode @ 0x140719E1C (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x14071A08C (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14086C8C0 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14086CB38 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14086CC40 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(__int64 MaxDataSize, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  __int64 v8; // rdi
  int v9; // eax
  ULONG_PTR v10; // rsi
  __int64 v11; // rax
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  if ( (byte_14042BDBB & 0x10) != 0 )
    McTemplateK0dz(MaxDataSize, &KMPnPEvt_ProcessDeviceStart_Start, a3, 1, *(const wchar_t **)(MaxDataSize + 48));
  if ( v3 && (*(_DWORD *)(MaxDataSize + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(MaxDataSize + 32), 1LL);
    if ( !*(_DWORD *)(MaxDataSize + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(MaxDataSize, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v12, 0LL),
          started >= 0) )
    {
      if ( PipHalIommuSecurityEnabled )
      {
        v8 = *(_QWORD *)(MaxDataSize + 720);
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
          {
            v9 = ((__int64 (__fastcall *)(_QWORD, __int64))off_140424708[0])(*(_QWORD *)v8, v8 + 8);
            v10 = v9;
            if ( v9 < 0 )
            {
              IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x310);
              if ( *(_WORD *)(MaxDataSize + 40) )
              {
                IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
              }
              if ( *(_WORD *)(MaxDataSize + 56) )
              {
                IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
                IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
              }
              v11 = *(_QWORD *)(MaxDataSize + 16);
              if ( v11 && *(_WORD *)(v11 + 56) )
              {
                IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
              }
              KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v10, MaxDataSize);
            }
            *(_BYTE *)(v8 + 16) |= 2u;
          }
        }
      }
      started = PnpStartDeviceNode(MaxDataSize, 0LL, a2);
    }
  }
  if ( (byte_14042BDBB & 0x10) != 0 )
    McTemplateK0dz(MaxDataSize, &KMPnPEvt_ProcessDeviceStart_Stop, a3, 1, *(const wchar_t **)(MaxDataSize + 48));
  return (unsigned int)started;
}

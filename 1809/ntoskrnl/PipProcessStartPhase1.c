/*
 * XREFs of PipProcessStartPhase1 @ 0x1406ECF50
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     McTemplateK0dz @ 0x14028AED4 (McTemplateK0dz.c)
 *     PnpStartDeviceNode @ 0x1406ECCFC (PnpStartDeviceNode.c)
 *     IopUncacheInterfaceInformation @ 0x1406ED004 (IopUncacheInterfaceInformation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1408339F4 (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140833C9C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140833DA4 (PpProfileQueryHardwareProfileChange.c)
 */

__int64 __fastcall PipProcessStartPhase1(ULONG_PTR BugCheckParameter4, int a2, __int64 a3)
{
  int v3; // edi
  int started; // edi
  __int64 v8; // rdi
  int v9; // eax
  ULONG_PTR v10; // rsi
  __int64 v11; // rax
  char v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = a3;
  if ( (byte_140406847 & 0x10) != 0 )
    McTemplateK0dz(
      BugCheckParameter4,
      &KMPnPEvt_ProcessDeviceStart_Start,
      a3,
      1,
      *(const wchar_t **)(BugCheckParameter4 + 48));
  if ( v3 && (*(_DWORD *)(BugCheckParameter4 + 396) & 0x400000) != 0 )
  {
    started = -1073741267;
  }
  else
  {
    IopUncacheInterfaceInformation(*(_QWORD *)(BugCheckParameter4 + 32), 1LL);
    if ( !*(_DWORD *)(BugCheckParameter4 + 568)
      || (PpProfileBeginHardwareProfileTransition(0LL),
          PpProfileIncludeInHardwareProfileTransition(BugCheckParameter4, 2LL),
          started = PpProfileQueryHardwareProfileChange(0LL, 2LL, &v12, 0LL),
          started >= 0) )
    {
      if ( PipHalIommuSecurityEnabled )
      {
        v8 = *(_QWORD *)(BugCheckParameter4 + 720);
        if ( v8 )
        {
          if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
          {
            v9 = ((__int64 (__fastcall *)(_QWORD, __int64))off_1403FF708[0])(*(_QWORD *)v8, v8 + 8);
            v10 = v9;
            if ( v9 < 0 )
            {
              IoAddTriageDumpDataBlock(BugCheckParameter4, 784);
              if ( *(_WORD *)(BugCheckParameter4 + 40) )
              {
                IoAddTriageDumpDataBlock(BugCheckParameter4 + 40, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(BugCheckParameter4 + 48),
                  *(unsigned __int16 *)(BugCheckParameter4 + 40));
              }
              if ( *(_WORD *)(BugCheckParameter4 + 56) )
              {
                IoAddTriageDumpDataBlock(BugCheckParameter4 + 56, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(BugCheckParameter4 + 64),
                  *(unsigned __int16 *)(BugCheckParameter4 + 56));
              }
              v11 = *(_QWORD *)(BugCheckParameter4 + 16);
              if ( v11 && *(_WORD *)(v11 + 56) )
              {
                IoAddTriageDumpDataBlock(v11 + 56, 2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 16) + 64LL),
                  *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter4 + 16) + 56LL));
              }
              KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v10, BugCheckParameter4);
            }
            *(_BYTE *)(v8 + 16) |= 2u;
          }
        }
      }
      started = PnpStartDeviceNode(BugCheckParameter4, 0, a2);
    }
  }
  if ( (byte_140406847 & 0x10) != 0 )
    McTemplateK0dz(
      BugCheckParameter4,
      &KMPnPEvt_ProcessDeviceStart_Stop,
      a3,
      1,
      *(const wchar_t **)(BugCheckParameter4 + 48));
  return (unsigned int)started;
}

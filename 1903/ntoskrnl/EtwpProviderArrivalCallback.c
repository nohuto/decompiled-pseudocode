/*
 * XREFs of EtwpProviderArrivalCallback @ 0x140734520
 * Callers:
 *     EtwpTrackProviderRegistration @ 0x1405C4008 (EtwpTrackProviderRegistration.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C46E0 (EtwpAddRegEntryToGroup.c)
 *     EtwpEnableGuid @ 0x140664144 (EtwpEnableGuid.c)
 *     EtwpTrackProviderBinary @ 0x1406ED48C (EtwpTrackProviderBinary.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x1408FFFE4 (EtwpTrackGuidEntryRegistrations.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1406DABD0 (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpTrackDebugIdForSession @ 0x14073463C (EtwpTrackDebugIdForSession.c)
 *     MmGetFileNameForAddress @ 0x140887150 (MmGetFileNameForAddress.c)
 *     RtlPcToFilePath @ 0x1408D7FF0 (RtlPcToFilePath.c)
 *     EtwpSendDbgId @ 0x1408FA7EC (EtwpSendDbgId.c)
 *     EtwpTrackBinaryForSession @ 0x1408FFC28 (EtwpTrackBinaryForSession.c)
 */

__int64 __fastcall EtwpProviderArrivalCallback(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  _BYTE *v9; // rsi
  int FileNameForAddress; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h] BYREF
  PVOID v13; // [rsp+28h] [rbp-D8h] BYREF
  PVOID P; // [rsp+30h] [rbp-D0h]
  _BYTE v15[512]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = *(_QWORD *)(a3 + 88);
  HIDWORD(v13) = 0;
  v7 = 0;
  if ( !v4 )
    return 3221225793LL;
  if ( (*(_BYTE *)(a3 + 98) & 0x20) != 0 || (*(_DWORD *)(a1 + 832) & 0x2000000) != 0 )
  {
    LODWORD(v13) = 0x2000000;
    P = v15;
    if ( a2 )
      FileNameForAddress = MmGetFileNameForAddress(v4, &v13);
    else
      FileNameForAddress = RtlPcToFilePath(v4, &v13);
    v7 = FileNameForAddress;
    if ( FileNameForAddress >= 0 )
      EtwpTrackBinaryForSession(a1, &v13, *(_QWORD *)(a3 + 32) + 40LL);
    if ( P != v15 )
      ExFreePoolWithTag(P, 0);
  }
  if ( (*(_BYTE *)(a3 + 98) & 8) == 0 )
    return v7;
  if ( (*(_DWORD *)(a1 + 12) & 0x80u) == 0 )
  {
    v12 = 512;
    v13 = v15;
    v8 = EtwpLocateDbgIdForRegEntry(a2, a3, &v13, &v12);
    v9 = v13;
    v7 = v8;
    if ( v8 >= 0 )
    {
      EtwpTrackDebugIdForSession(a1, v13, v12);
      if ( (*(_DWORD *)(a1 + 12) & 0x80000) != 0
        && (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) )
      {
        EtwpSendDbgId(a1);
      }
    }
    if ( v9 != v15 )
      ExFreePoolWithTag(v9, 0);
    return v7;
  }
  return 3221225659LL;
}

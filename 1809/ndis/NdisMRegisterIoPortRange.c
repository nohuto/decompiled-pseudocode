/*
 * XREFs of NdisMRegisterIoPortRange @ 0x1C00F1F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisTranslateResources @ 0x1C00D0A10 (ndisTranslateResources.c)
 */

NDIS_STATUS __stdcall NdisMRegisterIoPortRange(
        PVOID *PortOffset,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts)
{
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v7; // r14
  void *v9; // rax
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE *v12; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v5 = NumberOfPorts;
  v12 = 0LL;
  v7 = InitialPort;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x14u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle);
  if ( (*((_DWORD *)MiniportAdapterHandle + 928) & 0x20) != 0 )
    goto LABEL_4;
  if ( (unsigned int)ndisTranslateResources((__int64)MiniportAdapterHandle, 1, v7, v11, &v12) )
  {
    v4 = -1073741823;
  }
  else if ( *v12 == 3 )
  {
    v9 = (void *)MmMapIoSpaceEx(v11[0], v5, 516LL);
    *PortOffset = v9;
    if ( !v9 )
LABEL_4:
      v4 = -1073741670;
  }
  else
  {
    *PortOffset = (PVOID)LODWORD(v11[0]);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x15u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, v4);
  return v4;
}

/*
 * XREFs of NdisMRegisterIoPortRange @ 0x1C009E7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisTranslateResources @ 0x1C002EA18 (ndisTranslateResources.c)
 */

NDIS_STATUS __stdcall NdisMRegisterIoPortRange(
        PVOID *PortOffset,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT InitialPort,
        UINT NumberOfPorts)
{
  NDIS_STATUS v4; // ebx
  __int64 v5; // rbp
  _DWORD *v6; // rdi
  __int64 v8; // r14
  void *v9; // rax
  char v11; // [rsp+28h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  v5 = NumberOfPorts;
  v13 = 0LL;
  v6 = MiniportAdapterHandle;
  v12 = 0LL;
  v8 = InitialPort;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)MiniportAdapterHandle;
    LOBYTE(MiniportAdapterHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterHandle,
      1,
      20,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v11);
  }
  if ( (v6[922] & 0x20) != 0 )
    goto LABEL_4;
  if ( (unsigned int)ndisTranslateResources((__int64)v6, 1LL, v8, &v13, &v12) )
  {
    v4 = -1073741823;
  }
  else if ( *(_BYTE *)v12 == 3 )
  {
    v9 = (void *)MmMapIoSpaceEx(v13, v5, 516LL);
    *PortOffset = v9;
    if ( !v9 )
LABEL_4:
      v4 = -1073741670;
  }
  else
  {
    *PortOffset = (PVOID)(unsigned int)v13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MiniportAdapterHandle) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterHandle,
      1,
      21,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)v6,
      v4);
  }
  return v4;
}

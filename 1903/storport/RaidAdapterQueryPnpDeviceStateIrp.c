/*
 * XREFs of RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006A970
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrp @ 0x1C00122C4 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0031DD4 (McTemplateK0pd.c)
 */

NTSTATUS __fastcall RaidAdapterQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  int v6; // [rsp+20h] [rbp-38h]
  GUID v7; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a1 + 92) || *(_DWORD *)(a1 + 100) || *(_DWORD *)(a1 + 96) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (*(_BYTE *)(a1 + 110) & 4) != 0 )
    *(_DWORD *)(a2 + 56) |= 4u;
  if ( StorEtwLoggingEnabled )
  {
    *(_QWORD *)&v7.Data1 = 0LL;
    *(_QWORD *)v7.Data4 = 0LL;
    IoGetActivityIdIrp(a2, &v7);
    if ( (byte_1C0061742 & 0x20) != 0 )
    {
      v6 = *(_DWORD *)(a2 + 48);
      McTemplateK0pd(v4, &EventPnpRequestComplete, &v7, a2, v6);
    }
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), (IRP *)a2);
}

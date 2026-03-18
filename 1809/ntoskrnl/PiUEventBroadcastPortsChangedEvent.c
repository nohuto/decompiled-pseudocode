/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x14082887C
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140702FD0 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x14007E4E0 (MmGetSessionById.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1405C6EF0 (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x1405C79A8 (_RegRtlQueryValue.c)
 */

int __fastcall PiUEventBroadcastPortsChangedEvent(unsigned int a1, _OWORD *a2, __int64 a3)
{
  __int64 SessionById; // rax
  void *v6; // rbx
  unsigned int v9; // [rsp+48h] [rbp-1h] BYREF
  int v10; // [rsp+4Ch] [rbp+3h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp+7h] BYREF
  _OWORD v12[3]; // [rsp+58h] [rbp+Fh] BYREF

  memset(v12, 0, sizeof(v12));
  Handle = 0LL;
  v10 = 0;
  LODWORD(SessionById) = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a3, 17, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( (int)SessionById >= 0 )
  {
    v9 = 32;
    LODWORD(SessionById) = RegRtlQueryValue(Handle, L"PortName", &v10, &v12[1], &v9);
    if ( (int)SessionById >= 0 )
    {
      v12[0] = *a2;
      if ( a1 == -1 )
      {
        LODWORD(SessionById) = ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED, (__int64)v12, 48LL);
      }
      else
      {
        SessionById = MmGetSessionById(a1);
        v6 = (void *)SessionById;
        if ( SessionById )
        {
          ZwUpdateWnfStateData((__int64)&WNF_PNPA_PORTS_CHANGED_SESSION, (__int64)v12, 48LL);
          LODWORD(SessionById) = ObfDereferenceObject(v6);
        }
      }
    }
  }
  if ( Handle )
    LODWORD(SessionById) = ZwClose(Handle);
  return SessionById;
}

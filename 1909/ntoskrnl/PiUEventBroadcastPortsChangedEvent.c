/*
 * XREFs of PiUEventBroadcastPortsChangedEvent @ 0x140862498
 * Callers:
 *     PiUEventBroadcastEventWorker @ 0x140725410 (PiUEventBroadcastEventWorker.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1405C3010 (_CmOpenDeviceRegKey.c)
 *     _RegRtlQueryValue @ 0x1405C37B4 (_RegRtlQueryValue.c)
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

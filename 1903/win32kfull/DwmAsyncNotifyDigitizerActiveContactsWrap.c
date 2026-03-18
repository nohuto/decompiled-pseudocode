/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01EF4E0
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncNotifyDigitizerActiveContacts @ 0x1C027253C (DwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContactsWrap(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rax

  v3 = (void *)ReferenceDwmApiPort(a1, a2, a3);
  return DwmAsyncNotifyDigitizerActiveContacts(v3);
}

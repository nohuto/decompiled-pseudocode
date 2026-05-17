/*
 * XREFs of LdrpCheckComponentOnDemandEtwEvent @ 0x1800D0C80
 * Callers:
 *     LdrpMapDllNtFileName @ 0x18002ABA0 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     CompatCachepLookupCdb @ 0x180077890 (CompatCachepLookupCdb.c)
 *     EtwEventWriteNoRegistration @ 0x180086E70 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwCreateEvent @ 0x1800A0BE0 (ZwCreateEvent.c)
 *     LdrpIsCODServiceEnabled @ 0x1800D0EEC (LdrpIsCODServiceEnabled.c)
 */

char __fastcall LdrpCheckComponentOnDemandEtwEvent(unsigned __int16 *a1)
{
  int v2; // esi
  wchar_t *v3; // rcx
  char v4; // di
  _QWORD *pShimData; // rbx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v12; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  int *v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]
  __int64 v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+74h] [rbp-Ch]

  v12 = 1;
  v2 = 0;
  v3 = (wchar_t *)*((_QWORD *)a1 + 1);
  v4 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)CompatCachepLookupCdb(v3, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)LdrpIsCODServiceEnabled() )
      {
        if ( (int)ZwCreateEvent() >= 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpCODScenarioLock, v6, v7, v8);
          v2 = 1;
          v4 = 1;
          if ( !LdrpCODScenarioTriggered )
          {
            pShimData[559] = 0LL;
            v16 = 0;
            v19 = 0;
            v22 = 0;
            p_UniqueProcess = &UniqueProcess;
            v17 = &v12;
            v20 = *((_QWORD *)a1 + 1);
            v9 = *a1 + 2;
            v15 = 4;
            v18 = 4;
            v21 = v9;
            LdrpCODScenarioTriggered = 1;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)UserLoaderGuid,
                                  &ComponentOnDemand,
                                  3,
                                  (__int64)&p_UniqueProcess) )
            {
              Timeout.QuadPart = -100000000LL;
              NtWaitForSingleObject(0LL, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( v2 )
    RtlReleaseSRWLockExclusive(&LdrpCODScenarioLock);
  return v4;
}

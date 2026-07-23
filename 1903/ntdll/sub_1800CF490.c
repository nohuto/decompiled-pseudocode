/*
 * XREFs of sub_1800CF490 @ 0x1800CF490
 * Callers:
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 * Callees:
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     EtwEventWriteNoRegistration @ 0x1800835F0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateEvent @ 0x18009CFE0 (ZwCreateEvent.c)
 *     sub_1800CF6FC @ 0x1800CF6FC (sub_1800CF6FC.c)
 */

char __fastcall sub_1800CF490(unsigned __int16 *a1)
{
  _QWORD *pShimData; // rbx
  int v3; // esi
  wchar_t *v4; // rcx
  char v5; // di
  int v6; // eax
  HANDLE EventHandle; // [rsp+30h] [rbp-50h] BYREF
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v10; // [rsp+3Ch] [rbp-44h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-30h]
  int v14; // [rsp+54h] [rbp-2Ch]
  int *v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+64h] [rbp-1Ch]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+74h] [rbp-Ch]

  EventHandle = 0LL;
  v10 = 1;
  pShimData = 0LL;
  v3 = 0;
  v4 = (wchar_t *)*((_QWORD *)a1 + 1);
  v5 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)sub_18002946C(v4, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)sub_1800CF6FC() )
      {
        if ( ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0) >= 0 )
        {
          RtlAcquireSRWLockExclusive(&stru_1801665B0);
          v3 = 1;
          v5 = 1;
          if ( !byte_1801665A4 )
          {
            pShimData[559] = EventHandle;
            v14 = 0;
            v17 = 0;
            v20 = 0;
            p_UniqueProcess = &UniqueProcess;
            v15 = &v10;
            v18 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v13 = 4;
            v16 = 4;
            v19 = v6;
            byte_1801665A4 = 1;
            if ( !EtwEventWriteNoRegistration(
                    &stru_18011E318,
                    &stru_18012C140,
                    3u,
                    (PEVENT_DATA_DESCRIPTOR)&p_UniqueProcess) )
            {
              Timeout.QuadPart = -100000000LL;
              ZwWaitForSingleObject(EventHandle, 0, &Timeout);
            }
          }
        }
      }
    }
  }
  if ( EventHandle )
  {
    ZwClose(EventHandle);
    pShimData[559] = 0LL;
  }
  if ( v3 )
    RtlReleaseSRWLockExclusive(&stru_1801665B0);
  return v5;
}

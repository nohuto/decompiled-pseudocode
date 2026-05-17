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
  int v2; // esi
  wchar_t *v3; // rcx
  char v4; // di
  _QWORD *pShimData; // rbx
  int v6; // eax
  int UniqueProcess; // [rsp+38h] [rbp-48h] BYREF
  int v9; // [rsp+3Ch] [rbp-44h] BYREF
  __int64 v10; // [rsp+40h] [rbp-40h]
  int *p_UniqueProcess; // [rsp+48h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+54h] [rbp-2Ch]
  int *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  __int64 v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]

  v9 = 1;
  v2 = 0;
  v3 = (wchar_t *)*((_QWORD *)a1 + 1);
  v4 = 0;
  UniqueProcess = (int)NtCurrentTeb()->ClientId.UniqueProcess;
  if ( (unsigned int)sub_18002946C(v3, 256) )
  {
    pShimData = NtCurrentPeb()->pShimData;
    if ( pShimData )
    {
      if ( (unsigned __int8)sub_1800CF6FC() )
      {
        if ( (int)ZwCreateEvent() >= 0 )
        {
          RtlAcquireSRWLockExclusive(&qword_1801665B0);
          v2 = 1;
          v4 = 1;
          if ( !byte_1801665A4 )
          {
            pShimData[559] = 0LL;
            v13 = 0;
            v16 = 0;
            v19 = 0;
            p_UniqueProcess = &UniqueProcess;
            v14 = &v9;
            v17 = *((_QWORD *)a1 + 1);
            v6 = *a1 + 2;
            v12 = 4;
            v15 = 4;
            v18 = v6;
            byte_1801665A4 = 1;
            if ( !(unsigned int)EtwEventWriteNoRegistration(
                                  (__int64)&unk_18011E318,
                                  &xmmword_18012C140,
                                  3,
                                  (__int64)&p_UniqueProcess) )
            {
              v10 = -100000000LL;
              ZwWaitForSingleObject();
            }
          }
        }
      }
    }
  }
  if ( v2 )
    RtlReleaseSRWLockExclusive(&qword_1801665B0);
  return v4;
}

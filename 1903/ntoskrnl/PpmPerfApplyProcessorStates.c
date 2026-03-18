/*
 * XREFs of PpmPerfApplyProcessorStates @ 0x140175980
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeCountSetBitsAffinityEx @ 0x1400B8D40 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeOrAffinityEx @ 0x1400FDD80 (KeOrAffinityEx.c)
 *     PpmPerfApplyProcessorState @ 0x140175B70 (PpmPerfApplyProcessorState.c)
 *     PpmPerfQueueAction @ 0x1401761BC (PpmPerfQueueAction.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmPerfApplyHiddenProcessorState @ 0x1402F6E98 (PpmPerfApplyHiddenProcessorState.c)
 */

char PpmPerfApplyProcessorStates()
{
  char v0; // bl
  __int64 i; // rdi
  __int64 v2; // rdx
  __int64 Prcb; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // r14d
  __int64 v10; // rsi
  __int64 v12; // [rsp+28h] [rbp-99h] BYREF
  unsigned __int16 *v13; // [rsp+30h] [rbp-91h] BYREF
  __int64 v14; // [rsp+38h] [rbp-89h]
  __int64 v15; // [rsp+40h] [rbp-81h]
  __int64 v16; // [rsp+48h] [rbp-79h] BYREF
  __int64 v17; // [rsp+50h] [rbp-71h]
  _BYTE v18[152]; // [rsp+58h] [rbp-69h] BYREF

  v16 = 1310721LL;
  v0 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 686) )
    {
      KeOrAffinityEx((unsigned __int16 *)(i + 24), (unsigned __int16 *)&v16, &v16);
      LODWORD(v12) = 0;
      if ( *(_DWORD *)(i + 200) )
      {
        v9 = 0;
        do
        {
          v10 = *(_QWORD *)(i + 208) + 136LL * v9;
          if ( *(_BYTE *)(v10 + 16) )
          {
            if ( *(_BYTE *)(v10 + 120) )
            {
              LOBYTE(v8) = 1;
              PpmPerfApplyHiddenProcessorState(i, *(_QWORD *)(i + 208) + 136LL * v9, v8);
              *(_BYTE *)(v10 + 120) = 0;
            }
            PpmPerfApplyHiddenProcessorState(i, v10, 0LL);
          }
          ++v9;
        }
        while ( v9 < *(_DWORD *)(i + 200) );
        LODWORD(v12) = v9;
      }
      *(_BYTE *)(i + 686) = 0;
    }
  }
  v14 = v17;
  v13 = (unsigned __int16 *)&v16;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    Prcb = KeGetPrcb(v12);
    v6 = *(_QWORD *)(Prcb + 24184);
    if ( *(_BYTE *)(v6 + 120) )
    {
      LOBYTE(v2) = 1;
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, v2, v4, v5) )
      {
        *(_BYTE *)(v6 + 120) = 0;
        goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( (unsigned __int8)PpmPerfApplyProcessorState(Prcb, 0LL, v4, v5) )
        KeRemoveProcessorAffinityEx((unsigned __int16 *)&v16, v12);
    }
  }
  PpmCheckCount = KeCountSetBitsAffinityEx(&v16);
  if ( !PpmCheckCount )
    return 1;
  v14 = v17;
  v13 = (unsigned __int16 *)&v16;
  LOWORD(v15) = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v7 = KeGetPrcb(v12);
    PpmPerfQueueAction(v7, 2LL);
  }
  return v0;
}

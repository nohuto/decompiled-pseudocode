/*
 * XREFs of PpmUpdatePerfStates @ 0x1408A6E10
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x140776088 (PpmReinitializeHeteroEngine.c)
 */

LONG __fastcall PpmUpdatePerfStates(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  LONG result; // eax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+32h] [rbp-16h]
  __int16 v8; // [rsp+36h] [rbp-12h]
  ULONG v9; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v6 = 0;
  v2 = 0;
  v5[1] = *(unsigned __int16 **)(a1 + 16);
  v5[0] = (unsigned __int16 *)(a1 + 8);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v5) )
  {
    v3 = *(_QWORD *)(KeGetPrcb(v9) + 24176);
    if ( *(_DWORD *)(v3 + 312) != *(_DWORD *)a1 )
    {
      *(_DWORD *)(v3 + 312) = *(_DWORD *)a1;
      v2 = 1;
    }
  }
  if ( v2 )
    result = PpmPerfUpdateDomainPolicy(1);
  else
    result = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( (unsigned int)PpmPerfDomainCount > 1 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    return PpmReinitializeHeteroEngine(1);
  }
  return result;
}

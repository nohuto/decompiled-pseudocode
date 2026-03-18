/*
 * XREFs of PpmIdleWaitForDependentTransitions @ 0x1402EFB3C
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402EED84 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmIdleTransitionStall @ 0x1402EF9B8 (PpmIdleTransitionStall.c)
 */

__int64 __fastcall PpmIdleWaitForDependentTransitions(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 Prcb; // rdi
  __int64 v4; // rsi
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+32h] [rbp-2Eh]
  __int16 v9; // [rsp+36h] [rbp-2Ah]
  _QWORD v10[5]; // [rsp+38h] [rbp-28h] BYREF
  ULONG v11; // [rsp+70h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  v6[1] = v1;
  v6[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v6) )
  {
    Prcb = KeGetPrcb(v11);
    v4 = *(_QWORD *)(Prcb + 23808);
    memset(v10, 0, 0x20uLL);
    v10[1] = PopIdleTransitionTimeout;
    BYTE4(v10[3]) = 1;
    v10[2] = Prcb;
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(v4 + 472))(*(_QWORD *)(v4 + 488)) )
    {
      if ( (*(_DWORD *)(Prcb + 23872) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      PpmIdleTransitionStall((__int64)v10);
    }
  }
  return v2;
}

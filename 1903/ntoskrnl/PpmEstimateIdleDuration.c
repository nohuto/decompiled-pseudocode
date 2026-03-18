/*
 * XREFs of PpmEstimateIdleDuration @ 0x14018A02C
 * Callers:
 *     PpmIdleSelectStates @ 0x140189C30 (PpmIdleSelectStates.c)
 *     PpmComputeIdleDurationHint @ 0x140189F78 (PpmComputeIdleDurationHint.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeEstimateClockTickDuration @ 0x14018A1CC (KeEstimateClockTickDuration.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1402EE620 (PpmGetIdleConstrainedMask.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        __int64 a8,
        int *a9)
{
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 v15; // rdi
  int v16; // edx
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int i; // eax
  unsigned __int64 v21; // rbx
  ULONG v22; // eax
  unsigned __int64 *result; // rax
  unsigned __int64 v24; // rsi
  __int64 Prcb; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 *v29; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v30; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  _QWORD v34[22]; // [rsp+88h] [rbp-80h] BYREF

  v30 = a6;
  v29 = a7;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v34, 0, 0xA8uLL);
  v15 = -1LL;
  LOBYTE(v16) = *(_BYTE *)(*(_QWORD *)(a1 + 23808) + 540LL);
  v17 = 0;
  *a9 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v17 = 8;
    *a9 = 8;
  }
  if ( a2 )
    *a9 = v17 | 4;
  LOBYTE(v14) = a3;
  LOBYTE(v13) = a2;
  KeEstimateClockTickDuration(a1, v16, v13, v14, a4, (__int64)&v28, a8);
  v18 = *(_DWORD *)(a1 + 11684);
  v19 = 0;
  for ( i = v18; i; i >>= 4 )
    v19 += KeMaximumIncrement;
  v21 = v19;
  if ( !a2 && v18 )
  {
    v22 = KeMaximumIncrement / (v18 + 1);
    if ( !v22 )
      v22 = 1;
    v15 = v22;
  }
  if ( v28 <= v15 )
  {
    v15 = v28;
    v21 = v28;
  }
  else
  {
    if ( v28 < v19 )
      v21 = v28;
    *a9 |= 1u;
  }
  if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(a1 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v34) )
  {
    v24 = 0LL;
    v32 = v34[1];
    v31 = (unsigned __int16 *)v34;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v27, &v31) )
    {
      Prcb = KeGetPrcb(v27);
      v26 = *(_QWORD *)(Prcb + 23848);
      if ( v26 != -1LL && v26 > v24 )
        v24 = *(_QWORD *)(Prcb + 23848);
    }
    if ( v24 && v21 + a4 > v24 )
    {
      *a9 |= 0x2000u;
      v21 = v24 > a4 ? (unsigned int)(v24 - a4) : 1LL;
      if ( v21 < v15 )
        v15 = v21;
    }
  }
  if ( v15 < a5 )
  {
    *a9 |= 0x1000u;
    v15 = a5;
    v21 = a5;
  }
  *v29 = v21;
  result = v30;
  *v30 = v15;
  return result;
}

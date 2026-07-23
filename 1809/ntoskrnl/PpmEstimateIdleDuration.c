/*
 * XREFs of PpmEstimateIdleDuration @ 0x1401805C0
 * Callers:
 *     PpmIdleSelectStates @ 0x1401801D0 (PpmIdleSelectStates.c)
 *     PpmComputeIdleDurationHint @ 0x14018051C (PpmComputeIdleDurationHint.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeEstimateClockTickDuration @ 0x140180730 (KeEstimateClockTickDuration.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmGetIdleConstrainedMask @ 0x1402D412C (PpmGetIdleConstrainedMask.c)
 */

unsigned __int64 *__fastcall PpmEstimateIdleDuration(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        __int64 a7,
        int *a8)
{
  unsigned __int64 v10; // rdi
  unsigned __int64 v12; // r15
  char v13; // dl
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int i; // eax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rsi
  ULONG v21; // eax
  unsigned __int64 *result; // rax
  __int64 Prcb; // rax
  unsigned __int64 v24; // rcx
  ULONG v25; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 *v27; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v28; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v30; // [rsp+60h] [rbp-A0h]
  char v31[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v32; // [rsp+78h] [rbp-88h]

  v28 = a5;
  v10 = -1LL;
  v27 = a6;
  v12 = a3;
  v13 = *(_BYTE *)(*(_QWORD *)(a1 + 23808) + 540LL);
  v14 = 0;
  *a8 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v14 = 8;
    *a8 = 8;
  }
  if ( a2 )
    *a8 = v14 | 4;
  v15 = a3;
  LOBYTE(a3) = a2;
  KeEstimateClockTickDuration(a1, v13, a3, v15, (__int64)&v26, a7);
  v16 = *(_DWORD *)(a1 + 11684);
  v17 = 0;
  for ( i = v16; i; i >>= 4 )
    v17 += KeMaximumIncrement;
  v19 = v17;
  if ( a2 )
  {
    v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
    if ( v16 )
    {
      v21 = KeMaximumIncrement / (v16 + 1);
      if ( !v21 )
        v21 = 1;
      v10 = v21;
    }
  }
  if ( v26 <= v10 )
  {
    v10 = v26;
    v19 = v26;
  }
  else
  {
    if ( v26 < v17 )
      v19 = v26;
    *a8 |= 1u;
  }
  if ( PpmIdleDurationExpirationTimeout && *(_BYTE *)(a1 + 33) && (unsigned __int8)PpmGetIdleConstrainedMask(v31) )
  {
    v29[1] = v32;
    v29[0] = (unsigned __int16 *)v31;
    v30 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v25, v29) )
    {
      Prcb = KeGetPrcb(v25);
      v24 = *(_QWORD *)(Prcb + 23848);
      if ( v24 != -1LL && v24 > v20 )
        v20 = *(_QWORD *)(Prcb + 23848);
    }
    if ( v20 && v12 + v19 > v20 )
    {
      *a8 |= 0x2000u;
      v19 = v20 > v12 ? (unsigned int)(v20 - v12) : 1LL;
      if ( v19 < v10 )
        v10 = v19;
    }
  }
  if ( v10 < a4 )
  {
    *a8 |= 0x1000u;
    v10 = a4;
    v19 = a4;
  }
  *v27 = v19;
  result = v28;
  *v28 = v10;
  return result;
}

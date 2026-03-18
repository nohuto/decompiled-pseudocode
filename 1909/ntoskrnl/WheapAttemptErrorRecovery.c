/*
 * XREFs of WheapAttemptErrorRecovery @ 0x14033FDD8
 * Callers:
 *     WheaReportHwError @ 0x14033F730 (WheaReportHwError.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x140199CC0 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x14033FD40 (WheapAttemptArchitecturalErrorRecovery.c)
 */

__int64 __fastcall WheapAttemptErrorRecovery(__int64 a1)
{
  char v2; // si
  char v3; // r14
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _DWORD Src[8]; // [rsp+20h] [rbp-79h] BYREF
  __int128 v17; // [rsp+40h] [rbp-59h]
  __int128 v18; // [rsp+50h] [rbp-49h]
  __int128 v19; // [rsp+60h] [rbp-39h]
  __int128 v20; // [rsp+70h] [rbp-29h]
  __int128 v21; // [rsp+80h] [rbp-19h]
  __int128 v22; // [rsp+90h] [rbp-9h]
  __int128 v23; // [rsp+A0h] [rbp+7h]
  __int128 v24; // [rsp+B0h] [rbp+17h]
  char v25; // [rsp+C0h] [rbp+27h]
  char v26; // [rsp+C1h] [rbp+28h]
  int v27; // [rsp+C2h] [rbp+29h]

  v2 = 0;
  v3 = 0;
  v4 = WheapAttemptArchitecturalErrorRecovery(a1);
  if ( v4 >= 0 && !*(_DWORD *)(a1 + 12) )
  {
    *(_DWORD *)(a1 + 12) = 2;
    v2 = 1;
  }
  v5 = PshedAttemptErrorRecovery(a1);
  v6 = *(_DWORD *)(a1 + 12);
  if ( !v6 )
  {
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 12) = 2;
      v3 = 1;
LABEL_9:
      *(_DWORD *)(a1 + 104) |= 1u;
      goto LABEL_10;
    }
    *(_DWORD *)(a1 + 12) = 1;
    v6 = 1;
  }
  if ( v6 == 2 )
    goto LABEL_9;
LABEL_10:
  if ( v4 < 0 && v5 >= 0 )
    v4 = v5;
  v7 = *(_OWORD *)a1;
  Src[3] = 0;
  v8 = *(_OWORD *)(a1 + 16);
  Src[0] = 1733060695;
  v17 = v7;
  v9 = *(_OWORD *)(a1 + 32);
  Src[1] = 1;
  v18 = v8;
  v10 = *(_OWORD *)(a1 + 48);
  Src[2] = 166;
  v19 = v9;
  v11 = *(_OWORD *)(a1 + 64);
  Src[5] = -2147483634;
  v20 = v10;
  v12 = *(_OWORD *)(a1 + 80);
  Src[4] = 1280201291;
  v21 = v11;
  v13 = *(_OWORD *)(a1 + 96);
  Src[6] = 2;
  v22 = v12;
  v14 = *(_OWORD *)(a1 + 112);
  Src[7] = 134;
  v23 = v13;
  v24 = v14;
  v27 = v4;
  v25 = v2;
  v26 = v3;
  WheaLogInternalEvent(Src);
  return (unsigned int)v4;
}

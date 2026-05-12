/*
 * XREFs of StorEtwMiniportLogError @ 0x1C003BD64
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0005FE8 (RaidAdapterFindUnit.c)
 *     RaidDriverGetName @ 0x1C0017EBC (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssqbr9qz @ 0x1C003B1C8 (McTemplateK0quuujjzssqbr9qz.c)
 */

__int64 __fastcall StorEtwMiniportLogError(__int64 a1, __int64 a2, char a3, char *a4, int a5, __int64 a6)
{
  char v6; // r14
  unsigned int v7; // ebx
  char v10; // r15
  char v11; // r12
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 Unit; // rax
  __int64 v18; // rax
  signed int v19; // ecx
  int v20; // [rsp+80h] [rbp-69h]
  __int64 v22; // [rsp+98h] [rbp-51h] BYREF
  char *v23; // [rsp+A0h] [rbp-49h]
  __int128 v24; // [rsp+A8h] [rbp-41h] BYREF
  __int128 v25; // [rsp+B8h] [rbp-31h] BYREF
  struct _MCGEN_TRACE_CONTEXT v26; // [rsp+C8h] [rbp-21h] BYREF

  v6 = -1;
  v7 = 0;
  HIBYTE(v20) = -1;
  v10 = -1;
  v22 = 0LL;
  v11 = -1;
  v23 = 0LL;
  v24 = 0uLL;
  v26.RegistrationHandle = 0LL;
  LOBYTE(v26.Logger) = 0;
  memset(&v26.MatchAnyKeyword, 0, 17);
  if ( !StorEtwLoggingEnabled )
    return 3238002689LL;
  v13 = **(_QWORD **)(a1 - 16);
  if ( !v13 )
    return 3238002694LL;
  RaidDriverGetName(*(_QWORD *)(v13 + 16), (__int64)&v22);
  v25 = *(_OWORD *)(v13 + 5128);
  if ( a2 )
  {
    if ( *(_WORD *)a2 != 1 )
      return 3238002694LL;
    if ( *(_DWORD *)(a2 + 4) < 4u )
      return 3238002694LL;
    v6 = *(_BYTE *)(a2 + 8);
    v10 = *(_BYTE *)(a2 + 9);
    v11 = *(_BYTE *)(a2 + 10);
    LOBYTE(v20) = v6;
    BYTE1(v20) = v10;
    BYTE2(v20) = v11;
    Unit = RaidAdapterFindUnit(v13, v20);
    v15 = Unit;
    if ( !Unit )
      return 3238002694LL;
    v24 = *(_OWORD *)(Unit + 1976);
    v18 = *(_QWORD *)(Unit + 104);
    if ( v18 )
    {
      v26.RegistrationHandle = *(_QWORD *)(v18 + 8);
      *(_OWORD *)&v26.MatchAnyKeyword = *(_OWORD *)(*(_QWORD *)(v15 + 104) + 16LL);
    }
  }
  if ( (byte_1C0062744 & 4) != 0 )
    v19 = McTemplateK0quuujjzssqbr9qz(
            v15,
            v14,
            v16,
            *(_DWORD *)(v13 + 56),
            v6,
            v10,
            v11,
            (__int64)&v24,
            (__int64)&v25,
            v23,
            &v26,
            (const struct _MCGEN_TRACE_CONTEXT *)&v26.MatchAnyKeyword,
            a5,
            a6,
            a3,
            a4);
  else
    v19 = 0;
  if ( v19 < 0 )
    return (unsigned int)-1056964607;
  return v7;
}

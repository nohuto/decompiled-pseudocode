/*
 * XREFs of PspGetStandardHandleList @ 0x1406CE490
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // r9
  unsigned int i; // ecx
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+18h]
  __int64 v10; // [rsp+68h] [rbp+20h]

  v9 = 0LL;
  v2 = 0LL;
  v3 = *(__int64 **)(a1 + 1064);
  if ( v3 )
    v2 = *v3;
  v8 = v2;
  if ( v2 )
  {
    v10 = 0LL;
    v9 = *(unsigned int *)(v2 + 16) + 24LL;
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
    v10 = v7 + 32;
    if ( (((_BYTE)v7 + 32) & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( v8 )
      v5 = *(unsigned int *)(v9 + 4LL * i);
    else
      v5 = *(_QWORD *)(v10 + 8LL * i);
    *(_QWORD *)(a2 + 8LL * i) = v5;
  }
  return 0LL;
}

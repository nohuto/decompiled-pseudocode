/*
 * XREFs of PspGetStandardHandleList @ 0x1406EEC80
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14067FB08 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspGetStandardHandleList(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r9
  unsigned int i; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+18h]
  __int64 v12; // [rsp+68h] [rbp+20h]

  v9 = 0LL;
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 1064);
  if ( v4 )
    v3 = *v4;
  v12 = v3;
  if ( v3 )
  {
    v10 = 0LL;
    v7 = *(unsigned int *)(v3 + 16) + 24LL;
    v9 = v7;
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 1016) + 32LL);
    v10 = v11 + 32;
    if ( (((_BYTE)v11 + 32) & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  for ( i = 0; i < 3; ++i )
  {
    if ( v12 )
      v6 = *(unsigned int *)(v9 + 4LL * i);
    else
      v6 = *(_QWORD *)(v10 + 8LL * i);
    *(_QWORD *)(a2 + 8LL * i) = v6;
  }
  return 0LL;
}

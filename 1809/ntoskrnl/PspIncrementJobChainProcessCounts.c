/*
 * XREFs of PspIncrementJobChainProcessCounts @ 0x140605F28
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     PspSendJobNotification @ 0x140137EBC (PspSendJobNotification.c)
 */

void __fastcall PspIncrementJobChainProcessCounts(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rbx
  int v7; // r9d
  int v8; // eax

  v6 = a1;
  if ( a1 != a2 )
  {
    v7 = a4 & 0x8000;
    do
    {
      v8 = *(_DWORD *)(a1 + 212);
      if ( v8 != -1 )
        *(_DWORD *)(a1 + 212) = v8 + 1;
      ++*(_DWORD *)(a1 + 216);
      ++*(_DWORD *)(a1 + 1208);
      if ( v7 )
        ++*(_DWORD *)(a1 + 1212);
      a1 = *(_QWORD *)(a1 + 1072);
    }
    while ( a1 != a2 );
  }
  while ( v6 != a2 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v6 + 1304), 0xFFDFFFFF);
    if ( *(_QWORD *)(v6 + 456) )
    {
      if ( (*(_DWORD *)(v6 + 876) & 0x40) != 0 )
        PspSendJobNotification(v6, 6LL, *(_QWORD *)(a3 + 736), 0);
    }
    v6 = *(_QWORD *)(v6 + 1072);
  }
}

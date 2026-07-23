/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1406AA364
 * Callers:
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406AA014 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400A1E1C (RtlpGetLegacyContextLength.c)
 *     RtlpGetContextFlagsLocation @ 0x1400A202C (RtlpGetContextFlagsLocation.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406AA3FC (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // r10
  int v8; // r11d
  __int64 ContextFlagsLocation; // rax
  __int64 v10; // r10
  __int64 result; // rax
  int v12; // r11d
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v14) = a2;
  *(_QWORD *)(a3 + 24) = a1;
  v4 = RtlpArchContextFlagFromMachine(332LL);
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, (int *)&v13, &v14);
  v5 = ~(v14 - 1LL) & (a1 + v14 + 3LL);
  v6 = v13 + 7LL;
  *v7 = v5;
  v7[1] = (v5 + v6) & 0xFFFFFFFFFFFFFFF8uLL;
  ContextFlagsLocation = RtlpGetContextFlagsLocation(v5, v8);
  *(_QWORD *)(v10 + 16) = ContextFlagsLocation;
  result = 0LL;
  *(_DWORD *)(v10 + 32) = v12;
  *(_WORD *)(v10 + 36) = 332;
  return result;
}

/*
 * XREFs of RtlWow64GetCpuAreaInfo @ 0x1406C90A4
 * Callers:
 *     RtlpWalkFrameChain @ 0x1400182A0 (RtlpWalkFrameChain.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1406C8D28 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     RtlpGetContextFlagsLocation @ 0x140017008 (RtlpGetContextFlagsLocation.c)
 *     RtlpGetLegacyContextLength @ 0x1400171E8 (RtlpGetLegacyContextLength.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406C9148 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall RtlWow64GetCpuAreaInfo(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // r10
  int v8; // r11d
  __int64 ContextFlagsLocation; // rax
  __int64 v10; // r10
  __int64 v11; // r8
  int v12; // r11d
  __int64 result; // rax
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+38h] [rbp+10h] BYREF

  LOWORD(v15) = a2;
  *(_QWORD *)(a3 + 24) = a1;
  v4 = RtlpArchContextFlagFromMachine(332LL);
  if ( !v4 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v4, (int *)&v14, &v15);
  v5 = ~(v15 - 1LL) & (a1 + v15 + 3LL);
  v6 = v5 + v14 + 7LL;
  *v7 = v5;
  v7[1] = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  ContextFlagsLocation = RtlpGetContextFlagsLocation(v5, v8);
  *(_QWORD *)(v10 + 16) = ContextFlagsLocation;
  *(_DWORD *)(v10 + 32) = v12;
  *(_QWORD *)(v10 + 40) = (v11 + 11) & 0xFFFFFFFFFFFFFFFCuLL;
  result = 0LL;
  *(_WORD *)(v10 + 36) = 332;
  return result;
}

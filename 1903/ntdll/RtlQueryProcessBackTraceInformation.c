/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x1800D7300
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x180075708 (RtlCommitDebugInfo_0.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     RtlDeCommitDebugInfo_0 @ 0x1800D7EFC (RtlDeCommitDebugInfo_0.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(PRTL_DEBUG_INFORMATION Buffer)
{
  PRTL_SRWLOCK v2; // rbx
  _RTL_PROCESS_BACKTRACES *v4; // rax
  _RTL_PROCESS_BACKTRACES *v5; // r14
  int Ptr_high; // eax
  _DWORD *v7; // r12
  int v8; // edi
  int v9; // esi
  _QWORD *Ptr; // r13
  _WORD *v12; // rdx

  v2 = qword_180163B78;
  if ( !qword_180163B78 )
    return 0LL;
  v4 = (_RTL_PROCESS_BACKTRACES *)RtlCommitDebugInfo_0(Buffer, 0x18uLL);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  BYTE1(v2[16].Ptr) = 1;
  *(_QWORD *)&v4->CommittedMemory = (char *)v2[19].Ptr - (char *)v2[17].Ptr;
  *(_QWORD *)&v4->NumberOfBackTraceLookups = (char *)v2[23].Ptr - (char *)v2[17].Ptr;
  LODWORD(v4->BackTraces[0].SymbolicBackTrace) = v2[22].Ptr;
  Ptr_high = HIDWORD(v2[22].Ptr);
  HIDWORD(v5->BackTraces[0].SymbolicBackTrace) = Ptr_high;
  v7 = RtlCommitDebugInfo_0(Buffer, (unsigned int)(272 * Ptr_high));
  if ( v7 )
  {
    v8 = 0;
    v9 = HIDWORD(v2[22].Ptr);
    Ptr = v2[23].Ptr;
    while ( v9-- )
    {
      v12 = (_WORD *)*--Ptr;
      *(_QWORD *)v7 = 0LL;
      v7[2] = v12[4] & 0x7FF;
      *((_WORD *)v7 + 6) = v12[6];
      *((_WORD *)v7 + 7) = v12[7];
      memmove(v7 + 4, v12 + 8, 8LL * (unsigned __int16)v12[7]);
      v7 += 68;
    }
  }
  else
  {
    v8 = -1073741801;
    RtlDeCommitDebugInfo_0(Buffer, v5, 0x18uLL);
  }
  BYTE1(v2[16].Ptr) = 0;
  if ( v8 >= 0 )
    Buffer->BackTraces = v5;
  return (unsigned int)v8;
}

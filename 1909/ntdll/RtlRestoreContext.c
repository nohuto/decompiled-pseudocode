/*
 * XREFs of RtlRestoreContext @ 0x1800A1110
 * Callers:
 *     RtlGuardRestoreContext @ 0x18001EE50 (RtlGuardRestoreContext.c)
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 * Callees:
 *     ZwContinue @ 0x18009D6F0 (ZwContinue.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v2; // rax
  DWORD v3; // r8d
  volatile __int32 *v4; // rbx
  __int32 v5; // r8d
  _QWORD _FFFFFFFFFFFFFF68[161]; // [rsp-98h] [rbp-500h] BYREF
  WORD SegCs; // [rsp+470h] [rbp+8h]
  DWORD EFlags; // [rsp+478h] [rbp+10h]
  DWORD64 Rsp; // [rsp+480h] [rbp+18h]
  WORD SegSs; // [rsp+488h] [rbp+20h]

  if ( ExceptionRecord )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483607 && ExceptionRecord->NumberParameters )
    {
      qmemcpy(_FFFFFFFFFFFFFF68, ContextRecord, 0x4D0uLL);
      _FFFFFFFFFFFFFF68[157] = _FFFFFFFFFFFFFF68[19];
      _FFFFFFFFFFFFFF68[154] = _FFFFFFFFFFFFFF68[31];
      RcFrameConsolidation(ExceptionRecord);
      return;
    }
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v2 = ExceptionRecord->ExceptionInformation[0];
      ContextRecord->Rbx = *(_QWORD *)(v2 + 8);
      ContextRecord->Rsp = *(_QWORD *)(v2 + 16);
      ContextRecord->Rbp = *(_QWORD *)(v2 + 24);
      ContextRecord->Rsi = *(_QWORD *)(v2 + 32);
      ContextRecord->Rdi = *(_QWORD *)(v2 + 40);
      ContextRecord->R12 = *(_QWORD *)(v2 + 48);
      ContextRecord->R13 = *(_QWORD *)(v2 + 56);
      ContextRecord->R14 = *(_QWORD *)(v2 + 64);
      ContextRecord->R15 = *(_QWORD *)(v2 + 72);
      ContextRecord->Rip = *(_QWORD *)(v2 + 80);
      v3 = *(_DWORD *)(v2 + 88);
      ContextRecord->MxCsr = v3;
      ContextRecord->FltSave.MxCsr = v3;
      ContextRecord->FltSave.ControlWord = *(_WORD *)(v2 + 92);
      ContextRecord->Xmm6 = *(M128A *)(v2 + 96);
      ContextRecord->Xmm7 = *(M128A *)(v2 + 112);
      ContextRecord->Xmm8 = *(M128A *)(v2 + 128);
      ContextRecord->Xmm9 = *(M128A *)(v2 + 144);
      ContextRecord->Xmm10 = *(M128A *)(v2 + 160);
      ContextRecord->Xmm11 = *(M128A *)(v2 + 176);
      ContextRecord->Xmm12 = *(M128A *)(v2 + 192);
      ContextRecord->Xmm13 = *(M128A *)(v2 + 208);
      ContextRecord->Xmm14 = *(M128A *)(v2 + 224);
      ContextRecord->Xmm15 = *(M128A *)(v2 + 240);
    }
  }
  if ( (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] & 0x1000000000000000LL) == 0
    && (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] & 0x1000) == 0
    && (ContextRecord->ContextFlags & 0xFFFFFFBF) == 0x10000F )
  {
    if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040 )
    {
      v4 = (volatile __int32 *)((char *)&ContextRecord->1 + SLODWORD(ContextRecord[1].P3Home) + 464);
      v5 = _InterlockedExchange(v4 + 6, ContextRecord->MxCsr);
      _xrstor((void *)v4, MEMORY[0x7FFE03E0] & 0xFFFFFFFFFFFFFFFCuLL);
      *((_DWORD *)v4 + 6) = v5;
    }
    _fxrstor(&ContextRecord->FltSave);
    _mm_setcsr(ContextRecord->MxCsr);
    SegSs = ContextRecord->SegSs;
    Rsp = ContextRecord->Rsp;
    EFlags = ContextRecord->EFlags;
    SegCs = ContextRecord->SegCs;
    _FFFFFFFFFFFFFF68[160] = ContextRecord->Rip;
    __asm { iretq }
  }
  if ( ZwContinue(ContextRecord, 0) == -1073740278 )
    __fastfail(0x30u);
}

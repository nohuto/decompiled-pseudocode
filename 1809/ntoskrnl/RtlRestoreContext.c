/*
 * XREFs of RtlRestoreContext @ 0x1401C5900
 * Callers:
 *     RtlUnwindEx @ 0x14009DE70 (RtlUnwindEx.c)
 * Callees:
 *     KeCheckStackAndTargetAddress @ 0x140120720 (KeCheckStackAndTargetAddress.c)
 *     ZwContinue @ 0x1401B8B50 (ZwContinue.c)
 */

void __cdecl RtlRestoreContext(struct _CONTEXT *ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v2; // rax
  _QWORD _FFFFFFFFFFFFFF68[161]; // [rsp-98h] [rbp-500h] BYREF
  unsigned __int16 SegCs; // [rsp+470h] [rbp+8h]
  unsigned int EFlags; // [rsp+478h] [rbp+10h]
  unsigned __int64 Rsp; // [rsp+480h] [rbp+18h]
  unsigned __int16 SegSs; // [rsp+488h] [rbp+20h]

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
      ContextRecord->MxCsr = *(_DWORD *)(v2 + 88);
      ContextRecord->Xmm6 = *(_M128A *)(v2 + 96);
      ContextRecord->Xmm7 = *(_M128A *)(v2 + 112);
      ContextRecord->Xmm8 = *(_M128A *)(v2 + 128);
      ContextRecord->Xmm9 = *(_M128A *)(v2 + 144);
      ContextRecord->Xmm10 = *(_M128A *)(v2 + 160);
      ContextRecord->Xmm11 = *(_M128A *)(v2 + 176);
      ContextRecord->Xmm12 = *(_M128A *)(v2 + 192);
      ContextRecord->Xmm13 = *(_M128A *)(v2 + 208);
      ContextRecord->Xmm14 = *(_M128A *)(v2 + 224);
      ContextRecord->Xmm15 = *(_M128A *)(v2 + 240);
    }
  }
  if ( (ContextRecord->ContextFlags & 0xFFFFFFBF) == 0x10000F )
  {
    _mm_setcsr(ContextRecord->MxCsr);
    KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
    SegSs = ContextRecord->SegSs;
    Rsp = ContextRecord->Rsp;
    EFlags = ContextRecord->EFlags;
    SegCs = ContextRecord->SegCs;
    _FFFFFFFFFFFFFF68[160] = ContextRecord->Rip;
    _disable();
    __asm { iretq }
  }
  ZwContinue(ContextRecord, 0);
}

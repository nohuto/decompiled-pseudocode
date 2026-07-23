/*
 * XREFs of RtlCaptureContext2 @ 0x1800A4470
 * Callers:
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 * Callees:
 *     RtlpMergeContextXState @ 0x180009020 (RtlpMergeContextXState.c)
 */

void __cdecl RtlCaptureContext2(PCONTEXT ContextRecord)
{
  DWORD64 v1; // rax
  DWORD64 v2; // rdx
  DWORD64 v3; // rbx
  DWORD64 v4; // rbp
  DWORD64 v5; // rdi
  DWORD64 v6; // rsi
  DWORD64 v7; // r8
  DWORD64 v8; // r9
  DWORD64 v9; // r10
  DWORD64 v10; // r11
  DWORD64 v11; // r12
  DWORD64 v12; // r13
  DWORD64 v13; // r14
  DWORD64 v14; // r15
  struct _CONTEXT *v16; // [rsp+28h] [rbp-10h]
  DWORD v17; // [rsp+30h] [rbp-8h]
  DWORD64 retaddr; // [rsp+38h] [rbp+0h]
  char v19; // [rsp+40h] [rbp+8h] BYREF

  ContextRecord->Rax = v1;
  ContextRecord->Rcx = (DWORD64)ContextRecord;
  ContextRecord->Rdx = v2;
  ContextRecord->R8 = v7;
  ContextRecord->R9 = v8;
  ContextRecord->R10 = v9;
  ContextRecord->R11 = v10;
  _fxsave(&ContextRecord->FltSave);
  ContextRecord->SegCs = __CS__;
  ContextRecord->SegDs = __DS__;
  ContextRecord->SegEs = __ES__;
  ContextRecord->SegSs = __SS__;
  ContextRecord->SegFs = __FS__;
  ContextRecord->SegGs = __GS__;
  ContextRecord->Rbx = v3;
  ContextRecord->Rbp = v4;
  ContextRecord->Rsi = v6;
  ContextRecord->Rdi = v5;
  ContextRecord->R12 = v11;
  ContextRecord->R13 = v12;
  ContextRecord->R14 = v13;
  ContextRecord->R15 = v14;
  ContextRecord->MxCsr = _mm_getcsr();
  ContextRecord->Rsp = (DWORD64)&v19;
  ContextRecord->Rip = retaddr;
  ContextRecord->EFlags = v17;
  ContextRecord->ContextFlags &= 0x100040u;
  if ( ContextRecord->ContextFlags == 1048640 )
  {
    __asm { rdsspq  rdx }
    if ( _RDX )
      _RDX += 8LL;
    RtlpMergeContextXState((__int64)v16, _RDX);
    ContextRecord = v16;
  }
  ContextRecord->ContextFlags |= 0x10000Fu;
}

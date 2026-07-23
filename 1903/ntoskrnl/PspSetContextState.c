/*
 * XREFs of PspSetContextState @ 0x1408CDAC4
 * Callers:
 *     PspGetSetContextInternal @ 0x1405E7FD0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140016C60 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140016CB8 (RtlInitializeExtendedContext.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlCopyContext @ 0x1405E7C38 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, CONTEXT *a2)
{
  CONTEXT *v3; // rsi
  int v5; // ebx
  ULONG ContextFlags; // edx
  __int64 result; // rax
  ULONG ContextLength; // [rsp+40h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(CONTEXT **)(a1 + 2024);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength(v5 + 0x100000, &ContextLength);
    memset(v3, 0, ContextLength);
    RtlInitializeExtendedContext(v3, v5 + 0x100000, &ContextEx);
    v3->ContextFlags = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  ContextFlags = a2->ContextFlags;
  if ( (ContextFlags & 0x100040) == 0x100040 )
  {
    v3->ContextFlags |= 0x100040u;
    ContextFlags = a2->ContextFlags;
  }
  RtlCopyContext(v3, ContextFlags, a2);
  result = a2->ContextFlags & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    ContextLength = _mm_getcsr();
    a2->FltSave.MxCsr = ContextLength;
    result = 7999LL;
    a2->FltSave.ControlWord &= 0x1F3Fu;
  }
  return result;
}

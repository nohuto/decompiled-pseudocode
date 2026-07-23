/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x180008450
 * Callers:
 *     RtlUnwind @ 0x180003640 (RtlUnwind.c)
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180005BF0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x1800087D0 (RtlRaiseException.c)
 *     RtlInitializeExtendedContext @ 0x18007C0B0 (RtlInitializeExtendedContext.c)
 * Callees:
 *     RtlpGetEntireXStateAreaLength @ 0x1800087A4 (RtlpGetEntireXStateAreaLength.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  _CONTEXT_EX *v4; // rbx
  ULONG64 v5; // rbp
  char v7; // r8
  _DWORD *v8; // rcx
  ULONG Length; // ecx
  NTSTATUS result; // eax
  ULONG v11; // esi
  LONG v12; // edi
  ULONG v13; // edi

  v4 = 0LL;
  v5 = EnabledExtendedFeatures;
  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x27FFFFA0) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFE0) != 0x400000 )
  {
    return -1073741811;
  }
  v7 = 1;
  if ( (ContextFlags & 0x100040) == 1048640 || (ContextFlags & 0x10040) == 65600 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v7 = 3;
  }
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v8 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = (_CONTEXT_EX *)(v8 + 179);
LABEL_21:
    *v8 = ContextFlags;
    goto LABEL_8;
  }
  if ( (ContextFlags & 0x100000) == 0 )
  {
    if ( (ContextFlags & 0x200000) != 0 )
    {
      v8 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = (_CONTEXT_EX *)(v8 + 104);
    }
    else
    {
      if ( (ContextFlags & 0x400000) == 0 )
        goto LABEL_9;
      v8 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = (_CONTEXT_EX *)(v8 + 228);
    }
    goto LABEL_21;
  }
  v8 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
  v8[12] = ContextFlags;
  v4 = (_CONTEXT_EX *)(v8 + 308);
LABEL_8:
  v4->Legacy.Length = (_DWORD)v4 - (_DWORD)v8;
LABEL_9:
  Length = v4->Legacy.Length;
  v4->Legacy.Offset = -Length;
  v4->All.Offset = -Length;
  v4->All.Length = Length + 24;
  if ( (ContextFlags & 0x10020) != 65568 && (ContextFlags & 0x10000) != 0 )
    v4->Legacy.Length = 204;
  if ( (v7 & 2) != 0 )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v5 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL) & EnabledExtendedFeatures;
    v11 = RtlpGetEntireXStateAreaLength(v5) - 512;
    memset((void *)(((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, v11);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)&v4[2].XState.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v5 | 0x8000000000000000uLL;
    v12 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
    v4->XState.Offset = v12;
    v13 = v11 + v12 - v4->All.Offset;
    v4->XState.Length = v11;
    result = 0;
    v4->All.Length = v13;
    *ContextEx = v4;
  }
  else
  {
    v4->XState = (CONTEXT_CHUNK)25LL;
    result = 0;
    *ContextEx = v4;
  }
  return result;
}

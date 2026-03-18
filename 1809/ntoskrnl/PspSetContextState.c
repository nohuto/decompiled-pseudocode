/*
 * XREFs of PspSetContextState @ 0x14088F720
 * Callers:
 *     PspGetSetContextInternal @ 0x14061F940 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1400A1D44 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1D9C (RtlInitializeExtendedContext.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     RtlCopyContext @ 0x140620E78 (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  int v5; // ebx
  int v6; // edx
  __int64 result; // rax
  unsigned int Size; // [rsp+40h] [rbp+8h]

  v3 = *(_DWORD **)(a1 + 2008);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength((unsigned int)(v5 + 0x100000));
    memset(v3, 0, Size);
    RtlInitializeExtendedContext((__int64)v3, v5 + 0x100000);
    v3[12] = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  v6 = *(_DWORD *)(a2 + 48);
  if ( (v6 & 0x100040) == 0x100040 )
  {
    v3[12] |= 0x100040u;
    v6 = *(_DWORD *)(a2 + 48);
  }
  RtlCopyContext((__int64)v3, v6, a2);
  result = *(_DWORD *)(a2 + 48) & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    *(_DWORD *)(a2 + 280) = _mm_getcsr();
    result = 7999LL;
    *(_WORD *)(a2 + 256) &= 0x1F3Fu;
  }
  return result;
}

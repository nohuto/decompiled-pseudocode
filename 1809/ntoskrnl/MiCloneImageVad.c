/*
 * XREFs of MiCloneImageVad @ 0x1402C8CBC
 * Callers:
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiCreatePerSessionProtos @ 0x1406CA368 (MiCreatePerSessionProtos.c)
 *     MiCopyForkedFixupVad @ 0x14085D408 (MiCopyForkedFixupVad.c)
 */

__int64 __fastcall MiCloneImageVad(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int SessionId; // eax
  __int64 result; // rax

  v4 = *(_DWORD *)(a3 + 48);
  v5 = **(_QWORD **)(a3 + 72);
  if ( (v4 & 7) == 2 && (v4 & 0x8000) != 0 )
  {
    v6 = 1;
    MiCopyForkedFixupVad(a2, a3);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 1296) + 336LL);
  }
  else
  {
    v6 = 0;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0 )
    return 0LL;
  SessionId = MmGetSessionIdEx(a1);
  result = MiCreatePerSessionProtos(v5, SessionId);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 == 1 )
    --*(_QWORD *)(*(_QWORD *)(a1 + 1296) + 336LL);
  return result;
}

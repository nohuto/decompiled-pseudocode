/*
 * XREFs of MiCheckHintedPageFileSpace @ 0x140124A28
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlLengthCurrentClearRunForward @ 0x14002AD00 (RtlLengthCurrentClearRunForward.c)
 */

__int64 __fastcall MiCheckHintedPageFileSpace(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v10; // eax
  int v11; // ebx

  v6 = *(_QWORD *)(a1 + 112);
  if ( _bittest64(*(const signed __int64 **)(v6 + 32), a2) )
    return 0LL;
  if ( _bittest64(*(const signed __int64 **)(v6 + 16), a2) )
    return 0LL;
  v10 = RtlLengthCurrentClearRunForward(v6 + 24, a2, a3);
  v11 = a4 & 0x40;
  if ( v10 != a3 && !v11 )
    return 0LL;
  result = RtlLengthCurrentClearRunForward(*(_QWORD *)(a1 + 112) + 8LL, a2, v10);
  if ( (_DWORD)result != a3 && !v11 )
    return 0LL;
  return result;
}

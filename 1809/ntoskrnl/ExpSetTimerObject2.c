/*
 * XREFs of ExpSetTimerObject2 @ 0x1400FC158
 * Callers:
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     NtSetTimerEx @ 0x14001D530 (NtSetTimerEx.c)
 *     ExpSetTimer2 @ 0x1400FC060 (ExpSetTimer2.c)
 *     ExpSetTimer @ 0x1401403B8 (ExpSetTimer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 */

__int64 __fastcall ExpSetTimerObject2(_QWORD *Object, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax

  v3 = 0;
  if ( a3 && (*(_DWORD *)a3 || *(__int64 *)(a3 + 8) < -1) )
  {
    v3 = -1073741583;
  }
  else
  {
    if ( a2 )
      v5 = *a2;
    else
      v5 = 0LL;
    Object[18] = v5;
    Object[19] = 0LL;
    if ( a3 )
      Object[19] = *(_QWORD *)(a3 + 8);
    if ( a2 )
      KeSetTimer2(Object, Object[18], 0LL, a3);
    else
      KeCancelTimer2((__int64)Object);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v3;
}

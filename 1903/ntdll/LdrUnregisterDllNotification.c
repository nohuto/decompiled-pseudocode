/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800CECB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl LdrUnregisterDllNotification(PVOID Cookie)
{
  void *v2; // rdi
  NTSTATUS v3; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v7; // rdx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection(&stru_18015F3F0);
  v4 = off_18015F560;
  if ( off_18015F560 != (_UNKNOWN *)&off_18015F560 )
  {
    while ( 1 )
    {
      v5 = (_QWORD *)*v4;
      v2 = v4;
      if ( v4 == Cookie )
        break;
      v4 = (_QWORD *)*v4;
      if ( v5 == &off_18015F560 )
        goto LABEL_4;
    }
    if ( (_QWORD *)v5[1] != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
      __fastfail(3u);
    *v7 = v5;
    v3 = 0;
    v5[1] = v7;
  }
LABEL_4:
  RtlLeaveCriticalSection(&stru_18015F3F0);
  if ( v3 >= 0 )
    RtlFreeHeap(HeapHandle, 0, v2);
  return v3;
}

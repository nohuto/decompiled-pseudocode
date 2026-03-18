/*
 * XREFs of EtwpRealtimeDisconnectAllConsumers @ 0x1406ACB80
 * Callers:
 *     EtwpShutdownConsumers @ 0x1406ACB20 (EtwpShutdownConsumers.c)
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

void __fastcall EtwpRealtimeDisconnectAllConsumers(__int64 a1)
{
  void **v2; // rdi
  void *v3; // rbx
  void **v4; // rax
  struct _KEVENT *v5; // rcx

  v2 = (void **)(a1 + 344);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( *((void ***)v3 + 1) != v2 || (v4 = *(void ***)v3, *(void **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    --*(_DWORD *)(a1 + 360);
    v5 = (struct _KEVENT *)*((_QWORD *)v3 + 6);
    *((_BYTE *)v3 + 90) |= 4u;
    KeSetEvent(v5, 0, 0);
    ObfDereferenceObject(v3);
  }
}

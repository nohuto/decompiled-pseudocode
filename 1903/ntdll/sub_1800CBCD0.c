/*
 * XREFs of sub_1800CBCD0 @ 0x1800CBCD0
 * Callers:
 *     CsrClientConnectToServer @ 0x18004BB80 (CsrClientConnectToServer.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x180097FF0 (swprintf_s.c)
 *     wcscpy_s @ 0x180098180 (wcscpy_s.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 sub_1800CBCD0()
{
  struct _PEB *v0; // rbp
  PWSTR NtSystemRoot; // rax
  __int64 v2; // rsi
  ULONG SessionId; // ebx
  size_t v4; // rsi
  size_t v5; // r15
  __int64 v6; // r14
  size_t v7; // r14
  _QWORD *Heap; // rax
  unsigned __int64 v9; // rdi
  NTSTATUS SystemInformation; // ebx
  PVOID *v11; // r13
  char *v12; // rbx
  PWSTR v13; // rax
  char *v14; // rbx
  PWSTR v15; // rax
  char *v16; // rcx
  __int128 v17; // xmm0
  unsigned __int64 v18; // rdi
  wchar_t Destination[256]; // [rsp+30h] [rbp-238h] BYREF

  v0 = NtCurrentPeb();
  NtSystemRoot = RtlGetNtSystemRoot();
  v2 = -1LL;
  do
    ++v2;
  while ( NtSystemRoot[v2] );
  SessionId = v0->SessionId;
  v4 = 2 * v2;
  v5 = v4 + 18;
  if ( SessionId == RtlGetCurrentServiceSessionId() )
    wcscpy_s(Destination, 0x100uLL, L"\\BaseNamedObjects");
  else
    swprintf_s(Destination, 0x100uLL, L"%ws\\%ld\\BaseNamedObjects", L"\\Sessions", SessionId);
  v6 = -1LL;
  do
    ++v6;
  while ( Destination[v6] );
  v7 = 2 * v6;
  Heap = RtlAllocateHeap(qword_180165B60, 8u, v4 + v7 + v4 + 2768);
  v9 = (unsigned __int64)Heap;
  if ( Heap )
  {
    v11 = (PVOID *)(Heap + 341);
    Heap[342] = Heap;
    v12 = (char *)(Heap + 343);
    Heap[1] = Heap + 343;
    *(_WORD *)Heap = v4;
    *((_WORD *)Heap + 1) = v4 + 2;
    v13 = RtlGetNtSystemRoot();
    memmove(v12, v13, v4);
    *(_WORD *)(v9 + 16) = v5;
    *(_WORD *)(v9 + 18) = v4 + 20;
    v14 = &v12[v4 + 2];
    *(_QWORD *)(v9 + 24) = v14;
    v15 = RtlGetNtSystemRoot();
    memmove(v14, v15, v4);
    v16 = &v14[v5 + 2];
    *(_OWORD *)&v14[v4] = xmmword_18012C290;
    *(_DWORD *)&v14[v4 + 16] = 50;
    *(_WORD *)(v9 + 34) = v7 + 2;
    *(_QWORD *)(v9 + 40) = v16;
    *(_WORD *)(v9 + 32) = v7;
    memmove(v16, Destination, v7);
    v17 = *(_OWORD *)(v9 + 32);
    *(_DWORD *)(v9 + 2672) = -1;
    *(_QWORD *)(v9 + 2704) = v9;
    *(_OWORD *)(v9 + 2688) = v17;
    SystemInformation = ZwQuerySystemInformation(SystemTimeOfDayInformation, (PVOID)(v9 + 320), 0x30u, 0LL);
    if ( SystemInformation < 0 )
    {
      RtlFreeHeap(qword_180165B60, 0, (PVOID)v9);
    }
    else
    {
      v18 = v9 & 0xFFFFFFFFFFFF0000uLL;
      v0->ReadOnlyStaticServerData = v11;
      v0->CsrServerReadOnlySharedMemoryBase = v18;
      v0->ReadOnlySharedMemoryBase = (PVOID)v18;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)SystemInformation;
}

/*
 * XREFs of RtlGetAppContainerParent @ 0x18000B6A0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001E70 (RtlDefaultNpAcl.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlGetAppContainerSidType @ 0x18000C330 (RtlGetAppContainerSidType.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlGetAppContainerParent(PSID AppContainerSid, PSID *AppContainerSidParent)
{
  _DWORD *Heap; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rbp
  int v7; // edi
  _DWORD *v8; // rcx
  char *v9; // rsi
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+48h] [rbp+10h] BYREF

  *AppContainerSidParent = 0LL;
  if ( RtlGetAppContainerSidType(AppContainerSid, &AppContainerSidType) < 0
    || AppContainerSidType != ChildAppContainerSidType )
  {
    return -1073741811;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, 0x28uLL);
  v5 = Heap;
  if ( !Heap )
    return -1073741670;
  v6 = 8LL;
  v7 = RtlInitializeSid(Heap, (PSID_IDENTIFIER_AUTHORITY)&Source2, 8u);
  if ( v7 < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  else
  {
    v8 = v5 + 2;
    v9 = (char *)((_BYTE *)AppContainerSid - (_BYTE *)v5);
    do
    {
      *v8 = *(_DWORD *)((char *)v8 + (_QWORD)v9);
      ++v8;
      --v6;
    }
    while ( v6 );
    *AppContainerSidParent = v5;
    return 0;
  }
  return v7;
}

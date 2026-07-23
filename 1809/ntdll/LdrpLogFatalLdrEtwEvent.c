/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x1800D13C8
 * Callers:
 *     LdrpInitializationFailure @ 0x1800D2AE4 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180086E80 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

int __fastcall LdrpLogFatalLdrEtwEvent(unsigned __int16 *a1, const EVENT_DESCRIPTOR *a2)
{
  const void **v2; // rdi
  __int64 v4; // rdx
  _WORD *v6; // rbx
  _WORD *Heap; // rax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF

  v2 = (const void **)(a1 + 4);
  v4 = *a1;
  if ( v4 + 2 > (unsigned __int64)a1[1] || (v6 = *v2, *((_WORD *)*v2 + ((unsigned __int64)*a1 >> 1))) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v4 + 2);
    v6 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v2, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
    LOWORD(v4) = *a1;
  }
  UserData.Ptr = (unsigned __int64)v6;
  UserData.Size = (unsigned __int16)v4 + 2;
  UserData.Reserved = 0;
  LODWORD(Heap) = EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v6 != *v2 )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap;
}

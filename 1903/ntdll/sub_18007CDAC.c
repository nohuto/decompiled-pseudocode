/*
 * XREFs of sub_18007CDAC @ 0x18007CDAC
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 * Callees:
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

int __fastcall sub_18007CDAC(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  const void **v3; // rdi
  wchar_t *v4; // rbx
  wchar_t *Heap; // rax
  int v6; // eax
  ULONGLONG RegHandle; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  v3 = (const void **)(a1 + 4);
  if ( v2 + 2 > a1[1] || (v4 = (wchar_t *)*v3, *((_WORD *)*v3 + (v2 >> 1))) )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, v2 + 2);
    v4 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v3, *a1);
    v4[(unsigned __int64)*a1 >> 1] = 0;
  }
  LODWORD(Heap) = sub_18002946C(v4, 4);
  if ( (_DWORD)Heap )
  {
    LODWORD(Heap) = EtwEventRegister(&stru_18011E318, 0LL, 0LL, &RegHandle);
    if ( !(_DWORD)Heap )
    {
      v6 = *a1 + 2;
      v9 = v4;
      v10 = v6;
      v11 = 0;
      EtwEventWrite(RegHandle, &stru_18012C180, 1u, (PEVENT_DATA_DESCRIPTOR)&v9);
      LODWORD(Heap) = EtwNotificationUnregister(RegHandle, 0LL);
    }
    if ( v4 != *v3 )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
  }
  return (int)Heap;
}

/*
 * XREFs of sub_1800891A4 @ 0x1800891A4
 * Callers:
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     sub_1800D5848 @ 0x1800D5848 (sub_1800D5848.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwEventWriteNoRegistration @ 0x1800835F0 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

int __fastcall sub_1800891A4(unsigned __int16 *a1, const EVENT_DESCRIPTOR *a2)
{
  const void **v2; // rdi
  __int64 v4; // rdx
  _WORD *v6; // rbx
  _WORD *Heap; // rax
  _WORD *v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  int v11; // [rsp+2Ch] [rbp-2Ch]

  v2 = (const void **)(a1 + 4);
  v4 = *a1;
  if ( v4 + 2 > (unsigned __int64)a1[1] || (v6 = *v2, *((_WORD *)*v2 + ((unsigned __int64)*a1 >> 1))) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1572864, v4 + 2);
    v6 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, *v2, *a1);
    v6[(unsigned __int64)*a1 >> 1] = 0;
    LOWORD(v4) = *a1;
  }
  v9 = v6;
  v10 = (unsigned __int16)v4 + 2;
  v11 = 0;
  LODWORD(Heap) = EtwEventWriteNoRegistration(&stru_18011E318, a2, 1u, (PEVENT_DATA_DESCRIPTOR)&v9);
  if ( v6 != *v2 )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  return (int)Heap;
}

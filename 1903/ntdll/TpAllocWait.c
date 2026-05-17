/*
 * XREFs of TpAllocWait @ 0x180031130
 * Callers:
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     sub_18007BEB4 @ 0x18007BEB4 (sub_18007BEB4.c)
 *     sub_18007CD00 @ 0x18007CD00 (sub_18007CD00.c)
 * Callees:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateWaitCompletionPacket @ 0x18009DF70 (ZwCreateWaitCompletionPacket.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpAllocWait(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 Heap; // rbx
  _QWORD *v9; // r14
  int v10; // edx
  int WaitCompletionPacket; // edi
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  _BYTE *v14; // r14
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a4;
  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    sub_18010EFC8();
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 1835008) | 8u, 472LL);
    if ( Heap )
    {
      v9 = (_QWORD *)(Heap + 368);
      *(_QWORD *)(Heap + 176) = retaddr;
      WaitCompletionPacket = ZwCreateWaitCompletionPacket(Heap + 368, 1LL);
      if ( WaitCompletionPacket < 0
        || (LOBYTE(v10) = 1,
            WaitCompletionPacket = sub_180031AA0(Heap, v10, a3, v4, (__int64)off_180118330, (__int64)off_180118350),
            WaitCompletionPacket < 0) )
      {
        if ( *v9 )
          ZwClose(*v9);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_180166080 + 1835008), Heap);
      }
      else
      {
        v12 = *(_QWORD *)(Heap + 144);
        *(_QWORD *)(Heap + 448) = sub_180030390;
        v13 = (_DWORD *)(Heap + 456);
        v14 = (_BYTE *)(Heap + 460);
        if ( v12 )
        {
          sub_180031620(v12, Heap + 456, Heap + 460);
        }
        else
        {
          *v13 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(Heap + 424) = 0LL;
        *(_QWORD *)(Heap + 440) = Heap + 432;
        *(_QWORD *)(Heap + 432) = Heap + 432;
        *(_QWORD *)(Heap + 392) = off_180118320;
        *(_DWORD *)(Heap + 400) = *v13;
        *(_BYTE *)(Heap + 404) = *v14;
        *(_QWORD *)(Heap + 80) = a2;
        *a1 = Heap;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}

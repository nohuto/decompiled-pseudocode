/*
 * XREFs of sub_180088FFC @ 0x180088FFC
 * Callers:
 *     sub_180088EB0 @ 0x180088EB0 (sub_180088EB0.c)
 * Callees:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     sub_1800803C4 @ 0x1800803C4 (sub_1800803C4.c)
 */

__int64 __fastcall sub_180088FFC(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char *Heap; // rdi
  __int64 v8; // r8
  NTSTATUS v9; // ebx
  char *v10; // rsi
  _DWORD *v11; // r14
  _PEB_LDR_DATA *v12; // rcx
  unsigned __int32 v14; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB8uLL);
  if ( !Heap )
  {
    v9 = -1073741801;
    goto LABEL_7;
  }
  v9 = sub_18002FBA8((volatile signed __int32 **)&qword_180166470, &stru_180166480, (volatile signed __int32 **)&v15);
  v14 = v9;
  if ( v9 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *((_QWORD *)Heap + 8) = sub_18010FB10;
    v10 = Heap + 76;
    v11 = Heap + 72;
    if ( v15 )
    {
      sub_180031620((__int64)v15, (_DWORD *)Heap + 18, (BYTE *)Heap + 76);
    }
    else
    {
      *v11 = 0;
      *v10 = 0;
    }
    *((_QWORD *)Heap + 5) = 0LL;
    *((_QWORD *)Heap + 7) = Heap + 48;
    *((_QWORD *)Heap + 6) = Heap + 48;
    *((_QWORD *)Heap + 1) = off_180118320;
    *((_DWORD *)Heap + 4) = *v11;
    Heap[20] = *v10;
    v12 = v15;
    *((_QWORD *)Heap + 10) = v15;
    v9 = sub_180062AF0(a3, (__int64)(Heap + 8), v12);
    v14 = v9;
    if ( v9 >= 0 )
    {
      ++*((_DWORD *)Heap + 22);
      *((_QWORD *)Heap + 12) = Heap + 96;
      *((_QWORD *)Heap + 13) = 0LL;
      *((_QWORD *)Heap + 14) = 0LL;
      *a1 = Heap;
      v9 = 0;
LABEL_7:
      v14 = v9;
    }
  }
  if ( v9 < 0 )
  {
    if ( v15 )
      sub_1800803C4(v15, v6, v8);
    if ( Heap )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v14;
    }
  }
  return (unsigned int)v9;
}

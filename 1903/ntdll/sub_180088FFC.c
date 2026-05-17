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

__int64 __fastcall sub_180088FFC(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 Heap; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ebx
  _BYTE *v11; // rsi
  _DWORD *v12; // r14
  struct _PEB_LDR_DATA *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  struct _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 184LL);
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_7;
  }
  v10 = sub_18002FBA8(
          (volatile signed __int32 **)&qword_180166470,
          &qword_180166480,
          (volatile signed __int32 **)&v16,
          v9);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = sub_18010FB10;
    v11 = (_BYTE *)(Heap + 76);
    v12 = (_DWORD *)(Heap + 72);
    if ( v16 )
    {
      sub_180031620((__int64)v16, (_DWORD *)(Heap + 72), (BYTE *)(Heap + 76));
    }
    else
    {
      *v12 = 0;
      *v11 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = off_180118320;
    *(_DWORD *)(Heap + 16) = *v12;
    *(_BYTE *)(Heap + 20) = *v11;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = sub_180062AF0(a3, Heap + 8, v13, v9);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
LABEL_7:
      v15 = v10;
    }
  }
  if ( v10 < 0 )
  {
    if ( v16 )
      sub_1800803C4((__int64)v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}

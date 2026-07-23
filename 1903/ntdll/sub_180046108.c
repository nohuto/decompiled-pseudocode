/*
 * XREFs of sub_180046108 @ 0x180046108
 * Callers:
 *     sub_180046028 @ 0x180046028 (sub_180046028.c)
 * Callees:
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     sub_180048780 @ 0x180048780 (sub_180048780.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180046108(__int64 a1, size_t Size, unsigned int a3, unsigned int a4)
{
  size_t v4; // rdi
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v9; // rbp
  __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int8 v12; // al
  void *v13; // rax
  void *v14; // rbx
  __int64 v16; // [rsp+50h] [rbp+8h]

  v4 = (unsigned int)Size;
  v5 = (_DWORD)Size == a3;
  v6 = a3 + 2;
  if ( v5 )
    v6 = a3;
  v9 = byte_180120E60[(unsigned __int64)(unsigned int)(v6 + 15) >> 4];
  if ( (*(_QWORD *)(a1 + 8 * v9 + 128) & 1) != 0 && !(unsigned int)sub_180048780(a1, v6, 1LL) )
    return -1LL;
  v10 = *(_QWORD *)(a1 + 8 * v9 + 128);
  v16 = ((((unsigned int)dword_180163534 >> 10) & 1) + 2LL) << 6;
  v11 = *(unsigned __int8 *)(a1 + 56) - (unsigned __int64)((*(_BYTE *)(a1 + 56) - 1) & 7) + v16 + 7;
  if ( *(_BYTE *)(v10 + 2) == 1 )
  {
    v12 = 0;
  }
  else
  {
    v11 = *(unsigned __int8 *)(a1 + 56) - (unsigned __int64)((*(_BYTE *)(a1 + 56) - 1) & 7) + v16 + 7;
    v12 = *(_BYTE *)(v16 + BYTE1(NtCurrentTeb()->HeapData) + v10);
  }
  v13 = (void *)sub_18003E150(a1, (_RTL_SRWLOCK *)v10, *(_QWORD *)(v11 + 8LL * v12 + v10), v4, a4);
  v14 = v13;
  if ( v13 && (a4 & 2) != 0 )
    memset(v13, 0, v4);
  return (__int64)v14;
}

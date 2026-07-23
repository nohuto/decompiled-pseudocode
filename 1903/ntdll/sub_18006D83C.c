/*
 * XREFs of sub_18006D83C @ 0x18006D83C
 * Callers:
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18006DA5C @ 0x18006DA5C (sub_18006DA5C.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

PVOID __fastcall sub_18006D83C(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  __int64 v6; // r8
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  PVOID result; // rax
  unsigned int v11; // ecx
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+24h] [rbp-34h]
  int v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+2Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp+8h]

  v1 = dword_180165FF0;
  v3 = dword_180165FF0 & 0xF;
  v4 = 104 * v3;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 16) = dword_180165FF0;
  dword_180165FF0 = v1 + 1;
  *((_QWORD *)&unk_180165440 + 13 * v3) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)((char *)&unk_180165440 + v4 + 8) = *(unsigned int *)(a1 + 64);
  v5 = *(_WORD *)(a1 + 88);
  if ( v5 > 0x40u )
    v5 = 64;
  memmove((char *)&unk_180165440 + v4 + 28, *(const void **)(a1 + 96), v5);
  if ( v5 < 0x40u )
    *((_WORD *)&unk_180165440 + 52 * v3 + ((unsigned __int64)v5 >> 1) + 14) = 0;
  sub_18006DA5C(*(PVOID *)(a1 + 48));
  v6 = qword_180165FE8;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 20) = v12;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 24) = v13;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 92) = v14;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 96) = v15;
  if ( v6 )
    goto LABEL_6;
  v11 = dword_180162790;
  if ( (unsigned int)dword_180162790 > 0xFFFF )
    v11 = 0xFFFF;
  dword_180162790 = v11;
  result = RtlAllocateHeap(HeapHandle, (Flags + 0x40000) | 8, 104LL * v11);
  qword_180165FE8 = (__int64)result;
  v6 = (__int64)result;
  if ( result )
  {
LABEL_6:
    v7 = dword_180165FF4;
    v8 = (unsigned __int16)(dword_180165FF4 % (unsigned int)dword_180162790);
    v9 = 104 * v8;
    *(_DWORD *)(v9 + v6 + 16) = dword_180165FF4;
    dword_180165FF4 = v7 + 1;
    v16 = v8;
    *(_QWORD *)(104 * v8 + qword_180165FE8) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v9 + qword_180165FE8 + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v8 + qword_180165FE8 + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(qword_180165FE8 + 2 * (52 * v16 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v9 + qword_180165FE8 + 20) = v12;
    *(_DWORD *)(v9 + qword_180165FE8 + 24) = v13;
    *(_DWORD *)(v9 + qword_180165FE8 + 92) = v14;
    result = (PVOID)qword_180165FE8;
    *(_DWORD *)(v9 + qword_180165FE8 + 96) = v15;
  }
  return result;
}

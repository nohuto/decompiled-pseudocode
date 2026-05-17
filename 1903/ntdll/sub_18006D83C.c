/*
 * XREFs of sub_18006D83C @ 0x18006D83C
 * Callers:
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18006DA5C @ 0x18006DA5C (sub_18006DA5C.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18006D83C(__int64 a1)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // bp
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // r8
  int v9; // r12d
  int v10; // r13d
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  unsigned int v15; // ecx
  _DWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+2Ch] [rbp-2Ch]
  __int64 v18; // [rsp+60h] [rbp+8h]

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
  sub_18006DA5C(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v16);
  v6 = v16[0];
  v7 = v16[1];
  v8 = qword_180165FE8;
  v9 = v16[2];
  *(_DWORD *)((char *)&unk_180165440 + v4 + 20) = v16[0];
  *(_DWORD *)((char *)&unk_180165440 + v4 + 24) = v7;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 92) = v9;
  v10 = v17;
  *(_DWORD *)((char *)&unk_180165440 + v4 + 96) = v17;
  if ( v8 )
    goto LABEL_6;
  v15 = dword_180162790;
  if ( (unsigned int)dword_180162790 > 0xFFFF )
    v15 = 0xFFFF;
  dword_180162790 = v15;
  result = RtlAllocateHeap(qword_180165420, (dword_18016542C + 0x40000) | 8u, 104LL * v15);
  qword_180165FE8 = result;
  v8 = result;
  if ( result )
  {
LABEL_6:
    v11 = dword_180165FF4;
    v12 = (unsigned __int16)(dword_180165FF4 % (unsigned int)dword_180162790);
    v13 = 104 * v12;
    *(_DWORD *)(v13 + v8 + 16) = dword_180165FF4;
    dword_180165FF4 = v11 + 1;
    v18 = v12;
    *(_QWORD *)(104 * v12 + qword_180165FE8) = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(v13 + qword_180165FE8 + 8) = *(unsigned int *)(a1 + 64);
    memmove((void *)(104 * v12 + qword_180165FE8 + 28), *(const void **)(a1 + 96), v5);
    if ( v5 < 0x40u )
      *(_WORD *)(qword_180165FE8 + 2 * (52 * v18 + ((unsigned __int64)v5 >> 1)) + 28) = 0;
    *(_DWORD *)(v13 + qword_180165FE8 + 20) = v6;
    *(_DWORD *)(v13 + qword_180165FE8 + 24) = v7;
    *(_DWORD *)(v13 + qword_180165FE8 + 92) = v9;
    result = qword_180165FE8;
    *(_DWORD *)(v13 + qword_180165FE8 + 96) = v10;
  }
  return result;
}

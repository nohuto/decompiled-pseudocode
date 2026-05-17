/*
 * XREFs of sub_1800F2ED4 @ 0x1800F2ED4
 * Callers:
 *     sub_1800704A4 @ 0x1800704A4 (sub_1800704A4.c)
 *     sub_1801061B8 @ 0x1801061B8 (sub_1801061B8.c)
 *     sub_180106954 @ 0x180106954 (sub_180106954.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 *     sub_180106190 @ 0x180106190 (sub_180106190.c)
 */

char __fastcall sub_1800F2ED4(__int64 a1, unsigned __int64 a2)
{
  char v4; // al
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int16 v9; // r8
  int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  int v15; // eax
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  SIZE_T v20; // r14
  int v22; // [rsp+28h] [rbp-10h]
  int v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a2 + 15);
  if ( v4 == 1 )
    return 1;
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v5 = *(_DWORD *)(a2 + 8);
      LOWORD(v22) = v5;
      if ( (v5 & *(_DWORD *)(a1 + 124)) != 0 )
        v22 = *(_DWORD *)(a1 + 136) ^ v5;
      v6 = v22;
    }
    else
    {
      v6 = *(_WORD *)(a2 + 8);
    }
    v7 = *(_QWORD *)(a2 - 16) - v6;
  }
  else
  {
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v10 = *(_DWORD *)(a2 + 8);
        LOWORD(v23) = v10;
        if ( (v10 & *(_DWORD *)(a1 + 124)) != 0 )
          v23 = *(_DWORD *)(a1 + 136) ^ v10;
        v9 = v23;
      }
      else
      {
        v9 = *(_WORD *)(a2 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)qword_180166580 ^ (unsigned __int16)(a1 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
        v8 = 0LL;
      else
        v8 = *(_QWORD *)(a2
                       - ((unsigned __int64)((unsigned int)qword_180166580 ^ (unsigned int)a1 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
      v9 = *(_WORD *)(v8 + 36);
    }
    v11 = *(_BYTE *)(a2 + 15);
    if ( v11 == 5 )
    {
      v12 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v11 & 0x40) != 0 )
    {
      v12 = *(unsigned __int16 *)(16LL * (v11 & 0x3F) + a2 + 12);
    }
    else if ( (v11 & 0x3F) == 0x3F )
    {
      if ( v11 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v15 = *(_DWORD *)(a2 + 8);
          LOWORD(v24) = v15;
          if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
            v24 = *(_DWORD *)(a1 + 136) ^ v15;
          v14 = v24;
        }
        else
        {
          v14 = *(_WORD *)(a2 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)qword_180166580 ^ (unsigned __int16)(a1 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
          v13 = 0LL;
        else
          v13 = *(_QWORD *)(a2
                          - ((unsigned __int64)((unsigned int)qword_180166580 ^ (unsigned int)a1 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
        v14 = *(_WORD *)(v13 + 36);
      }
      v12 = *(_QWORD *)(16LL * v14 + a2);
    }
    else
    {
      v12 = *(_BYTE *)(a2 + 15) & 0x3F;
    }
    v7 = 16LL * v9 - v12;
  }
  v16 = *(_BYTE *)(a2 + 15);
  if ( v16 == 5 )
  {
    v17 = *(unsigned __int8 *)(a2 + 14);
LABEL_39:
    v18 = 16 * v17;
    goto LABEL_43;
  }
  if ( (v16 & 0x40) != 0 )
  {
    v17 = *(_BYTE *)(a2 + 15) & 0x3F;
    goto LABEL_39;
  }
  v18 = 0LL;
LABEL_43:
  v19 = v18 + v7;
  v20 = RtlCompareMemory((const void *)(v19 + a2 + 16), &unk_180120A50, 0x10uLL);
  if ( v20 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v20 + v19 + a2 + 16),
    v19);
  sub_180106190();
  return 0;
}

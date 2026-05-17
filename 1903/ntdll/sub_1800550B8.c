/*
 * XREFs of sub_1800550B8 @ 0x1800550B8
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_180055D84 @ 0x180055D84 (sub_180055D84.c)
 *     sub_180055FD0 @ 0x180055FD0 (sub_180055FD0.c)
 *     RtlSetBits @ 0x1800565C0 (RtlSetBits.c)
 *     RtlClearBits @ 0x180059350 (RtlClearBits.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 sub_1800550B8()
{
  __int64 *v0; // rbx
  unsigned __int64 v1; // rdi
  __int64 *v2; // rsi
  int v3; // eax
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned int v7; // esi
  void *Heap; // rax
  unsigned int v9; // [rsp+80h] [rbp+8h] BYREF
  int v10; // [rsp+88h] [rbp+10h] BYREF
  __int64 v11; // [rsp+90h] [rbp+18h] BYREF
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF

  v0 = (__int64 *)qword_1801653D0;
  v9 = 0;
  if ( (__int64 *)qword_1801653D0 == &qword_1801653D0 )
    goto LABEL_9;
  v1 = 1LL;
  do
  {
    v2 = v0;
    v0 = (__int64 *)*v0;
    RtlImageNtHeaderEx(3, v2[6], 0LL, &v12);
    if ( *(_WORD *)(v12 + 24) == 523 )
    {
      v3 = sub_18001C4DC(v2[6], 1, 9u, &v10, &v11);
      v4 = v11;
      if ( v3 < 0 )
        v4 = 0LL;
      v11 = v4;
      if ( v4 )
      {
        if ( (dword_18015FAB0 & 5) != 0 )
          sub_1800CE318(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            (__int64)"DLL \"%wZ\" has TLS information at %p\n",
            v2 + 9,
            v4);
        result = sub_180055FD0(v4, (_DWORD)v2, (unsigned int)&v9, 0, 0LL);
        if ( (int)result < 0 )
          return result;
        *((_WORD *)v2 + 55) = -1;
      }
    }
  }
  while ( v0 != &qword_1801653D0 );
  v5 = v9;
  if ( v9 )
  {
    v7 = v9 + 8;
    if ( v9 + 8 > 0x20 )
    {
      v1 = ((unsigned __int64)v7 + 31) >> 5;
      Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18016542C + 786432, 4 * v1);
      if ( !Heap )
        return 3221225495LL;
      v5 = v9;
    }
    else
    {
      Heap = &unk_180165248;
    }
    qword_180165260 = v1;
    dword_180165250 = v7;
    Src = Heap;
    RtlSetBits(&dword_180165250, 0LL, v5);
    RtlClearBits(&dword_180165250, v5, 8LL);
  }
  else
  {
LABEL_9:
    dword_180165250 = 0;
    Src = 0LL;
  }
  return sub_180055D84();
}

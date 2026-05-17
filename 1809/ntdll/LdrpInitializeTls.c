/*
 * XREFs of LdrpInitializeTls @ 0x180035890
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlClearBits @ 0x180035B30 (RtlClearBits.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18003699C (LdrpAllocateTlsEntry.c)
 *     RtlSetBits @ 0x1800372B0 (RtlSetBits.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 */

__int64 LdrpInitializeTls()
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
      v3 = RtlpImageDirectoryEntryToDataEx(v2[6], 1, 9u, &v10, &v11);
      v4 = v11;
      if ( v3 < 0 )
        v4 = 0LL;
      v11 = v4;
      if ( v4 )
      {
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            577,
            (unsigned int)"LdrpInitializeTls",
            2,
            "DLL \"%wZ\" has TLS information at %p\n",
            v2 + 9,
            v4);
        result = LdrpAllocateTlsEntry(v4, (_DWORD)v2, (unsigned int)&v9, 0, 0LL);
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
      Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 786432, 4 * v1);
      if ( !Heap )
        return 3221225495LL;
      v5 = v9;
    }
    else
    {
      Heap = &LdrpStaticTlsBitmapVector;
    }
    LdrpActualBitmapSize = v1;
    LdrpTlsBitmap = v7;
    Src = Heap;
    RtlSetBits(&LdrpTlsBitmap, 0LL, v5);
    RtlClearBits(&LdrpTlsBitmap, v5, 8LL);
  }
  else
  {
LABEL_9:
    LdrpTlsBitmap = 0;
    Src = 0LL;
  }
  return LdrpAllocateTls();
}

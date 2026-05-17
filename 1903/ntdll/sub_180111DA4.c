/*
 * XREFs of sub_180111DA4 @ 0x180111DA4
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 */

__int64 __fastcall sub_180111DA4(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  int v7; // ebx
  int InformationProcess; // esi
  __int64 Heap; // [rsp+58h] [rbp-19h]
  unsigned int v10; // [rsp+68h] [rbp-9h]
  __int64 v11; // [rsp+78h] [rbp+7h]
  __int64 v12; // [rsp+80h] [rbp+Fh] BYREF
  int v13; // [rsp+88h] [rbp+17h]
  __int64 v14; // [rsp+8Ch] [rbp+1Bh]
  int v15; // [rsp+98h] [rbp+27h]
  __int64 v16; // [rsp+A0h] [rbp+2Fh]
  unsigned int v17; // [rsp+F0h] [rbp+7Fh] BYREF

  result = ZwQueryInformationProcess();
  if ( (int)result >= 0 )
  {
    v7 = a3 & 0x20000000;
    if ( (a3 & 0x20000000) != 0 )
    {
      Heap = 0LL;
      result = ZwAllocateVirtualMemory();
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(4 * v15));
      if ( !Heap )
        return 3221225626LL;
    }
    InformationProcess = ZwQueryInformationProcess();
    if ( InformationProcess < 0 )
    {
      if ( !v7 )
      {
LABEL_8:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        return (unsigned int)InformationProcess;
      }
LABEL_9:
      ZwFreeVirtualMemory();
      return (unsigned int)InformationProcess;
    }
    v17 = 0;
    sub_180112550(a2, Heap, v10 >> 2, a3, (__int64)sub_1801124E0, (__int64)&v17);
    v16 = v17;
    InformationProcess = ZwCreateSection();
    if ( InformationProcess < 0 )
    {
LABEL_14:
      if ( !v7 )
        goto LABEL_8;
      goto LABEL_9;
    }
    InformationProcess = ZwMapViewOfSection();
    if ( InformationProcess < 0 )
    {
      ZwClose();
      goto LABEL_14;
    }
    v12 = 0LL;
    v17 = 0;
    v13 = 0;
    v14 = 0LL;
    sub_180112550(a2, Heap, v10 >> 2, a3, (__int64)sub_1801122B0, (__int64)&v12);
    ZwUnmapViewOfSection();
    if ( v7 )
      ZwFreeVirtualMemory();
    else
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    *(_DWORD *)(a1 + 960) = HIDWORD(v14);
    *(_QWORD *)(a1 + 968) = (unsigned int)v14;
    *(_QWORD *)(a1 + 976) = v11;
    *(_QWORD *)(a1 + 984) = MEMORY[0x7FFE0014];
    return 0LL;
  }
  return result;
}

/*
 * XREFs of PsspCaptureThreadInformation @ 0x180113AA8
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180111A70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1800033D0 (RtlGetExtendedContextLength.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A0820 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A0C20 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A2110 (ZwGetNextThread.c)
 *     PsspDumpThread @ 0x180113E04 (PsspDumpThread.c)
 *     PsspFreeLinkedHandleList @ 0x18011403C (PsspFreeLinkedHandleList.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, __int16 a3, unsigned int a4)
{
  unsigned int v5; // r15d
  int NextThread; // r14d
  int v7; // esi
  unsigned __int64 v8; // r14
  int v10; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+80h] [rbp-11h]
  int v12; // [rsp+88h] [rbp-9h]

  v12 = a3 & 0x100;
  v5 = 0;
  NextThread = ZwGetNextThread();
  if ( NextThread != -2147483622 )
  {
    do
    {
      if ( NextThread < 0 )
        goto LABEL_15;
      NextThread = ZwAllocateVirtualMemory();
      if ( NextThread < 0 )
        goto LABEL_15;
      MEMORY[8] = -4;
      ++v5;
      MEMORY[0xC] = v10;
      MEMORY[0xA] = 1;
      NextThread = ZwGetNextThread();
    }
    while ( NextThread != -2147483622 );
    if ( !v5 )
      return 0LL;
    v7 = 0;
    if ( v12 )
    {
      if ( (a3 & 0x200) == 0 || (v7 = 0, (int)RtlGetExtendedContextLength(a4) < 0) )
        v7 = 1232;
    }
    *(_DWORD *)(a1 + 1024) = v7;
    v8 = v5 * (unsigned __int64)(((v7 + 15) & 0xFFFFFFF0) + 128);
    if ( v8 > 0xFFFFFFFF )
    {
      PsspFreeLinkedHandleList(0LL);
      return v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
    }
    NextThread = NtCreateSection();
    if ( NextThread < 0 )
    {
LABEL_15:
      PsspFreeLinkedHandleList(0LL);
      return (unsigned int)NextThread;
    }
    NextThread = ZwMapViewOfSection();
    if ( NextThread < 0 )
    {
      NtClose(Handle);
      goto LABEL_15;
    }
    NtUnmapViewOfSection();
    PsspFreeLinkedHandleList(0LL);
    *(_QWORD *)(a1 + 1000) = 0LL;
    *(_QWORD *)(a1 + 1008) = Handle;
    *(_DWORD *)(a1 + 992) = 0;
    *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
  }
  return 0LL;
}

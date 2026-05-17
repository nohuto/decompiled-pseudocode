/*
 * XREFs of sub_180112808 @ 0x180112808
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180020CE0 (RtlGetExtendedContextLength.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     ZwGetNextThread @ 0x18009E530 (ZwGetNextThread.c)
 *     sub_180112B54 @ 0x180112B54 (sub_180112B54.c)
 *     sub_180112D84 @ 0x180112D84 (sub_180112D84.c)
 */

__int64 __fastcall sub_180112808(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  unsigned int v5; // r14d
  int NextThread; // eax
  int VirtualMemory; // esi
  int v8; // edi
  unsigned __int64 v9; // rcx
  int v11; // [rsp+70h] [rbp-21h]
  __int64 v12; // [rsp+80h] [rbp-11h]
  int v13; // [rsp+88h] [rbp-9h]

  v13 = a3 & 0x100;
  v5 = 0;
  NextThread = ZwGetNextThread();
  if ( NextThread == -2147483622 )
    return 0LL;
  do
  {
    if ( NextThread < 0 )
    {
      VirtualMemory = NextThread;
      goto LABEL_18;
    }
    VirtualMemory = ZwAllocateVirtualMemory();
    if ( VirtualMemory < 0 )
      goto LABEL_18;
    MEMORY[8] = -4;
    ++v5;
    MEMORY[0xC] = v11;
    MEMORY[0xA] = 1;
    NextThread = ZwGetNextThread();
  }
  while ( NextThread != -2147483622 );
  if ( !v5 )
    return 0LL;
  v8 = 0;
  if ( v13 )
  {
    if ( (a3 & 0x200) == 0 || (v8 = 0, (int)RtlGetExtendedContextLength(a4) < 0) )
      v8 = 1232;
  }
  *(_DWORD *)(a1 + 1024) = v8;
  v9 = v5 * (unsigned __int64)(((v8 + 15) & 0xFFFFFFF0) + 128);
  if ( v9 > 0xFFFFFFFF )
  {
    VirtualMemory = -1073741675;
  }
  else
  {
    VirtualMemory = ZwCreateSection();
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = ZwMapViewOfSection();
      if ( VirtualMemory >= 0 )
      {
        ZwUnmapViewOfSection();
        sub_180112D84(0LL);
        *(_QWORD *)(a1 + 1000) = 0LL;
        *(_QWORD *)(a1 + 1008) = v12;
        *(_DWORD *)(a1 + 992) = 0;
        *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
        return 0LL;
      }
      ZwClose();
    }
  }
LABEL_18:
  sub_180112D84(0LL);
  return (unsigned int)VirtualMemory;
}

/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C001841C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2)
{
  unsigned __int16 v4; // si
  unsigned __int16 v5; // bx
  int v6; // eax
  unsigned __int16 v7; // bx
  __int64 v8; // rax
  __int64 v9; // rax

  if ( a2 )
  {
    v4 = *(_WORD *)(a1 + 272);
    v5 = *(_WORD *)(a1 + 274);
  }
  else
  {
    *(_DWORD *)(a1 + 272) = 0;
    if ( *(_BYTE *)(a1 + 16) )
    {
      v4 = 1;
      v5 = 1;
    }
    else
    {
      v4 = *(_WORD *)(a1 + 36);
      if ( !v4 )
        v4 = *(_WORD *)(a1 + 202);
      v6 = *(_DWORD *)(a1 + 120);
      if ( v6 )
        v4 += v6;
      v5 = *(_WORD *)(a1 + 38);
      if ( !v5 )
      {
        v7 = *(_WORD *)(a1 + 240);
        if ( v7 <= 1u )
          v5 = 1;
        else
          v5 = v7 - 1;
      }
      if ( v6 )
        v5 += v6;
      if ( v4 <= v5 )
        v4 = v5;
    }
  }
  *(_BYTE *)(a1 + 819) = 0;
  memset(*(void **)(a1 + 904), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = 0LL;
  v8 = *(_QWORD *)(a1 + 904);
  *(_QWORD *)(a1 + 872) = v8;
  *(_DWORD *)(a1 + 808) = 1;
  *(_BYTE *)(v8 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 904) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 904) + 4244LL) = 0;
  v9 = *(_QWORD *)(a1 + 904);
  *(_WORD *)(v9 + 4142) = v5 - 1;
  *(_BYTE *)(v9 + 4096) = 9;
  *(_BYTE *)(v9 + 4136) = 7;
  *(_WORD *)(v9 + 4140) = v4 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 904) + 4232LL) = a2;
  ProcessCommand(a1, a1 + 816);
  return WaitForCommandCompleteWithCustomTimeout(a1);
}

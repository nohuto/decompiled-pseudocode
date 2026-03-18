/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C00175D8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2, char a3)
{
  unsigned __int16 v6; // si
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // ax
  int v9; // ebx
  __int16 v10; // cx
  unsigned __int16 v11; // cx
  int v12; // eax
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8

  if ( a2 )
  {
    v6 = *(_WORD *)(a1 + 264);
    v7 = *(_WORD *)(a1 + 266);
  }
  else
  {
    *(_DWORD *)(a1 + 264) = 0;
    if ( *(_BYTE *)(a1 + 16) )
    {
      v6 = 1;
      v7 = 1;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 36);
      if ( !v8 )
        v8 = *(_WORD *)(a1 + 194);
      v9 = *(_DWORD *)(a1 + 120);
      v10 = *(_WORD *)(a1 + 38);
      v6 = v8 + v9;
      if ( !v9 )
        v6 = v8;
      if ( !v10 )
      {
        v11 = *(_WORD *)(a1 + 232);
        if ( v11 <= 1u )
          v10 = 1;
        else
          v10 = v11 - 1;
      }
      v12 = v9;
      v7 = v10 + v9;
      if ( !v12 )
        v7 = v10;
      if ( v6 <= v7 )
        v6 = v7;
    }
  }
  v13 = *(void **)(a1 + 896);
  *(_BYTE *)(a1 + 811) = 0;
  memset(v13, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
  v14 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)(a1 + 864) = v14;
  *(_DWORD *)(a1 + 800) = 1;
  *(_BYTE *)(v14 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 896) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 896) + 4244LL) = 0;
  v15 = *(_QWORD *)(a1 + 896);
  *(_WORD *)(v15 + 4142) = v7 - 1;
  *(_BYTE *)(v15 + 4096) = 9;
  *(_BYTE *)(v15 + 4136) = 7;
  *(_WORD *)(v15 + 4140) = v6 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = a2;
  ProcessCommand(a1, a1 + 808);
  LOBYTE(v16) = a3;
  return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v16, 10000LL);
}

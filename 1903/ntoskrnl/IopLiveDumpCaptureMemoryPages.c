/*
 * XREFs of IopLiveDumpCaptureMemoryPages @ 0x1405A838C
 * Callers:
 *     IoCaptureLiveDump @ 0x140858F44 (IoCaptureLiveDump.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     VslIsSecureKernelRunning @ 0x14013D5C0 (VslIsSecureKernelRunning.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     VslFinalizeLiveDumpInSk @ 0x14028F414 (VslFinalizeLiveDumpInSk.c)
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     IopLiveDumpUncorralProcessors @ 0x1405A94B8 (IopLiveDumpUncorralProcessors.c)
 */

__int64 __fastcall IopLiveDumpCaptureMemoryPages(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v7; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-21h] BYREF
  int v9; // [rsp+58h] [rbp-1h]
  int v10; // [rsp+5Ch] [rbp+3h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 *v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+88h] [rbp+2Fh]
  int v14; // [rsp+8Ch] [rbp+33h]

  v8[3] = 0LL;
  v10 = 0;
  v1 = a1 + 240;
  v3 = MEMORY[0xFFFFF78000000008];
  v8[0] = IopLiveDumpStartMirroringCallback;
  v8[1] = IopLiveDumpEndMirroringCallback;
  v8[2] = IopLiveDumpMirrorPhysicalMemoryCallback;
  v9 = 529;
  v4 = MmDuplicateMemory((__int64)v8);
  v5 = v4;
  if ( v4 < 0 || v4 == 258 )
  {
    if ( (*(_DWORD *)(v1 + 8) & 1) != 0 )
      IopLiveDumpUncorralProcessors(v1);
    if ( v5 == 258 )
      v5 = -1073740682;
  }
  else if ( *(_QWORD *)(a1 + 504) && VslIsSecureKernelRunning() )
  {
    VslFinalizeLiveDumpInSk((_QWORD *)(a1 + 176), a1 + 128);
  }
  if ( stru_140425C78.LevelPlus1 > 5 && TlgKeywordOn(&stru_140425C78, 0x200000000000uLL) )
  {
    v13 = 8;
    v14 = 0;
    v7 = (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    v12 = &v7;
    TlgWrite(&stru_140425C78, &unk_14038CA18, (LPCGUID)(a1 + 640), (LPCGUID)(a1 + 624), 3u, &pData);
  }
  return v5;
}

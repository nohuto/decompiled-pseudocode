/*
 * XREFs of NVMeGetCommandEffectsLog @ 0x1C00156E0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C00029D8 (BuildGetLogPageCommand.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 result; // rax
  void **v6; // rbx
  __int64 v7; // r8
  bool v8; // zf
  void *v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h]

  v2 = *(_QWORD *)(a1 + 896);
  result = 0LL;
  v12 = 0LL;
  v11 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 1528);
    if ( (*(_BYTE *)(result + 261) & 2) != 0 )
    {
      v6 = (void **)(a1 + 3680);
      v7 = *(_QWORD *)(a1 + 3680);
      if ( v7 )
      {
        result = StorPortGetPhysicalAddress(a1, 0LL, v7, &v11);
        v12 = result;
        v8 = result == 0;
      }
      else
      {
        result = NVMeAllocateDmaBuffer(a1, 0x1000u);
        v8 = *v6 == 0LL;
      }
      if ( !v8 )
      {
        memset(*v6, 0, 0x1000uLL);
        v9 = *(void **)(a1 + 896);
        *(_BYTE *)(a1 + 811) = 0;
        memset(v9, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 896) + 4232LL) = 0LL;
        *(_QWORD *)(a1 + 864) = *(_QWORD *)(a1 + 896);
        *(_DWORD *)(a1 + 800) = 1;
        *(_BYTE *)(v2 + 4253) |= 3u;
        *(_WORD *)(v2 + 4244) = 0;
        BuildGetLogPageCommand(a1, v2, 5, 0x1000u, v12, -1, 0LL);
        *(_BYTE *)(v2 + 4253) |= 4u;
        *(_QWORD *)(v2 + 4200) = *v6;
        *(_QWORD *)(v2 + 4208) = v12;
        *(_QWORD *)(a1 + 3688) = v12;
        *(_DWORD *)(v2 + 4240) = 4096;
        ProcessCommand(a1, a1 + 808);
        LOBYTE(v10) = a2;
        return WaitForCommandCompleteWithCustomTimeout(a1, a1 + 808, v10, 10000LL);
      }
    }
  }
  return result;
}

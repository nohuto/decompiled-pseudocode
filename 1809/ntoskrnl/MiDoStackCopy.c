/*
 * XREFs of MiDoStackCopy @ 0x14015E900
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
 *     MiGetLeafPfnBuddy @ 0x14015E9D4 (MiGetLeafPfnBuddy.c)
 *     MiJumpStackTarget @ 0x14015EA10 (MiJumpStackTarget.c)
 */

__int64 __fastcall MiDoStackCopy(__int64 a1, ULONG_PTR a2, ULONG_PTR a3, ULONG_PTR a4)
{
  unsigned __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // r10
  bool v8; // cf
  int v9; // r9d
  __int64 LeafPfnBuddy; // rdx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_QWORD *)a2;
  v6 = 6LL * *(_QWORD *)a2;
  v7 = 8 * v6 - 0x58000000000LL;
  BugCheckParameter3[1] = a3;
  v8 = *(_QWORD *)(a2 + 48) != 0LL;
  BugCheckParameter3[2] = a4;
  v9 = 1;
  BugCheckParameter3[0] = a2;
  LOWORD(a3) = v8 + 1;
  if ( v4 <= 0xFFFFFFFFFLL
    && ((*(_QWORD *)(8 * v6 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0
    && ((*(_QWORD *)(v7 + 40) >> 54) & 7) == 2 )
  {
    LeafPfnBuddy = MiGetLeafPfnBuddy(8 * v6 - 0x58000000000LL, v6, a3, 1LL);
  }
  else
  {
    LeafPfnBuddy = -32LL;
  }
  if ( LeafPfnBuddy == -32 || (*(_BYTE *)(v7 + 34) & 7) != 6 || *(_WORD *)(v7 + 32) != (_WORD)a3 )
  {
    *(_DWORD *)(a2 + 32) = -1073740748;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  if ( LeafPfnBuddy != -16 || *(struct _KTHREAD **)(a2 + 24) == KeGetCurrentThread() )
    return MiJumpStackTarget(BugCheckParameter3);
  result = KeExpandKernelStackAndCalloutInternal(
             (void (__fastcall *)(ULONG_PTR))MiJumpStackTarget,
             (ULONG_PTR)BugCheckParameter3,
             24576,
             v9,
             0LL);
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a2 + 32) = result;
    return MiJumpStackTarget(BugCheckParameter3);
  }
  return result;
}

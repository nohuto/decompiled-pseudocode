/*
 * XREFs of KiComputeDueTime @ 0x14001E090
 * Callers:
 *     KeSetTimerEx @ 0x14001DF70 (KeSetTimerEx.c)
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ecx
  __int64 result; // rax
  int v9; // [rsp+0h] [rbp-28h]

  v9 = *a1;
  BYTE1(v9) = a3;
  if ( a2 < 0 || (a3 |= 1u, BYTE1(v9) = a3, a2 = MEMORY[0xFFFFF78000000014] - a2, a2 < 0) )
  {
    v5 = 0LL;
    if ( a3 >= 4u )
      v5 = (unsigned __int64)(a3 & 0xFC) << 16;
    v6 = MEMORY[0xFFFFF78000000008] - a2;
    *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - a2;
    HIBYTE(v9) |= 0x40u;
    v7 = (unsigned __int8)((v5 + v6) >> 18);
    BYTE2(v9) = v7;
    *a1 = v9;
    result = 1LL;
    *a4 = v7;
  }
  else
  {
    *a1 = v9;
    *((_QWORD *)a1 + 3) = 0LL;
    return 0LL;
  }
  return result;
}

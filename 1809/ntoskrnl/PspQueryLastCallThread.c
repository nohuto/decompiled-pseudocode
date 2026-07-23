/*
 * XREFs of PspQueryLastCallThread @ 0x140889CC4
 * Callers:
 *     NtQueryInformationThread @ 0x14064B720 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspQueryLastCallThread(__int64 a1, __int64 a2, int a3, int *a4)
{
  int v5; // r11d
  __int64 v6; // rbx
  __int16 v7; // di
  int v8; // esi
  unsigned __int64 v9; // r11
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  if ( ((a3 - 16) & 0xFFFFFFF7) != 0 )
    return 3221225476LL;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 340);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( *(_BYTE *)(a1 + 388) != 5 )
    return 3221225473LL;
  if ( *(_BYTE *)(a1 + 562) != 1 )
    return 3221225473LL;
  v6 = *(_QWORD *)(a1 + 136);
  v7 = *(_WORD *)(a1 + 128);
  v8 = *(_DWORD *)(a1 + 436);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  if ( v5 != *(_DWORD *)(a1 + 340) )
    return 3221225473LL;
  v9 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v8) * (unsigned __int64)KeMaximumIncrement;
  *(_QWORD *)a2 = v6;
  *(_WORD *)(a2 + 8) = v7;
  v10 = 16;
  if ( a3 != 16 )
    *(_QWORD *)(a2 + 16) = v9;
  if ( a4 )
  {
    if ( a3 != 16 )
      v10 = 24;
    *a4 = v10;
  }
  return 0LL;
}

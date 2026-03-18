/*
 * XREFs of PowerIsDisplayBurstActive @ 0x1C00E2750
 * Callers:
 *     PowerIsDisplayIdleExpired @ 0x1C0071FD0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PowerIsDisplayBurstActive(int *a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  BOOL v6; // r9d
  unsigned __int64 v7; // rcx
  int v8; // eax

  v2 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v3 = v2 - qword_1C01CE1E0;
  v4 = v2 - qword_1C01CE1D8;
  v5 = v2 - qword_1C01CE1D0;
  v6 = v3 <= 0x7D0 || v4 <= 0x1388 || v5 <= 0x61A8;
  v7 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
     - qword_1C01CE1D8;
  if ( v4 >= v5 )
    v7 = v5;
  if ( v3 <= v7 )
    v8 = 25;
  else
    v8 = (v7 != v4) + 5;
  if ( a1 )
    *a1 = v8;
  return v6;
}

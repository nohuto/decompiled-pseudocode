/*
 * XREFs of BgpConsoleClearScreen @ 0x140953540
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140953578 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned int v3; // ebx

  BgpFwAcquireLock();
  if ( qword_1404C64D8 )
    v3 = BgpConsoleClearScreenEx(v1, v0, v2);
  else
    v3 = -1073741823;
  BgpFwReleaseLock();
  return v3;
}

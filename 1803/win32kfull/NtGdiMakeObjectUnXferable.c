/*
 * XREFs of NtGdiMakeObjectUnXferable @ 0x1C01001B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtGdiMakeObjectUnXferable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx

  if ( (a1 & 0x800000) != 0 )
    return 1LL;
  v5 = BYTE2(a1) & 0x1F;
  GreAcquireHmgrSemaphore(a1, a2, a3, a4);
  if ( v5 == 1 )
  {
    LOBYTE(v6) = 1;
    v8 = HmgMarkUnXferable(a1, v6);
  }
  else
  {
    v8 = 0;
  }
  GreReleaseHmgrSemaphore(v7, v6);
  return v8;
}

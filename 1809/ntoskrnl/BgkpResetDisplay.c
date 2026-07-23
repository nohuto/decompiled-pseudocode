/*
 * XREFs of BgkpResetDisplay @ 0x14027DF80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall BgkpResetDisplay(char a1, _BYTE *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( !a1 || dword_1404DC240 == 2 )
    return 3221225659LL;
  if ( !qword_1404DDA08 )
    return 3221225473LL;
  qword_1404DDA08(80LL);
  LOBYTE(v5) = 1;
  VidResetDisplay(v5);
  memset(a2, 0, 0x28uLL);
  *a2 = 0;
  *((_DWORD *)a2 + 2) = 640;
  *((_DWORD *)a2 + 3) = 640;
  *((_QWORD *)a2 + 4) = BgkpVgaBltRoutine;
  result = 0LL;
  *((_DWORD *)a2 + 1) = 480;
  *((_DWORD *)a2 + 4) = 1;
  return result;
}

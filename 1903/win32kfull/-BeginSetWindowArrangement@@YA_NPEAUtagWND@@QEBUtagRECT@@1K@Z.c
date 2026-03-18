/*
 * XREFs of ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01F9CD0
 * Callers:
 *     NtUserSetWindowArrangement @ 0x1C0235770 (NtUserSetWindowArrangement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 */

char __fastcall BeginSetWindowArrangement(
        struct tagTHREADINFO **a1,
        const struct tagRECT *const a2,
        const struct tagRECT *const a3,
        int a4)
{
  char v6; // bl
  __int64 v9; // rax
  __int64 v10; // rdi
  __int128 v11; // xmm1

  v6 = 0;
  v9 = Win32AllocPool(36LL, 1936552789LL);
  v10 = v9;
  if ( v9 )
  {
    *(struct tagRECT *)(v9 + 4) = *a2;
    v11 = (__int128)*a3;
    *(_DWORD *)v9 = a4;
    *(_OWORD *)(v9 + 20) = v11;
    if ( (unsigned int)PostEventMessageEx(a1[2], *((_QWORD *)a1[2] + 53), 0x11u, (__int64)a1, 0, 1LL, v9, 0LL) )
      return 1;
    else
      Win32FreePool(v10);
  }
  return v6;
}

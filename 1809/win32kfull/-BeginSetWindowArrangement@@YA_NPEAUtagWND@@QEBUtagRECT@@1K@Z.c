/*
 * XREFs of ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C01E4434
 * Callers:
 *     NtUserSetWindowArrangement @ 0x1C021D560 (NtUserSetWindowArrangement.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

char __fastcall BeginSetWindowArrangement(
        struct tagTHREADINFO **a1,
        const struct tagRECT *const a2,
        const struct tagRECT *const a3,
        int a4)
{
  char v6; // bl
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // rdi
  __int128 v11; // xmm1

  v6 = 0;
  v9.QuadPart = Win32AllocPool(36LL, 1936552789LL);
  v10 = v9;
  if ( v9.QuadPart )
  {
    *(struct tagRECT *)(v9.QuadPart + 4) = *a2;
    v11 = (__int128)*a3;
    *(_DWORD *)v9.QuadPart = a4;
    *(_OWORD *)(v9.QuadPart + 20) = v11;
    if ( (unsigned int)PostEventMessageEx(a1[2], *((_QWORD *)a1[2] + 54), 0x11u, (InputTransform *)a1, 0, 1LL, v9, 0LL) )
      return 1;
    else
      ((void (__fastcall *)(_QWORD))Win32FreePool)((LARGE_INTEGER)v10.QuadPart);
  }
  return v6;
}

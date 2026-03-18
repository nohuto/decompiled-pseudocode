/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0038EDC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0038F90 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  int *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rbp

  *a2 = 1;
  v3 = a2;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(**((_QWORD **)a1 + 5), (__int64)a2);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 7);
  v7 = *(_QWORD *)(v4 + 80);
  while ( 1 )
  {
    if ( --v6 < 0 )
      return 1LL;
    if ( !(unsigned int)ValidateWindowPos((struct tagCVR *)v5, 0LL) )
    {
      *(_QWORD *)v5 = 0LL;
      goto LABEL_8;
    }
    if ( *(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)v5) + 80LL) != v7 )
      break;
    if ( (*(_DWORD *)(v5 + 32) & 0x2000) != 0 )
      *v3 = 0;
LABEL_8:
    v5 += 168LL;
  }
  UserSetLastError(1441LL);
  return 0LL;
}

/*
 * XREFs of ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01DDEF0
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01DE258 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

struct HTOUCHINPUT__ *__fastcall AllocTouchInputInfo(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        const struct tagTOUCHINPUT *a3,
        int a4)
{
  const struct tagTOUCHINPUT *v6; // r14
  unsigned __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rbx
  struct HTOUCHINPUT__ *result; // rax
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9

  v6 = a3;
  if ( !a2 || (v7 = 48LL * (a2 - 1), v7 > 0xFFFFFFFF) || (v8 = v7 + 80, (unsigned int)v7 >= 0xFFFFFFB0) )
    v8 = 0;
  if ( v8 && 48 * (unsigned __int64)a2 <= 0xFFFFFFFF )
  {
    LOBYTE(a3) = 20;
    v9 = HMAllocObject(a1, 0LL, a3);
    v10 = v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 24) = a2;
      memmove((void *)(v9 + 32), v6, 48 * a2);
      result = *(struct HTOUCHINPUT__ **)v10;
      *(_DWORD *)(v10 + 28) = a4;
      return result;
    }
  }
  else
  {
    v12 = RtlNtStatusToDosError(-1073741675);
    UserSetLastError(v12, v13, v14, v15);
  }
  return 0LL;
}

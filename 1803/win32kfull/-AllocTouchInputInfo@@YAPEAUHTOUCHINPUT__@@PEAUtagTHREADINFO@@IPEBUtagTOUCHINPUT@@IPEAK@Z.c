/*
 * XREFs of ?AllocTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IPEBUtagTOUCHINPUT@@IPEAK@Z @ 0x1C01A8354
 * Callers:
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01A86AC (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

struct HTOUCHINPUT__ *__fastcall AllocTouchInputInfo(
        struct tagTHREADINFO *a1,
        unsigned int a2,
        const struct tagTOUCHINPUT *a3,
        int a4)
{
  __int64 v6; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  struct HTOUCHINPUT__ *result; // rax
  ULONG v13; // eax
  __int64 v14; // rdx

  v6 = 0xFFFFFFFFLL;
  if ( a2 && (v8 = 48LL * (a2 - 1), v8 <= 0xFFFFFFFF) && (unsigned int)v8 < 0xFFFFFFB0 )
    v9 = (unsigned int)(v8 + 80);
  else
    v9 = 0LL;
  if ( (_DWORD)v9 && 48 * (unsigned __int64)a2 <= 0xFFFFFFFF )
  {
    LOBYTE(v6) = 20;
    v10 = HMAllocObject(a1, 0LL, v6, v9);
    v11 = v10;
    if ( v10 )
    {
      *(_DWORD *)(v10 + 24) = a2;
      memmove((void *)(v10 + 32), a3, 48 * a2);
      result = *(struct HTOUCHINPUT__ **)v11;
      *(_DWORD *)(v11 + 28) = a4;
      return result;
    }
  }
  else
  {
    v13 = RtlNtStatusToDosError(-1073741675);
    UserSetLastError(v13, v14);
  }
  return 0LL;
}

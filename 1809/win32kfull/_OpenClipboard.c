/*
 * XREFs of _OpenClipboard @ 0x1C00D9C70
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00D92E0 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00D9EE8 (CheckClipboardAccess.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rdx
  UINT32 cData; // r10d
  int v18; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v19[2]; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v21; // [rsp+78h] [rbp+17h]
  __int64 v22; // [rsp+80h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+27h] BYREF

  v4 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87LL, (__int64)a2, a3, a4);
  }
  else
  {
    v7 = CheckClipboardAccess();
    v11 = v7;
    if ( v7 )
    {
      v12 = v7 + 64;
      v13 = *(_QWORD *)(v7 + 64);
      if ( a1 == v13 )
      {
        if ( gptiCurrent == *(_QWORD *)(v11 + 48) )
          return 1LL;
        if ( a1 == v13 )
          goto LABEL_8;
      }
      if ( !*(_QWORD *)(v11 + 48) )
      {
LABEL_8:
        v19[0] = v12;
        v19[1] = a1;
        HMAssignmentLock(v19);
        *(_QWORD *)(v11 + 48) = gptiCurrent;
        if ( a2 )
        {
          v14 = *(_QWORD *)(v11 + 80);
          if ( !v14 || *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) )
            v4 = 1;
          *a2 = v4;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 712LL) = *(_DWORD *)(v11 + 108);
        }
        return 1LL;
      }
      UserSetLastError(5LL, v8, v9, v10);
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v16 = *(_QWORD *)(v11 + 48);
        v18 = *(_DWORD *)(*(_QWORD *)(v16 + 424) + 56LL);
        v21 = &v18;
        v22 = 4LL;
        TlgCreateWsz(&pDesc, (LPCWSTR)(*(_QWORD *)(v16 + 424) + 992LL));
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D578C, 0LL, 0LL, cData, &pData);
      }
    }
  }
  return 0LL;
}

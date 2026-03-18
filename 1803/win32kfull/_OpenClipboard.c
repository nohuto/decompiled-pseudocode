/*
 * XREFs of _OpenClipboard @ 0x1C00B6508
 * Callers:
 *     NtUserOpenClipboard @ 0x1C00B6280 (NtUserOpenClipboard.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall OpenClipboard(__int64 a1, int *a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rdx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  UINT32 cData; // r10d
  int v15; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+27h] BYREF

  v2 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
  {
    UserSetLastError(87LL, (__int64)a2);
  }
  else
  {
    v5 = CheckClipboardAccess();
    v7 = v5;
    if ( v5 )
    {
      v8 = *(_QWORD *)(v5 + 64);
      if ( a1 == v8 )
      {
        if ( gptiCurrent == *(_QWORD *)(v7 + 48) )
          return 1LL;
        if ( a1 == v8 )
          goto LABEL_8;
      }
      if ( !*(_QWORD *)(v7 + 48) )
      {
LABEL_8:
        v16[0] = v7 + 64;
        v16[1] = a1;
        HMAssignmentLock(v16);
        *(_QWORD *)(v7 + 48) = gptiCurrent;
        if ( a2 )
        {
          v9 = *(_QWORD *)(v7 + 80);
          if ( !v9 || *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL) )
            v2 = 1;
          *a2 = v2;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 704LL) = *(_DWORD *)(v7 + 108);
        }
        return 1LL;
      }
      UserSetLastError(5LL, v6);
      if ( (unsigned int)hProvider > 5 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v11 = *(_QWORD *)(v7 + 48);
        v15 = *(_DWORD *)(*(_QWORD *)(v11 + 416) + 56LL);
        v18 = &v15;
        v19 = 4LL;
        TlgCreateWsz(&pDesc, (LPCWSTR)(*(_QWORD *)(v11 + 416) + 984LL));
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E329E, v12, v13, cData, &pData);
      }
    }
  }
  return 0LL;
}

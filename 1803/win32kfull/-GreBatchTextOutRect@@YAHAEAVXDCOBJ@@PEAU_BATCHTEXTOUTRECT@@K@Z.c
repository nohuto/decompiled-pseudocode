/*
 * XREFs of ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C009D47C
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009D650 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreBatchTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct tagRECT v14; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-40h]

  if ( a3 < 0x28 )
    return 0LL;
  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = *a2;
  *(struct tagRECT *)v15 = a2[1];
  *(_QWORD *)&v15[16] = *(_QWORD *)&a2[2].left;
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  v6 = *(_DWORD *)(v5 + 32);
  v7 = *(_DWORD *)(v5 + 36);
  if ( v6 != v14.top )
  {
    *(_DWORD *)(v5 + 32) = v14.top;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = *(_DWORD *)&v15[20];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
    v4 = *(_QWORD *)a1;
  }
  v8 = *(_QWORD *)(v4 + 80);
  v9 = *(_QWORD *)(v8 + 336);
  if ( v9 != *(_QWORD *)&v15[12] )
  {
    *(_DWORD *)(v8 + 336) = *(_DWORD *)&v15[12];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = *(_DWORD *)&v15[16];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  ExtTextOutRect(a1, (struct tagRECT *)&v14.bottom);
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  if ( *(_DWORD *)(v11 + 32) != v6 )
  {
    *(_DWORD *)(v11 + 32) = v6;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 36LL) = v7;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) |= 0xBu;
    v10 = *(_QWORD *)a1;
  }
  v12 = *(_QWORD *)(v10 + 80);
  if ( v9 != *(_QWORD *)(v12 + 336) )
  {
    *(_DWORD *)(v12 + 336) = v9;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 340LL) = HIDWORD(v9);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 352LL) |= 0x2010u;
  }
  return 1LL;
}

/*
 * XREFs of ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C005AD48
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0063810 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C005C26C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GreBatchTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  int v7; // r14d
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
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v6 = *(_DWORD *)(v5 + 176);
  v7 = *(_DWORD *)(v5 + 180);
  if ( v6 != v14.top )
  {
    *(_DWORD *)(v5 + 176) = v14.top;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = *(_DWORD *)&v15[20];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
    v4 = *(_QWORD *)a1;
  }
  v8 = *(_QWORD *)(v4 + 976);
  v9 = *(_QWORD *)(v8 + 324);
  if ( v9 != *(_QWORD *)&v15[12] )
  {
    *(_DWORD *)(v8 + 324) = *(_DWORD *)&v15[12];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = *(_DWORD *)&v15[16];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  ExtTextOutRect(a1, (struct tagRECT *)&v14.bottom);
  v10 = *(_QWORD *)a1;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  if ( *(_DWORD *)(v11 + 176) != v6 )
  {
    *(_DWORD *)(v11 + 176) = v6;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 180LL) = v7;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0xBu;
    v10 = *(_QWORD *)a1;
  }
  v12 = *(_QWORD *)(v10 + 976);
  if ( v9 != *(_QWORD *)(v12 + 324) )
  {
    *(_DWORD *)(v12 + 324) = v9;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 328LL) = HIDWORD(v9);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) |= 0x2010u;
  }
  return 1LL;
}

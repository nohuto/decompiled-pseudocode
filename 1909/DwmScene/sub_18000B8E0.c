/*
 * XREFs of sub_18000B8E0 @ 0x18000B8E0
 * Callers:
 *     sub_18000BF3C @ 0x18000BF3C (sub_18000BF3C.c)
 * Callees:
 *     sub_18000B10C @ 0x18000B10C (sub_18000B10C.c)
 *     sub_18000BDA0 @ 0x18000BDA0 (sub_18000BDA0.c)
 *     sub_18000BDC0 @ 0x18000BDC0 (sub_18000BDC0.c)
 *     sub_18000BDCC @ 0x18000BDCC (sub_18000BDCC.c)
 *     sub_18000BDE4 @ 0x18000BDE4 (sub_18000BDE4.c)
 *     sub_18000C20C @ 0x18000C20C (sub_18000C20C.c)
 *     sub_18000D188 @ 0x18000D188 (sub_18000D188.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18000B8E0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        _WORD *a9,
        char a10,
        WCHAR *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        __int64 a15)
{
  unsigned int v17; // edi
  int v19; // esi
  int v20; // eax
  char v21; // di
  _WORD *v22; // rax
  DWORD CurrentThreadId; // eax
  __int64 v24; // rax
  int v25; // ecx

  v17 = a8;
  v19 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  switch ( a7 )
  {
    case 0:
      v20 = sub_18000BDA0(a8);
      goto LABEL_11;
    case 1:
      v20 = sub_18000BDE4(a8);
      goto LABEL_11;
    case 2:
      if ( (a8 & 0x80000000) == 0 )
      {
        v17 = -2147024228;
        sub_18000C20C(a1, a2, a3, a4, a5, a6, 2, -2147024228);
      }
      v20 = sub_18000BDCC(v17);
      goto LABEL_11;
    case 3:
      v20 = sub_18000BDC0(a8);
LABEL_11:
      v19 = v20;
      break;
  }
  *(_DWORD *)(a15 + 4) = v17;
  v21 = 1;
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 8) = _InterlockedIncrement(&dword_180269BD4);
  v22 = a9;
  if ( !a9 || !*a9 )
    v22 = 0LL;
  *(_QWORD *)(a15 + 16) = v22;
  CurrentThreadId = GetCurrentThreadId();
  *(_DWORD *)(a15 + 60) = v19;
  *(_DWORD *)(a15 + 24) = CurrentThreadId;
  *(_QWORD *)(a15 + 32) = a5;
  *(_QWORD *)(a15 + 128) = a6;
  *(_QWORD *)(a15 + 136) = a1;
  *(_QWORD *)(a15 + 48) = a3;
  *(_DWORD *)(a15 + 56) = a2;
  *(_QWORD *)(a15 + 40) = a4;
  *(_QWORD *)(a15 + 64) = 0LL;
  memset((void *)(a15 + 72), 0, 0x30uLL);
  if ( qword_180269AF8 )
    v24 = qword_180269AF8();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 120) = v24;
  if ( qword_180269AE8 )
    qword_180269AE8(a15, a13, a14);
  if ( qword_180269AF0 )
    qword_180269AF0(a15);
  if ( qword_180269B68 )
    qword_180269B68(a15);
  if ( *(int *)(a15 + 4) >= 0 )
  {
    if ( a7 != 3 )
      sub_18000D188();
    *(_DWORD *)(a15 + 4) = -2147418113;
  }
  if ( !byte_180269AB8
    && (!qword_180269AB0 ? (v25 = IsDebuggerPresent()) : (v25 = (unsigned __int8)qword_180269AB0()), !v25)
    || !byte_180259000 )
  {
    v21 = 0;
  }
  if ( a10 || v21 )
  {
    if ( qword_180269AA8 && !byte_180269AD8 )
      qword_180269AA8(a15, lpOutputString, a12);
    if ( !*lpOutputString )
      sub_18000B10C(lpOutputString, a12, a15);
    if ( v21 )
      OutputDebugStringW(lpOutputString);
  }
  else if ( qword_180269AA8 && !byte_180269AD8 )
  {
    qword_180269AA8(a15, 0LL, 0LL);
  }
  if ( byte_180269AC8 )
  {
    if ( qword_180269B18 )
      qword_180269B18();
  }
}

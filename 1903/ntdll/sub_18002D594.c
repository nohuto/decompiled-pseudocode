/*
 * XREFs of sub_18002D594 @ 0x18002D594
 * Callers:
 *     sub_18002A0B0 @ 0x18002A0B0 (sub_18002A0B0.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_180083BCC @ 0x180083BCC (sub_180083BCC.c)
 */

char __fastcall sub_18002D594(__int64 a1, char a2)
{
  char v2; // bl
  __int64 v5; // r13
  __int64 v6; // r8
  char v7; // al
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  int v10; // r14d
  int v11; // eax
  unsigned __int64 v12; // rax
  int v14; // esi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 168) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection((__int64)&unk_1801652C0);
    v7 = BYTE8(xmmword_1801661A0);
    v8 = xmmword_1801661A0;
    if ( (BYTE8(xmmword_1801661A0) & 1) != 0 )
    {
      if ( (_QWORD)xmmword_1801661A0 )
        v9 = (unsigned __int64)&xmmword_1801661A0 ^ xmmword_1801661A0;
      else
        v9 = 0LL;
    }
    else
    {
      v9 = xmmword_1801661A0;
    }
    v10 = BYTE8(xmmword_1801661A0) & 1;
    if ( v9 )
    {
      do
      {
        v11 = sub_180083BCC(v5, v9);
        if ( v11 >= 0 )
        {
          if ( v11 <= 0 )
            break;
          v12 = *(_QWORD *)(v9 + 8);
        }
        else
        {
          v12 = *(_QWORD *)v9;
        }
        if ( v10 && v12 )
          v9 ^= v12;
        else
          v9 = v12;
      }
      while ( v9 );
      if ( v9 )
        goto LABEL_38;
      v7 = BYTE8(xmmword_1801661A0);
      v8 = xmmword_1801661A0;
    }
    if ( !a2 )
    {
LABEL_14:
      RtlLeaveCriticalSection(&unk_1801652C0);
      return v2;
    }
    if ( (v7 & 1) != 0 )
    {
      if ( v8 )
        v8 ^= (unsigned __int64)&xmmword_1801661A0;
      else
        v8 = 0LL;
    }
    v14 = v7 & 1;
    if ( v8 )
    {
      while ( 1 )
      {
        if ( (int)sub_180083BCC(v5, v8) < 0 )
        {
          v15 = *(_QWORD *)v8;
          if ( v14 )
          {
            if ( !v15 )
              break;
            v15 ^= v8;
          }
          if ( !v15 )
            break;
        }
        else
        {
          v15 = *(_QWORD *)(v8 + 8);
          if ( v14 )
          {
            if ( !v15 )
              goto LABEL_36;
            v15 ^= v8;
          }
          if ( !v15 )
          {
LABEL_36:
            v2 = 1;
            break;
          }
        }
        v8 = v15;
      }
    }
    LOBYTE(v6) = v2;
    RtlRbInsertNodeEx(&xmmword_1801661A0, v8, v6, v5 + 224);
LABEL_38:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v16 = (_QWORD *)qword_1801652A8;
    v17 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801652A8 != &qword_1801652A0 )
      __fastfail(3u);
    *v17 = &qword_1801652A0;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v16;
    *v16 = v17;
    qword_1801652A8 = a1 + 64;
    goto LABEL_14;
  }
  return v2;
}

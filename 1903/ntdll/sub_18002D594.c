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

BOOLEAN __fastcall sub_18002D594(__int64 a1, char a2)
{
  BOOLEAN v2; // bl
  __int64 v5; // r13
  char Min; // al
  unsigned __int64 Root; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r14d
  int v10; // eax
  unsigned __int64 v11; // rax
  int v13; // esi
  unsigned __int64 v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 168) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection(&stru_1801652C0);
    Min = (char)stru_1801661A0.Min;
    Root = (unsigned __int64)stru_1801661A0.Root;
    if ( ((__int64)stru_1801661A0.Min & 1) != 0 )
    {
      if ( stru_1801661A0.Root )
        v8 = (unsigned __int64)&stru_1801661A0 ^ (unsigned __int64)stru_1801661A0.Root;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = (unsigned __int64)stru_1801661A0.Root;
    }
    v9 = (__int64)stru_1801661A0.Min & 1;
    if ( v8 )
    {
      do
      {
        v10 = sub_180083BCC(v5, v8);
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
        goto LABEL_38;
      Min = (char)stru_1801661A0.Min;
      Root = (unsigned __int64)stru_1801661A0.Root;
    }
    if ( !a2 )
    {
LABEL_14:
      RtlLeaveCriticalSection(&stru_1801652C0);
      return v2;
    }
    if ( (Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)&stru_1801661A0;
      else
        Root = 0LL;
    }
    v13 = Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( (int)sub_180083BCC(v5, Root) < 0 )
        {
          v14 = *(_QWORD *)Root;
          if ( v13 )
          {
            if ( !v14 )
              break;
            v14 ^= Root;
          }
          if ( !v14 )
            break;
        }
        else
        {
          v14 = *(_QWORD *)(Root + 8);
          if ( v13 )
          {
            if ( !v14 )
              goto LABEL_36;
            v14 ^= Root;
          }
          if ( !v14 )
          {
LABEL_36:
            v2 = 1;
            break;
          }
        }
        Root = v14;
      }
    }
    RtlRbInsertNodeEx(&stru_1801661A0, (PRTL_BALANCED_NODE)Root, v2, (PRTL_BALANCED_NODE)(v5 + 224));
LABEL_38:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v15 = (_QWORD *)qword_1801652A8;
    v16 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_1801652A8 != &qword_1801652A0 )
      __fastfail(3u);
    *v16 = &qword_1801652A0;
    v2 = 1;
    *(_QWORD *)(a1 + 72) = v15;
    *v15 = v16;
    qword_1801652A8 = a1 + 64;
    goto LABEL_14;
  }
  return v2;
}

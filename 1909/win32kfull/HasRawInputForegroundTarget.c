/*
 * XREFs of HasRawInputForegroundTarget @ 0x1C001DC7C
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C001DB48 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 * Callees:
 *     HasHidTable @ 0x1C001E620 (HasHidTable.c)
 *     PtiKbdFromQ @ 0x1C002BD30 (PtiKbdFromQ.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 396LL) & 0x2000000) != 0 )
    {
      v7 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v7 )
        v7 = *(_QWORD *)(v7 + 16);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 1224);
        if ( (v8 & 0x40000) != 0 && (v8 & 0x80000) == 0 && (v8 & 0x100000) == 0 )
        {
          v9 = *(_QWORD *)(v7 + 1400);
          if ( v9 )
          {
            v10 = *(_QWORD *)(gpqForeground + 120LL);
            if ( v10 )
              v10 = *(_QWORD *)(v10 + 16);
            if ( v10 && (*(_DWORD *)(v10 + 1224) & 0x200000) != 0 && v10 == *(_QWORD *)(v9 + 16) )
            {
              a1[1] = v10;
              v1 = 1;
              a1[2] = v9;
LABEL_22:
              *a1 = gpqForeground;
              return v1;
            }
          }
        }
      }
    }
    v3 = PtiKbdFromQ(gpqForeground);
    if ( (unsigned int)HasHidTable(v3) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + 416) + 824LL);
      if ( (*(_DWORD *)(v5 + 100) & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(v5 + 72);
        v1 = 1;
        a1[1] = v3;
        a1[2] = v6;
        if ( !v6 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 120LL);
          goto LABEL_22;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL);
      }
    }
  }
  return v1;
}

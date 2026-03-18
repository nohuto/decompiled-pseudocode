/*
 * XREFs of HasRawInputForegroundTarget @ 0x1C001DDEC
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C001DCB8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     HasHidTable @ 0x1C001E790 (HasHidTable.c)
 *     PtiKbdFromQ @ 0x1C00258C0 (PtiKbdFromQ.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbp
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 396LL) & 0x2000000) != 0 )
    {
      v8 = *(_QWORD *)(gpqForeground + 128LL);
      if ( v8 )
        v8 = *(_QWORD *)(v8 + 16);
      if ( v8 )
      {
        v9 = *(_DWORD *)(v8 + 1224);
        if ( (v9 & 0x40000) != 0 && (v9 & 0x80000) == 0 && (v9 & 0x100000) == 0 )
        {
          v10 = *(_QWORD *)(v8 + 1400);
          if ( v10 )
          {
            v11 = *(_QWORD *)(gpqForeground + 120LL);
            if ( v11 )
              v11 = *(_QWORD *)(v11 + 16);
            if ( v11 && (*(_DWORD *)(v11 + 1224) & 0x200000) != 0 && v11 == *(_QWORD *)(v10 + 16) )
            {
              a1[1] = v11;
              v1 = 1;
              a1[2] = v10;
LABEL_22:
              *a1 = gpqForeground;
              return v1;
            }
          }
        }
      }
    }
    v3 = PtiKbdFromQ(gpqForeground);
    if ( (unsigned int)HasHidTable(v3, v4) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v3 + 416) + 824LL);
      if ( (*(_DWORD *)(v6 + 100) & 0x10) != 0 )
      {
        v7 = *(_QWORD *)(v6 + 72);
        v1 = 1;
        a1[1] = v3;
        a1[2] = v7;
        if ( !v7 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 120LL);
          goto LABEL_22;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL);
      }
    }
  }
  return v1;
}

/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C001DCB8
 * Callers:
 *     EditionHandleRawInput @ 0x1C001DBF0 (EditionHandleRawInput.c)
 * Callees:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0002854 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002A5C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0017FEC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     HasRawInputForegroundTarget @ 0x1C001DDEC (HasRawInputForegroundTarget.c)
 *     HasHidTable @ 0x1C001E790 (HasHidTable.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall HandleRawInput(__int64 a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r14d
  __int64 v11; // rsi
  unsigned int v13; // eax
  int v14; // edx
  __int16 v15; // ax
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  char v19; // [rsp+90h] [rbp+40h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v7 = HasRawInputForegroundTarget(&v16);
  v9 = *(_DWORD *)(a3 + 20);
  v10 = v7;
  v11 = v17;
  if ( !v9 )
    goto LABEL_2;
  if ( !v7 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v17 + 1224) & 0x200000) != 0 )
  {
LABEL_2:
    v8 = 0LL;
    if ( v7 )
    {
      v13 = PostRawKeyboardInputToForeground(
              (struct _RAW_INPUT_FOREGROUND_TARGET *)&v16,
              *(_DWORD *)a3,
              a1,
              a2,
              *(_DWORD *)(a3 + 4),
              *(_WORD *)(a3 + 8));
      v9 = *(_DWORD *)(a3 + 20);
      v8 = v13;
      v11 = v17;
    }
    if ( !v9 )
    {
      if ( gHidCounters[0] )
        PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v8);
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_24;
    }
  }
  if ( v10 )
  {
    if ( *(_DWORD *)(a3 + 16)
      || (unsigned int)HasHidTable(v11, v8)
      && (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 416) + 824LL) + 100LL), (v14 & 0x20) != 0)
      && ((*(_DWORD *)(v11 + 1224) & 0x200000) != 0 || (v15 = *(_WORD *)(a3 + 8), v15 != 18)
                                                    && v15 != 9
                                                    && !gspwndAltTab)
      && ((v14 & 0x400) == 0 || (unsigned __int16)(*(_WORD *)(a3 + 8) - 166) > 0x11u) )
    {
LABEL_24:
      v6 = 1;
      UserAtomicCheck::Detach((UserAtomicCheck *)&v19);
    }
  }
LABEL_9:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
  return v6;
}

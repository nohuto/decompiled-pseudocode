/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002824
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00D1B74 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002A30 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0004B20 (FreeHidData.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        int a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 *i; // rdi
  int v13; // r9d
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  __int64 HidData; // rax
  __int64 v21; // rsi

  v6 = 0LL;
  v7 = 0LL;
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 120LL);
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 16);
    else
      v11 = *(_QWORD *)(gpqForeground + 96LL);
    v6 = *(_QWORD *)(v11 + 424);
    v7 = *(_QWORD *)(gpqForeground + 428LL);
  }
  for ( i = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
        i != &RawInputManagerObject::gHidRequestTable[4];
        i = (__int64 *)*i )
  {
    v13 = *((_DWORD *)i + 25);
    if ( (v13 & 0x40) != 0 )
    {
      v14 = (_QWORD *)i[9];
      if ( v14 )
      {
        v15 = v14[5];
        if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 && v14[3] == grpdeskRitInput )
        {
          if ( !v6
            || (v16 = v14[2], v17 = *(_QWORD *)(v16 + 424), v18 = *(_QWORD *)(v17 + 880), !gbEnforceUIPI)
            || (unsigned int)v18 > (unsigned int)v7
            || (_DWORD)v18 == (_DWORD)v7
            && ((v19 = HIDWORD(v18), (_DWORD)v19 == HIDWORD(v7)) || HIDWORD(v7) == -1 || (_DWORD)v19 == -1)
            || *(int *)(v17 + 12) < 0 )
          {
            if ( *(_QWORD *)(v14[2] + 424LL) != v6 && ((v13 & 0x80u) == 0 || !a6) )
            {
              HidData = AllocateHidData((_DWORD)a2, 1, 16, 1, i[9]);
              v21 = HidData;
              if ( !HidData )
                return;
              *(_WORD *)(HidData + 56) = a3->MakeCode;
              *(_WORD *)(HidData + 58) = a3->Flags;
              *(_WORD *)(HidData + 60) = a3->Reserved;
              *(_DWORD *)(HidData + 64) = a4;
              *(_WORD *)(HidData + 62) = a5;
              *(_DWORD *)(HidData + 68) = a3->ExtraInformation;
              if ( !(unsigned int)PostInputMessage(
                                    *(_QWORD *)(*(_QWORD *)(i[9] + 16) + 432LL),
                                    i[9],
                                    255LL,
                                    1LL,
                                    *(_QWORD *)HidData,
                                    a1,
                                    0LL,
                                    a3->ExtraInformation,
                                    0,
                                    0LL,
                                    a2,
                                    0LL) )
                FreeHidData(v21);
            }
          }
          else
          {
            EtwTraceUIPIInputError(v16, 0LL, gpqForeground, v7, 5);
          }
        }
      }
    }
  }
}

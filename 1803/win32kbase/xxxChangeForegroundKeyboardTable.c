/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1C006D110
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C012A3F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C012A970 (xxxInternalActivateKeyboardLayout.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012A2D4 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C012A860 (SetGlobalKeyboardTableInfo.c)
 *     UpdateKeyLights @ 0x1C01302C0 (UpdateKeyLights.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1C013FD6C (ApiSetEditionResetIMEConversionStatus.c)
 */

void __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2)
{
  __int16 v4; // cx
  bool v5; // zf
  __int64 v6; // rax
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == (struct tagKL *)qword_1C01A29E0 )
    return;
  v10[1] = a2;
  v10[0] = &gspklGlobalActive;
  HMAssignmentLock((__int64)v10);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  v5 = qword_1C01A29E0 == 0;
  qword_1C01A29E0 = (__int64)a2;
  if ( v5 )
    goto LABEL_32;
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6)) || !gpKL )
  {
    xxxManageKeyboardModifiers(a1, a2);
    v4 = *((_WORD *)a2 + 20) & 0x3FF;
    if ( v4 == 17 )
    {
      if ( !a1 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState) & 8) != 0;
        v5 = (BYTE5(gafAsyncKeyState) & 8) == 0;
        goto LABEL_13;
      }
      if ( (*((_WORD *)a1 + 20) & 0x3FF) != 0x11 )
      {
        v5 = gfKanaToggle == 0;
LABEL_13:
        if ( !v5 )
        {
          BYTE5(gafAsyncKeyState) |= 8u;
          byte_1C01A09C5 |= 8u;
          if ( gptiForeground )
          {
            v6 = *((_QWORD *)gptiForeground + 53);
            if ( v6 )
              *(_BYTE *)(v6 + 233) |= 8u;
          }
LABEL_25:
          UpdateKeyLights(1LL);
          goto LABEL_26;
        }
        goto LABEL_22;
      }
LABEL_26:
      if ( a1 )
      {
        if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
        {
          byte_1C01A09C5 &= ~4u;
          BYTE5(gafAsyncKeyState) &= ~4u;
          if ( gptiForeground )
          {
            v9 = *((_QWORD *)gptiForeground + 53);
            if ( v9 )
              *(_BYTE *)(v9 + 233) &= ~4u;
          }
        }
      }
      goto LABEL_32;
    }
    if ( a1 )
    {
      v7 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v7 == 17 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState) & 8) != 0;
        goto LABEL_22;
      }
      if ( v7 == 18 && v4 != 18 )
      {
LABEL_22:
        BYTE5(gafAsyncKeyState) &= ~8u;
        byte_1C01A09C5 &= ~8u;
        if ( gptiForeground )
        {
          v8 = *((_QWORD *)gptiForeground + 53);
          if ( v8 )
            *(_BYTE *)(v8 + 233) &= ~8u;
        }
        goto LABEL_25;
      }
      goto LABEL_26;
    }
LABEL_32:
    SetGlobalKeyboardTableInfo(a2);
  }
}

/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1C0063AA0
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0064BC0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00659EC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0064990 (SetGlobalKeyboardTableInfo.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1C0065D70 (ApiSetEditionResetIMEConversionStatus.c)
 *     UpdateKeyLights @ 0x1C008F490 (UpdateKeyLights.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C014E400 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
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

  if ( a2 == (struct tagKL *)qword_1C01CDFE8 )
    return;
  v10[1] = a2;
  v10[0] = &gspklGlobalActive;
  HMAssignmentLock((__int64)v10);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  v5 = qword_1C01CDFE8 == 0;
  qword_1C01CDFE8 = (__int64)a2;
  if ( v5 )
  {
LABEL_4:
    SetGlobalKeyboardTableInfo(a2);
    return;
  }
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
        goto LABEL_14;
      }
      if ( (*((_WORD *)a1 + 20) & 0x3FF) != 0x11 )
      {
        v5 = gfKanaToggle == 0;
LABEL_14:
        if ( !v5 )
        {
          BYTE5(gafAsyncKeyState) |= 8u;
          byte_1C01CC615 |= 8u;
          if ( gptiForeground )
          {
            v6 = *((_QWORD *)gptiForeground + 54);
            if ( v6 )
              *(_BYTE *)(v6 + 233) |= 8u;
          }
LABEL_26:
          UpdateKeyLights(1LL);
          goto LABEL_27;
        }
        goto LABEL_23;
      }
    }
    else
    {
      if ( !a1 )
        goto LABEL_4;
      v7 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v7 == 17 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState) & 8) != 0;
        goto LABEL_23;
      }
      if ( v7 == 18 && v4 != 18 )
      {
LABEL_23:
        BYTE5(gafAsyncKeyState) &= ~8u;
        byte_1C01CC615 &= ~8u;
        if ( gptiForeground )
        {
          v8 = *((_QWORD *)gptiForeground + 54);
          if ( v8 )
            *(_BYTE *)(v8 + 233) &= ~8u;
        }
        goto LABEL_26;
      }
    }
LABEL_27:
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
      {
        byte_1C01CC615 &= ~4u;
        BYTE5(gafAsyncKeyState) &= ~4u;
        if ( gptiForeground )
        {
          v9 = *((_QWORD *)gptiForeground + 54);
          if ( v9 )
            *(_BYTE *)(v9 + 233) &= ~4u;
        }
      }
    }
    goto LABEL_4;
  }
}

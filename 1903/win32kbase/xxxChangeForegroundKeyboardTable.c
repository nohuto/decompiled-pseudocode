/*
 * XREFs of xxxChangeForegroundKeyboardTable @ 0x1C00A0140
 * Callers:
 *     xxxInternalActivateKeyboardLayout @ 0x1C0070920 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00715AC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0023D60 (HMAssignmentLock.c)
 *     UpdateKeyLights @ 0x1C0067950 (UpdateKeyLights.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0070600 (SetGlobalKeyboardTableInfo.c)
 *     ApiSetEditionResetIMEConversionStatus @ 0x1C00A01C8 (ApiSetEditionResetIMEConversionStatus.c)
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C018087C (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 */

void __fastcall xxxChangeForegroundKeyboardTable(struct tagKL *a1, struct tagKL *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int16 v6; // cx
  bool v7; // zf
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 == (struct tagKL *)qword_1C0215448 )
    return;
  v12[1] = (__int64 *)a2;
  v12[0] = &gspklGlobalActive;
  HMAssignmentLock(v12);
  ApiSetEditionResetIMEConversionStatus(a1, a2);
  v7 = qword_1C0215448 == 0;
  qword_1C0215448 = (__int64)a2;
  if ( v7 )
  {
LABEL_4:
    SetGlobalKeyboardTableInfo((__int64)a2);
    return;
  }
  if ( a1 != a2 && (!a1 || *((_QWORD *)a1 + 6) != *((_QWORD *)a2 + 6)) || !gpKL )
  {
    xxxManageKeyboardModifiers(a1, a2);
    v6 = *((_WORD *)a2 + 20) & 0x3FF;
    if ( v6 == 17 )
    {
      if ( !a1 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState) & 8) != 0;
        v7 = (BYTE5(gafAsyncKeyState) & 8) == 0;
        goto LABEL_14;
      }
      if ( (*((_WORD *)a1 + 20) & 0x3FF) != 0x11 )
      {
        v7 = gfKanaToggle == 0;
LABEL_14:
        if ( !v7 )
        {
          BYTE5(gafAsyncKeyState) |= 8u;
          byte_1C02142C5 |= 8u;
          if ( gptiForeground )
          {
            v8 = *((_QWORD *)gptiForeground + 53);
            if ( v8 )
              *(_BYTE *)(v8 + 241) |= 8u;
          }
LABEL_26:
          UpdateKeyLights(1LL, v4, v5);
          goto LABEL_27;
        }
        goto LABEL_23;
      }
    }
    else
    {
      if ( !a1 )
        goto LABEL_4;
      v9 = *((_WORD *)a1 + 20) & 0x3FF;
      if ( v9 == 17 )
      {
        gfKanaToggle = (BYTE5(gafAsyncKeyState) & 8) != 0;
        goto LABEL_23;
      }
      if ( v9 == 18 && v6 != 18 )
      {
LABEL_23:
        LOBYTE(v4) = -9;
        BYTE5(gafAsyncKeyState) &= ~8u;
        byte_1C02142C5 &= ~8u;
        if ( gptiForeground )
        {
          v10 = *((_QWORD *)gptiForeground + 53);
          if ( v10 )
            *(_BYTE *)(v10 + 241) &= ~8u;
        }
        goto LABEL_26;
      }
    }
LABEL_27:
    if ( a1 )
    {
      if ( (*((_WORD *)a1 + 20) & 0x3FF) == 0x12 && (*((_WORD *)a2 + 20) & 0x3FF) != 0x12 )
      {
        byte_1C02142C5 &= ~4u;
        BYTE5(gafAsyncKeyState) &= ~4u;
        if ( gptiForeground )
        {
          v11 = *((_QWORD *)gptiForeground + 53);
          if ( v11 )
            *(_BYTE *)(v11 + 241) &= ~4u;
        }
      }
    }
    goto LABEL_4;
  }
}

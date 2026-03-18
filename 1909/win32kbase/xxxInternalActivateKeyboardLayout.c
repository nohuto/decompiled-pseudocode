/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C00743B0
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0073198 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C00742F0 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C0026330 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C0026DB0 (HMLockObject.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0073110 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0073AF0 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C00753D4 (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C019A420 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C019BF74 (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // r12d
  struct tagTHREADINFO *v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  bool v16; // zf
  int v17; // edx
  __int64 i; // r14
  __int64 v19; // [rsp+30h] [rbp-88h]
  __int128 v20; // [rsp+50h] [rbp-68h] BYREF
  __int128 v21; // [rsp+60h] [rbp-58h] BYREF
  __int64 v22; // [rsp+70h] [rbp-48h] BYREF
  __int64 v23; // [rsp+78h] [rbp-40h]
  __int64 v24; // [rsp+80h] [rbp-38h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v6 = a3 & 0x100;
  v7 = gptiCurrent;
  v8 = (_QWORD *)((char *)gptiCurrent + 432);
  v9 = *((_QWORD *)gptiCurrent + 54);
  v10 = 0LL;
  if ( v9 )
  {
    v19 = *(_QWORD *)(v9 + 40);
  }
  else
  {
    v9 = 0LL;
    v19 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a3 >> 15) & 2;
  if ( (a3 & 0x100) != 0 || a2 != *v8 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v22 = *((_QWORD *)v7 + 51);
    *((_QWORD *)v7 + 51) = &v22;
    v23 = v9;
    if ( v9 )
      HMLockObject(v9);
    if ( (*((_DWORD *)v7 + 120) & 8) != 0 )
    {
      *(_QWORD *)&v20 = v8;
      *((_QWORD *)&v20 + 1) = a2;
      HMAssignmentLock((__int64 **)&v20);
      *(_WORD *)(*((_QWORD *)v7 + 59) + 152LL) = *(_WORD *)(a2 + 72);
    }
    else
    {
      v12 = *(_DWORD *)gpsi;
      if ( v6 )
      {
        if ( (v12 & 4) != 0 )
        {
          v16 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(*((_QWORD *)v7 + 52) + 320LL), a2, a2) == 0;
        }
        else
        {
          v17 = 0;
          for ( i = *(_QWORD *)(*((_QWORD *)v7 + 52) + 320LL); i; i = *(_QWORD *)(i + 656) )
          {
            if ( *(_QWORD *)(i + 432) != a2 && (*(_DWORD *)(i + 480) & 1) == 0 )
            {
              *(_QWORD *)&v20 = i + 432;
              *((_QWORD *)&v20 + 1) = a2;
              v21 = v20;
              HMAssignmentLock((__int64 **)&v21);
              *(_WORD *)(*(_QWORD *)(i + 472) + 152LL) = *(_WORD *)(a2 + 72);
              *(_QWORD *)(*(_QWORD *)(i + 472) + 144LL) = *(_QWORD *)(a2 + 40);
              v17 = 1;
            }
          }
          v16 = v17 == 0;
        }
        if ( v16 )
          goto LABEL_26;
      }
      else
      {
        if ( (v12 & 4) != 0 )
        {
          ApiSetEditionImmActivateLayout(v7, a2);
        }
        else
        {
          *(_QWORD *)&v20 = v8;
          *((_QWORD *)&v20 + 1) = a2;
          v21 = v20;
          HMAssignmentLock((__int64 **)&v21);
        }
        if ( (*((_DWORD *)v7 + 120) & 1) == 0 )
        {
          *(_WORD *)(*((_QWORD *)v7 + 59) + 152LL) = *(_WORD *)(a2 + 72);
          *(_QWORD *)(*((_QWORD *)v7 + 59) + 144LL) = *(_QWORD *)(a2 + 40);
        }
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 52) == *((_QWORD *)v7 + 52) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v9, (struct tagKL *)a2);
      xxxWindowEvent(2147483649LL, 0LL, *(unsigned int *)(a2 + 40));
      ApiSetEditionNotifyShellLanguageHook((__int64)v7, *(_QWORD *)(a2 + 40), 1u);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v9, (struct tagKL *)a2);
    }
    v13 = *((_QWORD *)v7 + 53);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 120);
      if ( v14 )
        goto LABEL_42;
      v14 = *(_QWORD *)(v13 + 128);
      if ( !v14 )
        v14 = a4;
      if ( v14 )
LABEL_42:
        ApiSetEditionSendIMENotification((_DWORD)v7, v14, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v15 = *((_QWORD *)v7 + 97);
    if ( v15
      && (*((_DWORD *)v7 + 120) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v10) = v6 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v7, v15, 647, 31, v10);
    }
LABEL_26:
    ThreadUnlock1();
  }
  return v19;
}

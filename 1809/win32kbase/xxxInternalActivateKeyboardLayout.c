/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C0064BC0
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0063DFC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0064B10 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0063AA0 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0064468 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C0065DF4 (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C016200C (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C01635CC (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r14
  int v7; // r12d
  struct tagTHREADINFO *v8; // rsi
  _QWORD *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdx
  bool v18; // zf
  int v19; // ecx
  __int64 i; // r14
  __int128 v21; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+40h] [rbp-88h]
  __int128 v23; // [rsp+60h] [rbp-68h] BYREF
  __int128 v24; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v25[4]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a4;
  v7 = a3 & 0x100;
  v8 = gptiCurrent;
  v9 = (_QWORD *)((char *)gptiCurrent + 440);
  v10 = *((_QWORD *)gptiCurrent + 55);
  v11 = 0LL;
  if ( v10 )
  {
    v22 = *(_QWORD *)(v10 + 40);
  }
  else
  {
    v10 = 0LL;
    v22 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a3 >> 15) & 2;
  if ( (a3 & 0x100) != 0 || a2 != *v9 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v25[0] = *((_QWORD *)v8 + 52);
    *((_QWORD *)v8 + 52) = v25;
    v25[1] = v10;
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( (*((_DWORD *)v8 + 122) & 8) != 0 )
    {
      *(_QWORD *)&v21 = v9;
      *((_QWORD *)&v21 + 1) = a2;
      HMAssignmentLock((__int64)&v21);
      *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
    }
    else if ( (a3 & 0x100) != 0 )
    {
      v16 = *((_QWORD *)v8 + 53);
      v17 = *(unsigned int *)gpsi;
      if ( (v17 & 4) != 0 )
      {
        v18 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v16 + 328), v17, a2) == 0;
      }
      else
      {
        v19 = 0;
        for ( i = *(_QWORD *)(v16 + 328); i; i = *(_QWORD *)(i + 664) )
        {
          if ( *(_QWORD *)(i + 440) != a2 && (*(_DWORD *)(i + 488) & 1) == 0 )
          {
            *(_QWORD *)&v21 = i + 440;
            *((_QWORD *)&v21 + 1) = a2;
            v23 = v21;
            HMAssignmentLock((__int64)&v23);
            *(_WORD *)(*(_QWORD *)(i + 480) + 152LL) = *(_WORD *)(a2 + 72);
            *(_QWORD *)(*(_QWORD *)(i + 480) + 144LL) = *(_QWORD *)(a2 + 40);
            v19 = 1;
          }
        }
        v18 = v19 == 0;
      }
      if ( v18 )
        goto LABEL_26;
      v4 = a4;
    }
    else
    {
      if ( (*(_DWORD *)gpsi & 4) != 0 )
      {
        ApiSetEditionImmActivateLayout(v8, a2);
      }
      else
      {
        *(_QWORD *)&v21 = v9;
        *((_QWORD *)&v21 + 1) = a2;
        v24 = v21;
        HMAssignmentLock((__int64)&v24);
      }
      if ( (*((_DWORD *)v8 + 122) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v8 + 60) + 152LL) = *(_WORD *)(a2 + 72);
        *(_QWORD *)(*((_QWORD *)v8 + 60) + 144LL) = *(_QWORD *)(a2 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 53) == *((_QWORD *)v8 + 53) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
      xxxWindowEvent(2147483649LL, 0LL, *(unsigned int *)(a2 + 40), 0LL, 0);
      ApiSetEditionNotifyShellLanguageHook((__int64)v8, *(_QWORD *)(a2 + 40), 1u);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
    }
    v13 = *((_QWORD *)v8 + 54);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 112);
      if ( v14 )
        goto LABEL_42;
      v14 = *(_QWORD *)(v13 + 120);
      if ( !v14 )
        v14 = v4;
      if ( v14 )
LABEL_42:
        ApiSetEditionSendIMENotification((_DWORD)v8, v14, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v15 = *((_QWORD *)v8 + 98);
    if ( v15
      && (*((_DWORD *)v8 + 122) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v11) = v7 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v8, v15, 647, 31, v11);
    }
LABEL_26:
    ThreadUnlock1();
  }
  return v22;
}

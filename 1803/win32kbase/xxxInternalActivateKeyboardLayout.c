/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C012A970
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0129D60 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C012A8C0 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C006D110 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C013E8D8 (ApiSetEditionImmActivateLayout.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C013E980 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C013F0B8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     ApiSetEditionSendIMENotification @ 0x1C013FEC4 (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // r12d
  struct tagTHREADINFO *v6; // rdi
  _QWORD *v7; // r9
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rdx
  bool v12; // zf
  int v13; // ecx
  __int64 i; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int128 v19; // [rsp+30h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-B8h]
  __int128 v21; // [rsp+50h] [rbp-A8h]
  __int128 v22; // [rsp+80h] [rbp-78h] BYREF
  __int128 v23; // [rsp+90h] [rbp-68h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v25[4]; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v26; // [rsp+118h] [rbp+20h]

  v5 = a2 & 0x100;
  v6 = gptiCurrent;
  v7 = (_QWORD *)((char *)gptiCurrent + 432);
  v8 = *((_QWORD *)gptiCurrent + 54);
  v9 = 0LL;
  if ( v8 )
  {
    v26 = *(_QWORD *)(v8 + 40);
  }
  else
  {
    v8 = 0LL;
    v26 = 0LL;
  }
  if ( (a2 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a2 >> 15) & 2;
  if ( (a2 & 0x100) != 0 || a1 != *v7 )
  {
    *(_WORD *)(a1 + 74) = 0;
    v25[0] = *((_QWORD *)v6 + 51);
    *((_QWORD *)v6 + 51) = v25;
    v25[1] = v8;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( (*((_DWORD *)v6 + 120) & 8) != 0 )
    {
      *(_QWORD *)&v19 = v7;
      *((_QWORD *)&v19 + 1) = a1;
      v22 = v19;
      HMAssignmentLock((__int64)&v22);
      *(_WORD *)(*((_QWORD *)v6 + 59) + 152LL) = *(_WORD *)(a1 + 72);
    }
    else if ( (a2 & 0x100) != 0 )
    {
      v10 = *((_QWORD *)v6 + 52);
      v11 = *(unsigned int *)gpsi;
      if ( (v11 & 4) != 0 )
      {
        v12 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(v10 + 320), v11, a1) == 0;
      }
      else
      {
        v13 = 0;
        for ( i = *(_QWORD *)(v10 + 320); i; i = *(_QWORD *)(i + 656) )
        {
          if ( *(_QWORD *)(i + 432) != a1 && (*(_DWORD *)(i + 480) & 1) == 0 )
          {
            *(_QWORD *)&v20 = i + 432;
            *((_QWORD *)&v20 + 1) = a1;
            v23 = v20;
            HMAssignmentLock((__int64)&v23);
            *(_WORD *)(*(_QWORD *)(i + 472) + 152LL) = *(_WORD *)(a1 + 72);
            *(_QWORD *)(*(_QWORD *)(i + 472) + 144LL) = *(_QWORD *)(a1 + 40);
            v13 = 1;
          }
        }
        v12 = v13 == 0;
      }
      if ( v12 )
        goto LABEL_43;
    }
    else
    {
      if ( (*(_DWORD *)gpsi & 4) != 0 )
      {
        ApiSetEditionImmActivateLayout(v6, a1);
      }
      else
      {
        *(_QWORD *)&v21 = v7;
        *((_QWORD *)&v21 + 1) = a1;
        v24 = v21;
        HMAssignmentLock((__int64)&v24);
      }
      if ( (*((_DWORD *)v6 + 120) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v6 + 59) + 152LL) = *(_WORD *)(a1 + 72);
        *(_QWORD *)(*((_QWORD *)v6 + 59) + 144LL) = *(_QWORD *)(a1 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 52) == *((_QWORD *)v6 + 52) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v8, (struct tagKL *)a1);
      xxxWindowEvent(2147483649LL, 0LL, *(unsigned int *)(a1 + 40));
      ApiSetEditionNotifyShellLanguageHook(v6, *(_QWORD *)(a1 + 40), 1LL);
    }
    v15 = *((_QWORD *)v6 + 53);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 112);
      if ( v16 )
        goto LABEL_37;
      v16 = *(_QWORD *)(v15 + 120);
      if ( !v16 )
        v16 = a3;
      if ( v16 )
LABEL_37:
        ApiSetEditionSendIMENotification((_DWORD)v6, v16, 81, *(_DWORD *)(a1 + 68), *(_QWORD *)(a1 + 40));
    }
    v17 = *((_QWORD *)v6 + 96);
    if ( v17
      && (*((_DWORD *)v6 + 120) & 8) == 0
      && ((*(_WORD *)(a1 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v9) = v5 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v6, v17, 647, 31, v9);
    }
LABEL_43:
    ThreadUnlock1();
  }
  return v26;
}

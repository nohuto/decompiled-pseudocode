/*
 * XREFs of xxxProcessHidInput @ 0x1C01C5800
 * Callers:
 *     ProcessHidRawInput @ 0x1C01C4EB0 (ProcessHidRawInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01C4744 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01C47B8 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v2; // r15
  int v3; // r14d
  __int64 result; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  struct tagPROCESS_HID_REQUEST *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  int *v15; // rdi
  struct tagPROCESS_HID_REQUEST *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  unsigned __int64 v23; // rdx
  bool v24; // zf
  __int64 v25; // rcx
  int v26; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  result = (unsigned int)*gpsi;
  if ( (result & 0x2000) != 0 )
    return result;
  if ( (result & 0x4000) != 0 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x80u) == 0LL )
      return result;
    result = *((_QWORD *)a1 + 58);
    if ( *(_DWORD *)(result + 40) != 851973 )
      return result;
  }
  if ( *((int *)a1 + 64) < 0 )
    return result;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v26);
  v9 = 1LL;
  if ( gpqForeground )
  {
    v10 = *(_QWORD *)(gpqForeground + 120LL);
    v11 = v10 ? *(_QWORD *)(v10 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    v2 = *(_QWORD *)(v11 + 424);
    v12 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v2 + 832));
    if ( v12 )
    {
      v13 = gpqForeground;
      v14 = *((_QWORD *)v12 + 4);
      if ( !v14 || (v13 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 432LL), *(char *)(*(_QWORD *)(v14 + 40) + 20LL) >= 0) )
      {
        if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
          || (*(_DWORD *)(*((_QWORD *)a1 + 60) + 308LL) & 0x40) != 0
          || (!(unsigned __int8)((__int64 (*)(void))IsInputThread)()
            ? (v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL))
            : (v7 = *(_QWORD *)(*((_QWORD *)a1 + 60) + 888LL)),
              (v6 = *(_QWORD *)(v13 + 428), v5 = HIDWORD(v7), v8 = HIDWORD(v7), !gbEnforceUIPI)
           || (unsigned int)v7 > (unsigned int)v6
           || (_DWORD)v7 == (_DWORD)v6
           && ((v6 >>= 32, HIDWORD(v7) == (_DWORD)v6) || (v5 = 0xFFFFFFFFLL, HIDWORD(v7) == -1) || (_DWORD)v6 == -1)) )
        {
          v9 = 1LL;
          if ( (unsigned int)PostHidInput(a1, (struct tagQ *)v13, (struct tagWND *)v14, 0LL) )
          {
            v3 = 1;
            v9 = 0LL;
          }
        }
        else
        {
          v9 = 1LL;
        }
      }
    }
  }
  result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  v15 = (int *)RawInputManagerObject::gHidRequestTable[4];
  while ( v15 != (int *)result )
  {
    if ( v15[20] <= 0 )
      goto LABEL_68;
    v16 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v15);
    if ( !v16 )
      goto LABEL_68;
    v6 = *((unsigned int *)v16 + 5);
    if ( (v6 & 1) == 0 || (v6 & 2) != 0 && !v9 )
      goto LABEL_68;
    v5 = *((_QWORD *)v16 + 5);
    if ( v5 )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v16 + 5))(a1);
      goto LABEL_68;
    }
    v17 = *((_QWORD *)v16 + 4);
    v18 = *(_QWORD *)(v17 + 16);
    v19 = *(_QWORD *)(v18 + 424);
    if ( v19 == v2 )
      goto LABEL_68;
    v6 = grpdeskRitInput;
    if ( *(_QWORD *)(v17 + 24) != grpdeskRitInput )
      goto LABEL_68;
    v20 = *(_QWORD *)(v17 + 40);
    if ( *(char *)(v20 + 20) < 0 || *(char *)(v20 + 19) < 0 )
      goto LABEL_68;
    v21 = *((_QWORD *)a1 + 59);
    v22 = *(_WORD *)(v21 + 16);
    v23 = *(unsigned __int16 *)(v21 + 18);
    if ( v22 == 12 )
    {
      v24 = (_WORD)v23 == 1;
      goto LABEL_41;
    }
    if ( v22 == 1 )
    {
      v24 = (_WORD)v23 == 9;
LABEL_41:
      if ( v24 )
        goto LABEL_66;
      goto LABEL_46;
    }
    if ( v22 >= 0xFF00u )
      goto LABEL_66;
LABEL_46:
    if ( gpqForeground )
    {
      v8 = *(_QWORD *)(gpqForeground + 428LL);
      v23 = *(_QWORD *)(*(_QWORD *)(v18 + 432) + 428LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v23 <= (unsigned int)v8 )
        {
          if ( (_DWORD)v23 != (_DWORD)v8
            || (v8 >>= 32, v23 >>= 32, (_DWORD)v23 != (_DWORD)v8) && (_DWORD)v23 != -1 && (_DWORD)v8 != -1 )
          {
            if ( *(int *)(v19 + 12) >= 0 )
            {
              EtwTraceUIPIInputError(*(_QWORD *)(v17 + 16), 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 5);
              goto LABEL_68;
            }
          }
        }
      }
    }
    if ( (*((_DWORD *)a1 + 46) & 0x2000) == 0 )
      goto LABEL_66;
    v25 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 308LL);
    if ( (v25 & 0x40) != 0 )
      goto LABEL_66;
    v7 = (unsigned __int8)IsInputThread(v25, v23, gpqForeground, v8)
       ? *(_QWORD *)(*((_QWORD *)a1 + 60) + 888LL)
       : *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    v18 = *(_QWORD *)(v17 + 16);
    v5 = HIDWORD(v7);
    v8 = HIDWORD(v7);
    v6 = *(_QWORD *)(*(_QWORD *)(v18 + 432) + 428LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v7 > (unsigned int)v6
      || (_DWORD)v7 == (_DWORD)v6
      && ((v6 >>= 32, HIDWORD(v7) == (_DWORD)v6) || (v5 = 0xFFFFFFFFLL, HIDWORD(v7) == -1) || (_DWORD)v6 == -1) )
    {
LABEL_66:
      result = PostHidInput(a1, *(struct tagQ **)(v18 + 432), (struct tagWND *)v17, 1LL);
      if ( !(_DWORD)result )
        break;
      v3 = 1;
    }
LABEL_68:
    v15 = *(int **)v15;
    result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  }
  if ( v3 )
  {
    result = *((unsigned int *)a1 + 50);
    if ( (result & 0x40) == 0 )
      result = CInputGlobals::UpdateInputGlobals(
                 gpInputGlobals,
                 (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
                 3LL);
  }
  if ( !v26 )
    return UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return result;
}

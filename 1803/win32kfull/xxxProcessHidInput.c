/*
 * XREFs of xxxProcessHidInput @ 0x1C0138B10
 * Callers:
 *     ProcessHidRawInput @ 0x1C0138AD0 (ProcessHidRawInput.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_TABLE@@@Z @ 0x1C01A2B30 (-HidIsRequestedByThisProcess@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@PEAUtagPROCESS_HID_T.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01A2BA4 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 */

__int64 __fastcall xxxProcessHidInput(struct DEVICEINFO *a1)
{
  __int64 v2; // r14
  int v3; // ebp
  int v4; // r15d
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  int *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  struct tagPROCESS_HID_REQUEST *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  struct tagPROCESS_HID_REQUEST *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r10
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int16 v23; // cx
  unsigned __int64 v24; // rdx
  bool v25; // zf
  __int64 v26; // rcx
  int v27; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0;
  v4 = 1;
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
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v27);
  if ( gpqForeground )
  {
    v11 = *(_QWORD *)(gpqForeground + 120LL);
    v12 = v11 ? *(_QWORD *)(v11 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    v2 = *(_QWORD *)(v12 + 416);
    v13 = HidIsRequestedByThisProcess(a1, *(struct tagPROCESS_HID_TABLE **)(v2 + 824));
    if ( v13 )
    {
      v14 = gpqForeground;
      v15 = *((_QWORD *)v13 + 4);
      if ( !v15 || (v14 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL), *(char *)(*(_QWORD *)(v15 + 40) + 20LL) >= 0) )
      {
        if ( (*((_DWORD *)a1 + 46) & 0x20) == 0
          || (v16 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 276LL), (v16 & 0x40) != 0)
          || (!(unsigned __int8)IsInputThread(v16, v6, v8, v9)
            ? (v8 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL))
            : (v8 = *(_QWORD *)(*((_QWORD *)a1 + 60) + 856LL)),
              (v7 = *(_QWORD *)(v14 + 428), v6 = HIDWORD(v8), v9 = HIDWORD(v8), !gbEnforceUIPI)
           || (unsigned int)v8 > (unsigned int)v7
           || (_DWORD)v8 == (_DWORD)v7
           && ((v7 >>= 32, HIDWORD(v8) == (_DWORD)v7) || (v6 = 0xFFFFFFFFLL, HIDWORD(v8) == -1) || (_DWORD)v7 == -1)) )
        {
          if ( (unsigned int)PostHidInput(a1, (struct tagQ *)v14, (struct tagWND *)v15, 0LL) )
          {
            v3 = 1;
            v4 = 0;
          }
        }
      }
    }
  }
  result = (__int64)&RawInputManagerObject::gHidRequestTable[4];
  v10 = (int *)RawInputManagerObject::gHidRequestTable[4];
  while ( v10 != (int *)result )
  {
    if ( v10[20] <= 0 )
      goto LABEL_73;
    v17 = HidIsRequestedByThisProcess(a1, (struct tagPROCESS_HID_TABLE *)v10);
    if ( !v17 )
      goto LABEL_73;
    v7 = *((unsigned int *)v17 + 5);
    if ( (v7 & 1) == 0 || (v7 & 2) != 0 && !v4 )
      goto LABEL_73;
    v6 = *((_QWORD *)v17 + 5);
    if ( v6 )
    {
      (*((void (__fastcall **)(struct DEVICEINFO *))v17 + 5))(a1);
      goto LABEL_73;
    }
    v18 = *((_QWORD *)v17 + 4);
    v19 = *(_QWORD *)(v18 + 16);
    v20 = *(_QWORD *)(v19 + 416);
    if ( v20 == v2 )
      goto LABEL_73;
    v7 = grpdeskRitInput;
    if ( *(_QWORD *)(v18 + 24) != grpdeskRitInput )
      goto LABEL_73;
    v21 = *(_QWORD *)(v18 + 40);
    if ( *(char *)(v21 + 20) < 0 || *(char *)(v21 + 19) < 0 )
      goto LABEL_73;
    v22 = *((_QWORD *)a1 + 59);
    v23 = *(_WORD *)(v22 + 16);
    v24 = *(unsigned __int16 *)(v22 + 18);
    if ( v23 == 12 )
    {
      v25 = (_WORD)v24 == 1;
      goto LABEL_47;
    }
    if ( v23 == 1 )
    {
      v25 = (_WORD)v24 == 9;
LABEL_47:
      if ( v25 )
        goto LABEL_71;
      goto LABEL_51;
    }
    if ( v23 >= 0xFF00u )
      goto LABEL_71;
LABEL_51:
    if ( gpqForeground )
    {
      v9 = *(_QWORD *)(gpqForeground + 428LL);
      v24 = *(_QWORD *)(*(_QWORD *)(v19 + 424) + 428LL);
      if ( gbEnforceUIPI )
      {
        if ( (unsigned int)v24 <= (unsigned int)v9 )
        {
          if ( (_DWORD)v24 != (_DWORD)v9
            || (v9 >>= 32, v24 >>= 32, (_DWORD)v24 != (_DWORD)v9) && (_DWORD)v24 != -1 && (_DWORD)v9 != -1 )
          {
            if ( *(int *)(v20 + 12) >= 0 )
            {
              EtwTraceUIPIInputError(*(_QWORD *)(v18 + 16), 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 428LL), 5);
              goto LABEL_73;
            }
          }
        }
      }
    }
    if ( (*((_DWORD *)a1 + 46) & 0x1000) == 0 )
      goto LABEL_71;
    v26 = *(unsigned int *)(*((_QWORD *)a1 + 60) + 276LL);
    if ( (v26 & 0x40) != 0 )
      goto LABEL_71;
    v8 = (unsigned __int8)IsInputThread(v26, v24, gpqForeground, v9)
       ? *(_QWORD *)(*((_QWORD *)a1 + 60) + 856LL)
       : *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
    v19 = *(_QWORD *)(v18 + 16);
    v6 = HIDWORD(v8);
    v9 = HIDWORD(v8);
    v7 = *(_QWORD *)(*(_QWORD *)(v19 + 424) + 428LL);
    if ( !gbEnforceUIPI
      || (unsigned int)v8 > (unsigned int)v7
      || (_DWORD)v8 == (_DWORD)v7
      && ((v7 >>= 32, HIDWORD(v8) == (_DWORD)v7) || (v6 = 0xFFFFFFFFLL, HIDWORD(v8) == -1) || (_DWORD)v7 == -1) )
    {
LABEL_71:
      result = PostHidInput(a1, *(struct tagQ **)(v19 + 424), (struct tagWND *)v18, 1uLL);
      if ( !(_DWORD)result )
        break;
      v3 = 1;
    }
LABEL_73:
    v10 = *(int **)v10;
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
  if ( !v27 )
    return UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return result;
}

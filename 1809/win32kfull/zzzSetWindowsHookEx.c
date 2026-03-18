/*
 * XREFs of zzzSetWindowsHookEx @ 0x1C00B5454
 * Callers:
 *     NtUserSetWindowsHookEx @ 0x1C00B5310 (NtUserSetWindowsHookEx.c)
 *     NtUserSetWindowsHookAW @ 0x1C021DEC0 (NtUserSetWindowsHookAW.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B5264 (zzzUnhookWindowsHookEx.c)
 *     AddHmodDependency @ 0x1C00B5D58 (AddHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C00B5D9C (GetHmodTableIndex.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01D3440 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // r13
  ACCESS_MASK v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  int HmodTableIndex; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // edx
  __int64 *v20; // r8
  PRKPROCESS *v21; // rcx
  int v22; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+28h] [rbp-80h]
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  __int64 v33; // [rsp+58h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp+10h]

  v35 = a2;
  v6 = (int)a4;
  v7 = a3;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    v24 = 1426LL;
    goto LABEL_68;
  }
  if ( !a5 )
  {
    v24 = 1427LL;
LABEL_68:
    UserSetLastError(v24, a2, a3, a4);
    return 0LL;
  }
  if ( !a3 )
  {
    if ( !a1 && (*((_BYTE *)&unk_1C02CDED8 + (int)a4 + 1) & 0x24) == 0 )
      goto LABEL_44;
    goto LABEL_10;
  }
  LOBYTE(a3) = *((_BYTE *)&unk_1C02CDED8 + (int)a4 + 1);
  if ( (a3 & 2) == 0 )
  {
    v24 = 1429LL;
    goto LABEL_68;
  }
  if ( *(_QWORD *)(v7 + 456) != *(_QWORD *)(gptiCurrent + 456LL) )
    goto LABEL_48;
  v9 = *(_QWORD *)(gptiCurrent + 424LL);
  a2 = *(_QWORD *)(v7 + 424);
  if ( v9 != a2 )
  {
    if ( !a1 && (a3 & 0x24) == 0 )
    {
LABEL_44:
      v24 = 1428LL;
      goto LABEL_68;
    }
    if ( !gbEnforceUIPI
      && (*(_DWORD *)(a2 + 780) != *(_DWORD *)(v9 + 780) || *(_DWORD *)(a2 + 784) != *(_DWORD *)(v9 + 784))
      && (*(_DWORD *)(v7 + 488) & 0x400000) == 0 )
    {
LABEL_48:
      v24 = 5LL;
      goto LABEL_68;
    }
    if ( (*(_DWORD *)(v7 + 488) & 0xC) != 0 && (a3 & 0x10) == 0 )
    {
      v24 = 1458LL;
      goto LABEL_68;
    }
  }
LABEL_10:
  v10 = (int)a4;
  if ( (*((_BYTE *)&unk_1C02CDED8 + (int)a4 + 1) & 4) != 0 )
  {
    v25 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)*(_QWORD *)(v25 + 880) < 0x4000 && *(int *)(v25 + 12) >= 0 )
      {
        UserSetLastError(5LL, v25, a3, a4);
        EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 4LL);
        return 0LL;
      }
    }
  }
  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 1 )
      v11 = 32;
    else
      v11 = 8;
  }
  else
  {
    v11 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), v11) )
    goto LABEL_48;
  if ( v11 != 8 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 32LL) & 4) != 0 )
  {
    v24 = 1459LL;
    goto LABEL_68;
  }
  LOBYTE(a3) = 5;
  v12 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 456LL), a3, 96LL);
  v13 = v12;
  v31 = v12;
  v14 = v12;
  if ( !v12 )
    return 0LL;
  *(_DWORD *)(v12 + 68) = -1;
  if ( a1 )
  {
    HmodTableIndex = GetHmodTableIndex(v35);
    *(_DWORD *)(v14 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126LL, v16, v17, v18);
      HMFreeObject(v14);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
    v13 = v14;
  }
  v19 = 1 << (v6 + 1);
  if ( v7 )
  {
    v20 = (__int64 *)(v7 + 912 + 8 * v6);
    *(_DWORD *)(v7 + 680) |= v19;
    if ( *(_QWORD *)(v7 + 480) )
    {
      v21 = *(PRKPROCESS **)(v7 + 424);
      if ( v21 == *(PRKPROCESS **)(gptiCurrent + 424LL) )
      {
        v22 = 0;
      }
      else
      {
        KeAttachProcess(*v21);
        v22 = 1;
        v20 = (__int64 *)(v7 + 912 + 8 * v6);
      }
      *(_DWORD *)(*(_QWORD *)(v7 + 480) + 56LL) = *(_DWORD *)(v7 + 680);
      if ( v22 )
      {
        KeDetachProcess();
        v20 = (__int64 *)(v7 + 912 + 8 * v6);
      }
    }
    v13 = v31;
  }
  else
  {
    v20 = (__int64 *)(*(_QWORD *)(gptiCurrent + 464LL) + 48LL + 8 * v6);
    *(_DWORD *)(v14 + 64) |= 1u;
    *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) |= v19;
    v7 = 0LL;
  }
  *(_QWORD *)(v13 + 72) = v7;
  *(_DWORD *)(v14 + 64) |= a6 & 0x42;
  *(_DWORD *)(v14 + 48) = v6;
  *(_QWORD *)(v14 + 56) = a5 - a1;
  *(_QWORD *)(v14 + 40) = *v20;
  *v20 = v14;
  if ( (*((_BYTE *)&unk_1C02CDED8 + v10 + 1) & 4) != 0 )
  {
    v32 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v32;
    v33 = v14;
    _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
    if ( !(unsigned int)zzzJournalAttach(gptiCurrent, 1) )
    {
      if ( ThreadUnlock1(v27, v26) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v14, v28);
      return 0LL;
    }
    v14 = ThreadUnlock1(v27, v26);
    if ( !v14 )
      return 0LL;
  }
  if ( (*(_DWORD *)(v14 + 64) & 1) != 0 && (*((_BYTE *)&unk_1C02CDED8 + v10 + 1) & 0x10) != 0 )
  {
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x40000u;
    KeSetPriorityThread((PKTHREAD)*gptiCurrent, 14);
    if ( (*((_BYTE *)&unk_1C02CDED8 + v10 + 1) & 4) != 0 )
    {
      v32 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v32;
      v33 = v14;
      _InterlockedAdd((volatile signed __int32 *)(v14 + 8), 1u);
      GenerateMouseMove(0LL);
      v14 = ThreadUnlock1(v30, v29);
      if ( (_DWORD)v6 == 1 )
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
    }
  }
  return v14;
}

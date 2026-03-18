/*
 * XREFs of NtUserBuildHimcList @ 0x1C01052A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _BuildHimcList @ 0x1C0105388 (_BuildHimcList.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE v20[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( (*gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v9 = 0LL;
      }
      else
      {
        v18 = PtiFromThreadId(a1);
        v9 = v18;
        if ( !v18 || (v19 = *(_QWORD *)(v18 + 448)) == 0 )
        {
          v12 = -1073741811;
          goto LABEL_7;
        }
        if ( v19 != *(_QWORD *)(gptiCurrent + 448LL) )
        {
          v12 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v9 = gptiCurrent;
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    v11 = BuildHimcList(v9, (unsigned int)v6, a3);
    v12 = (unsigned int)v6 < v11 ? 0xC0000023 : 0;
    *a4 = v11;
  }
  else
  {
    UserSetLastError(120LL, v8);
    v12 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return v12;
}

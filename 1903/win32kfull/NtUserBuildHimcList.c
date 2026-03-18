/*
 * XREFs of NtUserBuildHimcList @ 0x1C01301E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _BuildHimcList @ 0x1C01302D8 (_BuildHimcList.c)
 */

__int64 __fastcall NtUserBuildHimcList(unsigned int a1, unsigned int a2, volatile void *a3, unsigned int *a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE v19[32]; // [rsp+28h] [rbp-20h] BYREF

  v6 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
  if ( (*gpsi & 4) != 0 )
  {
    if ( a1 )
    {
      if ( a1 == -1 )
      {
        v11 = 0LL;
      }
      else
      {
        v17 = PtiFromThreadId(a1);
        v11 = v17;
        if ( !v17 || (v18 = *(_QWORD *)(v17 + 448)) == 0 )
        {
          v14 = -1073741811;
          goto LABEL_7;
        }
        if ( v18 != *(_QWORD *)(gptiCurrent + 448LL) )
        {
          v14 = -1073741790;
          goto LABEL_7;
        }
      }
    }
    else
    {
      v11 = gptiCurrent;
    }
    ProbeForWrite(a3, 8 * v6, 4u);
    v12 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    *v12 = *v12;
    v13 = BuildHimcList(v11, (unsigned int)v6, a3);
    v14 = (unsigned int)v6 < v13 ? 0xC0000023 : 0;
    *a4 = v13;
  }
  else
  {
    UserSetLastError(120LL, v8, v9, v10);
    v14 = -1073741823;
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}

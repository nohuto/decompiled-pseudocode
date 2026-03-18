/*
 * XREFs of NtUserBuildPropList @ 0x1C011EF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, volatile void *a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  unsigned int v15; // ebx
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    v13 = gptiCurrent;
    v17[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v17;
    v17[1] = v10;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    if ( a2 )
    {
      ProbeForWrite(a3, 16LL * a2, 4u);
      v14 = (_DWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
        v14 = (_DWORD *)MmUserProbeAddress;
      *v14 = *v14;
      v15 = _BuildPropList(v10, a3, a2, a4);
    }
    else
    {
      v15 = -1073741816;
    }
    ThreadUnlock1(v13, v8);
  }
  else
  {
    v15 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v15;
}

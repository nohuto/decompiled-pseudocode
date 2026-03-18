/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C0061CF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C0061E4C (_ChangeWindowMessageFilterEx.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagWND *v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  int v17; // ebx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 *v21; // rcx
  ULONG64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-38h]
  _QWORD v24[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = (struct tagWND *)v8;
  if ( !v8 )
  {
    v17 = 0;
    goto LABEL_17;
  }
  v24[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v24;
  v24[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) )
  {
    v20 = 5LL;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(v8 + 40);
  if ( *(char *)(v14 + 20) < 0 || *(char *)(v14 + 19) < 0 )
  {
    v20 = 1400LL;
    goto LABEL_19;
  }
  if ( a3 > 2 )
    goto LABEL_18;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  if ( !a2 )
  {
LABEL_18:
    v20 = 87LL;
LABEL_19:
    v17 = 0;
    UserSetLastError(v20, gptiCurrent);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v23) = 8;
LABEL_10:
    v17 = ChangeWindowMessageFilterEx(v13, a2);
    if ( v17 && a4 )
    {
      v16 = (ULONG64)(a4 + 1);
      if ( a4 + 1 < a4 || v16 > MmUserProbeAddress )
      {
        v16 = MmUserProbeAddress;
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      *a4 = v23;
    }
    goto LABEL_16;
  }
  v21 = a4;
  v22 = (ULONG64)(a4 + 1);
  if ( a4 + 1 < a4 || v22 > MmUserProbeAddress )
    v21 = (__int64 *)MmUserProbeAddress;
  v23 = *v21;
  if ( (unsigned int)*v21 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL, v22);
  v17 = 0;
LABEL_16:
  ThreadUnlock1(v16, v15, v18);
LABEL_17:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v17;
}

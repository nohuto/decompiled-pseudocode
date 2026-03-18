/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C00D04D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00D0644 (_ChangeWindowMessageFilterEx.c)
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
  __int64 v19; // rcx
  __int64 *v20; // rcx
  ULONG64 v21; // rdx
  __int64 v22; // [rsp+20h] [rbp-38h]
  _QWORD v23[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  v13 = (struct tagWND *)v8;
  if ( !v8 )
  {
    v17 = 0;
    goto LABEL_17;
  }
  v23[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v23;
  v23[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) )
  {
    v19 = 5LL;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(v8 + 40);
  if ( *(char *)(v14 + 20) < 0 || *(char *)(v14 + 19) < 0 )
  {
    v19 = 1400LL;
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
    v19 = 87LL;
LABEL_19:
    v17 = 0;
    UserSetLastError(v19, gptiCurrent, v11, v12);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v22) = 8;
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
      *a4 = v22;
    }
    goto LABEL_16;
  }
  v20 = a4;
  v21 = (ULONG64)(a4 + 1);
  if ( a4 + 1 < a4 || v21 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  v22 = *v20;
  if ( (unsigned int)*v20 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL, v21, v11, v12);
  v17 = 0;
LABEL_16:
  ThreadUnlock1(v16, v15);
LABEL_17:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v17;
}

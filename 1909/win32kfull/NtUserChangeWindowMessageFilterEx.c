/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C00122D0
 * Callers:
 *     <none>
 * Callees:
 *     _ChangeWindowMessageFilterEx @ 0x1C0012468 (_ChangeWindowMessageFilterEx.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax
  int v11; // ebx
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  HIDWORD(v15) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( !v9 )
  {
    v11 = 0;
    goto LABEL_17;
  }
  v16 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v16;
  v17 = v9;
  HMLockObject(v9);
  if ( *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(*(_QWORD *)(v9 + 16) + 416LL) )
  {
    v13 = 5LL;
    goto LABEL_19;
  }
  v10 = *(_QWORD *)(v9 + 40);
  if ( *(char *)(v10 + 20) < 0 || *(char *)(v10 + 19) < 0 )
  {
    v13 = 1400LL;
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
    v13 = 87LL;
LABEL_19:
    v11 = 0;
    UserSetLastError(v13);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v15) = 8;
LABEL_10:
    v11 = ChangeWindowMessageFilterEx((struct tagWND *)v9, a2);
    if ( v11 && a4 )
    {
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v15;
    }
    goto LABEL_16;
  }
  v14 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    v14 = (__int64 *)MmUserProbeAddress;
  v15 = *v14;
  if ( (unsigned int)*v14 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL);
  v11 = 0;
LABEL_16:
  ThreadUnlock1();
LABEL_17:
  UserSessionSwitchLeaveCrit(v8);
  return v11;
}

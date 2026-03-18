/*
 * XREFs of NtUserIsTouchWindow @ 0x1C01F1BD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

_BOOL8 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rdx
  ULONG64 v6; // rcx
  _BOOL8 v7; // r8
  __int64 v8; // r9
  BOOL v9; // ebx
  int Prop; // eax

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    Prop = RealGetProp(*(_QWORD *)(v4 + 120), (unsigned __int16)gatomTouchFlags, 1LL);
    v6 = Prop & 0x10000;
    v7 = (Prop & 0x10000) != 0;
    v9 = (Prop & 0x10000) != 0;
    if ( (_DWORD)v6 && a2 )
    {
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_DWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v9 = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}

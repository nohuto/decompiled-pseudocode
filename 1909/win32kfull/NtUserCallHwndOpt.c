/*
 * XREFs of NtUserCallHwndOpt @ 0x1C011B4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserCallHwndOpt(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v8);
  v4 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_5;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (unsigned int)(v2 - 94) <= 1 )
    v4 = ((__int64 (__fastcall *)(__int64))*(&apfnSimpleCall + v2))(v5);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v8);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}

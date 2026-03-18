/*
 * XREFs of NtUserGetPrecisionTouchPadConfiguration @ 0x1C0002CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C003C8E0 (_GetPrecisionTouchPadConfiguration.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x1C0165E98 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetPrecisionTouchPadConfiguration(char *Address)
{
  __int64 v2; // rcx
  int PrecisionTouchPadConfiguration; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v5; // rcx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF
  char v10; // [rsp+80h] [rbp+18h] BYREF

  v7 = 0uLL;
  v8 = 0LL;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)&v9);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  if ( ((((__int64 (*)(void))PsGetCurrentProcessWow64Process)() == 0 ? 3 : 0) & (unsigned __int8)Address) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)(Address + 4) > MmUserProbeAddress || Address + 4 < Address )
    *(_BYTE *)MmUserProbeAddress = 0;
  LODWORD(v7) = *(_DWORD *)Address;
  if ( (_DWORD)v7 )
  {
    PrecisionTouchPadConfiguration = 0;
    UserSetLastStatus(-1073741822);
  }
  else
  {
    PrecisionTouchPadConfiguration = GetPrecisionTouchPadConfiguration(&v7);
    if ( PrecisionTouchPadConfiguration )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v2);
      ProbeForWrite(Address, 0x18uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      *(_OWORD *)Address = v7;
      *((_QWORD *)Address + 2) = v8;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v5);
  return PrecisionTouchPadConfiguration;
}

/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C012DD50
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _SetWindowStationUser @ 0x1C012DE5C (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, __int64 *a2, volatile void *a3, unsigned int a4)
{
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID Object; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  LOBYTE(v8) = 1;
  v9 = ValidateHwinsta(a1, v8, 0LL, &Object);
  v10 = 0;
  if ( v9 >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = *a2;
    if ( a3 )
      ProbeForRead(a3, a4, 4u);
    v10 = SetWindowStationUser(Object, &v17, a3, a4);
    ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v10;
}

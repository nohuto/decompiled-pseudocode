/*
 * XREFs of NtUserSetWindowStationUser @ 0x1C0113BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _SetWindowStationUser @ 0x1C0113CF0 (_SetWindowStationUser.c)
 */

__int64 __fastcall NtUserSetWindowStationUser(__int64 a1, __int64 *a2, volatile void *a3, unsigned int a4)
{
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  PVOID Object; // [rsp+28h] [rbp-30h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v15[32]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  LOBYTE(v8) = 1;
  v9 = ValidateHwinsta(a1, v8, 0LL, &Object);
  v10 = 0;
  if ( v9 >= 0 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *a2;
    if ( a3 )
    {
      if ( !a4 )
        goto LABEL_9;
      ProbeForRead(a3, a4, 4u);
    }
    v10 = SetWindowStationUser(Object, &v14, a3, a4);
LABEL_9:
    ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v11);
  return v10;
}

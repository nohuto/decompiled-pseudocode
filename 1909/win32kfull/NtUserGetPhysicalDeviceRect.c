/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C022D620
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( !a1 || !a2 )
  {
    v8 = 87LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v12, 0LL) )
  {
    v8 = 6LL;
LABEL_9:
    UserSetLastError(v8, v5, v6, v7);
    goto LABEL_10;
  }
  v9 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v9 = (_OWORD *)MmUserProbeAddress;
  *v9 = *v9;
  *a2 = *(_OWORD *)(v12 + 140);
  v4 = 1;
LABEL_10:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}

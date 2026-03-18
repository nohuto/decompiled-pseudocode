/*
 * XREFs of NtUserGetPointerDevice @ 0x1C022D740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01F0200 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  char v12; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v7 = 0;
  if ( !a1 || !a2 )
  {
    v8 = 87LL;
    goto LABEL_7;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v11, 0LL) )
  {
    v8 = 6LL;
LABEL_7:
    UserSetLastError(v8, v4, v5, v6);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  GetPointerDeviceInfoProperties((__int64)a2, v11);
  v7 = 1;
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}

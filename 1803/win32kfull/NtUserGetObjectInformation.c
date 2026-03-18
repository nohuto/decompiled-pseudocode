/*
 * XREFs of NtUserGetObjectInformation @ 0x1C00DFEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x1C00E0044 (_GetUserObjectInformation.c)
 */

__int64 __fastcall NtUserGetObjectInformation(HANDLE Handle, int a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  ULONG v9; // r8d
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  int UserObjectInformation; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18[4]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-30h] BYREF

  LODWORD(v18[0]) = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v9 = 4;
  if ( a2 != 1 )
    v9 = 2;
  ProbeForWrite(a3, a4, v9);
  if ( a5 )
  {
    v10 = a5;
    if ( (unsigned __int64)a5 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
  }
  if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) < 0 )
  {
    UserObjectInformation = 0;
  }
  else if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
  {
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v18);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v18[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL, v11);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v14, v13, v15, v16);
  return UserObjectInformation;
}

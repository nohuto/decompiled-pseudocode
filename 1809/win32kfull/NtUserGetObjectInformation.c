/*
 * XREFs of NtUserGetObjectInformation @ 0x1C00FA2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x1C00FA41C (_GetUserObjectInformation.c)
 */

__int64 __fastcall NtUserGetObjectInformation(HANDLE Handle, int a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  ULONG v9; // r8d
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int UserObjectInformation; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20[4]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v22[24]; // [rsp+58h] [rbp-30h] BYREF

  LODWORD(v20[0]) = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
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
    UserObjectInformation = GetUserObjectInformation(Handle, (__int64)v20);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v20[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL, v11, v12, v13);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return UserObjectInformation;
}

/*
 * XREFs of NtUserGetObjectInformation @ 0x1C00BEF20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     _GetUserObjectInformation @ 0x1C00BEBCC (_GetUserObjectInformation.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserGetObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4, _DWORD *a5)
{
  ULONG v9; // r8d
  _DWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int UserObjectInformation; // ebx
  __int64 v15; // rcx
  __int64 v17[4]; // [rsp+30h] [rbp-58h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-30h] BYREF

  LODWORD(v17[0]) = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
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
    UserObjectInformation = GetUserObjectInformation(Handle, a2, a3, a4, (int *)v17);
    SetHandleFlag(Handle, 2LL, 0LL);
    if ( a5 )
      *a5 = v17[0];
  }
  else
  {
    UserObjectInformation = 0;
    UserSetLastError(8LL, v11, v12, v13);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  UserSessionSwitchLeaveCrit(v15);
  return UserObjectInformation;
}

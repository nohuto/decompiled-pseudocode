/*
 * XREFs of NtUserSetObjectInformation @ 0x1C021CF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _SetUserObjectInformation @ 0x1C01C42F4 (_SetUserObjectInformation.c)
 */

__int64 __fastcall NtUserSetObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  SIZE_T v4; // rbx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+48h] [rbp-20h] BYREF

  v4 = a4;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  if ( a2 == 7 )
  {
    v9 = 0;
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8);
    ProbeForRead(a3, v4, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL) >= 0 )
    {
      if ( (unsigned int)SetHandleFlag(Handle, 2LL, 1LL) )
      {
        v9 = SetUserObjectInformation(Handle, a2, a3, v4);
        SetHandleFlag(Handle, 2LL, 0LL);
      }
      else
      {
        v9 = 0;
        UserSetLastError(8LL, v11, v12, v13);
      }
    }
    else
    {
      v9 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v9;
}

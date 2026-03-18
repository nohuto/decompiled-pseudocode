/*
 * XREFs of NtUserGetPointerDeviceCursors @ 0x1C022DE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceCursors @ 0x1C01F02CC (_GetPointerDeviceCursors.c)
 */

__int64 __fastcall NtUserGetPointerDeviceCursors(__int64 a1, _DWORD *a2, volatile void *a3)
{
  int PointerDeviceCursors; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  _BYTE v15[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  PointerDeviceCursors = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  if ( !a1 || !a2 )
  {
    v10 = 87LL;
    goto LABEL_21;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v16, 0LL) )
  {
    v10 = 6LL;
LABEL_21:
    PointerDeviceCursors = 0;
    UserSetLastError(v10, v7, v8, v9);
    goto LABEL_22;
  }
  v11 = *(unsigned int *)(v16 + 980);
  if ( a3 )
  {
    v12 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v12 = (_DWORD *)MmUserProbeAddress;
    if ( *v12 >= (unsigned int)v11 )
    {
      ProbeForWrite(a3, 8 * v11, 8u);
      PointerDeviceCursors = GetPointerDeviceCursors(v16, v11, (__int64)a3);
      if ( PointerDeviceCursors )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_DWORD *)MmUserProbeAddress;
        *a2 = v11;
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v11;
      PointerDeviceCursors = 0;
      UserSetLastError(122LL, v7, v8, v9);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = v11;
  }
LABEL_22:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v13);
  return PointerDeviceCursors;
}

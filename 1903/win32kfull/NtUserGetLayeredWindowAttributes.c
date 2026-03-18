/*
 * XREFs of NtUserGetLayeredWindowAttributes @ 0x1C022D4E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetLayeredWindowAttributes @ 0x1C01462B8 (_GetLayeredWindowAttributes.c)
 */

__int64 __fastcall NtUserGetLayeredWindowAttributes(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int LayeredWindowAttributes; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  BYTE v16[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+24h] [rbp-34h] BYREF
  unsigned int v18[6]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp-18h] BYREF

  v17 = 0;
  v16[0] = 0;
  v18[0] = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
  v8 = ValidateHwnd(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_2;
  if ( (unsigned int)IsWindowDesktopComposed(v8) && (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 232LL) & 0x20) != 0 )
  {
    UserSetLastError(87LL, v11, v12, v13);
LABEL_2:
    LayeredWindowAttributes = 0;
    goto LABEL_19;
  }
  LayeredWindowAttributes = GetLayeredWindowAttributes(v9, &v17, v16, v18);
  if ( LayeredWindowAttributes )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = v17;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_BYTE *)MmUserProbeAddress;
      *a3 = v16[0];
    }
    if ( a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v18[0] & 3;
    }
  }
LABEL_19:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  UserSessionSwitchLeaveCrit(v14);
  return LayeredWindowAttributes;
}

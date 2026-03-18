/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C022E060
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r14d
  unsigned int *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // r15d
  unsigned __int64 v17; // rcx
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  const void *v23; // rsi
  __int64 v24; // rcx
  _QWORD v26[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v27; // [rsp+40h] [rbp-68h]
  int v28; // [rsp+4Ch] [rbp-5Ch]
  _BYTE v29[16]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v27 = 0LL;
  v26[0] = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  if ( !a1 || !a2 )
  {
    v6 = 0;
    UserSetLastError(87LL, v7, v8, v9);
    goto LABEL_32;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v26, 0LL) )
  {
    v6 = 0;
    UserSetLastError(6LL, v10, v11, v12);
    goto LABEL_29;
  }
  v13 = *(_DWORD *)(v26[0] + 336LL);
  if ( !a3 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v13;
    goto LABEL_29;
  }
  v14 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v15 = *v14;
  if ( v15 < v13 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (unsigned int *)MmUserProbeAddress;
    *a2 = v13;
    v6 = 0;
    UserSetLastError(122LL, v10, v11, v12);
    goto LABEL_29;
  }
  v16 = v15 - *(_DWORD *)(v26[0] + 984LL);
  v17 = 28LL * v15;
  v30 = v17;
  if ( v17 <= 0xFFFFFFFF && v16 )
  {
    if ( (unsigned int)v17 >= 0x2710000 )
    {
LABEL_18:
      v6 = 0;
      UserSetLastError(8LL, v10, v11, v12);
      goto LABEL_29;
    }
    v28 = 28 * v13;
    v18 = 28 * v13;
    ProbeForWrite(a3, 28 * v13, 8u);
    if ( 28 * v13 - 1 > 0x270FFFF )
    {
      v6 = 0;
      UserSetLastError(1359LL, v19, v20, v21);
      goto LABEL_29;
    }
    v22 = Win32AllocPoolZInit(v18, 1668313941LL);
    v23 = (const void *)v22;
    v27 = v22;
    if ( !v22 )
      goto LABEL_18;
    v6 = RIMGetPointerDeviceProperties(v26[0], v13, v22, v16);
    if ( v6 )
    {
      memmove((void *)a3, v23, v18);
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v13;
      goto LABEL_29;
    }
  }
  v6 = 0;
  UserSetLastError(87LL, v10, v11, v12);
LABEL_29:
  if ( v27 )
    Win32FreePool(v27);
LABEL_32:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v24);
  return v6;
}

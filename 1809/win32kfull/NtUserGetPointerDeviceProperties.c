/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C02161B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     IsPointerDeviceAccessible @ 0x1C01BBDE8 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C01DAB38 (_FindPointerDevice.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(unsigned __int64 a1, unsigned int *a2, volatile void *a3)
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
  unsigned int v15; // r15d
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  const void *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v32[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h]
  unsigned int v34; // [rsp+4Ch] [rbp-5Ch]
  int v35; // [rsp+50h] [rbp-58h]
  _BYTE v36[16]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]
  unsigned int v38; // [rsp+B0h] [rbp+8h]

  v33 = 0LL;
  v32[0] = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v36);
  if ( !a1 || !a2 )
  {
    v6 = 0;
    UserSetLastError(87LL, v7, v8, v9);
    goto LABEL_35;
  }
  if ( !(unsigned int)FindPointerDevice(a1, v32, 0LL) )
  {
    v6 = 0;
    goto LABEL_32;
  }
  if ( (unsigned int)IsPointerDeviceAccessible(v32[0]) )
  {
    v13 = *(_DWORD *)(v11 + 328);
    if ( !a3 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v13;
      goto LABEL_32;
    }
    v14 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v38 = *v14;
    if ( *v14 < v13 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (unsigned int *)MmUserProbeAddress;
      *a2 = v13;
      v6 = 0;
      UserSetLastError(122LL, v10, v11, v12);
      goto LABEL_32;
    }
    v15 = v38 - *(_DWORD *)(v32[0] + 976);
    v16 = 28LL * v38;
    v37 = v16;
    v10 = 0xFFFFFFFFLL;
    v17 = -1;
    if ( v16 <= 0xFFFFFFFF )
      v17 = 28 * v38;
    v34 = v17;
    if ( v16 <= 0xFFFFFFFF )
    {
      if ( v15 )
      {
        if ( v17 >= 0x2710000 )
        {
          v6 = 0;
          UserSetLastError(8LL, 0xFFFFFFFFLL, v11, v12);
          goto LABEL_32;
        }
        v35 = 28 * v13;
        v18 = 28 * v13;
        ProbeForWrite(a3, 28 * v13, 8u);
        if ( 28 * v13 - 1 > 0x270FFFF )
        {
          v6 = 0;
          UserSetLastError(1359LL, v19, v20, v21);
          goto LABEL_32;
        }
        v22 = Win32AllocPoolZInit(v18, 1668313941LL);
        v26 = (const void *)v22;
        v33 = v22;
        if ( !v22 )
        {
          v6 = 0;
          UserSetLastError(8LL, v23, v24, v25);
          goto LABEL_32;
        }
        v6 = RIMGetPointerDeviceProperties(v32[0], v13, v22, v15);
        if ( v6 )
        {
          memmove((void *)a3, v26, v18);
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (unsigned int *)MmUserProbeAddress;
          *a2 = v13;
          goto LABEL_32;
        }
      }
    }
  }
  v6 = 0;
  UserSetLastError(87LL, v10, v11, v12);
LABEL_32:
  if ( v33 )
    Win32FreePool(v33);
LABEL_35:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v36);
  UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
  return v6;
}

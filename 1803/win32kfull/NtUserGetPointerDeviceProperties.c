/*
 * XREFs of NtUserGetPointerDeviceProperties @ 0x1C00E0730
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsPointerDeviceAccessible @ 0x1C00E0C18 (IsPointerDeviceAccessible.c)
 *     _FindPointerDevice @ 0x1C00E0E14 (_FindPointerDevice.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall NtUserGetPointerDeviceProperties(__int64 a1, unsigned int *a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r14d
  unsigned int *v11; // rax
  unsigned int v12; // r15d
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  const void *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD v25[3]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v26; // [rsp+40h] [rbp-68h]
  unsigned int v27; // [rsp+4Ch] [rbp-5Ch]
  int v28; // [rsp+50h] [rbp-58h]
  _BYTE v29[16]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]
  unsigned int v31; // [rsp+B0h] [rbp+8h]

  v26 = 0LL;
  v25[0] = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v29);
  if ( !a1 || !a2 )
  {
    v6 = 0;
    UserSetLastError(87LL, v7);
    goto LABEL_30;
  }
  if ( (unsigned int)FindPointerDevice(a1, v25, 0LL) )
  {
    if ( (unsigned int)IsPointerDeviceAccessible(v25[0]) )
    {
      v10 = *(_DWORD *)(v9 + 296);
      if ( !a3 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v10;
        goto LABEL_28;
      }
      v11 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v11 = (unsigned int *)MmUserProbeAddress;
      v31 = *v11;
      if ( *v11 < v10 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (unsigned int *)MmUserProbeAddress;
        *a2 = v10;
        v6 = 0;
        UserSetLastError(122LL, v8);
        goto LABEL_28;
      }
      v12 = v31 - *(_DWORD *)(v25[0] + 944LL);
      v13 = 28LL * v31;
      v30 = v13;
      v8 = 0xFFFFFFFFLL;
      v14 = -1;
      if ( v13 <= 0xFFFFFFFF )
        v14 = 28 * v31;
      v27 = v14;
      if ( v13 <= 0xFFFFFFFF )
      {
        if ( v12 )
        {
          if ( v14 >= 0x2710000 )
          {
            v6 = 0;
            UserSetLastError(8LL, 0xFFFFFFFFLL);
            goto LABEL_28;
          }
          v28 = 28 * v10;
          v15 = 28 * v10;
          ProbeForWrite(a3, 28 * v10, 8u);
          if ( 28 * v10 - 1 > 0x270FFFF )
          {
            v6 = 0;
            UserSetLastError(1359LL, v16);
            goto LABEL_28;
          }
          v17 = Win32AllocPoolZInit(v15, 1668313941LL);
          v19 = (const void *)v17;
          v26 = v17;
          if ( !v17 )
          {
            v6 = 0;
            UserSetLastError(8LL, v18);
            goto LABEL_28;
          }
          v6 = RIMGetPointerDeviceProperties(v25[0], v10, v17, v12);
          if ( v6 )
          {
            memmove((void *)a3, v19, v15);
            if ( (unsigned __int64)a2 >= MmUserProbeAddress )
              a2 = (unsigned int *)MmUserProbeAddress;
            *a2 = v10;
            goto LABEL_28;
          }
        }
      }
    }
    v6 = 0;
    UserSetLastError(87LL, v8);
  }
  else
  {
    v6 = 0;
  }
LABEL_28:
  if ( v26 )
    Win32FreePool(v26);
LABEL_30:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v29);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v6;
}

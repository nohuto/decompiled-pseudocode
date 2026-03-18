/*
 * XREFs of xxxConsoleControl @ 0x1C001A2C8
 * Callers:
 *     NtUserConsoleControl @ 0x1C001A1B0 (NtUserConsoleControl.c)
 * Callees:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C001A620 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C001ACD4 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     DesktopAlloc @ 0x1C0022E10 (DesktopAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00AF848 (xxxClientFreeWindowClassExtraBytes.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C020D4C8 (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  PVOID v11; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  char *v22; // rcx
  _DWORD *v23; // r14
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 CurrentProcess; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  __int64 v28; // [rsp+68h] [rbp-50h] BYREF
  __int64 v29; // [rsp+70h] [rbp-48h]
  __int64 v30; // [rsp+78h] [rbp-40h]
  const void *v31; // [rsp+80h] [rbp-38h]
  int v32; // [rsp+D8h] [rbp+20h]

  v5 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v6 = a1 - 1;
  if ( !v6 )
  {
    if ( a3 == 8 )
      return (unsigned int)xxxUserNotifyConsoleApplication(a2);
    return (unsigned int)-1073741811;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( a3 == 24 )
    {
      xxxbFullscreenSwitch(*(unsigned int *)a2, *((_QWORD *)a2 + 1));
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a3 == 16 )
      {
        v25 = ValidateHwnd(*(_QWORD *)a2);
        if ( v25 )
        {
          *(_DWORD *)(*(_QWORD *)(v25 + 16) + 876LL) = *((_DWORD *)a2 + 2);
          return v5;
        }
      }
      return (unsigned int)-1073741811;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      if ( a3 == 16 )
      {
        v5 = ObReferenceObjectByHandle(*(HANDLE *)a2, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        if ( (v5 & 0x80000000) == 0 )
        {
          v11 = Object;
          if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
          {
            ProcessWin32Process = PsGetProcessWin32Process(v11);
            if ( ProcessWin32Process )
            {
              if ( *((_DWORD *)a2 + 2) )
                *(_DWORD *)(ProcessWin32Process + 12) |= 0x4080000u;
              else
                *(_DWORD *)(ProcessWin32Process + 12) &= 0xFBF7FFFF;
            }
            else
            {
              v5 = -1073741816;
            }
          }
          else
          {
            v5 = -1073741811;
          }
          ObfDereferenceObject(v11);
        }
        return v5;
      }
      return (unsigned int)-1073741811;
    }
    if ( v10 != 1 )
      return (unsigned int)-1073741821;
    if ( a3 != 16 )
      return (unsigned int)-1073741811;
    v14 = ValidateHwnd(*(_QWORD *)a2);
    v16 = v14;
    if ( !v14 )
      return v5;
    v17 = v14 + 40;
    v18 = *(_QWORD *)(v14 + 40);
    if ( (*(_BYTE *)(v18 + 18) & 4) != 0 || *(char *)(v18 + 19) < 0 || *(int *)(v18 + 200) < 8 )
      return v5;
    if ( *(_QWORD *)(*(_QWORD *)(v14 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v18, v15) )
      return (unsigned int)-1073741790;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v28 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v28;
    v29 = v16;
    HMLockObject(v16);
    v22 = *(char **)v17;
    if ( (*(_DWORD *)(*(_QWORD *)v17 + 232LL) & 0x800) != 0 )
    {
      v23 = (_DWORD *)(*((_QWORD *)v22 + 37) + *(_QWORD *)(*(_QWORD *)(v16 + 24) + 128LL));
    }
    else
    {
      v23 = (_DWORD *)DesktopAlloc(*(_QWORD *)(v16 + 24), *((unsigned int *)v22 + 50), 0LL);
      if ( !v23 )
      {
        v5 = -1073741801;
LABEL_33:
        ThreadUnlock1(v22, v20, v21);
        return v5;
      }
      if ( *(_QWORD *)(*(_QWORD *)v17 + 296LL) )
      {
        CurrentProcess = PsGetCurrentProcess(v22, v20, v21, v24);
        v32 = *(_DWORD *)(*(_QWORD *)v17 + 200LL);
        v31 = *(const void **)(*(_QWORD *)v17 + 296LL);
        memmove(v23, v31, v32);
        if ( (*(_DWORD *)(CurrentProcess + 780) & 0x40000008) == 0 )
          xxxClientFreeWindowClassExtraBytes(v16, *(_QWORD *)(*(_QWORD *)(v16 + 40) + 296LL));
      }
      v22 = (char *)v23 - *(_QWORD *)(*(_QWORD *)(v16 + 24) + 128LL);
      *(_QWORD *)(*(_QWORD *)v17 + 296LL) = v22;
    }
    if ( v23 )
    {
      *v23 = *((_DWORD *)a2 + 2);
      v23[1] = *((_DWORD *)a2 + 3);
    }
    *(_DWORD *)(*(_QWORD *)v17 + 232LL) |= 0x800u;
    goto LABEL_33;
  }
  if ( a3 == 24 )
    xxxSetConsoleCaretInfo(a2);
  return a3 != 24 ? 0xC000000D : 0;
}

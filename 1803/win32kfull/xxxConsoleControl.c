/*
 * XREFs of xxxConsoleControl @ 0x1C0011F74
 * Callers:
 *     NtUserConsoleControl @ 0x1C0011E60 (NtUserConsoleControl.c)
 * Callees:
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0010C3C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C00122C0 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     DesktopAlloc @ 0x1C005E320 (DesktopAlloc.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00F32D4 (xxxClientFreeWindowClassExtraBytes.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     xxxbFullscreenSwitch @ 0x1C01D27FC (xxxbFullscreenSwitch.c)
 */

__int64 __fastcall xxxConsoleControl(int a1, struct _CONSOLE_PROCESS_INFO *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v17; // r8
  __int64 v18; // r14
  _DWORD *v19; // r14
  PVOID v20; // rdi
  __int64 ProcessWin32Process; // rax
  int v22; // ecx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 CurrentProcess; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  const void *v28; // [rsp+68h] [rbp-50h]
  _QWORD v29[8]; // [rsp+78h] [rbp-40h] BYREF
  int v30; // [rsp+D8h] [rbp+20h]

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
  if ( !v8 )
  {
    if ( a3 == 24 )
      xxxSetConsoleCaretInfo(a2);
    return a3 != 24 ? 0xC000000D : 0;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a3 == 16 )
    {
      v24 = ValidateHwnd(*(_QWORD *)a2);
      if ( v24 )
      {
        *(_DWORD *)(*(_QWORD *)(v24 + 16) + 868LL) = *((_DWORD *)a2 + 2);
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
        v20 = Object;
        if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
        {
          ProcessWin32Process = PsGetProcessWin32Process(v20);
          if ( ProcessWin32Process )
          {
            v22 = *(_DWORD *)(ProcessWin32Process + 12);
            if ( *((_DWORD *)a2 + 2) )
              v23 = v22 | 0x4080000;
            else
              v23 = v22 & 0xFBF7FFFF;
            *(_DWORD *)(ProcessWin32Process + 12) = v23;
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
        ObfDereferenceObject(v20);
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( v10 != 1 )
    return (unsigned int)-1073741821;
  if ( a3 != 16 )
    return (unsigned int)-1073741811;
  v11 = ValidateHwnd(*(_QWORD *)a2);
  v12 = v11;
  if ( v11 )
  {
    v13 = v11 + 40;
    v14 = *(_QWORD *)(v11 + 40);
    if ( (*(_BYTE *)(v14 + 18) & 4) == 0 && *(char *)(v14 + 19) >= 0 && *(int *)(v14 + 200) >= 8 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v14) )
        return (unsigned int)-1073741790;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v29[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v29;
      v29[1] = v12;
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v18 = *(_QWORD *)v13;
      if ( (*(_DWORD *)(*(_QWORD *)v13 + 232LL) & 0x800) != 0 )
      {
        v19 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 128LL) + *(_QWORD *)(v18 + 296));
      }
      else
      {
        v19 = (_DWORD *)DesktopAlloc(*(_QWORD *)(v12 + 24), *(unsigned int *)(v18 + 200), 0LL);
        if ( !v19 )
        {
          v5 = -1073741801;
LABEL_18:
          ThreadUnlock1(ThreadWin32Thread, v15, v17);
          return v5;
        }
        if ( *(_QWORD *)(*(_QWORD *)v13 + 296LL) )
        {
          CurrentProcess = PsGetCurrentProcess(ThreadWin32Thread, v15);
          v30 = *(_DWORD *)(*(_QWORD *)v13 + 200LL);
          v28 = *(const void **)(*(_QWORD *)v13 + 296LL);
          memmove(v19, v28, v30);
          if ( (*(_DWORD *)(CurrentProcess + 772) & 0x40000008) == 0 )
            xxxClientFreeWindowClassExtraBytes(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 296LL));
        }
        ThreadWin32Thread = (__int64)v19 - *(_QWORD *)(*(_QWORD *)(v12 + 24) + 128LL);
        *(_QWORD *)(*(_QWORD *)v13 + 296LL) = ThreadWin32Thread;
      }
      if ( v19 )
      {
        *v19 = *((_DWORD *)a2 + 2);
        v19[1] = *((_DWORD *)a2 + 3);
      }
      *(_DWORD *)(*(_QWORD *)v13 + 232LL) |= 0x800u;
      goto LABEL_18;
    }
  }
  return v5;
}

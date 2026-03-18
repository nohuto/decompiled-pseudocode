/*
 * XREFs of NtUserGetGuiResources @ 0x1C01337D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetGuiResources(HANDLE Handle, unsigned int a2)
{
  PVOID v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _DWORD *CurrentProcessWin32Process; // rax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int *v14; // rax
  unsigned int PeakHandleCount; // eax
  NTSTATUS v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v9 = 0;
  if ( a2 > 4 )
    goto LABEL_11;
  if ( Handle == (HANDLE)-2LL )
  {
    if ( a2 )
    {
      v12 = a2 - 1;
      if ( !v12 )
      {
        v14 = (unsigned int *)giheCount;
        goto LABEL_18;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 2 )
          goto LABEL_10;
        v14 = (unsigned int *)giheCountPeak;
LABEL_18:
        v9 = *v14;
        goto LABEL_10;
      }
      PeakHandleCount = GreGetPeakHandleCount();
    }
    else
    {
      PeakHandleCount = GreGetHandleCount();
    }
    v9 = PeakHandleCount;
    goto LABEL_10;
  }
  if ( Handle == (HANDLE)-1LL )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process(v6);
    goto LABEL_5;
  }
  v16 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v4 = Object;
  if ( v16 < 0 )
  {
LABEL_11:
    UserSetLastError(87LL, v5, v7, v8);
    goto LABEL_10;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) != gSessionId )
    goto LABEL_25;
  CurrentProcessWin32Process = (_DWORD *)PsGetProcessWin32Process(v4);
LABEL_5:
  if ( CurrentProcessWin32Process )
  {
    if ( a2 )
    {
      v17 = a2 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 2 )
            v9 = CurrentProcessWin32Process[18];
        }
        else
        {
          v9 = CurrentProcessWin32Process[16];
        }
      }
      else
      {
        v9 = CurrentProcessWin32Process[17];
      }
    }
    else
    {
      v9 = CurrentProcessWin32Process[15];
    }
    goto LABEL_8;
  }
LABEL_25:
  UserSetLastError(87LL, v5, v7, v8);
LABEL_8:
  if ( v4 )
    ObfDereferenceObject(v4);
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}

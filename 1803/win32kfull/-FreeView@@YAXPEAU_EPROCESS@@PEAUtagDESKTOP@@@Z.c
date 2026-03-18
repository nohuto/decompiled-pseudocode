/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0011D80
 * Callers:
 *     UnmapDesktop @ 0x1C0011AF0 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1C010FA50 (FreeDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C0011D20 (GetDesktopView.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rsi
  int v5; // ebp
  _QWORD *DesktopView; // rdi
  _QWORD **v7; // rsi
  _QWORD *i; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    if ( ProcessWin32Process )
    {
      if ( (unsigned int)PsGetProcessSessionId(PROCESS) == *(_DWORD *)a2 )
      {
        v5 = 0;
      }
      else
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v5 = 1;
      }
      DesktopView = GetDesktopView(ProcessWin32Process, (__int64)a2);
      if ( DesktopView )
      {
        PsGetProcessSessionId(PROCESS);
        MmUnmapViewOfSection(PROCESS, DesktopView[2]);
        v7 = (_QWORD **)(ProcessWin32Process + 696);
        for ( i = *v7; i; i = (_QWORD *)*i )
        {
          if ( i == DesktopView )
            break;
          v7 = (_QWORD **)i;
        }
        *v7 = (_QWORD *)*DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v5 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}

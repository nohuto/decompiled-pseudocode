/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0021EB8
 * Callers:
 *     UnmapDesktop @ 0x1C0021A50 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1C0117580 (FreeDesktop.c)
 * Callees:
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0021E80 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rsi
  int v5; // ebp
  _QWORD *DesktopView; // rdi
  _QWORD **v7; // rsi
  _QWORD *i; // rcx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    if ( ProcessWin32Process )
    {
      memset(&ApcState, 0, sizeof(ApcState));
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
        CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(&v9);
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

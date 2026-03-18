/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01D6690
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edx

  v3 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0 )
  {
    if ( (unsigned int)IsWindowSubjectToShellWindowBehavior((__int64)a1, 12LL, a3) )
    {
      v6 = *((_QWORD *)a1 + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 328);
        if ( v7 )
        {
          if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v7 + 16), 0) )
          {
            v8 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
            if ( v8 == gpqForeground && *(_QWORD *)(v8 + 120) == *(_QWORD *)(gpqForeground + 120LL) )
            {
              v9 = 4;
              if ( a2 != 61456 )
                v9 = 8;
              return (unsigned int)IsShellWndManagementBehaviorEnabled(v6, v9);
            }
          }
        }
      }
    }
  }
  return v3;
}

/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01FB330
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C006A128 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edx

  v2 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0 )
  {
    if ( IsWindowSubjectToShellWindowBehavior(a1, 12LL) )
    {
      v5 = *((_QWORD *)a1 + 3);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 328);
        if ( v6 )
        {
          if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v6 + 16), 0) )
          {
            v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
            if ( v7 == gpqForeground && *(_QWORD *)(v7 + 120) == *(_QWORD *)(gpqForeground + 120LL) )
            {
              v8 = 4;
              if ( a2 != 61456 )
                v8 = 8;
              return (unsigned int)IsShellWndManagementBehaviorEnabled(v5, v8);
            }
          }
        }
      }
    }
  }
  return v2;
}

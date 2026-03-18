/*
 * XREFs of ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0211D7C
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 * Callees:
 *     ?IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z @ 0x1C0023E94 (-IsWindowSubjectToShellWindowBehavior@@YA_NPEAUtagWND@@K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0115874 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 */

__int64 __fastcall ShouldApplyShellWindowingBehaviorToSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // edx

  v3 = 0;
  if ( ((a2 - 61440) & 0xFFFFFFEF) == 0 )
  {
    if ( IsWindowSubjectToShellWindowBehavior(a1, 12LL, a3) )
    {
      v6 = *((_QWORD *)a1 + 3);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 328);
        if ( v7 )
        {
          if ( !(unsigned int)IsThreadHung(*(_QWORD **)(v7 + 16), 0)
            && (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
          {
            v8 = 4;
            if ( a2 != 61456 )
              v8 = 8;
            return (unsigned int)IsShellWndManagementBehaviorEnabled(v6, v8);
          }
        }
      }
    }
  }
  return v3;
}

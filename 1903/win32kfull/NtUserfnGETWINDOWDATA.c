/*
 * XREFs of NtUserfnGETWINDOWDATA @ 0x1C01041E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z @ 0x1C0229200 (-GetWindowData@@YA_JPEAUtagWND@@_JH_N@Z.c)
 */

__int64 __fastcall NtUserfnGETWINDOWDATA(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5, int a6)
{
  __int64 WindowData; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // r15
  __int64 v13; // r13
  _BYTE *v14; // rdx
  __int64 v16; // rdi
  unsigned int v17; // [rsp+88h] [rbp+10h]

  v17 = a2;
  WindowData = 0LL;
  if ( a6 == 689 && a4 < 3 )
  {
    v12 = (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 12) & 0x80) != 0;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x800) != 0 )
    {
      return GetWindowData(a1, a4, a3, v12);
    }
    else
    {
      v13 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
      if ( v13 == PsGetCurrentProcessWin32Process(v11, v10) )
      {
        v14 = (_BYTE *)a5;
        if ( a5 >= MmUserProbeAddress )
          v14 = (_BYTE *)MmUserProbeAddress;
        *v14 = 1;
      }
      else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) != 0 )
      {
        WindowData = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, ULONG64))qword_1C032B828)(
                       a1,
                       v17,
                       a3,
                       a4,
                       a5);
        if ( a4 == 2 && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 12LL) & 0x80u) != 0 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 1) == 0 || a3 )
            v16 = a3 + 4;
          else
            v16 = 17LL;
          return (((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64))qword_1C032B828)(a1, v17, v16) << 32) | WindowData;
        }
      }
      else if ( (unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, v13 + 872) )
      {
        KeAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a1 + 2) + 416LL));
        WindowData = GetWindowData(a1, a4, a3, v12);
        KeDetachProcess();
      }
    }
  }
  return WindowData;
}

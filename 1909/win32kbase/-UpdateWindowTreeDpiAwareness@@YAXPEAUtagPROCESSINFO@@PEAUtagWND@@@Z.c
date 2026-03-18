/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0029D6C
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0089090 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdi
  unsigned __int64 *i; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  char *v8; // rbp
  __int64 v9; // rcx
  _QWORD *v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax

  if ( (int)IsBuildHwndListSupported() < 0 )
    v4 = 0LL;
  else
    v4 = BuildHwndList(a2, 1LL, 0LL);
  if ( v4 )
  {
    for ( i = (unsigned __int64 *)(v4 + 32); ; ++i )
    {
      v6 = *i;
      if ( *i == 1 )
        break;
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( (unsigned __int64)(unsigned __int16)v6 < *((_QWORD *)gpsi + 1) )
      {
        v8 = (char *)qword_1C0210758 + (unsigned int)(unsigned __int16)v6 * dword_1C0210760;
        GetDomainLockRef(14LL, (unsigned __int16)v6, v7);
        v10 = gpKernelHandleTable;
        v11 = v6 >> 16;
        v12 = 3LL * (unsigned int)((v8 - (char *)qword_1C0210758) >> 5);
        if ( ((_WORD)v11 == *((_WORD *)v8 + 13)
           || (_WORD)v11 == 0xFFFF
           || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v9))
          && (v8[25] & 1) == 0
          && v8[24] == 1 )
        {
          v13 = v10[v12];
          if ( v13 )
          {
            if ( (int)IsUpdateWindowMonitorSupported() >= 0
              && *(struct tagPROCESSINFO **)(*(_QWORD *)(v13 + 16) + 416LL) == a1 )
            {
              *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) = *((_DWORD *)a1 + 70);
              v14 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 256LL));
              UpdateWindowMonitor(v13, v14);
            }
          }
        }
      }
    }
    FreeHwndList(v4);
  }
}

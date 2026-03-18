/*
 * XREFs of zzzAttachThreadInput @ 0x1C00123D8
 * Callers:
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0010D60 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetModernAppWindow @ 0x1C0010F40 (xxxSetModernAppWindow.c)
 *     NtUserAttachThreadInput @ 0x1C0011E10 (NtUserAttachThreadInput.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2E04 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E3B58 (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00128B4 (zzzReattachThreads.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D6994 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 *i; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 416);
      if ( v7 != *(_QWORD *)(a1 + 416) || *(_QWORD *)(gptiCurrent + 416LL) != v7 )
      {
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, *(_QWORD *)(a2 + 424) + 436LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0 )
        {
          v16 = *(_QWORD *)(a2 + 424);
          v17 = a2;
LABEL_39:
          EtwTraceUIPIInputError(gptiCurrent, v17, v16, *(_QWORD *)(v16 + 436), 2);
          return 3221225506LL;
        }
        if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 872LL, *(_QWORD *)(a1 + 424) + 436LL)
          && *(int *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) >= 0
          || (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL))
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 416))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 416)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) & 0x100) == 0 )
        {
          v16 = *(_QWORD *)(a1 + 424);
          v17 = a1;
          goto LABEL_39;
        }
      }
    }
    if ( (*(_DWORD *)(a2 + 480) & 0x40) != 0
      || (*(_DWORD *)(a1 + 480) & 0x40) != 0
      || *(_QWORD *)(a2 + 448) != *(_QWORD *)(a1 + 448) )
    {
      return 3221225506LL;
    }
    if ( v3 )
    {
      for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          v10 = Win32AllocPool(32LL, 1767994197LL);
          if ( v10 )
          {
            *(_QWORD *)(v10 + 8) = a1;
            *(_QWORD *)(v10 + 16) = a2;
            *(_DWORD *)(v10 + 24) = 1;
            *(_QWORD *)v10 = gpai;
            gpai = v10;
            goto LABEL_22;
          }
          return 3221225495LL;
        }
        v9 = i[2];
        if ( v9 == a2 && i[1] == a1 )
          break;
        if ( v9 == a1 && i[1] == a2 )
          break;
      }
      v18 = *((_DWORD *)i + 6);
      if ( v18 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v18 + 1;
      return 0LL;
    }
    v12 = (__int64 *)gpai;
    v13 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v14 = v13[2];
        if ( v14 == a2 && v13[1] == a1 )
          break;
        if ( v14 == a1 && v13[1] == a2 )
          break;
        v12 = v13;
        v13 = (__int64 *)*v13;
        if ( !v13 )
          return 3221225485LL;
      }
      --*((_DWORD *)v13 + 6);
      v15 = (__int64 *)*v12;
      if ( !*(_DWORD *)(*v12 + 24) || v6 )
      {
        *v12 = *v15;
        Win32FreePool(v15);
LABEL_22:
        *(_DWORD *)(a2 + 1224) |= 0x200u;
        *(_DWORD *)(a1 + 1224) |= 0x200u;
        if ( (*(_DWORD *)(a1 + 1224) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 728), 1, 0);
        if ( (*(_DWORD *)(a2 + 1224) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 728), 1, 0);
        if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 48LL)
          && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL) )
        {
          zzzReattachThreads(0LL, a1, a2);
        }
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}

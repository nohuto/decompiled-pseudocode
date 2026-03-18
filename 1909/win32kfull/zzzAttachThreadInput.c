/*
 * XREFs of zzzAttachThreadInput @ 0x1C0135A64
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C010A194 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserAttachThreadInput @ 0x1C0137080 (NtUserAttachThreadInput.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E2C84 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E39D8 (TryDetachShellFrame.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01D6814 (ExemptedFromImmersiveRestrictions.c)
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
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax

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
          v20 = *(_QWORD *)(a2 + 424);
          v21 = a2;
LABEL_39:
          EtwTraceUIPIInputError(gptiCurrent, v21, v20, *(_QWORD *)(v20 + 436), 2);
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
          v20 = *(_QWORD *)(a1 + 424);
          v21 = a1;
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
          v12 = v10;
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
      v22 = *((_DWORD *)i + 6);
      if ( v22 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v22 + 1;
      return 0LL;
    }
    v16 = (__int64 *)gpai;
    v17 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v18 = v17[2];
        if ( v18 == a2 && v17[1] == a1 )
          break;
        if ( v18 == a1 && v17[1] == a2 )
          break;
        v16 = v17;
        v17 = (__int64 *)*v17;
        if ( !v17 )
          return 3221225485LL;
      }
      --*((_DWORD *)v17 + 6);
      v19 = (__int64 *)*v16;
      if ( !*(_DWORD *)(*v16 + 24) || v6 )
      {
        *v16 = *v19;
        Win32FreePool(v19);
LABEL_22:
        *(_DWORD *)(a2 + 1224) |= 0x200u;
        *(_DWORD *)(a1 + 1224) |= 0x200u;
        if ( (*(_DWORD *)(a1 + 1224) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 728), 1, 0);
        if ( (*(_DWORD *)(a2 + 1224) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 728), 1, 0);
        if ( !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v11) + 456) + 48LL)
          && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14) + 456) + 56LL) )
        {
          zzzReattachThreads(0LL, a1, a2);
        }
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}

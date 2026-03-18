/*
 * XREFs of zzzAttachThreadInput @ 0x1C00581EC
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0005B60 (xxxSetModernAppWindow.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00569F0 (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     NtUserAttachThreadInput @ 0x1C0057A70 (NtUserAttachThreadInput.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01AB6F0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01AC074 (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01A1E04 (ExemptedFromImmersiveRestrictions.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzAttachThreadInput(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebp
  BOOL v6; // r14d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 *i; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v20; // rdx
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v7 = *(_QWORD *)(a2 + 416);
      if ( v7 != *(_QWORD *)(a1 + 416) || *(_QWORD *)(gptiCurrent + 416LL) != v7 )
      {
        v8 = *(_QWORD *)(a2 + 424);
        v9 = *(_QWORD *)(gptiCurrent + 416LL);
        v10 = *(_QWORD *)(v8 + 428);
        v11 = *(_QWORD *)(v9 + 872);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v10 )
          {
            if ( (_DWORD)v11 != (_DWORD)v10
              || (v12 = HIDWORD(v10), HIDWORD(v11) != (_DWORD)v12) && HIDWORD(v11) != -1 && (_DWORD)v12 != -1 )
            {
              if ( *(int *)(v9 + 12) >= 0 )
              {
                v25 = a2;
LABEL_45:
                EtwTraceUIPIInputError(gptiCurrent, v25, v8, *(_QWORD *)(v8 + 428), 2);
                return 3221225506LL;
              }
            }
          }
        }
        v8 = *(_QWORD *)(a1 + 424);
        v13 = *(_QWORD *)(v8 + 428);
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v11 <= (unsigned int)v13 )
          {
            if ( (_DWORD)v11 != (_DWORD)v13
              || (v14 = HIDWORD(v13), v15 = HIDWORD(v11), (_DWORD)v15 != (_DWORD)v14)
              && (_DWORD)v14 != -1
              && (_DWORD)v15 != -1 )
            {
              if ( *(int *)(v9 + 12) >= 0 )
              {
LABEL_64:
                v25 = a1;
                goto LABEL_45;
              }
            }
          }
        }
        if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL))
          && ((unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 416))
           || (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 416)))
          && !(unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) & 0x100) == 0 )
        {
          v8 = *(_QWORD *)(a1 + 424);
          goto LABEL_64;
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
          v17 = Win32AllocPool(32LL, 1767994197LL);
          if ( v17 )
          {
            *(_QWORD *)(v17 + 8) = a1;
            *(_QWORD *)(v17 + 16) = a2;
            *(_DWORD *)(v17 + 24) = 1;
            *(_QWORD *)v17 = gpai;
            gpai = v17;
            goto LABEL_25;
          }
          return 3221225495LL;
        }
        v24 = i[2];
        if ( v24 == a2 && i[1] == a1 )
          break;
        if ( v24 == a1 && i[1] == a2 )
          break;
      }
      v26 = *((_DWORD *)i + 6);
      if ( v26 == -1 )
        return 3221225485LL;
      *((_DWORD *)i + 6) = v26 + 1;
      return 0LL;
    }
    v20 = (__int64 *)gpai;
    v21 = (__int64 *)gpai;
    if ( gpai )
    {
      while ( 1 )
      {
        v22 = v21[2];
        if ( v22 == a2 && v21[1] == a1 )
          break;
        if ( v22 == a1 && v21[1] == a2 )
          break;
        v20 = v21;
        v21 = (__int64 *)*v21;
        if ( !v21 )
          return 3221225485LL;
      }
      --*((_DWORD *)v21 + 6);
      v23 = (__int64 *)*v20;
      if ( !*(_DWORD *)(*v20 + 24) || v6 )
      {
        *v20 = *v23;
        Win32FreePool(v23);
LABEL_25:
        *(_DWORD *)(a2 + 1200) |= 0x200u;
        *(_DWORD *)(a1 + 1200) |= 0x200u;
        if ( (*(_DWORD *)(a1 + 1200) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 720), 1, 0);
        if ( (*(_DWORD *)(a2 + 1200) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 720), 1, 0);
        v18 = *(_QWORD *)(gptiCurrent + 456LL);
        if ( !*(_QWORD *)(v18 + 48) && !*(_QWORD *)(v18 + 56) )
          zzzReattachThreads(0LL, a1, a2);
      }
      return 0LL;
    }
  }
  return 3221225485LL;
}

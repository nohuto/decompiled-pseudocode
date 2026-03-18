/*
 * XREFs of zzzAttachThreadInput @ 0x1C00D7444
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserAttachThreadInput @ 0x1C00D8DC0 (NtUserAttachThreadInput.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C012553C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01CE844 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01CF278 (TryDetachShellFrame.c)
 * Callees:
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     ExemptedFromImmersiveRestrictions @ 0x1C01C36B4 (ExemptedFromImmersiveRestrictions.c)
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
  __int64 v19; // rax
  __int64 *v21; // rdx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx

  v3 = a3 & 1;
  v6 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( a3 < 0 )
      goto LABEL_19;
    v7 = *(_QWORD *)(a2 + 424);
    if ( v7 == *(_QWORD *)(a1 + 424) && *(_QWORD *)(gptiCurrent + 424LL) == v7 )
      goto LABEL_19;
    v8 = *(_QWORD *)(a2 + 432);
    v9 = *(_QWORD *)(gptiCurrent + 424LL);
    v10 = *(_QWORD *)(v8 + 428);
    v11 = *(_QWORD *)(v9 + 880);
    if ( !gbEnforceUIPI
      || (unsigned int)v11 > (unsigned int)v10
      || (_DWORD)v11 == (_DWORD)v10
      && ((v12 = HIDWORD(v10), HIDWORD(v11) == (_DWORD)v12) || HIDWORD(v11) == -1 || (_DWORD)v12 == -1)
      || *(int *)(v9 + 12) < 0 )
    {
      v8 = *(_QWORD *)(a1 + 432);
      v13 = *(_QWORD *)(v8 + 428);
      if ( !gbEnforceUIPI
        || (unsigned int)v11 > (unsigned int)v13
        || (_DWORD)v11 == (_DWORD)v13
        && ((v14 = HIDWORD(v13), v15 = HIDWORD(v11), (_DWORD)v15 == (_DWORD)v14)
         || (_DWORD)v15 == -1
         || (_DWORD)v14 == -1)
        || *(int *)(v9 + 12) < 0 )
      {
        if ( !(unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL))
          || !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a2 + 424))
          && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(a1 + 424))
          || (unsigned int)ExemptedFromImmersiveRestrictions(gptiCurrent)
          || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 0x100) != 0 )
        {
LABEL_19:
          if ( (*(_DWORD *)(a2 + 488) & 0x40) == 0
            && (*(_DWORD *)(a1 + 488) & 0x40) == 0
            && *(_QWORD *)(a2 + 456) == *(_QWORD *)(a1 + 456) )
          {
            if ( v3 )
            {
              for ( i = (__int64 *)gpai; ; i = (__int64 *)*i )
              {
                if ( !i )
                {
                  v18 = Win32AllocPool(32LL, 1767994197LL);
                  if ( v18 )
                  {
                    *(_QWORD *)(v18 + 8) = a1;
                    *(_QWORD *)(v18 + 16) = a2;
                    *(_DWORD *)(v18 + 24) = 1;
                    *(_QWORD *)v18 = gpai;
                    gpai = v18;
                    goto LABEL_30;
                  }
                  return 3221225495LL;
                }
                v17 = i[2];
                if ( v17 == a2 && i[1] == a1 )
                  break;
                if ( v17 == a1 && i[1] == a2 )
                  break;
              }
              v25 = *((_DWORD *)i + 6);
              if ( v25 == -1 )
                return 3221225485LL;
              *((_DWORD *)i + 6) = v25 + 1;
              return 0LL;
            }
            v21 = (__int64 *)gpai;
            v22 = (__int64 *)gpai;
            if ( gpai )
            {
              while ( 1 )
              {
                v23 = v22[2];
                if ( v23 == a2 && v22[1] == a1 )
                  break;
                if ( v23 == a1 && v22[1] == a2 )
                  break;
                v21 = v22;
                v22 = (__int64 *)*v22;
                if ( !v22 )
                  return 3221225485LL;
              }
              --*((_DWORD *)v22 + 6);
              v24 = (__int64 *)*v21;
              if ( !*(_DWORD *)(*v21 + 24) || v6 )
              {
                *v21 = *v24;
                Win32FreePool(v24);
LABEL_30:
                *(_DWORD *)(a2 + 1208) |= 0x200u;
                *(_DWORD *)(a1 + 1208) |= 0x200u;
                if ( (*(_DWORD *)(a1 + 1208) & 0x400) != 0 )
                  KeSetEvent(*(PRKEVENT *)(a1 + 736), 1, 0);
                if ( (*(_DWORD *)(a2 + 1208) & 0x400) != 0 )
                  KeSetEvent(*(PRKEVENT *)(a2 + 736), 1, 0);
                v19 = *(_QWORD *)(gptiCurrent + 464LL);
                if ( !*(_QWORD *)(v19 + 48) && !*(_QWORD *)(v19 + 56) )
                  zzzReattachThreads(0, (const struct tagTHREADINFO *)a1, (const struct tagTHREADINFO *)a2);
              }
              return 0LL;
            }
            return 3221225485LL;
          }
          return 3221225506LL;
        }
        v8 = *(_QWORD *)(a1 + 432);
      }
      v26 = a1;
    }
    else
    {
      v26 = a2;
    }
    EtwTraceUIPIInputError(gptiCurrent, v26, v8, *(_QWORD *)(v8 + 428), 2);
    return 3221225506LL;
  }
  return 3221225485LL;
}

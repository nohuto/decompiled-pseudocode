/*
 * XREFs of NtUserSetWindowShowState @ 0x1C02357E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0037DD8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E200 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r13
  int v7; // r14d
  BOOL v8; // edi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int128 *p_left; // rdx
  struct tagMONITOR *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v39; // [rsp+38h] [rbp-90h] BYREF
  __int64 v40; // [rsp+40h] [rbp-88h]
  __int64 v41; // [rsp+48h] [rbp-80h]
  __int128 v42; // [rsp+58h] [rbp-70h] BYREF
  __int128 v43; // [rsp+68h] [rbp-60h] BYREF
  __int128 v44; // [rsp+78h] [rbp-50h] BYREF
  __int64 v45; // [rsp+88h] [rbp-40h] BYREF
  __int64 v46; // [rsp+90h] [rbp-38h]

  v5 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  v8 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  v11 = v9;
  if ( v9 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v39 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v39;
      v40 = v9;
      HMLockObject(v9);
      v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 328LL);
      if ( v15
        && IAMThreadAccessGranted(gptiCurrent)
        && *(_QWORD *)(gptiCurrent + 416LL) == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 416LL) )
      {
        v20 = *(_QWORD *)(v11 + 16);
        if ( v20 != gptiCurrent )
        {
          if ( *(_QWORD *)(v20 + 664) )
          {
            v16 = 5023LL;
            goto LABEL_5;
          }
          if ( a3 )
          {
            v16 = 1004LL;
            goto LABEL_5;
          }
          if ( (unsigned int)v5 <= 5 )
          {
            p_left = (__int128 *)&a4->left;
            if ( !a4 )
              goto LABEL_34;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              p_left = (__int128 *)MmUserProbeAddress;
            v44 = *p_left;
            a4 = (struct tagRECT *)&v44;
            v22 = _MonitorFromWindowInternal((struct tagWND *)v11, 2, 1);
            if ( v22 )
            {
              v42 = *GetMonitorWorkRectForWindow(&v43, (__int64)v22, (const struct tagWND *)v15);
              v45 = 0LL;
              v46 = 0LL;
              if ( (unsigned int)IntersectRect(&v45, (int *)&v44, (int *)&v42) )
              {
                v23 = v45 - v44;
                if ( v45 == (_QWORD)v44 )
                  v23 = v46 - *((_QWORD *)&v44 + 1);
                if ( !v23 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13) + 472)
                                 + 224LL) & 1) != 0 )
                    goto LABEL_34;
                  v27 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 472);
                  if ( (*(_BYTE *)(v27 + 224) & 0x20) != 0 )
                    goto LABEL_34;
                  v29 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
                  if ( (((unsigned __int16)(v29 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                           v27,
                                                                                           v26,
                                                                                           v28) >> 8)) & 0x1FF) == 0 )
                  {
                    v32 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 288LL);
                    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) & 0xF) != 2 || (v33 = 1, (v32 & 0x20000000) == 0) )
                      v33 = 0;
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v32, v30, v31) & 0xF) != 2
                      || (W32GetCurrentThreadDpiAwarenessContext(v35, v34, v36) & 0x20000000) == 0 )
                    {
                      v7 = 0;
                    }
                    if ( v33 == v7 )
                      goto LABEL_34;
                  }
                  if ( (unsigned int)TransformRectBetweenCoordinateSpaces(&v44, &v44, v11, v15) )
                  {
LABEL_34:
                    v8 = xxxSetWindowShowState((struct tagWND *)v11, byte_1C02EB9D8[v5], a4);
                    goto LABEL_35;
                  }
                }
              }
            }
          }
        }
        v16 = 87LL;
      }
      else
      {
        v16 = 5LL;
      }
LABEL_5:
      UserSetLastError(v16, v12, v13, v14);
LABEL_35:
      ThreadUnlock1(v18, v17, v19);
    }
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}

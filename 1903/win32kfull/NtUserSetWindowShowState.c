/*
 * XREFs of NtUserSetWindowShowState @ 0x1C0235E00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     IAMThreadAccessGranted @ 0x1C008AAEC (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C00970A8 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023E820 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
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
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v43; // [rsp+38h] [rbp-90h] BYREF
  __int64 v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+48h] [rbp-80h]
  __int128 v46; // [rsp+58h] [rbp-70h] BYREF
  __int128 v47; // [rsp+68h] [rbp-60h] BYREF
  __int128 v48; // [rsp+78h] [rbp-50h] BYREF
  __int64 v49; // [rsp+88h] [rbp-40h] BYREF
  __int64 v50; // [rsp+90h] [rbp-38h]

  v5 = a2;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
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
      v43 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v43;
      v44 = v9;
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
            v48 = *p_left;
            a4 = (struct tagRECT *)&v48;
            v22 = _MonitorFromWindowInternal((struct tagWND *)v11, 2, 1);
            if ( v22 )
            {
              v46 = *GetMonitorWorkRectForWindow(&v47, (__int64)v22, (const struct tagWND *)v15);
              v49 = 0LL;
              v50 = 0LL;
              if ( (unsigned int)IntersectRect(&v49, (int *)&v48, (int *)&v46) )
              {
                v23 = v49 - v48;
                if ( v49 == (_QWORD)v48 )
                  v23 = v50 - *((_QWORD *)&v48 + 1);
                if ( !v23 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14)
                                             + 472)
                                 + 224LL) & 1) != 0 )
                    goto LABEL_34;
                  v28 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26) + 472);
                  if ( (*(_BYTE *)(v28 + 224) & 0x20) != 0 )
                    goto LABEL_34;
                  v31 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL);
                  if ( (((unsigned __int16)(v31 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                           v28,
                                                                                           v27,
                                                                                           v29,
                                                                                           v30) >> 8)) & 0x1FF) == 0 )
                  {
                    v35 = *(unsigned int *)(*(_QWORD *)(v11 + 40) + 288LL);
                    if ( (*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) & 0xF) != 2 || (v36 = 1, (v35 & 0x20000000) == 0) )
                      v36 = 0;
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v35, v32, v33, v34) & 0xF) != 2
                      || (W32GetCurrentThreadDpiAwarenessContext(v38, v37, v39, v40) & 0x20000000) == 0 )
                    {
                      v7 = 0;
                    }
                    if ( v36 == v7 )
                      goto LABEL_34;
                  }
                  if ( (unsigned int)TransformRectBetweenCoordinateSpaces(&v48, &v48, v11, v15) )
                  {
LABEL_34:
                    v8 = xxxSetWindowShowState((struct tagWND *)v11, byte_1C02EC528[v5], a4);
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

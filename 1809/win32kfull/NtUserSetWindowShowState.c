/*
 * XREFs of NtUserSetWindowShowState @ 0x1C021DBC0
 * Callers:
 *     <none>
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C001D104 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0226380 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall NtUserSetWindowShowState(__int64 a1, unsigned int a2, int a3, struct tagRECT *a4)
{
  __int64 v5; // r12
  BOOL v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int128 *p_left; // rdx
  struct tagMONITOR *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebx
  __int128 v29; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v30[3]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v31; // [rsp+68h] [rbp-60h] BYREF
  __int128 v32; // [rsp+78h] [rbp-50h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-40h] BYREF

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v13 = v8;
  if ( v8 )
  {
    v10 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v10 & 0xFFFFFFFD) != 0 )
    {
      v14 = gptiCurrent;
      v30[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v30;
      v30[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v15 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL);
      if ( v15
        && IAMThreadAccessGranted(gptiCurrent)
        && *(_QWORD *)(v14 + 424) == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 424LL) )
      {
        v19 = *(_QWORD *)(v13 + 16);
        if ( v19 != v14 )
        {
          if ( *(_QWORD *)(v19 + 672) )
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
              goto LABEL_27;
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              p_left = (__int128 *)MmUserProbeAddress;
            v32 = *p_left;
            a4 = (struct tagRECT *)&v32;
            v21 = _MonitorFromWindowInternal((struct tagWND *)v13, 2, 1);
            if ( v21 )
            {
              v29 = *GetMonitorWorkRectForWindow(&v31, (__int64)v21, (const struct tagWND *)v15);
              if ( (unsigned int)IntersectRect(v33, (int *)&v32, (int *)&v29) )
              {
                v22 = v33[0] - v32;
                if ( v33[0] == (_QWORD)v32 )
                  v22 = v33[1] - *((_QWORD *)&v32 + 1);
                if ( !v22 )
                {
                  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9) + 480) + 224LL) & 1) != 0
                    || (v25 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 480),
                        (*(_BYTE *)(v25 + 224) & 0x20) != 0)
                    || (v26 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL),
                        (((unsigned __int16)(v26 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                            v25,
                                                                                            v24) >> 8)) & 0x1FF) == 0)
                    || (unsigned int)TransformRectBetweenCoordinateSpaces(&v32, &v32, v13, v15) )
                  {
LABEL_27:
                    v7 = xxxSetWindowShowState((struct tagWND *)v13, byte_1C02D9D20[v5], a4);
                    goto LABEL_28;
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
      UserSetLastError(v16, v9, v14, v12);
LABEL_28:
      ThreadUnlock1(v18, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}

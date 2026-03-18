/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00ABF90
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00ABDB0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00AC318 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(__int64 *BugCheckParameter2, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int WindowDpiLastNotify; // r13d
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rax
  __int64 WindowBordersForDpi; // r8
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // r12d
  __int64 v36; // r8
  __int64 *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // ecx
  int v44; // edx
  int v45; // edx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  int v53; // ecx
  int v54; // edx
  int v55; // edx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD v60[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v61[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v62; // [rsp+70h] [rbp-10h]

  v5 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v61, 0LL);
  v8 = 0LL;
  v62 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v60);
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v9, v10, v11);
    goto LABEL_30;
  }
  v12 = 1;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v13 = BugCheckParameter2[5];
  if ( (*(_DWORD *)(v13 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)BugCheckParameter2);
  }
  else if ( (*(_DWORD *)(v13 + 288) & 0xF) == 0
         && (v14 = *(_QWORD *)(BugCheckParameter2[2] + 456)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2[2] + 424) + 284LL);
  }
  if ( a2 == -3 )
  {
    if ( (*(_BYTE *)(v13 + 31) & 0x40) == 0 )
    {
      v13 = BugCheckParameter2[18];
      if ( v13 )
      {
        v62 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v61);
        if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v61) )
        {
          if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 40LL) + 44LL) )
          {
            v18 = v62;
            if ( !v62 )
              v18 = *(_QWORD **)v61[0];
            *(_QWORD *)(a4 + 24) = *v18;
            if ( *(_DWORD *)(*(_QWORD *)v61[0] + 64LL) && *(_DWORD *)(*(_QWORD *)v61[0] + 68LL) )
            {
              if ( (_DWORD)v5 )
              {
                v39 = BugCheckParameter2[5];
                v40 = 96 * v5;
                v41 = *(_QWORD *)(*(_QWORD *)v61[0] + 88LL);
                v42 = *(_QWORD *)(96 * v5 + v41 - 96);
                if ( (*(_BYTE *)(v39 + 26) & 0x40) != 0 )
                {
                  v43 = *(_DWORD *)(v39 + 96) - *(_DWORD *)(v42 + 64);
                  *(_DWORD *)(a4 + 12) = v43;
                  *(_DWORD *)(a4 + 4) = v43 - *(_DWORD *)(*(_QWORD *)(v40 + v41 - 96) + 72LL);
                }
                else
                {
                  v44 = *(_DWORD *)(v42 + 64) + *(_DWORD *)(v39 + 88);
                  *(_DWORD *)(a4 + 4) = v44;
                  *(_DWORD *)(a4 + 12) = v44 + *(_DWORD *)(*(_QWORD *)(v40 + v41 - 96) + 72LL);
                }
                v45 = *(_DWORD *)(BugCheckParameter2[5] + 92) + *(_DWORD *)(*(_QWORD *)(v40 + v41 - 96) + 68LL);
                *(_DWORD *)(a4 + 8) = v45;
                v24 = v45 + *(_DWORD *)(*(_QWORD *)(v40 + v41 - 96) + 76LL);
              }
              else
              {
                WindowBordersForDpi = (unsigned int)GetWindowBordersForDpi(
                                                      *(_DWORD *)(BugCheckParameter2[5] + 28),
                                                      *(_DWORD *)(BugCheckParameter2[5] + 24),
                                                      v16,
                                                      v17,
                                                      WindowDpiLastNotify);
                v20 = BugCheckParameter2[5];
                if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0 )
                {
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(v20 + 96) - WindowBordersForDpi;
                  *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v61[0] + 64LL);
                }
                else
                {
                  v21 = *(_DWORD *)(v20 + 88);
                  v22 = v61[0];
                  *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v21;
                  *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v22 + 64LL);
                }
                *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(BugCheckParameter2[5] + 92);
                v23 = BugCheckParameter2[5];
                if ( (*(_BYTE *)(v23 + 16) & 8) != 0 )
                  *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(
                                           ((*(char *)(v23 + 24) >> 7) & 0x14u) + 2,
                                           WindowDpiLastNotify,
                                           WindowBordersForDpi);
                v24 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v61[0] + 68LL);
              }
              *(_DWORD *)(a4 + 16) = v24;
            }
            v25 = *(__int64 **)(BugCheckParameter2[2] + 608);
            if ( v25 )
              v26 = *v25;
            else
              v26 = 0LL;
            SmartObjStackRefBase<tagPOPUPMENU>::operator=(v60, v26);
            if ( !*(_QWORD *)v60[0] || (**(_DWORD **)v60[0] & 2) == 0 || (**(_DWORD **)v60[0] & 4) != 0 )
              goto LABEL_27;
            goto LABEL_60;
          }
        }
      }
    }
LABEL_30:
    v12 = 0;
    goto LABEL_27;
  }
  if ( a2 != -1 )
  {
    if ( a2 == -4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      v48 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      ValidateHmenu(v48);
      v62 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v61);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v61) )
      {
        if ( (int)v5 >= 0 && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 40LL) + 44LL) )
        {
          *(_QWORD *)(a4 + 24) = v48;
          if ( (_DWORD)v5 )
          {
            v49 = BugCheckParameter2[5];
            v50 = 96 * v5;
            v51 = *(_QWORD *)(*(_QWORD *)v61[0] + 88LL);
            v52 = *(_QWORD *)(96 * v5 + v51 - 96);
            if ( (*(_BYTE *)(v49 + 26) & 0x40) != 0 )
            {
              v53 = *(_DWORD *)(v49 + 112) - *(_DWORD *)(v52 + 64);
              *(_DWORD *)(a4 + 12) = v53;
              *(_DWORD *)(a4 + 4) = v53 - *(_DWORD *)(*(_QWORD *)(v50 + v51 - 96) + 72LL);
            }
            else
            {
              v54 = *(_DWORD *)(v52 + 64) + *(_DWORD *)(v49 + 104);
              *(_DWORD *)(a4 + 4) = v54;
              *(_DWORD *)(a4 + 12) = v54 + *(_DWORD *)(*(_QWORD *)(v50 + v51 - 96) + 72LL);
            }
            v55 = *(_DWORD *)(BugCheckParameter2[5] + 108) + *(_DWORD *)(*(_QWORD *)(v50 + v51 - 96) + 68LL);
            *(_DWORD *)(a4 + 8) = v55;
            *(_DWORD *)(a4 + 16) = v55 + *(_DWORD *)(*(_QWORD *)(v50 + v51 - 96) + 76LL);
          }
          else
          {
            *(_OWORD *)(a4 + 4) = *(_OWORD *)(BugCheckParameter2[5] + 104);
          }
          v56 = safe_cast_fnid_to_PMENUWND((__int64)BugCheckParameter2);
          if ( !v56 )
            goto LABEL_27;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v60, *(_QWORD *)(v56 + 8));
          if ( !*(_QWORD *)v60[0] )
            goto LABEL_27;
          v57 = *(_QWORD **)(BugCheckParameter2[2] + 608);
          v58 = v57 ? *v57 : 0LL;
          if ( *(_QWORD *)(*(_QWORD *)v60[0] + 64LL) != v58 )
            goto LABEL_27;
          v46 = *(_DWORD *)(a4 + 40) | 1;
          *(_DWORD *)(a4 + 40) = v46;
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)v60[0] + 80LL) + 1 )
              goto LABEL_27;
            v59 = v60[0];
            *(_DWORD *)(a4 + 40) |= 2u;
            if ( *(_QWORD *)(*(_QWORD *)v59 + 24LL) )
              v8 = **(_QWORD **)(*(_QWORD *)v60[0] + 24LL);
            goto LABEL_65;
          }
LABEL_86:
          *(_DWORD *)(a4 + 40) = v46 | 2;
          goto LABEL_27;
        }
      }
    }
    goto LABEL_30;
  }
  if ( (*(_BYTE *)(v13 + 30) & 8) == 0 )
    goto LABEL_30;
  xxxGetSysMenu((struct tagWND *)BugCheckParameter2, 0);
  v62 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v61);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v61)
    || (int)v5 < 0
    || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61[0] + 40LL) + 44LL) )
  {
    goto LABEL_30;
  }
  v29 = v62;
  if ( !v62 )
    v29 = *(_QWORD **)v61[0];
  *(_QWORD *)(a4 + 24) = *v29;
  if ( (unsigned int)HasCaptionIcon((__int64)BugCheckParameter2) )
  {
    v32 = GetWindowBordersForDpi(
            *(_DWORD *)(BugCheckParameter2[5] + 28),
            *(_DWORD *)(BugCheckParameter2[5] + 24),
            v30,
            v31,
            WindowDpiLastNotify);
    v34 = BugCheckParameter2[5];
    v35 = v32;
    if ( (*(_BYTE *)(v34 + 26) & 0x40) != 0 )
    {
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(v34 + 96) - v32;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                          - GetDpiDependentMetric(
                              ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                              WindowDpiLastNotify,
                              v33);
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v32 + *(_DWORD *)(v34 + 88);
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                           + GetDpiDependentMetric(
                               ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                               WindowDpiLastNotify,
                               v33);
    }
    *(_DWORD *)(a4 + 8) = v35 + *(_DWORD *)(BugCheckParameter2[5] + 92);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                         + GetDpiDependentMetric(
                             ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 13,
                             WindowDpiLastNotify,
                             v36);
  }
  v37 = *(__int64 **)(BugCheckParameter2[2] + 608);
  if ( v37 )
    v38 = *v37;
  else
    v38 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v60, v38);
  if ( !*(_QWORD *)v60[0] || (**(_DWORD **)v60[0] & 2) == 0 || (**(_DWORD **)v60[0] & 4) == 0 )
    goto LABEL_27;
LABEL_60:
  if ( *(__int64 **)(*(_QWORD *)v60[0] + 8LL) != BugCheckParameter2 )
    goto LABEL_27;
  v46 = *(_DWORD *)(a4 + 40) | 1;
  *(_DWORD *)(a4 + 40) = v46;
  if ( !(_DWORD)v5 )
    goto LABEL_86;
  v13 = *(_QWORD *)(*(_QWORD *)v60[0] + 64LL);
  if ( *(_DWORD *)(v13 + 80) == (_DWORD)v5 - 1 )
  {
    v47 = v60[0];
    *(_DWORD *)(a4 + 40) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 64LL) + 24LL) )
      v8 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v60[0] + 64LL) + 24LL);
LABEL_65:
    *(_QWORD *)(a4 + 32) = v8;
  }
LABEL_27:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v60, v13);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61, v27);
  return v12;
}

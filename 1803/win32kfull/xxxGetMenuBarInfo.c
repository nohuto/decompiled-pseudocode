/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C00C36A8
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C00C34F0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C0026274 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     xxxGetSysMenu @ 0x1C00C2390 (xxxGetSysMenu.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(__int64 *BugCheckParameter2, int a2, int a3, __int64 a4)
{
  __int64 v5; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int WindowDpiLastNotify; // r13d
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rax
  int WindowBordersForDpi; // r8d
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 SysMenu; // rax
  _QWORD *v28; // rax
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  __int64 v32; // rdx
  int v33; // r12d
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  int v40; // ecx
  int v41; // edx
  int v42; // edx
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // edx
  int v53; // edx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  _QWORD v58[2]; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v59[2]; // [rsp+60h] [rbp-20h] BYREF
  _QWORD *v60; // [rsp+70h] [rbp-10h]

  v5 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v59, 0LL);
  v8 = 0LL;
  v60 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v58, 0LL);
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v9);
    goto LABEL_30;
  }
  v10 = 1;
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  v11 = BugCheckParameter2[5];
  if ( (*(_DWORD *)(v11 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)BugCheckParameter2);
  }
  else if ( (*(_DWORD *)(v11 + 288) & 0xF) == 0
         && (v12 = *(_QWORD *)(BugCheckParameter2[2] + 448)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v12 + 8) + 52LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2[2] + 416) + 284LL);
  }
  if ( a2 == -3 )
  {
    if ( (*(_BYTE *)(v11 + 31) & 0x40) == 0 )
    {
      v11 = BugCheckParameter2[18];
      if ( v11 )
      {
        v60 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=(v59, v11);
        if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v59)
          && (int)v5 >= 0
          && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
        {
          v16 = v60;
          if ( !v60 )
            v16 = *(_QWORD **)v59[0];
          *(_QWORD *)(a4 + 24) = *v16;
          if ( *(_DWORD *)(*(_QWORD *)v59[0] + 64LL) && *(_DWORD *)(*(_QWORD *)v59[0] + 68LL) )
          {
            if ( (_DWORD)v5 )
            {
              v36 = BugCheckParameter2[5];
              v37 = 96 * v5;
              v38 = *(_QWORD *)(*(_QWORD *)v59[0] + 88LL);
              v39 = *(_QWORD *)(96 * v5 + v38 - 96);
              if ( (*(_BYTE *)(v36 + 26) & 0x40) != 0 )
              {
                v40 = *(_DWORD *)(v36 + 96) - *(_DWORD *)(v39 + 64);
                *(_DWORD *)(a4 + 12) = v40;
                *(_DWORD *)(a4 + 4) = v40 - *(_DWORD *)(*(_QWORD *)(v37 + v38 - 96) + 72LL);
              }
              else
              {
                v41 = *(_DWORD *)(v39 + 64) + *(_DWORD *)(v36 + 88);
                *(_DWORD *)(a4 + 4) = v41;
                *(_DWORD *)(a4 + 12) = v41 + *(_DWORD *)(*(_QWORD *)(v37 + v38 - 96) + 72LL);
              }
              v42 = *(_DWORD *)(BugCheckParameter2[5] + 92) + *(_DWORD *)(*(_QWORD *)(v37 + v38 - 96) + 68LL);
              *(_DWORD *)(a4 + 8) = v42;
              v22 = v42 + *(_DWORD *)(*(_QWORD *)(v37 + v38 - 96) + 76LL);
            }
            else
            {
              WindowBordersForDpi = GetWindowBordersForDpi(
                                      *(_DWORD *)(BugCheckParameter2[5] + 28),
                                      *(_DWORD *)(BugCheckParameter2[5] + 24),
                                      v14,
                                      v15,
                                      WindowDpiLastNotify);
              v18 = BugCheckParameter2[5];
              if ( (*(_BYTE *)(v18 + 26) & 0x40) != 0 )
              {
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(v18 + 96) - WindowBordersForDpi;
                *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *(_DWORD *)(*(_QWORD *)v59[0] + 64LL);
              }
              else
              {
                v19 = *(_DWORD *)(v18 + 88);
                v20 = v59[0];
                *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v19;
                *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v20 + 64LL);
              }
              *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(BugCheckParameter2[5] + 92);
              v21 = BugCheckParameter2[5];
              if ( (*(_BYTE *)(v21 + 16) & 8) != 0 )
                *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(
                                         ((*(char *)(v21 + 24) >> 7) & 0x14u) + 2,
                                         WindowDpiLastNotify);
              v22 = *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_QWORD *)v59[0] + 68LL);
            }
            *(_DWORD *)(a4 + 16) = v22;
          }
          v23 = *(__int64 **)(BugCheckParameter2[2] + 600);
          if ( v23 )
            v24 = *v23;
          else
            v24 = 0LL;
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v58, v24);
          if ( !*(_QWORD *)v58[0] || (**(_DWORD **)v58[0] & 2) == 0 || (**(_DWORD **)v58[0] & 4) != 0 )
            goto LABEL_27;
          goto LABEL_60;
        }
      }
    }
LABEL_30:
    v10 = 0;
    goto LABEL_27;
  }
  if ( a2 != -1 )
  {
    if ( a2 == -4 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      v45 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
      v46 = ValidateHmenu(v45);
      v60 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v59, v46);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v59)
        && (int)v5 >= 0
        && (unsigned int)v5 <= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
      {
        *(_QWORD *)(a4 + 24) = v45;
        if ( (_DWORD)v5 )
        {
          v47 = BugCheckParameter2[5];
          v48 = 96 * v5;
          v49 = *(_QWORD *)(*(_QWORD *)v59[0] + 88LL);
          v50 = *(_QWORD *)(96 * v5 + v49 - 96);
          if ( (*(_BYTE *)(v47 + 26) & 0x40) != 0 )
          {
            v51 = *(_DWORD *)(v47 + 112) - *(_DWORD *)(v50 + 64);
            *(_DWORD *)(a4 + 12) = v51;
            *(_DWORD *)(a4 + 4) = v51 - *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 72LL);
          }
          else
          {
            v52 = *(_DWORD *)(v50 + 64) + *(_DWORD *)(v47 + 104);
            *(_DWORD *)(a4 + 4) = v52;
            *(_DWORD *)(a4 + 12) = v52 + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 72LL);
          }
          v53 = *(_DWORD *)(BugCheckParameter2[5] + 108) + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 68LL);
          *(_DWORD *)(a4 + 8) = v53;
          *(_DWORD *)(a4 + 16) = v53 + *(_DWORD *)(*(_QWORD *)(v48 + v49 - 96) + 76LL);
        }
        else
        {
          *(_OWORD *)(a4 + 4) = *(_OWORD *)(BugCheckParameter2[5] + 104);
        }
        v54 = safe_cast_fnid_to_PMENUWND(BugCheckParameter2);
        if ( !v54 )
          goto LABEL_27;
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v58, *(_QWORD *)(v54 + 8));
        if ( !*(_QWORD *)v58[0] )
          goto LABEL_27;
        v55 = *(_QWORD **)(BugCheckParameter2[2] + 600);
        v56 = v55 ? *v55 : 0LL;
        if ( *(_QWORD *)(*(_QWORD *)v58[0] + 64LL) != v56 )
          goto LABEL_27;
        v43 = *(_DWORD *)(a4 + 40) | 1;
        *(_DWORD *)(a4 + 40) = v43;
        if ( (_DWORD)v5 )
        {
          if ( (_DWORD)v5 != *(_DWORD *)(*(_QWORD *)v58[0] + 80LL) + 1 )
            goto LABEL_27;
          v57 = v58[0];
          *(_DWORD *)(a4 + 40) |= 2u;
          if ( *(_QWORD *)(*(_QWORD *)v57 + 24LL) )
            v8 = **(_QWORD **)(*(_QWORD *)v58[0] + 24LL);
          goto LABEL_65;
        }
LABEL_86:
        *(_DWORD *)(a4 + 40) = v43 | 2;
        goto LABEL_27;
      }
    }
    goto LABEL_30;
  }
  if ( (*(_BYTE *)(v11 + 30) & 8) == 0 )
    goto LABEL_30;
  SysMenu = xxxGetSysMenu((struct tagWND *)BugCheckParameter2, 0);
  v60 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v59, SysMenu);
  if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)v59)
    || (int)v5 < 0
    || (unsigned int)v5 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 40LL) + 44LL) )
  {
    goto LABEL_30;
  }
  v28 = v60;
  if ( !v60 )
    v28 = *(_QWORD **)v59[0];
  *(_QWORD *)(a4 + 24) = *v28;
  if ( (unsigned int)HasCaptionIcon(BugCheckParameter2) )
  {
    v31 = GetWindowBordersForDpi(
            *(_DWORD *)(BugCheckParameter2[5] + 28),
            *(_DWORD *)(BugCheckParameter2[5] + 24),
            v29,
            v30,
            WindowDpiLastNotify);
    v32 = BugCheckParameter2[5];
    v33 = v31;
    if ( (*(_BYTE *)(v32 + 26) & 0x40) != 0 )
    {
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(v32 + 96) - v31;
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                          - GetDpiDependentMetric(
                              ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                              WindowDpiLastNotify);
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v31 + *(_DWORD *)(v32 + 88);
      *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                           + GetDpiDependentMetric(
                               ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 12,
                               WindowDpiLastNotify);
    }
    *(_DWORD *)(a4 + 8) = v33 + *(_DWORD *)(BugCheckParameter2[5] + 92);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                         + GetDpiDependentMetric(
                             ((*(char *)(BugCheckParameter2[5] + 24) >> 7) & 0xBu) + 13,
                             WindowDpiLastNotify);
  }
  v34 = *(__int64 **)(BugCheckParameter2[2] + 600);
  if ( v34 )
    v35 = *v34;
  else
    v35 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v58, v35);
  if ( !*(_QWORD *)v58[0] || (**(_DWORD **)v58[0] & 2) == 0 || (**(_DWORD **)v58[0] & 4) == 0 )
    goto LABEL_27;
LABEL_60:
  if ( *(__int64 **)(*(_QWORD *)v58[0] + 8LL) != BugCheckParameter2 )
    goto LABEL_27;
  v43 = *(_DWORD *)(a4 + 40) | 1;
  *(_DWORD *)(a4 + 40) = v43;
  if ( !(_DWORD)v5 )
    goto LABEL_86;
  v11 = *(_QWORD *)(*(_QWORD *)v58[0] + 64LL);
  if ( *(_DWORD *)(v11 + 80) == (_DWORD)v5 - 1 )
  {
    v44 = v58[0];
    *(_DWORD *)(a4 + 40) |= 2u;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v44 + 64LL) + 24LL) )
      v8 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v58[0] + 64LL) + 24LL);
LABEL_65:
    *(_QWORD *)(a4 + 32) = v8;
  }
LABEL_27:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v58, v11);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, v25);
  return v10;
}

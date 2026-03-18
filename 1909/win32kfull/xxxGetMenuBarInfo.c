/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C012D47C
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C012D200 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00AC274 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C012DCDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     GetWindowBordersForDpi @ 0x1C012DCF8 (GetWindowBordersForDpi.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(__int64 BugCheckParameter2, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r14
  __int64 v6; // rsi
  int v10; // edx
  __int64 v11; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // r14
  struct _KTHREAD *v14; // r12
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  unsigned int v21; // r12d
  struct _KTHREAD *v22; // rdi
  __int64 v23; // rbx
  int v24; // edx
  __int64 v25; // rcx
  __int64 *v26; // rax
  _QWORD *v27; // rax
  struct _KTHREAD *v28; // rdi
  __int64 v29; // rbx
  __int64 *v30; // rax
  _QWORD *v31; // rcx
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v34; // rax
  int v35; // r8d
  int v36; // r9d
  __int64 *v37; // rax
  int WindowBordersForDpi; // r8d
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  int v48; // ecx
  int v49; // edx
  int v50; // edx
  __int64 *v51; // rcx
  __int64 v52; // rdx
  int v53; // eax
  __int64 *v54; // rax
  __int64 v55; // rax
  __int64 SysMenu; // rax
  __int64 *v57; // rax
  int v58; // r8d
  int v59; // r9d
  int v60; // eax
  __int64 v61; // rdx
  int v62; // r15d
  __int64 *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  int v71; // ecx
  int v72; // edx
  int v73; // edx
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 *v77; // rax
  __int64 *v78; // [rsp+50h] [rbp-30h] BYREF
  __int64 v79; // [rsp+58h] [rbp-28h] BYREF
  __int64 **v80; // [rsp+60h] [rbp-20h] BYREF
  __int64 v81; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v82; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = a3;
  if ( !(unsigned int)IsThreadCrossSessionAttached(BugCheckParameter2, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v81 = 0LL;
  v80 = (__int64 **)gSmartObjNullRef;
  v81 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v81;
  v13 = 0LL;
  v82 = 0LL;
  v14 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10) )
  {
    v18 = (__int64 *)PsGetThreadWin32Thread(v14);
    if ( v18 )
      v13 = *v18;
  }
  v79 = 0LL;
  v78 = (__int64 *)gSmartObjNullRef;
  v79 = *(_QWORD *)(v13 + 1472);
  *(_QWORD *)(v13 + 1472) = &v79;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL, v15, v16, v17);
LABEL_9:
    v21 = 0;
    goto LABEL_10;
  }
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  v21 = 1;
  *(_QWORD *)(a4 + 32) = 0LL;
  v19 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_DWORD *)(v19 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
  }
  else if ( (*(_DWORD *)(v19 + 288) & 0xF) == 0
         && (v34 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 448LL)) != 0
         && (v20 = **(__int64 ***)(v34 + 8), (v20[8] & 1) != 0) )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v20 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 416LL);
    WindowDpiLastNotify = *((unsigned __int16 *)v20 + 142);
  }
  switch ( a2 )
  {
    case -3:
      if ( (*(_BYTE *)(v19 + 31) & 0x40) != 0 )
        goto LABEL_9;
      v19 = *(_QWORD *)(BugCheckParameter2 + 168);
      if ( !v19 )
        goto LABEL_9;
      v82 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v80, v19);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v80) )
        goto LABEL_9;
      if ( (int)v6 < 0 )
        goto LABEL_9;
      v20 = *v80;
      if ( (unsigned int)v6 > *(_DWORD *)((*v80)[5] + 44) )
        goto LABEL_9;
      v37 = v82;
      if ( !v82 )
        v37 = *v80;
      *(_QWORD *)(a4 + 24) = *v37;
      if ( *((_DWORD *)*v80 + 16) && *((_DWORD *)*v80 + 17) )
      {
        if ( (_DWORD)v6 )
        {
          v44 = *(_QWORD *)(BugCheckParameter2 + 40);
          v45 = 96 * v6;
          v46 = (*v80)[11];
          v47 = *(_QWORD *)(96 * v6 + v46 - 96);
          if ( (*(_BYTE *)(v44 + 26) & 0x40) != 0 )
          {
            v48 = *(_DWORD *)(v44 + 96) - *(_DWORD *)(v47 + 64);
            *(_DWORD *)(a4 + 12) = v48;
            *(_DWORD *)(a4 + 4) = v48 - *(_DWORD *)(*(_QWORD *)(v45 + v46 - 96) + 72LL);
          }
          else
          {
            v49 = *(_DWORD *)(v47 + 64) + *(_DWORD *)(v44 + 88);
            *(_DWORD *)(a4 + 4) = v49;
            *(_DWORD *)(a4 + 12) = v49 + *(_DWORD *)(*(_QWORD *)(v45 + v46 - 96) + 72LL);
          }
          v50 = *(_DWORD *)(*(_QWORD *)(v45 + v46 - 96) + 68LL)
              + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 92LL);
          *(_DWORD *)(a4 + 8) = v50;
          v43 = v50 + *(_DWORD *)(*(_QWORD *)(v45 + v46 - 96) + 76LL);
        }
        else
        {
          WindowBordersForDpi = GetWindowBordersForDpi(
                                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 28LL),
                                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL),
                                  v35,
                                  v36,
                                  WindowDpiLastNotify);
          v39 = *(_QWORD *)(BugCheckParameter2 + 40);
          if ( (*(_BYTE *)(v39 + 26) & 0x40) != 0 )
          {
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v39 + 96) - WindowBordersForDpi;
            *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *((_DWORD *)*v80 + 16);
          }
          else
          {
            v40 = *(_DWORD *)(v39 + 88);
            v41 = (__int64)v80;
            *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v40;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *(_DWORD *)(*(_QWORD *)v41 + 64LL);
          }
          *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 92LL);
          v42 = *(_QWORD *)(BugCheckParameter2 + 40);
          if ( (*(_BYTE *)(v42 + 16) & 8) != 0 )
            *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(((*(char *)(v42 + 24) >> 7) & 0x14u) + 2, WindowDpiLastNotify);
          v43 = *(_DWORD *)(a4 + 8) + *((_DWORD *)*v80 + 17);
        }
        *(_DWORD *)(a4 + 16) = v43;
      }
      v51 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 600LL);
      if ( v51 )
        v52 = *v51;
      else
        v52 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, v52);
      if ( *v78 )
      {
        v20 = (__int64 *)*v78;
        if ( (*(_DWORD *)*v78 & 2) != 0 )
        {
          v20 = (__int64 *)*v78;
          if ( (*(_DWORD *)*v78 & 4) == 0 )
          {
LABEL_60:
            v20 = (__int64 *)*v78;
            if ( *(_QWORD *)(*v78 + 8) != BugCheckParameter2 )
              break;
            v53 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v53;
            if ( (_DWORD)v6 )
            {
              v20 = (__int64 *)*v78;
              v19 = *(_QWORD *)(*v78 + 64);
              if ( *(_DWORD *)(v19 + 80) != (_DWORD)v6 - 1 )
                break;
              v54 = v78;
              *(_DWORD *)(a4 + 40) |= 2u;
              v20 = (__int64 *)*v54;
              if ( *(_QWORD *)(*(_QWORD *)(*v54 + 64) + 24LL) )
              {
                v20 = *(__int64 **)(*(_QWORD *)(*v78 + 64) + 24LL);
                v55 = *v20;
LABEL_106:
                *(_QWORD *)(a4 + 32) = v55;
                break;
              }
LABEL_104:
              v55 = 0LL;
              goto LABEL_106;
            }
            goto LABEL_101;
          }
        }
      }
      break;
    case -1:
      if ( (*(_BYTE *)(v19 + 30) & 8) == 0 )
        goto LABEL_9;
      SysMenu = xxxGetSysMenu((struct tagWND *)BugCheckParameter2, 0);
      v82 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v80, SysMenu);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v80) )
        goto LABEL_9;
      if ( (int)v6 < 0 )
        goto LABEL_9;
      v20 = *v80;
      if ( (unsigned int)v6 > *(_DWORD *)((*v80)[5] + 44) )
        goto LABEL_9;
      v57 = v82;
      if ( !v82 )
        v57 = *v80;
      *(_QWORD *)(a4 + 24) = *v57;
      if ( (unsigned int)HasCaptionIcon(BugCheckParameter2) )
      {
        v60 = GetWindowBordersForDpi(
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 28LL),
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL),
                v58,
                v59,
                WindowDpiLastNotify);
        v61 = *(_QWORD *)(BugCheckParameter2 + 40);
        v62 = v60;
        if ( (*(_BYTE *)(v61 + 26) & 0x40) != 0 )
        {
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(v61 + 96) - v60;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                              - GetDpiDependentMetric(
                                  ((*(char *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                  WindowDpiLastNotify);
        }
        else
        {
          *(_DWORD *)(a4 + 4) = v60 + *(_DWORD *)(v61 + 88);
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                               + GetDpiDependentMetric(
                                   ((*(char *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                   WindowDpiLastNotify);
        }
        *(_DWORD *)(a4 + 8) = v62 + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 92LL);
        *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                             + GetDpiDependentMetric(
                                 ((*(char *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL) >> 7) & 0xBu) + 13,
                                 WindowDpiLastNotify);
      }
      v63 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 600LL);
      if ( v63 )
        v64 = *v63;
      else
        v64 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, v64);
      if ( *v78 )
      {
        v20 = (__int64 *)*v78;
        if ( (*(_DWORD *)*v78 & 2) != 0 )
        {
          v20 = (__int64 *)*v78;
          if ( (*(_DWORD *)*v78 & 4) != 0 )
            goto LABEL_60;
        }
      }
      break;
    case -4:
      _InterlockedAdd(&glSendMessage, 1u);
      v65 = xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 0x1E1u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
      v66 = ValidateHmenu(v65);
      v82 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v80, v66);
      if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v80) )
        goto LABEL_9;
      if ( (int)v6 < 0 )
        goto LABEL_9;
      v20 = *v80;
      if ( (unsigned int)v6 > *(_DWORD *)((*v80)[5] + 44) )
        goto LABEL_9;
      *(_QWORD *)(a4 + 24) = v65;
      if ( (_DWORD)v6 )
      {
        v67 = *(_QWORD *)(BugCheckParameter2 + 40);
        v68 = 96 * v6;
        v69 = (*v80)[11];
        v70 = *(_QWORD *)(96 * v6 + v69 - 96);
        if ( (*(_BYTE *)(v67 + 26) & 0x40) != 0 )
        {
          v71 = *(_DWORD *)(v67 + 112) - *(_DWORD *)(v70 + 64);
          *(_DWORD *)(a4 + 12) = v71;
          *(_DWORD *)(a4 + 4) = v71 - *(_DWORD *)(*(_QWORD *)(v68 + v69 - 96) + 72LL);
        }
        else
        {
          v72 = *(_DWORD *)(v70 + 64) + *(_DWORD *)(v67 + 104);
          *(_DWORD *)(a4 + 4) = v72;
          *(_DWORD *)(a4 + 12) = v72 + *(_DWORD *)(*(_QWORD *)(v68 + v69 - 96) + 72LL);
        }
        v73 = *(_DWORD *)(*(_QWORD *)(v68 + v69 - 96) + 68LL)
            + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 108LL);
        *(_DWORD *)(a4 + 8) = v73;
        *(_DWORD *)(a4 + 16) = v73 + *(_DWORD *)(*(_QWORD *)(v68 + v69 - 96) + 76LL);
      }
      else
      {
        *(_OWORD *)(a4 + 4) = *(_OWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 104LL);
      }
      v74 = safe_cast_fnid_to_PMENUWND(BugCheckParameter2);
      if ( v74 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v78, *(_QWORD *)(v74 + 8));
        if ( *v78 )
        {
          v20 = (__int64 *)*v78;
          v75 = *(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 16) + 600LL);
          v76 = v75 ? *v75 : 0LL;
          if ( v20[8] == v76 )
          {
            v53 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v53;
            if ( (_DWORD)v6 )
            {
              v20 = (__int64 *)*v78;
              if ( (_DWORD)v6 != *(_DWORD *)(*v78 + 80) + 1 )
                break;
              v77 = v78;
              *(_DWORD *)(a4 + 40) |= 2u;
              v20 = (__int64 *)*v77;
              if ( *(_QWORD *)(*v77 + 24) )
              {
                v20 = (__int64 *)*v78;
                v55 = **(_QWORD **)(*v78 + 24);
                goto LABEL_106;
              }
              goto LABEL_104;
            }
LABEL_101:
            *(_DWORD *)(a4 + 40) = v53 | 2;
          }
        }
      }
      break;
    default:
      goto LABEL_9;
  }
LABEL_10:
  v22 = KeGetCurrentThread();
  v23 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v20, v19) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(v22);
    if ( v26 )
      v23 = *v26;
  }
  if ( v78 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v78 + 2) )
  {
    if ( *((_BYTE *)v78 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v78);
  }
  v27 = *(_QWORD **)(v23 + 1472);
  if ( v27 )
    *(_QWORD *)(v23 + 1472) = *v27;
  v28 = KeGetCurrentThread();
  v29 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v25, v24) )
  {
    v30 = (__int64 *)PsGetThreadWin32Thread(v28);
    if ( v30 )
      v29 = *v30;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree((__int64 *)&v80);
  v31 = *(_QWORD **)(v29 + 1472);
  if ( v31 )
    *(_QWORD *)(v29 + 1472) = *v31;
  return v21;
}

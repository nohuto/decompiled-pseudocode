/*
 * XREFs of xxxGetMenuBarInfo @ 0x1C002104C
 * Callers:
 *     NtUserGetMenuBarInfo @ 0x1C0020DD0 (NtUserGetMenuBarInfo.c)
 * Callees:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C001F998 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C006204C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall xxxGetMenuBarInfo(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r14
  __int64 v6; // rsi
  int v8; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // r14
  struct _KTHREAD *v16; // r12
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  __int64 v20; // rdx
  __int64 *v21; // rcx
  unsigned int v22; // r12d
  struct _KTHREAD *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rax
  _QWORD *v30; // rax
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rbx
  __int64 *v33; // rax
  _QWORD *v34; // rcx
  unsigned int WindowDpiLastNotify; // r14d
  __int64 v37; // rax
  __int64 *v38; // rax
  int WindowBordersForDpi; // r8d
  __int64 v40; // rax
  int v41; // ecx
  __int64 **v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  int v49; // ecx
  int v50; // edx
  int v51; // edx
  __int64 *v52; // rcx
  __int64 v53; // rdx
  int v54; // eax
  __int64 *v55; // rax
  __int64 v56; // rax
  __int64 SysMenu; // rax
  __int64 *v58; // rax
  int v59; // r8d
  int v60; // r9d
  int v61; // eax
  __int64 v62; // rdx
  int v63; // r15d
  __int64 *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  int v72; // ecx
  int v73; // edx
  int v74; // edx
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 *v78; // rax
  __int64 *v79; // [rsp+50h] [rbp-30h] BYREF
  __int64 v80; // [rsp+58h] [rbp-28h] BYREF
  __int64 **v81; // [rsp+60h] [rbp-20h] BYREF
  __int64 v82; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v83; // [rsp+70h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = (int)a3;
  v8 = a2;
  if ( !(unsigned int)IsThreadCrossSessionAttached(BugCheckParameter2, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v82 = 0LL;
  v81 = (__int64 **)gSmartObjNullRef;
  v82 = *(_QWORD *)(v5 + 1472);
  *(_QWORD *)(v5 + 1472) = &v82;
  v15 = 0LL;
  v83 = 0LL;
  v16 = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(v11, v10, v12, v13) )
  {
    v19 = (__int64 *)PsGetThreadWin32Thread(v16);
    if ( v19 )
      v15 = *v19;
  }
  v80 = 0LL;
  v79 = (__int64 *)gSmartObjNullRef;
  v80 = *(_QWORD *)(v15 + 1472);
  *(_QWORD *)(v15 + 1472) = &v80;
  if ( *(_DWORD *)a4 != 48 )
  {
    UserSetLastError(87LL);
LABEL_9:
    v22 = 0;
    goto LABEL_10;
  }
  *(_QWORD *)(a4 + 4) = 0LL;
  *(_QWORD *)(a4 + 12) = 0LL;
  *(_DWORD *)(a4 + 40) &= 0xFFFFFFFC;
  *(_QWORD *)(a4 + 24) = 0LL;
  v22 = 1;
  *(_QWORD *)(a4 + 32) = 0LL;
  v20 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(BugCheckParameter2);
  }
  else if ( (*(_DWORD *)(v20 + 288) & 0xF) == 0
         && (v37 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 448LL)) != 0
         && (v21 = **(__int64 ***)(v37 + 8), (v21[8] & 1) != 0) )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    v21 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 416LL);
    WindowDpiLastNotify = *((unsigned __int16 *)v21 + 142);
  }
  switch ( v8 )
  {
    case -3:
      if ( (*(_BYTE *)(v20 + 31) & 0x40) != 0 )
        goto LABEL_9;
      v20 = *(_QWORD *)(BugCheckParameter2 + 168);
      if ( !v20 )
        goto LABEL_9;
      v83 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v81, v20);
      if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)&v81) )
        goto LABEL_9;
      if ( (int)v6 < 0 )
        goto LABEL_9;
      v21 = *v81;
      if ( (unsigned int)v6 > *(_DWORD *)((*v81)[5] + 44) )
        goto LABEL_9;
      v38 = v83;
      if ( !v83 )
        v38 = *v81;
      *(_QWORD *)(a4 + 24) = *v38;
      if ( *((_DWORD *)*v81 + 16) && *((_DWORD *)*v81 + 17) )
      {
        if ( (_DWORD)v6 )
        {
          v45 = *(_QWORD *)(BugCheckParameter2 + 40);
          v46 = 96 * v6;
          v47 = (*v81)[11];
          v48 = *(_QWORD *)(96 * v6 + v47 - 96);
          if ( (*(_BYTE *)(v45 + 26) & 0x40) != 0 )
          {
            v49 = *(_DWORD *)(v45 + 96) - *(_DWORD *)(v48 + 64);
            *(_DWORD *)(a4 + 12) = v49;
            *(_DWORD *)(a4 + 4) = v49 - *(_DWORD *)(*(_QWORD *)(v46 + v47 - 96) + 72LL);
          }
          else
          {
            v50 = *(_DWORD *)(v48 + 64) + *(_DWORD *)(v45 + 88);
            *(_DWORD *)(a4 + 4) = v50;
            *(_DWORD *)(a4 + 12) = v50 + *(_DWORD *)(*(_QWORD *)(v46 + v47 - 96) + 72LL);
          }
          v51 = *(_DWORD *)(*(_QWORD *)(v46 + v47 - 96) + 68LL)
              + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 92LL);
          *(_DWORD *)(a4 + 8) = v51;
          v44 = v51 + *(_DWORD *)(*(_QWORD *)(v46 + v47 - 96) + 76LL);
        }
        else
        {
          WindowBordersForDpi = GetWindowBordersForDpi(
                                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 28LL),
                                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL),
                                  v17,
                                  v18,
                                  WindowDpiLastNotify);
          v40 = *(_QWORD *)(BugCheckParameter2 + 40);
          if ( (*(_BYTE *)(v40 + 26) & 0x40) != 0 )
          {
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(v40 + 96) - WindowBordersForDpi;
            *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12) - *((_DWORD *)*v81 + 16);
          }
          else
          {
            v41 = *(_DWORD *)(v40 + 88);
            v42 = v81;
            *(_DWORD *)(a4 + 4) = WindowBordersForDpi + v41;
            *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4) + *((_DWORD *)*v42 + 16);
          }
          *(_DWORD *)(a4 + 8) = WindowBordersForDpi + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 92LL);
          v43 = *(_QWORD *)(BugCheckParameter2 + 40);
          if ( (*(_BYTE *)(v43 + 16) & 8) != 0 )
            *(_DWORD *)(a4 + 8) += GetDpiDependentMetric(((*(char *)(v43 + 24) >> 7) & 0x14u) + 2, WindowDpiLastNotify);
          v44 = *(_DWORD *)(a4 + 8) + *((_DWORD *)*v81 + 17);
        }
        *(_DWORD *)(a4 + 16) = v44;
      }
      v52 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 600LL);
      if ( v52 )
        v53 = *v52;
      else
        v53 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v79, v53);
      if ( *v79 )
      {
        v21 = (__int64 *)*v79;
        if ( (*(_DWORD *)*v79 & 2) != 0 )
        {
          v21 = (__int64 *)*v79;
          if ( (*(_DWORD *)*v79 & 4) == 0 )
          {
LABEL_60:
            v21 = (__int64 *)*v79;
            if ( *(_QWORD *)(*v79 + 8) != BugCheckParameter2 )
              break;
            v54 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v54;
            if ( (_DWORD)v6 )
            {
              v21 = (__int64 *)*v79;
              v20 = *(_QWORD *)(*v79 + 64);
              if ( *(_DWORD *)(v20 + 80) != (_DWORD)v6 - 1 )
                break;
              v55 = v79;
              *(_DWORD *)(a4 + 40) |= 2u;
              v21 = (__int64 *)*v55;
              if ( *(_QWORD *)(*(_QWORD *)(*v55 + 64) + 24LL) )
              {
                v21 = *(__int64 **)(*(_QWORD *)(*v79 + 64) + 24LL);
                v56 = *v21;
LABEL_106:
                *(_QWORD *)(a4 + 32) = v56;
                break;
              }
LABEL_104:
              v56 = 0LL;
              goto LABEL_106;
            }
            goto LABEL_101;
          }
        }
      }
      break;
    case -1:
      if ( (*(_BYTE *)(v20 + 30) & 8) == 0 )
        goto LABEL_9;
      SysMenu = xxxGetSysMenu((struct tagWND *)BugCheckParameter2, 0);
      v83 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v81, SysMenu);
      if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)&v81) )
        goto LABEL_9;
      if ( (int)v6 < 0 )
        goto LABEL_9;
      v21 = *v81;
      if ( (unsigned int)v6 > *(_DWORD *)((*v81)[5] + 44) )
        goto LABEL_9;
      v58 = v83;
      if ( !v83 )
        v58 = *v81;
      *(_QWORD *)(a4 + 24) = *v58;
      if ( (unsigned int)HasCaptionIcon(BugCheckParameter2) )
      {
        v61 = GetWindowBordersForDpi(
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 28LL),
                *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL),
                v59,
                v60,
                WindowDpiLastNotify);
        v62 = *(_QWORD *)(BugCheckParameter2 + 40);
        v63 = v61;
        if ( (*(_BYTE *)(v62 + 26) & 0x40) != 0 )
        {
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(v62 + 96) - v61;
          *(_DWORD *)(a4 + 4) = *(_DWORD *)(a4 + 12)
                              - GetDpiDependentMetric(
                                  ((*(char *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                  WindowDpiLastNotify);
        }
        else
        {
          *(_DWORD *)(a4 + 4) = v61 + *(_DWORD *)(v62 + 88);
          *(_DWORD *)(a4 + 12) = *(_DWORD *)(a4 + 4)
                               + GetDpiDependentMetric(
                                   ((*(char *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL) >> 7) & 0xBu) + 12,
                                   WindowDpiLastNotify);
        }
        *(_DWORD *)(a4 + 8) = v63 + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 92LL);
        *(_DWORD *)(a4 + 16) = *(_DWORD *)(a4 + 8)
                             + GetDpiDependentMetric(
                                 ((*(char *)(*(_QWORD *)(BugCheckParameter2 + 40) + 24LL) >> 7) & 0xBu) + 13,
                                 WindowDpiLastNotify);
      }
      v64 = *(__int64 **)(*(_QWORD *)(BugCheckParameter2 + 16) + 600LL);
      if ( v64 )
        v65 = *v64;
      else
        v65 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v79, v65);
      if ( *v79 )
      {
        v21 = (__int64 *)*v79;
        if ( (*(_DWORD *)*v79 & 2) != 0 )
        {
          v21 = (__int64 *)*v79;
          if ( (*(_DWORD *)*v79 & 4) != 0 )
            goto LABEL_60;
        }
      }
      break;
    case -4:
      _InterlockedAdd(&glSendMessage, 1u);
      v66 = xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
      v67 = ValidateHmenu(v66);
      v83 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v81, v67);
      if ( !SmartObjStackRef<tagMENU>::operator bool((__int64)&v81) )
        goto LABEL_9;
      if ( (int)v6 < 0 )
        goto LABEL_9;
      v21 = *v81;
      if ( (unsigned int)v6 > *(_DWORD *)((*v81)[5] + 44) )
        goto LABEL_9;
      *(_QWORD *)(a4 + 24) = v66;
      if ( (_DWORD)v6 )
      {
        v68 = *(_QWORD *)(BugCheckParameter2 + 40);
        v69 = 96 * v6;
        v70 = (*v81)[11];
        v71 = *(_QWORD *)(96 * v6 + v70 - 96);
        if ( (*(_BYTE *)(v68 + 26) & 0x40) != 0 )
        {
          v72 = *(_DWORD *)(v68 + 112) - *(_DWORD *)(v71 + 64);
          *(_DWORD *)(a4 + 12) = v72;
          *(_DWORD *)(a4 + 4) = v72 - *(_DWORD *)(*(_QWORD *)(v69 + v70 - 96) + 72LL);
        }
        else
        {
          v73 = *(_DWORD *)(v71 + 64) + *(_DWORD *)(v68 + 104);
          *(_DWORD *)(a4 + 4) = v73;
          *(_DWORD *)(a4 + 12) = v73 + *(_DWORD *)(*(_QWORD *)(v69 + v70 - 96) + 72LL);
        }
        v74 = *(_DWORD *)(*(_QWORD *)(v69 + v70 - 96) + 68LL)
            + *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 108LL);
        *(_DWORD *)(a4 + 8) = v74;
        *(_DWORD *)(a4 + 16) = v74 + *(_DWORD *)(*(_QWORD *)(v69 + v70 - 96) + 76LL);
      }
      else
      {
        *(_OWORD *)(a4 + 4) = *(_OWORD *)(*(_QWORD *)(BugCheckParameter2 + 40) + 104LL);
      }
      v75 = safe_cast_fnid_to_PMENUWND(BugCheckParameter2);
      if ( v75 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v79, *(_QWORD *)(v75 + 8));
        if ( *v79 )
        {
          v21 = (__int64 *)*v79;
          v76 = *(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 16) + 600LL);
          v77 = v76 ? *v76 : 0LL;
          if ( v21[8] == v77 )
          {
            v54 = *(_DWORD *)(a4 + 40) | 1;
            *(_DWORD *)(a4 + 40) = v54;
            if ( (_DWORD)v6 )
            {
              v21 = (__int64 *)*v79;
              if ( (_DWORD)v6 != *(_DWORD *)(*v79 + 80) + 1 )
                break;
              v78 = v79;
              *(_DWORD *)(a4 + 40) |= 2u;
              v21 = (__int64 *)*v78;
              if ( *(_QWORD *)(*v78 + 24) )
              {
                v21 = (__int64 *)*v79;
                v56 = **(_QWORD **)(*v79 + 24);
                goto LABEL_106;
              }
              goto LABEL_104;
            }
LABEL_101:
            *(_DWORD *)(a4 + 40) = v54 | 2;
          }
        }
      }
      break;
    default:
      goto LABEL_9;
  }
LABEL_10:
  v23 = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v21, v20, v17, v18) )
  {
    v29 = (__int64 *)PsGetThreadWin32Thread(v23);
    if ( v29 )
      v24 = *v29;
  }
  if ( v79 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v79 + 2) )
  {
    if ( *((_BYTE *)v79 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v79);
  }
  v30 = *(_QWORD **)(v24 + 1472);
  if ( v30 )
    *(_QWORD *)(v24 + 1472) = *v30;
  v31 = KeGetCurrentThread();
  v32 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v26, v25, v27, v28) )
  {
    v33 = (__int64 *)PsGetThreadWin32Thread(v31);
    if ( v33 )
      v32 = *v33;
  }
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v81);
  v34 = *(_QWORD **)(v32 + 1472);
  if ( v34 )
    *(_QWORD *)(v32 + 1472) = *v34;
  return v22;
}

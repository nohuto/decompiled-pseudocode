/*
 * XREFs of xxxMNSetGapState @ 0x1C0246784
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00608B0 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C0230DC0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02469B4 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0221240 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02227EC (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD v29[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h] BYREF
  struct tagWND *v31; // [rsp+38h] [rbp-28h]
  __int64 v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+48h] [rbp-18h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0LL);
  v33 = 0LL;
  v34 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( (a3 & 3) != 0 && IsMFMWFPWindow((__int64)a1) )
  {
    v11 = safe_cast_fnid_to_PMENUWND(v10);
    if ( v11 )
    {
      v8 = *(_QWORD *)(v11 + 8);
      if ( v8 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, v8);
        if ( *(_QWORD *)v29[0] )
        {
          v12 = MNGetpItem((__int64)v29, a2);
          v9 = v12;
          if ( v12 )
          {
            LODWORD(v33) = *(_DWORD *)(*(_QWORD *)v12 + 64LL);
            LODWORD(v34) = *(_DWORD *)(*(_QWORD *)v12 + 64LL) + *(_DWORD *)(*(_QWORD *)v12 + 72LL);
            HIDWORD(v33) = *(_DWORD *)(*(_QWORD *)v12 + 68LL);
            HIDWORD(v34) = *(_DWORD *)(*(_QWORD *)v12 + 68LL) + *(_DWORD *)(*(_QWORD *)v12 + 76LL);
            if ( (a3 & 1) == 0 )
            {
              v17 = MNGetpItem((__int64)v29, a2 + 1);
              v19 = *v18;
              v20 = *(_DWORD *)(*v18 + 4);
              if ( a4 )
              {
                *(_DWORD *)(v19 + 4) = v20 | 0x40000000;
                if ( !v17 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v17 + 4LL) |= 0x80000000;
              }
              else
              {
                *(_DWORD *)(v19 + 4) = v20 & 0xBFFFFFFF;
                if ( !v17 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v17 + 4LL) &= ~0x80000000;
              }
              HIDWORD(v34) += *(_DWORD *)(gpsi + 2172LL);
              goto LABEL_20;
            }
            v13 = MNGetpItem((__int64)v29, a2 - 1);
            v15 = *v14;
            v16 = *(_DWORD *)(*v14 + 4);
            if ( a4 )
            {
              *(_DWORD *)(v15 + 4) = v16 | 0x80000000;
              if ( v13 )
              {
                *(_DWORD *)(*(_QWORD *)v13 + 4LL) |= 0x40000000u;
LABEL_13:
                HIDWORD(v33) -= *(_DWORD *)(gpsi + 2172LL);
              }
            }
            else
            {
              *(_DWORD *)(v15 + 4) = v16 & 0x7FFFFFFF;
              if ( v13 )
              {
                *(_DWORD *)(*(_QWORD *)v13 + 4LL) &= ~0x40000000u;
                goto LABEL_13;
              }
            }
LABEL_20:
            v21 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                           *(_QWORD *)(*(_QWORD *)v29[0] + 40LL),
                                           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 116LL))
                            + 68LL);
            HIDWORD(v33) -= v21;
            HIDWORD(v34) -= v21;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23);
            v30 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v30;
            v31 = a1;
            HMLockObject(a1);
            xxxInvalidateRect(a1, (__int64)&v33, 1);
            ThreadUnlock1(v26, v25, v27);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v8, v9);
}

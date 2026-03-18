/*
 * XREFs of xxxMNSetGapState @ 0x1C0246EC4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C00BF1D0 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C02313E0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02470F4 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0221780 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0222D2C (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int64 *v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD v31[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v32; // [rsp+30h] [rbp-30h] BYREF
  struct tagWND *v33; // [rsp+38h] [rbp-28h]
  __int64 v34; // [rsp+40h] [rbp-20h]
  __int64 v35; // [rsp+48h] [rbp-18h] BYREF
  __int64 v36; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, 0LL);
  v35 = 0LL;
  v36 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( (a3 & 3) != 0 && IsMFMWFPWindow((__int64)a1) )
  {
    v12 = safe_cast_fnid_to_PMENUWND(v11);
    if ( v12 )
    {
      v8 = *(_QWORD *)(v12 + 8);
      if ( v8 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v31, v8);
        if ( *(_QWORD *)v31[0] )
        {
          v13 = MNGetpItem((__int64)v31, a2);
          v9 = v13;
          if ( v13 )
          {
            LODWORD(v35) = *(_DWORD *)(*(_QWORD *)v13 + 64LL);
            LODWORD(v36) = *(_DWORD *)(*(_QWORD *)v13 + 64LL) + *(_DWORD *)(*(_QWORD *)v13 + 72LL);
            HIDWORD(v35) = *(_DWORD *)(*(_QWORD *)v13 + 68LL);
            HIDWORD(v36) = *(_DWORD *)(*(_QWORD *)v13 + 68LL) + *(_DWORD *)(*(_QWORD *)v13 + 76LL);
            if ( (a3 & 1) == 0 )
            {
              v18 = MNGetpItem((__int64)v31, a2 + 1);
              v20 = *v19;
              v21 = *(_DWORD *)(*v19 + 4);
              if ( a4 )
              {
                *(_DWORD *)(v20 + 4) = v21 | 0x40000000;
                if ( !v18 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v18 + 4LL) |= 0x80000000;
              }
              else
              {
                *(_DWORD *)(v20 + 4) = v21 & 0xBFFFFFFF;
                if ( !v18 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v18 + 4LL) &= ~0x80000000;
              }
              HIDWORD(v36) += *(_DWORD *)(gpsi + 2172LL);
              goto LABEL_20;
            }
            v14 = MNGetpItem((__int64)v31, a2 - 1);
            v16 = *v15;
            v17 = *(_DWORD *)(*v15 + 4);
            if ( a4 )
            {
              *(_DWORD *)(v16 + 4) = v17 | 0x80000000;
              if ( v14 )
              {
                *(_DWORD *)(*(_QWORD *)v14 + 4LL) |= 0x40000000u;
LABEL_13:
                HIDWORD(v35) -= *(_DWORD *)(gpsi + 2172LL);
              }
            }
            else
            {
              *(_DWORD *)(v16 + 4) = v17 & 0x7FFFFFFF;
              if ( v14 )
              {
                *(_DWORD *)(*(_QWORD *)v14 + 4LL) &= ~0x40000000u;
                goto LABEL_13;
              }
            }
LABEL_20:
            v22 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                           *(_QWORD *)(*(_QWORD *)v31[0] + 40LL),
                                           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 40LL) + 116LL))
                            + 68LL);
            HIDWORD(v35) -= v22;
            HIDWORD(v36) -= v22;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25);
            v32 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
            v33 = a1;
            HMLockObject(a1);
            xxxInvalidateRect(a1, (__int64)&v35, 1);
            ThreadUnlock1(v28, v27, v29);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31, v8, v9, v10);
}

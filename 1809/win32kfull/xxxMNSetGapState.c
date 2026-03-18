/*
 * XREFs of xxxMNSetGapState @ 0x1C022E6BC
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C0219570 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C022E8CC (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C0209CE0 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C020B204 (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(__int64 a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v27[3]; // [rsp+30h] [rbp-30h] BYREF
  int v28; // [rsp+48h] [rbp-18h] BYREF
  int v29; // [rsp+4Ch] [rbp-14h]
  int v30; // [rsp+50h] [rbp-10h]
  int v31; // [rsp+54h] [rbp-Ch]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, 0LL);
  if ( (a3 & 3) != 0 && IsMFMWFPWindow(a1) )
  {
    v10 = safe_cast_fnid_to_PMENUWND(v9);
    if ( v10 )
    {
      v8 = *(_QWORD *)(v10 + 8);
      if ( v8 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v26, v8);
        if ( *(_QWORD *)v26[0] )
        {
          v11 = MNGetpItem((__int64)v26, a2);
          if ( v11 )
          {
            v28 = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
            v30 = *(_DWORD *)(*(_QWORD *)v11 + 64LL) + *(_DWORD *)(*(_QWORD *)v11 + 72LL);
            v29 = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
            v31 = *(_DWORD *)(*(_QWORD *)v11 + 68LL) + *(_DWORD *)(*(_QWORD *)v11 + 76LL);
            if ( (a3 & 1) == 0 )
            {
              v16 = MNGetpItem((__int64)v26, a2 + 1);
              v18 = *v17;
              v19 = *(_DWORD *)(*v17 + 4);
              if ( a4 )
              {
                *(_DWORD *)(v18 + 4) = v19 | 0x40000000;
                if ( !v16 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v16 + 4LL) |= 0x80000000;
              }
              else
              {
                *(_DWORD *)(v18 + 4) = v19 & 0xBFFFFFFF;
                if ( !v16 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v16 + 4LL) &= ~0x80000000;
              }
              v31 += *(_DWORD *)(gpsi + 2172LL);
              goto LABEL_20;
            }
            v12 = MNGetpItem((__int64)v26, a2 - 1);
            v14 = *v13;
            v15 = *(_DWORD *)(*v13 + 4);
            if ( a4 )
            {
              *(_DWORD *)(v14 + 4) = v15 | 0x80000000;
              if ( v12 )
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) |= 0x40000000u;
LABEL_13:
                v29 -= *(_DWORD *)(gpsi + 2172LL);
              }
            }
            else
            {
              *(_DWORD *)(v14 + 4) = v15 & 0x7FFFFFFF;
              if ( v12 )
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) &= ~0x40000000u;
                goto LABEL_13;
              }
            }
LABEL_20:
            v20 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                           *(_QWORD *)(*(_QWORD *)v26[0] + 40LL),
                                           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 116LL))
                            + 68LL);
            v29 -= v20;
            v31 -= v20;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
            v27[0] = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = v27;
            v27[1] = a1;
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
            xxxInvalidateRect((struct tagWND *)a1, (__int64)&v28, 1);
            ThreadUnlock1(v24, v23);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26, v8);
}

/*
 * XREFs of xxxMNSetGapState @ 0x1C02055B8
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0023244 (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01F1FE0 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C02057B0 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C01E3E10 (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C01E52D8 (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(__int64 a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v16; // r8
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-30h] BYREF
  int v27; // [rsp+48h] [rbp-18h] BYREF
  int v28; // [rsp+4Ch] [rbp-14h]
  int v29; // [rsp+50h] [rbp-10h]
  int v30; // [rsp+54h] [rbp-Ch]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, 0LL);
  if ( (a3 & 3) != 0 && IsMFMWFPWindow(a1) )
  {
    v10 = safe_cast_fnid_to_PMENUWND(v9);
    if ( v10 )
    {
      v8 = *(_QWORD *)(v10 + 8);
      if ( v8 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v25, v8);
        if ( *(_QWORD *)v25[0] )
        {
          v11 = MNGetpItem((__int64)v25, a2);
          if ( v11 )
          {
            v27 = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
            v29 = *(_DWORD *)(*(_QWORD *)v11 + 64LL) + *(_DWORD *)(*(_QWORD *)v11 + 72LL);
            v28 = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
            v30 = *(_DWORD *)(*(_QWORD *)v11 + 68LL) + *(_DWORD *)(*(_QWORD *)v11 + 76LL);
            if ( (a3 & 1) == 0 )
            {
              v15 = MNGetpItem((__int64)v25, a2 + 1);
              v17 = *v16;
              if ( a4 )
              {
                *(_DWORD *)(v17 + 4) |= 0x40000000u;
                if ( !v15 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v15 + 4LL) |= 0x80000000;
              }
              else
              {
                *(_DWORD *)(v17 + 4) &= ~0x40000000u;
                if ( !v15 )
                  goto LABEL_20;
                *(_DWORD *)(*(_QWORD *)v15 + 4LL) &= ~0x80000000;
              }
              v30 += *(_DWORD *)(gpsi + 2172LL);
              goto LABEL_20;
            }
            v12 = MNGetpItem((__int64)v25, a2 - 1);
            v14 = *v13;
            if ( a4 )
            {
              *(_DWORD *)(v14 + 4) |= 0x80000000;
              if ( v12 )
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) |= 0x40000000u;
LABEL_13:
                v28 -= *(_DWORD *)(gpsi + 2172LL);
              }
            }
            else
            {
              *(_DWORD *)(v14 + 4) &= ~0x80000000;
              if ( v12 )
              {
                *(_DWORD *)(*(_QWORD *)v12 + 4LL) &= ~0x40000000u;
                goto LABEL_13;
              }
            }
LABEL_20:
            v18 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                           *(_QWORD *)(*(_QWORD *)v25[0] + 40LL),
                                           *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 116LL))
                            + 68LL);
            v28 -= v18;
            v30 -= v18;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
            v26[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v26;
            v26[1] = a1;
            _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
            xxxInvalidateRect((struct tagWND *)a1, (__int64)&v27, 1);
            ThreadUnlock1(v22, v21, v23);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v8);
}

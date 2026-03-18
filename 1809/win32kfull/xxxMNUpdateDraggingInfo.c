/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C022E8CC
 * Callers:
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C020B074 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C020B204 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C022E6BC (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rbp
  unsigned int v10; // r14d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // r9
  int v20; // r9d
  int v21; // r8d
  int v22; // r8d
  int v23; // r10d
  _BOOL8 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  _QWORD v28[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+38h] [rbp-30h]
  __int64 v31; // [rsp+40h] [rbp-28h]

  v3 = (__int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v29 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v29;
  v30 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v9 = *v3;
  v10 = *(_DWORD *)(a1 + 88);
  v11 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v12 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  if ( IsMFMWFPWindow(v12) )
  {
    v15 = safe_cast_fnid_to_PMENUWND(v14);
    if ( v15 )
    {
      v13 = *(_QWORD *)(v15 + 8);
      if ( v13 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, v13);
        v16 = MNGetpItem((__int64)v28, *(_DWORD *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
        if ( v16 )
        {
          v18 = MNGetpItemFromIndex(
                  *(_QWORD *)(*(_QWORD *)v28[0] + 40LL),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 116LL));
          v17 = *v19;
          v20 = *(_DWORD *)(*v19 + 68);
          v22 = *(_DWORD *)(*(_QWORD *)v18 + 68LL) + v21;
          v23 = *(_DWORD *)(gpsi + 2172LL);
          if ( v22 > v20 + v23 )
          {
            if ( v22 >= v20 + *(_DWORD *)(v17 + 76) - v23 )
              *(_DWORD *)(a1 + 92) = 2;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = 1;
          }
        }
        v24 = v9 != *v3;
        if ( v9 == *v3 )
        {
          v25 = *(_DWORD *)(a1 + 88) - v10;
          if ( v25 == -1 )
          {
            if ( *(_DWORD *)(a1 + 92) == 2 && v11 == 1 )
              goto LABEL_24;
            v24 = 1LL;
          }
          else
          {
            if ( v25 )
            {
              if ( v25 == 1 && *(_DWORD *)(a1 + 92) == 1 && v11 == 2 )
                goto LABEL_24;
              goto LABEL_23;
            }
            v24 = v11 != *(_DWORD *)(a1 + 92);
          }
        }
        if ( !v24 )
        {
LABEL_24:
          ThreadUnlock1(v24, v17);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v26);
        }
LABEL_23:
        *(_DWORD *)(a1 + 92) |= 4u;
        xxxMNSetGapState(v9, v10, v11, 0);
        xxxMNSetGapState(*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
        goto LABEL_24;
      }
    }
  }
  *v3 = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return (_QWORD *)ThreadUnlock1(v14, v13);
}

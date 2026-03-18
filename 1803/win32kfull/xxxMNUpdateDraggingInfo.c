/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C02057B0
 * Callers:
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C01E5158 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C01E52D8 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C02055B8 (xxxMNSetGapState.c)
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
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 *v21; // r9
  int v22; // r9d
  int v23; // r8d
  int v24; // r10d
  _BOOL8 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rdx
  _QWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v30; // [rsp+30h] [rbp-38h] BYREF
  __int64 v31; // [rsp+38h] [rbp-30h]
  __int64 v32; // [rsp+40h] [rbp-28h]

  v3 = (__int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v30 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v30;
  v31 = v4;
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
    v16 = safe_cast_fnid_to_PMENUWND(v14);
    if ( v16 )
    {
      v13 = *(_QWORD *)(v16 + 8);
      if ( v13 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, v13);
        v17 = MNGetpItem((__int64)v29, *(_DWORD *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
        if ( v17 )
        {
          v20 = MNGetpItemFromIndex(
                  *(_QWORD *)(*(_QWORD *)v29[0] + 40LL),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v29[0] + 40LL) + 116LL));
          v18 = *v21;
          v22 = *(_DWORD *)(*v21 + 68);
          v19 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v20 + 68LL) + v23);
          v24 = *(_DWORD *)(gpsi + 2172LL);
          if ( (int)v19 > v22 + v24 )
          {
            if ( (int)v19 >= v22 + *(_DWORD *)(v18 + 76) - v24 )
              *(_DWORD *)(a1 + 92) = 2;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = 1;
          }
        }
        v25 = v9 != *v3;
        if ( v9 == *v3 )
        {
          v26 = *(_DWORD *)(a1 + 88) - v10;
          if ( v26 == -1 )
          {
            if ( *(_DWORD *)(a1 + 92) == 2 && v11 == 1 )
              goto LABEL_24;
            v25 = 1LL;
          }
          else
          {
            if ( v26 )
            {
              if ( v26 == 1 && *(_DWORD *)(a1 + 92) == 1 && v11 == 2 )
                goto LABEL_24;
              goto LABEL_23;
            }
            v25 = v11 != *(_DWORD *)(a1 + 92);
          }
        }
        if ( !v25 )
        {
LABEL_24:
          ThreadUnlock1(v25, v18, v19);
          return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v27);
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
  return (_QWORD *)ThreadUnlock1(v14, v13, v15);
}

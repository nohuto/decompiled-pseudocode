/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C02469B4
 * Callers:
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0222658 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C02227EC (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C0246784 (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  int v6; // r15d
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v9; // rbp
  unsigned int v10; // r14d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // r9
  int v23; // r9d
  int v24; // r8d
  int v25; // r10d
  unsigned int v26; // eax
  BOOL v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD v31[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-38h] BYREF
  __int64 v33; // [rsp+38h] [rbp-30h]
  __int64 v34; // [rsp+40h] [rbp-28h]

  v3 = (__int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  v32 = 0LL;
  v6 = a3;
  v33 = 0LL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v32 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
  v33 = v4;
  if ( v4 )
    HMLockObject(v4);
  v9 = (struct tagWND *)*v3;
  v10 = *(_DWORD *)(a1 + 88);
  v11 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v12 = *v3;
  *(_DWORD *)(a1 + 88) = v6;
  if ( IsMFMWFPWindow(v12) )
  {
    v16 = safe_cast_fnid_to_PMENUWND(v14);
    if ( v16 )
    {
      v13 = *(_QWORD *)(v16 + 8);
      if ( v13 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, v13);
        v17 = MNGetpItem((__int64)v31, *(_DWORD *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
        if ( v17 )
        {
          v21 = MNGetpItemFromIndex(
                  *(_QWORD *)(*(_QWORD *)v31[0] + 40LL),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v31[0] + 40LL) + 116LL));
          v18 = *v22;
          v23 = *(_DWORD *)(*v22 + 68);
          v20 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v21 + 68LL) + v24);
          v19 = gpsi;
          v25 = *(_DWORD *)(gpsi + 2172LL);
          if ( (int)v20 > v23 + v25 )
          {
            if ( (int)v20 >= v23 + *(_DWORD *)(v18 + 76) - v25 )
              *(_DWORD *)(a1 + 92) = 2;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = 1;
          }
        }
        if ( v9 == (struct tagWND *)*v3 )
        {
          v26 = *(_DWORD *)(a1 + 88) - v10;
          if ( v26 == -1 )
          {
            if ( *(_DWORD *)(a1 + 92) == 2 && v11 == 1 )
              goto LABEL_24;
            v27 = 1;
          }
          else
          {
            if ( v26 )
            {
              if ( v26 == 1 && *(_DWORD *)(a1 + 92) == 1 && v11 == 2 )
                goto LABEL_24;
              goto LABEL_23;
            }
            v27 = v11 != *(_DWORD *)(a1 + 92);
          }
          if ( !v27 )
          {
LABEL_24:
            ThreadUnlock1(v19, v18, v20);
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31, v28, v29);
          }
        }
LABEL_23:
        *(_DWORD *)(a1 + 92) |= 4u;
        xxxMNSetGapState(v9, v10, v11, 0);
        xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
        goto LABEL_24;
      }
    }
  }
  *v3 = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return (_QWORD *)ThreadUnlock1(v14, v13, v15);
}

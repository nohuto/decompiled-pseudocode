/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C02470F4
 * Callers:
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C0222B98 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0222D2C (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C0246EC4 (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  __int64 v5; // rsi
  int v7; // r15d
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v10; // rbp
  unsigned int v11; // r14d
  int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 *v23; // r9
  int v24; // r9d
  int v25; // r8d
  int v26; // r10d
  unsigned int v27; // eax
  BOOL v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD v33[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v34; // [rsp+30h] [rbp-38h] BYREF
  __int64 v35; // [rsp+38h] [rbp-30h]
  __int64 v36; // [rsp+40h] [rbp-28h]

  v4 = (__int64 *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 80);
  v34 = 0LL;
  v7 = a3;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v34 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v34;
  v35 = v5;
  if ( v5 )
    HMLockObject(v5);
  v10 = (struct tagWND *)*v4;
  v11 = *(_DWORD *)(a1 + 88);
  v12 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v4, a2);
  v13 = *v4;
  *(_DWORD *)(a1 + 88) = v7;
  if ( IsMFMWFPWindow(v13) )
  {
    v17 = safe_cast_fnid_to_PMENUWND(v15);
    if ( v17 )
    {
      v14 = *(_QWORD *)(v17 + 8);
      if ( v14 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v33, v14);
        v18 = MNGetpItem((__int64)v33, *(_DWORD *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
        if ( v18 )
        {
          v22 = MNGetpItemFromIndex(
                  *(_QWORD *)(*(_QWORD *)v33[0] + 40LL),
                  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33[0] + 40LL) + 116LL));
          v19 = *v23;
          v24 = *(_DWORD *)(*v23 + 68);
          v21 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v22 + 68LL) + v25);
          v20 = gpsi;
          v26 = *(_DWORD *)(gpsi + 2172LL);
          if ( (int)v21 > v24 + v26 )
          {
            if ( (int)v21 >= v24 + *(_DWORD *)(v19 + 76) - v26 )
              *(_DWORD *)(a1 + 92) = 2;
          }
          else
          {
            *(_DWORD *)(a1 + 92) = 1;
          }
        }
        if ( v10 == (struct tagWND *)*v4 )
        {
          v27 = *(_DWORD *)(a1 + 88) - v11;
          if ( v27 == -1 )
          {
            if ( *(_DWORD *)(a1 + 92) == 2 && v12 == 1 )
              goto LABEL_24;
            v28 = 1;
          }
          else
          {
            if ( v27 )
            {
              if ( v27 == 1 && *(_DWORD *)(a1 + 92) == 1 && v12 == 2 )
                goto LABEL_24;
              goto LABEL_23;
            }
            v28 = v12 != *(_DWORD *)(a1 + 92);
          }
          if ( !v28 )
          {
LABEL_24:
            ThreadUnlock1(v20, v19, v21);
            return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33, v29, v30, v31);
          }
        }
LABEL_23:
        *(_DWORD *)(a1 + 92) |= 4u;
        xxxMNSetGapState(v10, v11, v12, 0);
        xxxMNSetGapState((struct tagWND *)*v4, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
        goto LABEL_24;
      }
    }
  }
  *v4 = 0LL;
  *(_DWORD *)(a1 + 88) = -1;
  return (_QWORD *)ThreadUnlock1(v15, v14, v16);
}

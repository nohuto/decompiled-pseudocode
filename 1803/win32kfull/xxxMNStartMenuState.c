/*
 * XREFs of xxxMNStartMenuState @ 0x1C01D5AC4
 * Callers:
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     _PostTransformableMessage @ 0x1C0061C04 (_PostTransformableMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01D45B0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C01D4D98 (NullifyLookasideRef.c)
 *     MNAllocMenuState @ 0x1C01D4E78 (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C01D4F78 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C01D51B4 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C01D5278 (MNMarkDelayedFreePopup.c)
 *     xxxUnlockMenuState @ 0x1C01D5E00 (xxxUnlockMenuState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMNStartMenuState(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rax
  struct tagMENUSTATE *v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  _QWORD *v26[2]; // [rsp+38h] [rbp-39h] BYREF
  __int128 v27; // [rsp+48h] [rbp-29h]
  __int128 v28; // [rsp+58h] [rbp-19h]
  __int64 v29[2]; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp+7h] BYREF
  __int128 v31; // [rsp+88h] [rbp+17h] BYREF
  __int128 v32; // [rsp+98h] [rbp+27h] BYREF
  _QWORD v33[4]; // [rsp+A8h] [rbp+37h] BYREF
  __int64 v34; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, 0LL);
  if ( *(_QWORD *)(gptiCurrent + 600LL) )
    goto LABEL_28;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v7 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 80);
      v7 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 120LL);
  }
  if ( !a1 )
    goto LABEL_28;
  v8 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 8) || *(_QWORD *)(v8 + 16) )
      goto LABEL_28;
  }
  v10 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v10 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 144)) && (*(_BYTE *)(v10 + 30) & 8) == 0 )
    goto LABEL_28;
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v11 + 600) )
    goto LABEL_28;
  if ( v11 != v9 )
  {
    PostTransformableMessage(a1, 274LL, v3, a3, 1);
LABEL_28:
    v24 = 0LL;
    goto LABEL_29;
  }
  v12 = MNAllocPopup(0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v26, (__int64)v12);
  if ( !*v26[0] )
    goto LABEL_28;
  v13 = (struct tagMENUSTATE *)MNAllocMenuState(v26);
  if ( !v13 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, *v26[0]);
    MNFreePopup(v30);
    if ( *(void *const *)v26[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v14 = *v26[0];
      NullifyLookasideRef(*(_QWORD *)(*v26[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v14);
    }
    goto LABEL_28;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v34, v13);
  **(_DWORD **)v26[0] |= 1u;
  **(_DWORD **)v26[0] |= 2u;
  *((_QWORD *)&v27 + 1) = a1;
  *(_QWORD *)&v27 = *v26[0] + 8LL;
  v31 = v27;
  HMAssignmentLock(&v31);
  *(_DWORD *)(*v26[0] + 80LL) = -1;
  *((_QWORD *)&v28 + 1) = a1;
  *(_QWORD *)&v28 = *v26[0] + 16LL;
  v32 = v28;
  HMAssignmentLock(&v32);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0LL);
  MNMarkDelayedFreePopup(v26, v29);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v29, v15);
  *(_QWORD *)(*v26[0] + 64LL) = *v26[0];
  v16 = (_QWORD *)a1;
  v17 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v17 + 31) & 0xC0) == 0x40 )
  {
    do
      v16 = (_QWORD *)v16[10];
    while ( (*(_BYTE *)(v16[5] + 31LL) & 0xC0) == 0x40 );
  }
  v18 = v16[18];
  if ( v18 )
  {
    v19 = (**(_DWORD **)v26[0] ^ (*(_DWORD *)(*(_QWORD *)(v18 + 40) + 40LL) << 17)) & 0x400000;
    **(_DWORD **)v26[0] ^= v19;
  }
  else
  {
    v19 = **(_DWORD **)v26[0] & 0xFFBFFFFF | ((*(_BYTE *)(v17 + 25) & 0x20) << 17);
    **(_DWORD **)v26[0] = v19;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
  v33[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v33;
  v33[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  xxxSendMessage(a1);
  ThreadUnlock1(v22, v21, v23);
  v24 = v34;
  if ( !v34 || (unsigned int)xxxUnlockMenuState(v34) )
    goto LABEL_28;
LABEL_29:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v26, v6);
  return v24;
}

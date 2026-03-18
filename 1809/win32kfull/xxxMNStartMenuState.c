/*
 * XREFs of xxxMNStartMenuState @ 0x1C01FA6E4
 * Callers:
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0022754 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessage @ 0x1C00D03E8 (_PostTransformableMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01CCFA0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01F8FE0 (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C01F98FC (NullifyLookasideRef.c)
 *     MNAllocMenuState @ 0x1C01F99E4 (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C01F9B2C (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C01F9D84 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C01F9E68 (MNMarkDelayedFreePopup.c)
 *     xxxUnlockMenuState @ 0x1C01FAA30 (xxxUnlockMenuState.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMNStartMenuState(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rax
  struct tagMENUSTATE *v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v23[2]; // [rsp+38h] [rbp-29h] BYREF
  __int128 v24; // [rsp+48h] [rbp-19h]
  __int64 v25[2]; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v27; // [rsp+78h] [rbp+17h] BYREF
  __int128 v28; // [rsp+88h] [rbp+27h] BYREF
  _QWORD v29[4]; // [rsp+98h] [rbp+37h] BYREF
  __int64 v30; // [rsp+E0h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, 0LL);
  if ( *(_QWORD *)(gptiCurrent + 608LL) )
    goto LABEL_28;
  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v6 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 80);
      v6 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v6 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) + 120LL);
  }
  if ( !a1 )
    goto LABEL_28;
  v7 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) || *(_QWORD *)(v7 + 16) )
      goto LABEL_28;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v9 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 144)) && (*(_BYTE *)(v9 + 30) & 8) == 0 )
    goto LABEL_28;
  v10 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v10 + 608) )
    goto LABEL_28;
  if ( v10 != v8 )
  {
    PostTransformableMessage(a1, 274LL, v3, a3, 1);
LABEL_28:
    v21 = 0LL;
    goto LABEL_29;
  }
  v11 = MNAllocPopup(0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v23, (__int64)v11);
  if ( !*v23[0] )
    goto LABEL_28;
  v12 = (struct tagMENUSTATE *)MNAllocMenuState(v23);
  if ( !v12 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v26, *v23[0]);
    MNFreePopup(v26);
    if ( *(void *const *)v23[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v13 = *v23[0];
      NullifyLookasideRef(*(_QWORD *)(*v23[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v13);
    }
    goto LABEL_28;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v30, v12);
  *((_QWORD *)&v24 + 1) = a1;
  **(_DWORD **)v23[0] |= 1u;
  **(_DWORD **)v23[0] |= 2u;
  *(_QWORD *)&v24 = *v23[0] + 8LL;
  v27 = v24;
  HMAssignmentLock(&v27);
  *((_QWORD *)&v24 + 1) = a1;
  *(_DWORD *)(*v23[0] + 80LL) = -1;
  *(_QWORD *)&v24 = *v23[0] + 16LL;
  v28 = v24;
  HMAssignmentLock(&v28);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v25, 0LL);
  MNMarkDelayedFreePopup(v23, v25);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v25);
  *(_QWORD *)(*v23[0] + 64LL) = *v23[0];
  v14 = (_QWORD *)a1;
  v15 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v15 + 31) & 0xC0) == 0x40 )
  {
    do
      v14 = (_QWORD *)v14[10];
    while ( (*(_BYTE *)(v14[5] + 31LL) & 0xC0) == 0x40 );
  }
  v16 = v14[18];
  if ( v16 )
  {
    v17 = (**(_DWORD **)v23[0] ^ (*(_DWORD *)(*(_QWORD *)(v16 + 40) + 40LL) << 17)) & 0x400000;
    **(_DWORD **)v23[0] ^= v17;
  }
  else
  {
    v17 = **(_DWORD **)v23[0] & 0xFFBFFFFF | ((*(_BYTE *)(v15 + 25) & 0x20) << 17);
    **(_DWORD **)v23[0] = v17;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
  v29[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v29;
  v29[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  xxxSendMessage(a1);
  ThreadUnlock1(v20, v19);
  v21 = v30;
  if ( !v30 || (unsigned int)xxxUnlockMenuState(v30) )
    goto LABEL_28;
LABEL_29:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v23);
  return v21;
}

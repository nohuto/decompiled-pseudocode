/*
 * XREFs of xxxMNStartMenuState @ 0x1C0211324
 * Callers:
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E14E0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020FC7C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C02105C4 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210668 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C02106AC (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C02107C8 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C0210A24 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C0210B2C (MNMarkDelayedFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rax
  struct tagMENUSTATE *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  _QWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct tagMENUSTATE *v29; // rbx
  _QWORD *v31[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v32; // [rsp+48h] [rbp-29h] BYREF
  ULONG_PTR v33; // [rsp+50h] [rbp-21h]
  __int64 v34; // [rsp+58h] [rbp-19h]
  __int128 v35; // [rsp+68h] [rbp-9h]
  __int128 v36; // [rsp+78h] [rbp+7h]
  __int64 v37[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 *v38[2]; // [rsp+98h] [rbp+27h] BYREF
  __int128 v39; // [rsp+A8h] [rbp+37h] BYREF
  __int128 v40; // [rsp+B8h] [rbp+47h] BYREF
  struct tagMENUSTATE *v41; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v31, 0LL);
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v8 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 600LL) )
    goto LABEL_28;
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v9 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 104);
      v9 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 128LL);
  }
  if ( !a1 )
    goto LABEL_28;
  v10 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) )
      goto LABEL_28;
  }
  v11 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v11 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 168)) && (*(_BYTE *)(v11 + 30) & 8) == 0 )
    goto LABEL_28;
  v12 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v12 + 600) )
    goto LABEL_28;
  if ( v12 != v8 )
  {
    PostTransformableMessage((struct tagWND *)a1, 0x112u, v3, a3, 1);
LABEL_28:
    v29 = 0LL;
    goto LABEL_29;
  }
  v13 = MNAllocPopup(0, v6);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v31, (__int64)v13);
  if ( !*v31[0] )
    goto LABEL_28;
  v14 = (struct tagMENUSTATE *)MNAllocMenuState(v31);
  if ( !v14 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v38, *v31[0]);
    MNFreePopup(v38);
    if ( *(void *const *)v31[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v15 = *v31[0];
      NullifyLookasideRef(*(_QWORD *)(*v31[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v15);
    }
    goto LABEL_28;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v41, v14);
  **(_DWORD **)v31[0] |= 1u;
  **(_DWORD **)v31[0] |= 2u;
  *((_QWORD *)&v35 + 1) = a1;
  *(_QWORD *)&v35 = *v31[0] + 8LL;
  v39 = v35;
  HMAssignmentLock(&v39);
  *(_DWORD *)(*v31[0] + 80LL) = -1;
  *((_QWORD *)&v36 + 1) = a1;
  *(_QWORD *)&v36 = *v31[0] + 16LL;
  v40 = v36;
  HMAssignmentLock(&v40);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, 0LL);
  MNMarkDelayedFreePopup(v31, v37);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v37, v16, v17, v18);
  *(_QWORD *)(*v31[0] + 64LL) = *v31[0];
  v20 = (_QWORD *)a1;
  v21 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v21 + 31) & 0xC0) == 0x40 )
  {
    do
      v20 = (_QWORD *)v20[13];
    while ( (*(_BYTE *)(v20[5] + 31LL) & 0xC0) == 0x40 );
  }
  v22 = v20[21];
  if ( v22 )
  {
    v23 = (**(_DWORD **)v31[0] ^ (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 40LL) << 17)) & 0x400000;
    **(_DWORD **)v31[0] ^= v23;
  }
  else
  {
    v24 = (*(_BYTE *)(v21 + 25) & 0x20) << 17;
    v21 = *v31[0];
    v23 = **(_DWORD **)v31[0] & 0xFFBFFFFF | v24;
    **(_DWORD **)v31[0] = v23;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v21, v19);
  v32 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
  v33 = a1;
  HMLockObject(a1);
  xxxSendMessage(a1);
  ThreadUnlock1(v27, v26, v28);
  v29 = v41;
  if ( !v41 || (unsigned int)xxxUnlockMenuStateInternal(v41, 0) )
    goto LABEL_28;
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31, (__int64)v6, v7, v8);
  return v29;
}

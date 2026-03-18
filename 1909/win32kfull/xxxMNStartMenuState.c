/*
 * XREFs of xxxMNStartMenuState @ 0x1C0210DE4
 * Callers:
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C0012284 (_PostTransformableMessage.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E1360 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C020F73C (--$FreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0210084 (NullifyLookasideRef.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210128 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocMenuState @ 0x1C021016C (MNAllocMenuState.c)
 *     MNAllocPopup @ 0x1C0210288 (MNAllocPopup.c)
 *     MNFreePopup @ 0x1C02104E4 (MNFreePopup.c)
 *     MNMarkDelayedFreePopup @ 0x1C02105EC (MNMarkDelayedFreePopup.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagMENUSTATE *__fastcall xxxMNStartMenuState(ULONG_PTR a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rax
  struct tagMENUSTATE *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // edx
  __int64 ThreadWin32Thread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct tagMENUSTATE *v27; // rbx
  _QWORD *v29[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v30; // [rsp+48h] [rbp-29h] BYREF
  ULONG_PTR v31; // [rsp+50h] [rbp-21h]
  __int64 v32; // [rsp+58h] [rbp-19h]
  __int128 v33; // [rsp+68h] [rbp-9h]
  __int128 v34; // [rsp+78h] [rbp+7h]
  __int64 v35[2]; // [rsp+88h] [rbp+17h] BYREF
  __int64 *v36[2]; // [rsp+98h] [rbp+27h] BYREF
  __int128 v37; // [rsp+A8h] [rbp+37h] BYREF
  __int128 v38; // [rsp+B8h] [rbp+47h] BYREF
  struct tagMENUSTATE *v39; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0LL);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 600LL) )
    goto LABEL_28;
  v8 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 )
  {
    do
    {
      if ( (*(_BYTE *)(v8 + 30) & 8) != 0 )
        break;
      a1 = *(_QWORD *)(a1 + 104);
      v8 = *(_QWORD *)(a1 + 40);
    }
    while ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 );
  }
  else
  {
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 128LL);
  }
  if ( !a1 )
    goto LABEL_28;
  v9 = safe_cast_fnid_to_PMENUWND(a1);
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 8) || *(_QWORD *)(v9 + 16) )
      goto LABEL_28;
  }
  v11 = *(_QWORD *)(a1 + 40);
  if ( ((*(_BYTE *)(v11 + 31) & 0xC0) == 0x40 || !*(_QWORD *)(a1 + 168)) && (*(_BYTE *)(v11 + 30) & 8) == 0 )
    goto LABEL_28;
  v12 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v12 + 600) )
    goto LABEL_28;
  if ( v12 != v10 )
  {
    PostTransformableMessage((struct tagWND *)a1, 0x112u, v3, a3, 1);
LABEL_28:
    v27 = 0LL;
    goto LABEL_29;
  }
  v13 = MNAllocPopup(0, v6);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, (__int64)v13);
  if ( !*v29[0] )
    goto LABEL_28;
  v14 = (struct tagMENUSTATE *)MNAllocMenuState(v29);
  if ( !v14 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, *v29[0]);
    MNFreePopup(v36);
    if ( *(void *const *)v29[0] == gpopupMenu )
    {
      gdwPUDFlags &= ~0x800000u;
      NullifyLookasideRef(*((_QWORD *)&gpopupMenu + 11));
    }
    else
    {
      v15 = *v29[0];
      NullifyLookasideRef(*(_QWORD *)(*v29[0] + 88LL));
      FreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v15);
    }
    goto LABEL_28;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v39, v14);
  **(_DWORD **)v29[0] |= 1u;
  **(_DWORD **)v29[0] |= 2u;
  *((_QWORD *)&v33 + 1) = a1;
  *(_QWORD *)&v33 = *v29[0] + 8LL;
  v37 = v33;
  HMAssignmentLock(&v37);
  *(_DWORD *)(*v29[0] + 80LL) = -1;
  *((_QWORD *)&v34 + 1) = a1;
  *(_QWORD *)&v34 = *v29[0] + 16LL;
  v38 = v34;
  HMAssignmentLock(&v38);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, 0LL);
  MNMarkDelayedFreePopup(v29, v35);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v35, v16, v17);
  *(_QWORD *)(*v29[0] + 64LL) = *v29[0];
  v18 = (_QWORD *)a1;
  v19 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v19 + 31) & 0xC0) == 0x40 )
  {
    do
      v18 = (_QWORD *)v18[13];
    while ( (*(_BYTE *)(v18[5] + 31LL) & 0xC0) == 0x40 );
  }
  v20 = v18[21];
  if ( v20 )
  {
    v21 = (**(_DWORD **)v29[0] ^ (*(_DWORD *)(*(_QWORD *)(v20 + 40) + 40LL) << 17)) & 0x400000;
    **(_DWORD **)v29[0] ^= v21;
  }
  else
  {
    v22 = (*(_BYTE *)(v19 + 25) & 0x20) << 17;
    v19 = *v29[0];
    v21 = **(_DWORD **)v29[0] & 0xFFBFFFFF | v22;
    **(_DWORD **)v29[0] = v21;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v19);
  v30 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v30;
  v31 = a1;
  HMLockObject(a1);
  xxxSendMessage(a1);
  ThreadUnlock1(v25, v24, v26);
  v27 = v39;
  if ( !v39 || (unsigned int)xxxUnlockMenuStateInternal(v39, 0) )
    goto LABEL_28;
LABEL_29:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, (__int64)v6, v7);
  return v27;
}

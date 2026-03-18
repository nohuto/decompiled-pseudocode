/*
 * XREFs of ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02223D8
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0221D34 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E9CE8 (zzzShowFade.c)
 */

__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // edi
  __int64 v7; // rcx
  _DWORD *v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // r9
  HDC v11; // r14
  HDC DCEx; // rbx
  _QWORD v14[2]; // [rsp+60h] [rbp+17h] BYREF
  struct tagRECT v15; // [rsp+70h] [rbp+27h] BYREF

  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v14, 0LL);
  if ( gbDisableAlpha )
    goto LABEL_12;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    goto LABEL_12;
  v6 = 1;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3
    || CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
  {
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a1 + 16);
  if ( !v7 )
    v7 = **(_QWORD **)a1;
  v8 = MNGetPopupFromMenu(v7, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v14, (__int64)v8);
  if ( !*(_QWORD *)v14[0]
    || (v9 = *(_QWORD *)(*(_QWORD *)v14[0] + 16LL)) == 0
    || (v10 = *(_DWORD **)a2,
        v15.left = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v15.top = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 108LL) + v10[17],
        v15.right = v15.left + v10[18],
        v15.bottom = v15.top + v10[19],
        (v11 = CreateFadeInternal(
                 0LL,
                 &v15,
                 350,
                 (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                 *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL))) == 0LL) )
  {
LABEL_12:
    v6 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(v9, 0LL, 1073807360LL);
    NtGdiBitBltInternal(
      v11,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)a2 + 72LL),
      *(_DWORD *)(*(_QWORD *)a2 + 76LL),
      DCEx,
      *(_DWORD *)(*(_QWORD *)a2 + 64LL),
      *(_DWORD *)(*(_QWORD *)a2 + 68LL),
      13369376,
      0,
      0);
    _ReleaseDC(DCEx);
    zzzShowFade();
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v4, v5);
  return v6;
}

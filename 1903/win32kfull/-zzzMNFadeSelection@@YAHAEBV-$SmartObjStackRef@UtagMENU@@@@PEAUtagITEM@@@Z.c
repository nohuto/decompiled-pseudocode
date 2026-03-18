/*
 * XREFs of ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0222918
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E9E68 (zzzShowFade.c)
 */

__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rbx
  _DWORD *v11; // r9
  HDC v12; // r14
  HDC DCEx; // rbx
  _QWORD v15[2]; // [rsp+60h] [rbp+17h] BYREF
  struct tagRECT v16; // [rsp+70h] [rbp+27h] BYREF

  *(_QWORD *)&v16.left = 0LL;
  *(_QWORD *)&v16.right = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v15, 0LL);
  if ( gbDisableAlpha )
    goto LABEL_12;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    goto LABEL_12;
  v7 = 1;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3
    || CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
  {
    goto LABEL_12;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
    v8 = **(_QWORD **)a1;
  v9 = MNGetPopupFromMenu(v8, 0LL, v5, v6);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v15, (__int64)v9);
  if ( !*(_QWORD *)v15[0]
    || (v10 = *(_QWORD *)(*(_QWORD *)v15[0] + 16LL)) == 0
    || (v11 = *(_DWORD **)a2,
        v16.left = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v16.top = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 108LL) + v11[17],
        v16.right = v16.left + v11[18],
        v16.bottom = v16.top + v11[19],
        (v12 = CreateFadeInternal(
                 0LL,
                 &v16,
                 350,
                 (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                 *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL))) == 0LL) )
  {
LABEL_12:
    v7 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(v10, 0LL, 1073807360LL);
    NtGdiBitBltInternal(
      v12,
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
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v4, v5, v6);
  return v7;
}

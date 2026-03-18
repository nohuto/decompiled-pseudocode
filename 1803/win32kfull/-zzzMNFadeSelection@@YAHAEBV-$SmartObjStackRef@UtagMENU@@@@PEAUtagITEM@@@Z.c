/*
 * XREFs of ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01E4EFC
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C01E4874 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01B2084 (zzzShowFade.c)
 */

__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // r9
  HDC v10; // rbp
  HDC DCEx; // rbx
  _QWORD v13[2]; // [rsp+60h] [rbp-48h] BYREF
  struct tagRECT v14; // [rsp+70h] [rbp-38h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, 0LL);
  if ( gbDisableAlpha )
    goto LABEL_12;
  v4 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000400;
  if ( (_DWORD)v4 != -2147482624 )
    goto LABEL_12;
  v5 = 1;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 3
    || CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
  {
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    v6 = **(_QWORD **)a1;
  v7 = MNGetPopupFromMenu(v6, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13, (__int64)v7);
  if ( !*(_QWORD *)v13[0]
    || (v8 = *(_QWORD *)(*(_QWORD *)v13[0] + 16LL)) == 0
    || (v9 = *(_DWORD **)a2,
        v14.left = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v14.top = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 108LL) + v9[17],
        v14.right = v14.left + v9[18],
        v14.bottom = v14.top + v9[19],
        (v10 = CreateFadeInternal(
                 0LL,
                 &v14,
                 350,
                 (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                 *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL))) == 0LL) )
  {
LABEL_12:
    v5 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(v8, 0LL, 1073807360LL);
    NtGdiBitBltInternal(
      v10,
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
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13, v4);
  return v5;
}

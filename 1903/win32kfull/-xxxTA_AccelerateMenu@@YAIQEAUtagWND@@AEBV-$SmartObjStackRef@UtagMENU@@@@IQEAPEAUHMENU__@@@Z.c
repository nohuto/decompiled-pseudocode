/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0159780
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C0110944 (xxxTranslateAccelerator.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0159810 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(__int64 *BugCheckParameter2, __int64 **a2, unsigned int a3, HWND *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int TopLevelMenuIndex; // eax
  struct _LARGE_STRING *v13; // rbp
  unsigned int v14; // esi
  HWND *v16; // r8
  HWND v17; // r8
  _QWORD *v18; // rdi
  HWND *v19; // r8
  HWND v20; // r8
  int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  __int64 v26; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v28; // [rsp+68h] [rbp-20h]

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v28 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v9, a3);
  v13 = (struct _LARGE_STRING *)TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v16 = (HWND *)a2[2];
  v14 = 2;
  if ( !v16 )
    v16 = (HWND *)**a2;
  v17 = *v16;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x116u, v17, 0LL, 0, 0, 0LL, 1u, 1);
  if ( (unsigned int)v13 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    goto LABEL_3;
  v18 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)v13);
  v19 = (HWND *)v18[2];
  if ( v19 )
  {
    v20 = *v19;
    *a4 = v20;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x117u, v20, v13, 0, 0, 0LL, 1u, 1);
    if ( (unsigned int)v13 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
LABEL_3:
      *a4 = 0LL;
      v14 = 0;
      goto LABEL_4;
    }
    v21 = *(_DWORD *)(*v18 + 4LL) & 3;
  }
  else
  {
    v21 = 0;
  }
  v22 = v28;
  if ( !v28 )
    v22 = *(_QWORD *)v27[0];
  v23 = (__int64)a2[2];
  v26 = v22;
  if ( !v23 )
    v23 = **a2;
  v24 = MNLookUpItem(v23, a3, 0LL, &v26);
  v28 = 0LL;
  v25 = v24;
  SmartObjStackRefBase<tagMENU>::operator=(v27, v26);
  if ( !v25 )
    goto LABEL_3;
  if ( (*(_DWORD *)(*v25 + 4LL) & 3) != 0 || v21 )
    v14 = 3;
LABEL_4:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v8, v10, v11);
  return v14;
}

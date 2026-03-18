/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015293C
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C01073F0 (xxxTranslateAccelerator.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01529CC (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(
        __int64 *BugCheckParameter2,
        __int64 **a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int TopLevelMenuIndex; // eax
  __int64 v11; // rbp
  unsigned int v12; // esi
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // r8
  _QWORD *v16; // rdi
  unsigned __int64 *v17; // r8
  unsigned __int64 v18; // r8
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v26; // [rsp+68h] [rbp-20h]

  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v26 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v9, a3);
  v11 = TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v14 = (unsigned __int64 *)a2[2];
  v12 = 2;
  if ( !v14 )
    v14 = (unsigned __int64 *)**a2;
  v15 = *v14;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x116u, v15, 0LL, 0, 0, 0LL, 1, 1);
  if ( (unsigned int)v11 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    goto LABEL_3;
  v16 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)v11);
  v17 = (unsigned __int64 *)v16[2];
  if ( v17 )
  {
    v18 = *v17;
    *a4 = v18;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x117u, v18, v11, 0, 0, 0LL, 1, 1);
    if ( (unsigned int)v11 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
LABEL_3:
      *a4 = 0LL;
      v12 = 0;
      goto LABEL_4;
    }
    v19 = *(_DWORD *)(*v16 + 4LL) & 3;
  }
  else
  {
    v19 = 0;
  }
  v20 = v26;
  if ( !v26 )
    v20 = *(_QWORD *)v25[0];
  v21 = (__int64)a2[2];
  v24 = v20;
  if ( !v21 )
    v21 = **a2;
  v22 = MNLookUpItem(v21, a3, 0, &v24);
  v26 = 0LL;
  v23 = v22;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v24);
  if ( !v23 )
    goto LABEL_3;
  if ( (*(_DWORD *)(*v23 + 4LL) & 3) != 0 || v19 )
    v12 = 3;
LABEL_4:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v8);
  return v12;
}

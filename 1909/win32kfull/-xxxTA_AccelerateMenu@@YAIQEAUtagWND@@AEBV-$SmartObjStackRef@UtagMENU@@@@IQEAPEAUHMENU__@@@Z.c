/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015A730
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00EB884 (xxxTranslateAccelerator.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C015A7C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(
        __int64 *BugCheckParameter2,
        __int64 **a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int TopLevelMenuIndex; // eax
  struct _LARGE_STRING *v12; // rbp
  unsigned int v13; // esi
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // r8
  _QWORD *v17; // rdi
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // r8
  int v20; // edi
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v27; // [rsp+68h] [rbp-20h]

  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v27 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_3;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v9, a3);
  v12 = (struct _LARGE_STRING *)TopLevelMenuIndex;
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_3;
  v15 = (unsigned __int64 *)a2[2];
  v13 = 2;
  if ( !v15 )
    v15 = (unsigned __int64 *)**a2;
  v16 = *v15;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x116u, v16, 0LL, 0, 0, 0LL, 1u, 1);
  if ( (unsigned int)v12 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    goto LABEL_3;
  v17 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)v12);
  v18 = (unsigned __int64 *)v17[2];
  if ( v18 )
  {
    v19 = *v18;
    *a4 = v19;
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(BugCheckParameter2, 0x117u, v19, v12, 0, 0, 0LL, 1u, 1);
    if ( (unsigned int)v12 >= *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
LABEL_3:
      *a4 = 0LL;
      v13 = 0;
      goto LABEL_4;
    }
    v20 = *(_DWORD *)(*v17 + 4LL) & 3;
  }
  else
  {
    v20 = 0;
  }
  v21 = v27;
  if ( !v27 )
    v21 = *(_QWORD *)v26[0];
  v22 = (__int64)a2[2];
  v25 = v21;
  if ( !v22 )
    v22 = **a2;
  v23 = MNLookUpItem(v22, a3, 0LL, &v25);
  v27 = 0LL;
  v24 = v23;
  SmartObjStackRefBase<tagMENU>::operator=(v26, v25);
  if ( !v24 )
    goto LABEL_3;
  if ( (*(_DWORD *)(*v24 + 4LL) & 3) != 0 || v20 )
    v13 = 3;
LABEL_4:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v26, v8, v10);
  return v13;
}

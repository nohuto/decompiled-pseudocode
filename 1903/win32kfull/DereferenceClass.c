/*
 * XREFs of DereferenceClass @ 0x1C0097690
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD **v9; // rdx
  _QWORD *i; // r8
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v11, *(_QWORD *)(a2 + 136));
  v5 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v6 = v11[0];
  *(_QWORD *)(a2 + 136) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v6 + 72LL);
  v7 = *(_QWORD *)v11[0];
  if ( *(_QWORD *)v11[0] != *(_QWORD *)(*(_QWORD *)v11[0] + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v11[0] + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v11[0] + 72LL) )
    {
      v9 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)v11[0] + 56LL) + 64LL);
      for ( i = *v9; i != *(_QWORD **)v11[0]; i = (_QWORD *)*i )
        ;
      DestroyClass(a1);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v7, v5, v4);
}

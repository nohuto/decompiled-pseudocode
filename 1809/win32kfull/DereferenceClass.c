/*
 * XREFs of DereferenceClass @ 0x1C0021A20
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     DestroyClass @ 0x1C0022594 (DestroyClass.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD **v6; // rdx
  _QWORD *i; // r8
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v8, *(_QWORD *)(a2 + 112));
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v4 = v8[0];
  *(_QWORD *)(a2 + 112) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v4 + 72LL);
  if ( *(_QWORD *)v8[0] != *(_QWORD *)(*(_QWORD *)v8[0] + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v8[0] + 72LL) )
    {
      v6 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)v8[0] + 56LL) + 64LL);
      for ( i = *v6; i != *(_QWORD **)v8[0]; i = (_QWORD *)*i )
        ;
      DestroyClass(a1);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8);
}

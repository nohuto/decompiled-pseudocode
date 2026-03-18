/*
 * XREFs of DereferenceClass @ 0x1C0035F90
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  struct _CALLPROCDATA ***v7; // rdx
  struct _CALLPROCDATA **i; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v9, *(_QWORD *)(a2 + 112));
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v4 = v9[0];
  *(_QWORD *)(a2 + 112) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v4 + 72LL);
  v5 = *(_QWORD *)v9[0];
  if ( *(_QWORD *)v9[0] != *(_QWORD *)(*(_QWORD *)v9[0] + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v9[0] + 72LL) )
    {
      v7 = (struct _CALLPROCDATA ***)(*(_QWORD *)(*(_QWORD *)v9[0] + 56LL) + 64LL);
      for ( i = *v7; i != *(struct _CALLPROCDATA ***)v9[0]; i = (struct _CALLPROCDATA **)*i )
        v7 = (struct _CALLPROCDATA ***)i;
      DestroyClass(a1, v7);
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v5);
}

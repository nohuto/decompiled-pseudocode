/*
 * XREFs of ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C022EAD4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?NNDeleteAdjustIndex@@YAXPEAII@Z @ 0x1C022EB5C (-NNDeleteAdjustIndex@@YAXPEAII@Z.c)
 */

_QWORD *__fastcall MNDeleteAdjustIndexes(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdx
  unsigned int v4; // r8d
  _QWORD *v5; // r10
  __int64 v6; // r11

  NNDeleteAdjustIndex((unsigned int *)(**(_QWORD **)a2 + 80LL), a3);
  if ( (**(_DWORD **)*v5 & 0x20) != 0 )
    NNDeleteAdjustIndex((unsigned int *)(*(_QWORD *)*v5 + 84LL), v3);
  if ( *(_QWORD *)(v6 + 64) == *(_QWORD *)(*(_QWORD *)*v5 + 16LL) )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 72), v4);
  if ( *(_QWORD *)(v6 + 80) == *(_QWORD *)(*(_QWORD *)*v5 + 16LL) )
    NNDeleteAdjustIndex((unsigned int *)(v6 + 88), v4);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v5, v3);
}

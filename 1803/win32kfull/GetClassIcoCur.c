/*
 * XREFs of GetClassIcoCur @ 0x1C00F1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v6, *(_QWORD *)(a1 + 112));
  switch ( a2 )
  {
    case -14:
      v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 80LL);
      break;
    case -12:
      v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 88LL);
      break;
    case -34:
      v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 112LL);
      break;
    default:
      v4 = 0LL;
      break;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v6, v3);
  return v4;
}

/*
 * XREFs of GetClassIcoCur @ 0x1C0129550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v8, *(_QWORD *)(a1 + 136));
  switch ( a2 )
  {
    case -14:
      v6 = *(_QWORD *)(*(_QWORD *)v8[0] + 80LL);
      break;
    case -12:
      v6 = *(_QWORD *)(*(_QWORD *)v8[0] + 88LL);
      break;
    case -34:
      v6 = *(_QWORD *)(*(_QWORD *)v8[0] + 112LL);
      break;
    default:
      v6 = 0LL;
      break;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v3, v4, v5);
  return v6;
}

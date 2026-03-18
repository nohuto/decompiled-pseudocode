/*
 * XREFs of GetClassIcoCur @ 0x1C01047B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v7, *(_QWORD *)(a1 + 136));
  switch ( a2 )
  {
    case -14:
      v5 = *(_QWORD *)(*(_QWORD *)v7[0] + 80LL);
      break;
    case -12:
      v5 = *(_QWORD *)(*(_QWORD *)v7[0] + 88LL);
      break;
    case -34:
      v5 = *(_QWORD *)(*(_QWORD *)v7[0] + 112LL);
      break;
    default:
      v5 = 0LL;
      break;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v7, v3, v4);
  return v5;
}

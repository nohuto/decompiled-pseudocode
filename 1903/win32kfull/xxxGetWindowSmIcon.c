/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C00471A0
 * Callers:
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B9750 (xxxCreateWindowSmIcon.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  ULONG_PTR v8; // rsi
  __int64 v9; // rbx
  _BYTE *v11; // rcx
  __int64 WindowSmIcon; // rax
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+50h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(BugCheckParameter2 + 136));
  v7 = *(_QWORD *)(BugCheckParameter2 + 40);
  v8 = *(_QWORD *)(v7 + 264);
  if ( !v8 || (LOBYTE(v4) = 3, (v9 = HMValidateHandleNoSecure(*(_QWORD *)(v7 + 264), v4)) == 0) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)v14[0] + 112LL);
    if ( !v9 )
    {
      v11 = *(_BYTE **)(BugCheckParameter2 + 40);
      if ( (v11[21] & 2) != 0 || (v11[20] & 8) != 0 && (v11[24] & 0x40) != 0 )
        goto LABEL_6;
      if ( a2 )
        goto LABEL_6;
      if ( xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 100, (ULONG_PTR)&BugCheckParameter3, 1, 0) )
        v8 = BugCheckParameter3;
      if ( !v8
        || (WindowSmIcon = xxxCreateWindowSmIcon(BugCheckParameter2, v8, 0LL),
            LOBYTE(v13) = 3,
            (v9 = HMValidateHandleNoSecure(WindowSmIcon, v13)) == 0) )
      {
LABEL_6:
        v9 = qword_1C0322F90;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v4, v5, v6);
  return v9;
}

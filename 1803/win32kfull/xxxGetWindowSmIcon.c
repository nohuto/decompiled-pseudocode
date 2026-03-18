/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C00C4A6C
 * Callers:
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(__int64 *BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  _BYTE *v9; // rcx
  unsigned __int64 WindowSmIcon; // rax
  __int64 v11; // rdx
  _QWORD v12[2]; // [rsp+50h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, BugCheckParameter2[14]);
  v5 = BugCheckParameter2[5];
  v6 = *(_QWORD *)(v5 + 264);
  if ( !v6 || (LOBYTE(v4) = 3, (v7 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + 264), v4)) == 0) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v12[0] + 112LL);
    if ( !v7 )
    {
      v9 = (_BYTE *)BugCheckParameter2[5];
      if ( (v9[21] & 2) != 0 || (v9[20] & 8) != 0 && (v9[24] & 0x40) != 0 )
        goto LABEL_6;
      if ( a2 )
        goto LABEL_6;
      if ( xxxSendTransformableMessageTimeout(
             BugCheckParameter2,
             0x37u,
             0LL,
             0LL,
             0,
             100,
             (__int64 *)&BugCheckParameter3,
             1,
             0) )
      {
        v6 = BugCheckParameter3;
      }
      if ( !v6
        || (WindowSmIcon = xxxCreateWindowSmIcon((__int64)BugCheckParameter2, v6, 0LL),
            LOBYTE(v11) = 3,
            (v7 = HMValidateHandleNoSecure(WindowSmIcon, v11)) == 0) )
      {
LABEL_6:
        v7 = qword_1C031D8E8;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v4);
  return v7;
}

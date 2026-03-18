/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C008BB70
 * Callers:
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C0109E88 (xxxCreateWindowSmIcon.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(__int64 *BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rbx
  _BYTE *v10; // rcx
  unsigned __int64 WindowSmIcon; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+50h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v14, BugCheckParameter2[17]);
  v6 = BugCheckParameter2[5];
  v7 = *(_QWORD *)(v6 + 264);
  if ( !v7 || (LOBYTE(v4) = 3, (v8 = HMValidateHandleNoSecure(*(_QWORD *)(v6 + 264), v4, v5)) == 0) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)v14[0] + 112LL);
    if ( !v8 )
    {
      v10 = (_BYTE *)BugCheckParameter2[5];
      if ( (v10[21] & 2) != 0 || (v10[20] & 8) != 0 && (v10[24] & 0x40) != 0 )
        goto LABEL_6;
      if ( a2 )
        goto LABEL_6;
      if ( xxxSendTransformableMessageTimeout(
             BugCheckParameter2,
             0x37u,
             0LL,
             0LL,
             0,
             0x64u,
             (__int64 *)&BugCheckParameter3,
             1u,
             0) )
      {
        v7 = BugCheckParameter3;
      }
      if ( !v7
        || (WindowSmIcon = xxxCreateWindowSmIcon(BugCheckParameter2, v7, 0LL),
            LOBYTE(v12) = 3,
            (v8 = HMValidateHandleNoSecure(WindowSmIcon, v12, v13)) == 0) )
      {
LABEL_6:
        v8 = qword_1C0320F90;
      }
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v4, v5);
  return v8;
}

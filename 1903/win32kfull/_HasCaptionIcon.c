/*
 * XREFs of _HasCaptionIcon @ 0x1C00A9D50
 * Callers:
 *     xxxGetMenuBarInfo @ 0x1C002104C (xxxGetMenuBarInfo.c)
 *     SendDwmIconChange @ 0x1C00483E8 (SendDwmIconChange.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A8EB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     FindNCHit @ 0x1C012D5D8 (FindNCHit.c)
 *     xxxDrawCaptionTemp @ 0x1C0157378 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // r8
  unsigned int v5; // edi
  __int64 v7; // rdx
  char v8; // cl
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  _QWORD v19[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *(_BYTE **)(a1 + 40);
  v5 = 0;
  v7 = 0LL;
  v8 = v4[24];
  if ( v8 < 0 )
    return 0LL;
  if ( (v4[30] & 0xC0) != 0x40 && (v8 & 1) == 0 )
    return 1LL;
  if ( (v4[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v19, *(_QWORD *)(a1 + 136)),
        v7 = 1LL,
        v10 = 1,
        **(_WORD **)(*(_QWORD *)v19[0] + 8LL) != 0x8002) )
  {
    v10 = 0;
  }
  if ( (v7 & 1) != 0 )
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v7, (__int64)v4, a4);
  if ( v10 )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(v11 + 264);
  if ( !v12 )
  {
    v13 = *(_QWORD *)(v11 + 272);
    if ( v13 && v13 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v20, *(_QWORD *)(a1 + 136));
    v14 = *(_QWORD *)v20[0];
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v15, v16, v17);
    v18 = *(_QWORD *)(v14 + 112);
    if ( v18 )
    {
      if ( v18 != _HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v5) = v12 != *(_QWORD *)(gpsi + 6968LL);
  return v5;
}

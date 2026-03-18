/*
 * XREFs of _HasCaptionIcon @ 0x1C002142C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0020584 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxGetMenuBarInfo @ 0x1C00ABF90 (xxxGetMenuBarInfo.c)
 *     SendDwmIconChange @ 0x1C00B7154 (SendDwmIconChange.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     xxxDrawCaptionTemp @ 0x1C0150E88 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FEB14 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  _BYTE *v1; // r8
  unsigned int v2; // edi
  char v4; // dl
  char v5; // cl
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // r9
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 0;
  v4 = 0;
  v5 = v1[24];
  if ( v5 < 0 )
    return 0LL;
  if ( (v1[30] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1LL;
  if ( (v1[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v13, *(_QWORD *)(a1 + 112)),
        v4 = 1,
        v7 = 1,
        **(_WORD **)(*(_QWORD *)v13[0] + 8LL) != 0x8002) )
  {
    v7 = 0;
  }
  if ( (v4 & 1) != 0 )
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13);
  if ( v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(v8 + 272);
    if ( v10 && v10 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(a1 + 112));
    v11 = *(_QWORD *)v14[0];
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14);
    v12 = *(_QWORD *)(v11 + 112);
    if ( v12 )
    {
      if ( v12 != *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v2) = v9 != *(_QWORD *)(gpsi + 6968LL);
  return v2;
}

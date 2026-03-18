/*
 * XREFs of _HasCaptionIcon @ 0x1C00C4988
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C00C36A8 (xxxGetMenuBarInfo.c)
 *     SendDwmIconChange @ 0x1C00C4848 (SendDwmIconChange.c)
 *     FindNCHit @ 0x1C01013E8 (FindNCHit.c)
 *     xxxDrawCaptionTemp @ 0x1C0132880 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  _BYTE *v1; // r8
  unsigned int v2; // edi
  __int64 v4; // rdx
  char v5; // cl
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // si
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 0;
  v4 = 0LL;
  v5 = v1[24];
  if ( v5 < 0 )
    return 0LL;
  if ( (v1[30] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1LL;
  if ( (v1[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(a1 + 112)),
        v4 = 1LL,
        v11 = 1,
        **(_WORD **)(*(_QWORD *)v14[0] + 8LL) != 0x8002) )
  {
    v11 = 0;
  }
  if ( (v4 & 1) != 0 )
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v4);
  if ( v11 )
    return 0LL;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = *(_QWORD *)(v12 + 264);
  if ( !v13 )
  {
    v7 = *(_QWORD *)(v12 + 272);
    if ( v7 && v7 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v15, *(_QWORD *)(a1 + 112));
    v8 = *(_QWORD *)v15[0];
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v9);
    v10 = *(_QWORD *)(v8 + 112);
    if ( v10 )
    {
      if ( v10 != *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v2) = v13 != *(_QWORD *)(gpsi + 6968LL);
  return v2;
}

/*
 * XREFs of _HasCaptionIcon @ 0x1C004AB30
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     SendDwmIconChange @ 0x1C008CDB8 (SendDwmIconChange.c)
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     xxxDrawCaptionTemp @ 0x1C0158138 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  _BYTE *v1; // r8
  unsigned int v2; // edi
  __int64 v4; // rdx
  char v5; // cl
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 0;
  v4 = 0LL;
  v5 = v1[24];
  if ( v5 < 0 )
    return 0LL;
  if ( (v1[30] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1LL;
  if ( (v1[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v15, *(_QWORD *)(a1 + 136)),
        v4 = 1LL,
        v7 = 1,
        **(_WORD **)(*(_QWORD *)v15[0] + 8LL) != 0x8002) )
  {
    v7 = 0;
  }
  if ( (v4 & 1) != 0 )
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v4, (__int64)v1);
  if ( v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(v8 + 272);
    if ( v10 && v10 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v16, *(_QWORD *)(a1 + 136));
    v11 = *(_QWORD *)v16[0];
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v12, v13);
    v14 = *(_QWORD *)(v11 + 112);
    if ( v14 )
    {
      if ( v14 != _HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v2) = v9 != *(_QWORD *)(gpsi + 6968LL);
  return v2;
}

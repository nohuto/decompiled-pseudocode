/*
 * XREFs of GetRect @ 0x1C00CB3EC
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x1C0028484 (xxxScrollWindowEx.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C0084DD8 (ParkIcon.c)
 *     _GetWindowPlacement @ 0x1C0090900 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C0090C28 (UpdateCheckpoint.c)
 *     UT_GetParentDCClipBox @ 0x1C0099F38 (UT_GetParentDCClipBox.c)
 *     CalcSBStuff @ 0x1C00AA7A4 (CalcSBStuff.c)
 *     xxxGetScrollBarInfo @ 0x1C00AAD18 (xxxGetScrollBarInfo.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     InternalGetRealClientRect @ 0x1C01112E0 (InternalGetRealClientRect.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FA254 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C0242090 (SBCtlSetup.c)
 * Callees:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRect(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // r8
  unsigned int v13; // r9d
  unsigned int v14; // r10d
  int v15; // ecx
  int v16; // edx
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned int v21; // edx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v7 = *(_OWORD *)(v3 + 88);
  else
    v7 = *(_OWORD *)(v3 + 104);
  v22 = v7;
  *(_OWORD *)a2 = v7;
  v8 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v8 + 42) & 0x3FFF;
  if ( (_DWORD)result == 669 )
    return result;
  v10 = a3 & 0x70;
  switch ( v10 )
  {
    case 32:
      v17 = (unsigned int *)(v8 + 88);
LABEL_16:
      v18 = v17[1];
      result = *v17;
      *(_DWORD *)a2 -= result;
      *(_DWORD *)(a2 + 8) -= result;
      *(_DWORD *)(a2 + 12) -= v18;
      *(_DWORD *)(a2 + 4) -= v18;
      return result;
    case 16:
      v17 = (unsigned int *)(v8 + 104);
      goto LABEL_16;
    case 64:
      v11 = *(_QWORD *)(a1 + 104);
      v12 = *(_QWORD *)(v11 + 40);
      result = *(_WORD *)(v12 + 42) & 0x3FFF;
      if ( (_DWORD)result != 669 )
      {
        v13 = *(_DWORD *)(v8 + 288);
        v14 = *(_DWORD *)(v12 + 288);
        if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)(v14 >> 8)) & 0x1FF) != 0 )
          goto LABEL_25;
        v15 = 1;
        v16 = (v13 & 0xF) == 2 && (v13 & 0x20000000) != 0;
        if ( (v14 & 0xF) != 2 || (v14 & 0x20000000) == 0 )
          v15 = 0;
        if ( v16 != v15 )
        {
LABEL_25:
          v19 = *(_QWORD *)(a1 + 104);
          v22 = *(_OWORD *)(v12 + 104);
          LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v22, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v22, 0LL);
          v12 = *(_QWORD *)(v11 + 40);
          v17 = (unsigned int *)&v22;
        }
        else
        {
          v17 = (unsigned int *)(v12 + 104);
        }
        if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 && v6 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
        {
          v20 = v17[1];
          v21 = v17[2];
          *(_DWORD *)(a2 + 12) -= v20;
          *(_DWORD *)(a2 + 4) -= v20;
          result = v21 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v21 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        goto LABEL_16;
      }
      break;
  }
  return result;
}

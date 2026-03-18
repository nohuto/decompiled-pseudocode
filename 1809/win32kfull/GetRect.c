/*
 * XREFs of GetRect @ 0x1C0021568
 * Callers:
 *     UT_GetParentDCClipBox @ 0x1C001F760 (UT_GetParentDCClipBox.c)
 *     xxxGetScrollBarInfo @ 0x1C001FD30 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00724BC (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x1C0079188 (xxxScrollWindowEx.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     _GetWindowPlacement @ 0x1C00B6B80 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C00B6E60 (UpdateCheckpoint.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     InternalGetRealClientRect @ 0x1C010EABC (InternalGetRealClientRect.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E49BC (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C02295E4 (SBCtlSetup.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall GetRect(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int128 v7; // xmm0
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // r8
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v7 = *(_OWORD *)(v3 + 88);
  else
    v7 = *(_OWORD *)(v3 + 104);
  v18 = v7;
  *(_OWORD *)a2 = v7;
  v8 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v8 + 42) & 0x2FFF;
  if ( (_DWORD)result == 669 )
    return result;
  v10 = a3 & 0x70;
  switch ( v10 )
  {
    case 32:
      v13 = (unsigned int *)(v8 + 88);
LABEL_11:
      v14 = v13[1];
      result = *v13;
      *(_DWORD *)a2 -= result;
      *(_DWORD *)(a2 + 8) -= result;
      *(_DWORD *)(a2 + 12) -= v14;
      *(_DWORD *)(a2 + 4) -= v14;
      return result;
    case 16:
      v13 = (unsigned int *)(v8 + 104);
      goto LABEL_11;
    case 64:
      v11 = *(_QWORD *)(a1 + 80);
      v12 = *(_QWORD *)(v11 + 40);
      result = *(_WORD *)(v12 + 42) & 0x2FFF;
      if ( (_DWORD)result != 669 )
      {
        v13 = (unsigned int *)(v12 + 104);
        if ( (((unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8)) & 0x1FF) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 80);
          v18 = *(_OWORD *)v13;
          LogicalToPhysicalInPlaceRectWithSubpixel(v15, &v18, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v18, 0LL);
          v12 = *(_QWORD *)(v11 + 40);
          v13 = (unsigned int *)&v18;
        }
        if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 && v6 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
        {
          v16 = v13[1];
          v17 = v13[2];
          *(_DWORD *)(a2 + 12) -= v16;
          *(_DWORD *)(a2 + 4) -= v16;
          result = v17 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v17 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        goto LABEL_11;
      }
      break;
  }
  return result;
}

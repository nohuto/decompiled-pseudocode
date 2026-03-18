/*
 * XREFs of GetRect @ 0x1C0038BE0
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxScrollWindowEx @ 0x1C002F500 (xxxScrollWindowEx.c)
 *     UT_GetParentDCClipBox @ 0x1C00380C0 (UT_GetParentDCClipBox.c)
 *     xxxGetScrollBarInfo @ 0x1C003891C (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     _GetWindowPlacement @ 0x1C00666E0 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C00669AC (UpdateCheckpoint.c)
 *     ParkIcon @ 0x1C0066FAC (ParkIcon.c)
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     InternalGetRealClientRect @ 0x1C00F3E30 (InternalGetRealClientRect.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00F97E4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C0758 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C0200BAC (SBCtlSetup.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 */

__int64 __fastcall GetRect(__int64 a1, int *a2, char a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int128 v7; // xmm0
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // r8
  int *v13; // rdx
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r8d
  int v19; // edx
  int v20; // eax
  int v21; // ecx
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
      v13 = (int *)(v8 + 88);
LABEL_13:
      v14 = *v13;
      v15 = -v13[1];
      a2[3] -= v13[1];
      result = (unsigned int)-v14;
      *a2 += result;
      a2[2] += result;
      a2[1] += v15;
      return result;
    case 16:
      v13 = (int *)(v8 + 104);
      goto LABEL_13;
    case 64:
      v11 = *(_QWORD *)(a1 + 80);
      v12 = *(_QWORD *)(v11 + 40);
      result = *(_WORD *)(v12 + 42) & 0x3FFF;
      if ( (_DWORD)result != 669 )
      {
        v13 = (int *)(v12 + 104);
        if ( (((unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8)) & 0x1FF) != 0 )
        {
          v16 = *(_QWORD *)(a1 + 80);
          v22 = *(_OWORD *)v13;
          LogicalToPhysicalInPlaceRectWithSubpixel(v16, &v22, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v22, 0LL);
          v12 = *(_QWORD *)(v11 + 40);
          v13 = (int *)&v22;
        }
        if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 && v6 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
        {
          v17 = v13[1];
          v18 = -v13[2];
          v19 = *a2;
          v20 = -v17;
          v21 = a2[2];
          a2[3] += v20;
          a2[1] += v20;
          *a2 = -(v18 + v21);
          result = (unsigned int)-(v19 + v18);
          a2[2] = result;
          return result;
        }
        goto LABEL_13;
      }
      break;
  }
  return result;
}

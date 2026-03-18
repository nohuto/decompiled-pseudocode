/*
 * XREFs of ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C024ED54
 * Callers:
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C024EBE0 (-Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00C9418 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z @ 0x1C027BA68 (-DxgkpGetDodPrimaryInfo@@YAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@PEAU_D3DKMT_KMDOD_ESCAPE@@@Z.c)
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1C027D0F0 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UpdateDodFrontBuffer(ADAPTER_RENDER **this, struct DXGALLOCATION *a2)
{
  unsigned int v4; // edx
  _QWORD *v5; // rax
  DXGADAPTER *v7; // rcx
  unsigned __int8 IsVSyncAvailable; // al
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  const GUID *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v23; // rcx
  __m128i v24; // xmm2
  __int128 v25; // xmm0
  D3DDDIFORMAT Format; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  LONG v32; // eax
  __int64 v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v36; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGKARG_PRESENT_DISPLAYONLY v37; // [rsp+70h] [rbp-90h] BYREF
  __m128i v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  _DWORD v40[20]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v41; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v42; // [rsp+148h] [rbp+48h]

  v4 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v4 & 0x10) != 0 )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
    v5[3] = -1071775482LL;
    v5[4] = this;
    v5[5] = a2;
    WdLogEvent5_WdEvent(v5);
    return 3223191814LL;
  }
  v7 = this[216];
  if ( v7 )
    IsVSyncAvailable = DXGADAPTER::IsVSyncAvailable(v7, (v4 >> 6) & 0xF);
  else
    IsVSyncAvailable = 1;
  if ( !IsVSyncAvailable )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdEvent(v7);
    v9[3] = 0LL;
    v9[4] = this;
    v9[5] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    WdLogEvent5_WdEvent(v9);
    return 0LL;
  }
  memset(v40, 0, sizeof(v40));
  DxgkpGetDodPrimaryInfo((struct DXGDEVICE *)this, a2, (struct _D3DKMT_KMDOD_ESCAPE *)v40);
  if ( !v40[8] )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v14 = -1073741811LL;
LABEL_10:
    v13[3] = v14;
    v13[4] = this;
    v13[5] = a2;
    v15 = *((unsigned int *)a2 + 4);
LABEL_11:
    v13[6] = v15;
LABEL_12:
    WdLogEvent5_WdError(v13);
    return (unsigned int)v14;
  }
  memset(&v36, 0, sizeof(v36));
  v16 = *((_QWORD *)a2 + 6);
  v36.Rotation = -1;
  v36.Flags.Value = 1;
  v36.hAllocation = *(HANDLE *)(v16 + 16);
  v18 = ADAPTER_RENDER::DdiDescribeAllocation(this[2], &v36, v17);
  v14 = v18;
  if ( v18 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
    v13[3] = v14;
    v13[4] = this;
    v13[5] = a2;
    v13[6] = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
    v13[7] = *((unsigned int *)a2 + 4);
    goto LABEL_12;
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *((DXGADAPTER ***)this[216] + 319),
                      (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF);
  v24 = *(__m128i *)DisplayModeInfo;
  v25 = *((_OWORD *)DisplayModeInfo + 1);
  LODWORD(DisplayModeInfo) = _mm_cvtsi128_si32(*(__m128i *)DisplayModeInfo);
  v38 = v24;
  v39 = v25;
  if ( *(_QWORD *)&v36.Width == __PAIR64__(v24.m128i_u32[1], (unsigned int)DisplayModeInfo)
    && (v36.Rotation == -1 || v36.Rotation == HIDWORD(v39)) )
  {
    v23 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v36.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v36.Format;
    if ( v38.m128i_i32[2] != 21 )
      v23 = v38.m128i_u32[2];
    if ( Format == (_DWORD)v23 )
    {
      memset(&v37, 0, sizeof(v37));
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, void **))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL)
                                                                                                + 256LL))(
              *((_QWORD *)this[2] + 69),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              2LL,
              0,
              0LL,
              &v37.pSource);
      v14 = v27;
      if ( v27 < 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
        goto LABEL_10;
      }
      v41 = 0LL;
      v42 = 0LL;
      v31 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      v37.VidPnSourceId = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
      if ( (unsigned int)(v36.Format - 21) > 1 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdError(v29, v31, v30);
        LODWORD(v14) = -1073741811;
        v13[3] = -1073741811LL;
        v13[4] = this;
        v13[5] = a2;
        v15 = v36.Format;
        goto LABEL_11;
      }
      v37.BytesPerPixel = 4;
      if ( HIDWORD(v39) != 1 )
      {
        if ( HIDWORD(v39) == 2 )
        {
LABEL_31:
          v42 = __PAIR64__(v36.Width, v36.Height);
          v32 = v40[9];
LABEL_33:
          v37.Pitch = v32;
          goto LABEL_34;
        }
        if ( HIDWORD(v39) != 3 )
        {
          if ( HIDWORD(v39) != 4 )
          {
LABEL_34:
            if ( HIDWORD(v39) != 1 )
              v37.Flags.Value |= 1u;
            v37.NumDirtyRects = 1;
            v37.pDirtyRect = (RECT *)&v41;
            v33 = *(_QWORD *)(*((_QWORD *)this[216] + 319) + 368LL);
            if ( v33 && (unsigned int)v31 < *(_DWORD *)v33 && (v34 = *(_QWORD *)(v33 + 8)) != 0 )
              LODWORD(v14) = BLTQUEUE::PresentDisplayOnly((BLTQUEUE *)(v34 + 2760LL * (unsigned int)v31), &v37);
            else
              LODWORD(v14) = -1073741811;
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL)
                                                                           + 264LL))(
              *((_QWORD *)this[2] + 69),
              *((_QWORD *)a2 + 3),
              *((_DWORD *)a2 + 4) & 0x3F,
              0LL,
              0LL);
            return (unsigned int)v14;
          }
          goto LABEL_31;
        }
      }
      v42 = *(_QWORD *)&v36.Width;
      v32 = v40[8];
      goto LABEL_33;
    }
  }
  v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v23);
  v35[3] = -1071775482LL;
  v35[4] = this;
  v35[5] = a2;
  WdLogEvent5_WdEvent(v35);
  return 3223191557LL;
}

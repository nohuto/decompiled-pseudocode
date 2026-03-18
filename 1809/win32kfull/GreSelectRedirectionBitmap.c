/*
 * XREFs of GreSelectRedirectionBitmap @ 0x1C00553A0
 * Callers:
 *     UpdateRedirectedDCE @ 0x1C000E950 (UpdateRedirectedDCE.c)
 *     InvalidateDCE @ 0x1C000EDA4 (InvalidateDCE.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z @ 0x1C01D3F0C (-UnselectRedirectionBitmapsInDCEs@@YAXQEAUtagWND@@@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015F030 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C02575A4 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C02575F4 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C02866B4 (-MulGetBitmapForDisplayDevice@@YAPEAUHBITMAP__@@PEAUHDEV__@@0PEAU1@@Z.c)
 */

__int64 __fastcall GreSelectRedirectionBitmap(__int64 a1, HBITMAP BitmapForDisplayDevice)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  HDEV v9; // rbx
  __int64 v10; // rdx
  HDEV v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rbx
  unsigned int v19; // ebx
  int v20; // eax
  HSURF v21; // rcx
  DC *v22; // rdx
  __int64 v23; // rcx
  DC *v24; // rdx
  __int64 v25; // rdi
  DC *v26; // [rsp+20h] [rbp-79h]
  _BYTE v27[32]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v28[32]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v29; // [rsp+70h] [rbp-29h]
  _BYTE v30[32]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v31; // [rsp+98h] [rbp-1h]
  _BYTE v32[32]; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+100h] [rbp+67h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v27);
    LOBYTE(v6) = 1;
    v7 = HmgShareLockEx(v4, v6, 0LL);
    v26 = (DC *)v7;
    v8 = v7;
    if ( !v7 )
    {
      v19 = 0;
      goto LABEL_65;
    }
    v9 = *(HDEV *)(v7 + 48);
    if ( (*(_DWORD *)(v7 + 40) & 1) != 0 )
      break;
    if ( BitmapForDisplayDevice && a1 == v4 )
    {
      SURFREF::SURFREF((SURFREF *)v30);
      v11 = (HDEV)*((_QWORD *)v9 + 3);
      if ( v9 != v11 )
        BitmapForDisplayDevice = MulGetBitmapForDisplayDevice(v11, v9, BitmapForDisplayDevice);
      LOBYTE(v10) = 5;
      v12 = HmgShareLockCheck(BitmapForDisplayDevice, v10);
      v31 = v12;
      v5 = v12;
      if ( !v12 )
      {
        v19 = 0;
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v30);
        goto LABEL_61;
      }
      DEC_SHARE_REF_CNT(v12);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v30);
      v8 = (__int64)v26;
    }
    if ( (*(_DWORD *)(v8 + 36) & 0x4000) != 0 )
    {
      v13 = *(_QWORD *)(v8 + 496);
      if ( v13 )
      {
        SURFREF::SURFREF((SURFREF *)v28, *(HSURF *)(v13 + 32));
        if ( v29 )
        {
          DEC_SHARE_REF_CNT(v29);
          if ( v29 )
            DEC_SHARE_REF_CNT(v29);
        }
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
        v8 = (__int64)v26;
      }
    }
    if ( BitmapForDisplayDevice )
    {
      SURFREF::SURFREF((SURFREF *)v28, (HSURF)BitmapForDisplayDevice);
      if ( v29 )
        INC_SHARE_REF_CNT(v29);
      *((_DWORD *)v26 + 9) |= 0x4000u;
      v14 = *(_DWORD *)(v5 + 112);
      if ( (v14 & 0x800) == 0 )
        *(_DWORD *)(v5 + 112) = v14 | 0x800;
      if ( v29 )
        DEC_SHARE_REF_CNT(v29);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
    }
    else
    {
      v5 = *((_QWORD *)v9 + 319);
      *(_DWORD *)(v8 + 36) &= ~0x4000u;
    }
    v15 = *((_DWORD *)v26 + 9) | 0x8000;
    if ( (*(_DWORD *)(v5 + 112) & 0x200) == 0 )
      v15 = *((_DWORD *)v26 + 9) & 0xFFFF7FFF;
    *((_DWORD *)v26 + 9) = v15;
    *((_QWORD *)v26 + 62) = v5;
    if ( (*(_DWORD *)(v5 + 116) & 0x800) != 0 )
    {
      DC::vSetDpiScaling(
        v26,
        _mm_unpacklo_ps((__m128)*(unsigned int *)(v5 + 660), (__m128)*(unsigned int *)(v5 + 664)).m128_u64[0]);
    }
    else
    {
      v16 = *((_DWORD *)v26 + 130);
      if ( (v16 & 1) != 0 )
      {
        *((_DWORD *)v26 + 9) |= 0x10u;
        *(_QWORD *)((char *)v26 + 524) = 0LL;
        *((_DWORD *)v26 + 130) = v16 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)v26 + 532) = 0LL;
        DC::vUpdateCachedDPIScaleValue(v26);
      }
    }
    *((_QWORD *)v26 + 64) = *(_QWORD *)(v5 + 56);
    *((_DWORD *)v26 + 79) |= 0xFu;
    if ( *((int *)v26 + 26) <= 1 )
      v4 = 0LL;
    else
      v4 = *((_QWORD *)v26 + 14);
    v34 = 0;
    v17 = *(_QWORD *)v26;
    HmgDecrementShareReferenceCountEx(v26, &v34);
    if ( v34 )
      bDeleteDCInternalEx(v17, 0LL);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v27);
    if ( !v4 )
      return 1LL;
  }
  v20 = *(_DWORD *)(v7 + 36);
  v21 = *(HSURF *)(v8 + 504);
  if ( (v20 & 0x4000) != 0 )
  {
    if ( !v21 )
      v21 = **(HSURF **)(v8 + 496);
    SURFREF::SURFREF((SURFREF *)v28, v21);
    if ( v29 )
    {
      if ( BitmapForDisplayDevice )
      {
        SURFREF::SURFREF((SURFREF *)v32, (HSURF)BitmapForDisplayDevice);
        v23 = v33;
        if ( v33 )
        {
          if ( v29 != v33 )
          {
            v24 = v26;
            if ( (*((_DWORD *)v26 + 9) & 0x40000) == 0 )
            {
              INC_SHARE_REF_CNT(v29);
              v24 = v26;
            }
            *((_DWORD *)v24 + 9) |= 0x40000u;
            *((_QWORD *)v26 + 266) = BitmapForDisplayDevice;
            v23 = v33;
          }
          v19 = 1;
          if ( v23 )
            DEC_SHARE_REF_CNT(v23);
        }
        else
        {
          v19 = 0;
        }
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v32);
      }
      else
      {
        v22 = v26;
        if ( (*((_DWORD *)v26 + 9) & 0x40000) == 0 )
        {
          INC_SHARE_REF_CNT(v29);
          v22 = v26;
        }
        *((_DWORD *)v22 + 9) |= 0x40000u;
        v19 = 1;
        *((_QWORD *)v26 + 266) = 0LL;
      }
      if ( v29 )
      {
        DEC_SHARE_REF_CNT(v29);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
        goto LABEL_61;
      }
    }
    else
    {
      v19 = 0;
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
  }
  else
  {
    v19 = 1;
    *(_DWORD *)(v8 + 36) = v20 | 0x40000;
    *((_QWORD *)v26 + 266) = BitmapForDisplayDevice;
  }
LABEL_61:
  if ( v26 )
  {
    v34 = 0;
    v25 = *(_QWORD *)v26;
    HmgDecrementShareReferenceCountEx(v26, &v34);
    if ( v34 )
    {
      bDeleteDCInternalEx(v25, 0LL);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v27);
      return v19;
    }
  }
LABEL_65:
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v27);
  return v19;
}

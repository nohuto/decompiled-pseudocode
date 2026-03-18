/*
 * XREFs of DxgkSetMonitorColorSpaceTransform @ 0x1C01C5790
 * Callers:
 *     <none>
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0004034 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0005CB4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ??0DXGK_GAMMA_RAMP@@QEAA@XZ @ 0x1C00060B4 (--0DXGK_GAMMA_RAMP@@QEAA@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C001150C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0012150 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ColorSpaceTransformValidate @ 0x1C00526EC (ColorSpaceTransformValidate.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z @ 0x1C027CDB4 (-DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z.c)
 */

__int64 __fastcall DxgkSetMonitorColorSpaceTransform(_OWORD *a1, __int64 a2, __int64 a3)
{
  void **v3; // r14
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  DXGK_GAMMA_RAMP *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rax
  const void *v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  DXGADAPTER **v38; // r11
  int updated; // eax
  __int64 v40; // rcx
  struct DXGPROCESS *Current; // rax
  char v42; // cl
  struct _LUID v43[2]; // [rsp+30h] [rbp-78h]
  __int128 v44; // [rsp+40h] [rbp-68h]
  _QWORD v45[10]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGADAPTER *v47; // [rsp+C0h] [rbp+18h]

  v3 = 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)&v43[0].LowPart = *a1;
  v44 = a1[1];
  v4 = HIDWORD(*a1);
  if ( v4 == 1 || v4 == 4 )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v43[0], &v46);
    v14 = v10;
    v47 = v10;
    if ( !v10 )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v7[3] = v43[0].HighPart;
      v7[4] = v43[0].LowPart;
      LODWORD(v6) = -1073741811;
      v7[5] = -1073741811LL;
      v7[6] = 1LL;
      goto LABEL_6;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v10, 0LL);
    DXGADAPTER::ReleaseReference(v14);
    if ( !*((_QWORD *)v14 + 315) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v18[5] = 2LL;
LABEL_12:
      LODWORD(v6) = -1073741811;
      v18[4] = -1073741811LL;
      v18[3] = v14;
LABEL_13:
      WdLogEvent5_WdWarning(v18);
LABEL_14:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      return (unsigned int)v6;
    }
    if ( (*((_DWORD *)v14 + 468) & 4) == 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      v18[5] = 3LL;
      goto LABEL_12;
    }
    if ( v4 == 1 && *((_QWORD *)&v44 + 1) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      LODWORD(v6) = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = 4LL;
      goto LABEL_13;
    }
    if ( v4 != 4 )
      goto LABEL_57;
    if ( !*((_QWORD *)&v44 + 1) )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      LODWORD(v6) = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = 5LL;
      goto LABEL_13;
    }
    if ( (_DWORD)v44 != 49204 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, v15, v17);
      LODWORD(v6) = -1073741811;
      v18[3] = -1073741811LL;
      v18[4] = 6LL;
      goto LABEL_13;
    }
    v19 = (DXGK_GAMMA_RAMP *)operator new(0x30uLL, 0x4B677844u, PagedPool);
    if ( v19 )
      v3 = (void **)DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(v19);
    else
      v3 = 0LL;
    v46 = (unsigned __int64)v3;
    if ( !v3 )
    {
      LODWORD(v6) = -1073741801;
      v21 = WdLogNewEntry5_WdLowResource(v20);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
LABEL_50:
      if ( v3 )
        ReferenceCounted::Release((ReferenceCounted *)v3);
      Current = DXGPROCESS::GetCurrent();
      if ( Current )
      {
        v42 = *((_BYTE *)Current + 325);
        *((_BYTE *)Current + 325) = 1;
        if ( !v42 )
          DxgkLogCodePointPacket(0x5Eu, 4u, v6, 0, *(_QWORD *)((char *)v14 + 276));
      }
      goto LABEL_14;
    }
    v22 = DXGK_GAMMA_RAMP::Initialize((size_t *)v3, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    v6 = v22;
    if ( v22 < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v24[3] = v6;
      v24[4] = 13LL;
LABEL_32:
      WdLogEvent5_WdError(v24);
      goto LABEL_50;
    }
    v25 = (const void *)*((_QWORD *)&v44 + 1);
    if ( *((_QWORD *)&v44 + 1) >= MmUserProbeAddress )
      v25 = (const void *)MmUserProbeAddress;
    memmove(v3[4], v25, 0xC034uLL);
    v46 = 0x200000001LL;
    v26 = ColorSpaceTransformValidate((float *)v3[4], (int *)&v46);
    v6 = v26;
    if ( v26 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
      v30[3] = v6;
      v30[4] = 9LL;
    }
    else
    {
LABEL_57:
      if ( *(_BYTE *)(*((_QWORD *)v14 + 315) + 134LL) )
        v31 = COREADAPTERACCESS::AcquireExclusive(v45, 1LL);
      else
        v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45);
      LODWORD(v6) = v31;
      if ( v31 >= 0 )
      {
        LOBYTE(v46) = 0;
        v35 = DmmSetMonitorColorSpaceTransform(
                v14,
                v43[1].LowPart,
                (const struct DXGK_GAMMA_RAMP *)v3,
                (unsigned __int8 *)&v46);
        v6 = v35;
        if ( v35 >= 0 )
        {
          v37 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(*((ADAPTER_DISPLAY **)v14 + 315), v43[1].LowPart);
          if ( (_BYTE)v46
            || v37 == -1
            || (updated = ADAPTER_DISPLAY::UpdateGammaRamp(v38, v37), v6 = updated, updated >= 0) )
          {
            LODWORD(v6) = 0;
            goto LABEL_50;
          }
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          v24[3] = v14;
          v24[4] = v6;
          v24[5] = 12LL;
        }
        else
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v24[3] = v14;
          v24[4] = v6;
          v24[5] = 11LL;
        }
        goto LABEL_32;
      }
      v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
      v30[3] = v14;
      v30[4] = (int)v6;
      v30[5] = 10LL;
    }
    WdLogEvent5_WdWarning(v30);
    goto LABEL_50;
  }
  v5 = WdLogNewEntry5_WdWarning(a1, MmUserProbeAddress, a3);
  LODWORD(v6) = -1073741811;
  *(_QWORD *)(v5 + 24) = -1073741811LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  v7 = (_QWORD *)v5;
LABEL_6:
  WdLogEvent5_WdWarning(v7);
  return (unsigned int)v6;
}

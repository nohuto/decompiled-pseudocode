/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x1C01F6A50
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x1C00519A4 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6238 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C01F1370 (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C02B2D68 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int64 *a3, char *a4)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  int SourceConnectedToTargetInClientVidPn; // esi
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r15
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  int v29; // ecx
  int v30; // ecx
  struct _D3DDDI_RATIONAL v31; // [rsp+40h] [rbp-10h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v32; // [rsp+80h] [rbp+30h] BYREF
  struct _D3DKMDT_2DREGION v33; // [rsp+90h] [rbp+40h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v11 + 24) = 1041LL;
    WdLogEvent5_WdAssertion(v11);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_DWORD *)a1 + 77) & 0x100) == 0 )
  {
    v13 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(a1[319], (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(
                                               (DXGADAPTER *)a1,
                                               (unsigned int)v5,
                                               (unsigned int *)&v32);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
        goto LABEL_9;
      v19 = (unsigned int)v32;
      if ( v32 == -1 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v20 + 24) = 1071LL;
        WdLogEvent5_WdAssertion(v20);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo((DXGADAPTER **)a1[319], v19);
      if ( !DisplayModeInfo )
      {
        v25 = WdLogNewEntry5_WdError(v22, v21, v23);
        *(_QWORD *)(v25 + 24) = v19;
        *(_QWORD *)(v25 + 32) = a1;
        WdLogEvent5_WdError(v25);
        return 3221225485LL;
      }
      v33 = 0LL;
      v31 = 0LL;
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(a1, v5, 0LL, 0LL, 0LL, &v32, &v33, &v31);
      if ( SourceConnectedToTargetInClientVidPn < 0 )
      {
LABEL_9:
        v18 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v18 + 24) = v5;
        *(_QWORD *)(v18 + 32) = a1;
        WdLogEvent5_WdError(v18);
      }
      else
      {
        memset(a4, 0, 0x2CuLL);
        *(struct _D3DKMDT_2DREGION *)(a4 + 20) = v33;
        *((_DWORD *)a4 + 8) = *((_DWORD *)DisplayModeInfo + 2);
        *(struct _D3DDDI_RATIONAL *)(a4 + 36) = v31;
        v27 = *((unsigned int *)DisplayModeInfo + 6);
        if ( v32 != (_DWORD)v27 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v27, v26);
          *(_QWORD *)(v28 + 24) = 1097LL;
          WdLogEvent5_WdAssertion(v28);
          LODWORD(v27) = *((_DWORD *)DisplayModeInfo + 6);
        }
        v29 = v27 - 2;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            if ( v30 == 252 )
              *((_DWORD *)a4 + 7) = 0;
            else
              *((_DWORD *)a4 + 7) = 2;
          }
          else
          {
            *((_DWORD *)a4 + 7) = 3;
          }
        }
        else
        {
          *((_DWORD *)a4 + 7) = 4;
        }
      }
    }
    return (unsigned int)SourceConnectedToTargetInClientVidPn;
  }
  return result;
}

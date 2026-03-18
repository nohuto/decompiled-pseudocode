/*
 * XREFs of ?AppendGeometry@CD3DBatchExecutionContext@@QEAAJAEBV?$span@$$CBG$0?0@gsl@@IPEAPEAX@Z @ 0x18003A860
 * Callers:
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18003ADA0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 *     ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18005D080 (-EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@.c)
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18022A420 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntr.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180066164 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x18008C7C8 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x18008C7F4 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x1800D7080 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::AppendGeometry(__int64 a1, unsigned int *a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned int v7; // r14d
  unsigned int *v8; // rbx
  __int64 *v9; // rdi
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v20; // r15d
  unsigned int *v21; // r8
  unsigned __int64 v22; // rdx
  __int16 v23; // r10
  unsigned __int64 v24; // r8
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int16 v32; // ax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  int v36; // edx
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // r10
  __int64 v41; // r10
  unsigned int v42; // edx
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // r12
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // r13d
  int v57; // eax
  unsigned int v58; // ecx
  int v59; // eax
  char v60; // al
  __int64 v61; // r8
  int v62; // eax
  char IsHardwareProtectionDisabled; // al
  unsigned int v64; // edx
  char v65; // r9
  unsigned int v66; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v67; // [rsp+44h] [rbp-74h] BYREF
  unsigned int v68; // [rsp+48h] [rbp-70h]
  unsigned int v69; // [rsp+4Ch] [rbp-6Ch]
  unsigned int v70; // [rsp+50h] [rbp-68h]
  __int64 v71; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v72[3]; // [rsp+60h] [rbp-58h] BYREF
  int v73; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int *v74; // [rsp+C8h] [rbp+10h]
  unsigned int v75; // [rsp+D0h] [rbp+18h]
  _QWORD *v76; // [rsp+D8h] [rbp+20h]

  v76 = a4;
  v75 = a3;
  v74 = a2;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0LL;
  v7 = *a2;
  v73 = 0;
  v8 = (unsigned int *)(v4 + 16);
  v9 = (__int64 *)(v4 + 64);
  v10 = *(_DWORD *)(a1 + 76);
  if ( *(_BYTE *)(a1 + 72) )
    v11 = 8 * v10 + 48;
  else
    v11 = 8 * v10 + 16;
  v66 = v11;
  v12 = 100;
  v13 = v7;
  if ( a3 >= 0x64 )
    v12 = a3;
  if ( v7 < 0x64 )
    v13 = 100;
  if ( v11 * v12 > v8[10] )
  {
    CD3DBatchExecutionContext::Flush(a1, 8LL);
    v54 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v8, v66 * v12, 0);
    v73 = v54;
    v56 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v54, 0x187u);
      return v56;
    }
    *(_BYTE *)(a1 + 81) = 1;
  }
  if ( *(_BYTE *)(a1 + 81) )
  {
    v53 = *(_QWORD *)(a1 + 16);
    *(_BYTE *)(a1 + 81) = 0;
    v71 = *((_QWORD *)v8 + 1);
    v67 = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *, unsigned int *, unsigned int *))(*(_QWORD *)v53 + 144LL))(
      v53,
      0LL,
      1LL,
      &v71,
      &v66,
      &v67);
  }
  v14 = 16;
  v15 = 2LL * v13;
  if ( v15 <= *((unsigned int *)v9 + 10) )
  {
LABEL_11:
    if ( *((_QWORD *)v8 + 3) )
    {
      v16 = v8[10] - v8[9];
      v17 = v8[8] == 32 ? v16 >> 5 : v16 / v8[8];
      if ( v12 > v17 )
        CD3DBatchExecutionContext::Flush(a1, 32LL);
    }
    if ( v9[3] )
    {
      v18 = *((_DWORD *)v9 + 10) - *((_DWORD *)v9 + 9);
      v19 = *((_DWORD *)v9 + 8) == 2 ? v18 >> 1 : v18 / *((_DWORD *)v9 + 8);
      if ( v13 > v19 )
        CD3DBatchExecutionContext::Flush(a1, 64LL);
    }
    if ( *((_QWORD *)v8 + 3) )
    {
      v20 = v73;
LABEL_23:
      v21 = v74;
      v22 = v9[3] + *((unsigned int *)v9 + 9);
      *((_DWORD *)v9 + 9) += v7 * *((_DWORD *)v9 + 8);
      v23 = *(_WORD *)(a1 + 92) + *(_WORD *)(a1 + 84);
      v24 = *((_QWORD *)v21 + 1);
      v25 = _mm_cvtsi32_si128(v23);
      v26 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v25, v25), 0);
      if ( v7 )
      {
        if ( v7 >= 0x20 )
        {
          v27 = v7 - 1;
          if ( v22 > v24 + 2 * v27 || v22 + 2 * v27 < v24 )
          {
            do
            {
              *(__m128i *)(v22 + 2 * v5) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v24 + 2 * v5)), v26);
              v5 = (unsigned int)(v5 + 32);
              *(__m128i *)(v22 + 2LL * (v14 - 8)) = _mm_add_epi16(
                                                      _mm_loadu_si128((const __m128i *)(v24 + 2LL * (v14 - 8))),
                                                      v26);
              *(__m128i *)(v22 + 2LL * v14) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v24 + 2LL * v14)), v26);
              v28 = v14 + 8;
              v14 += 32;
              *(__m128i *)(v22 + 2 * v28) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v24 + 2 * v28)), v26);
            }
            while ( (unsigned int)v5 < (v7 & 0xFFFFFFE0) );
          }
        }
        if ( (unsigned int)v5 < v7 )
        {
          v29 = v22 + 2 * v5;
          v30 = v24 - v22;
          v31 = v7 - (unsigned int)v5;
          do
          {
            v32 = *(_WORD *)(v30 + v29);
            v29 += 2LL;
            *(_WORD *)(v29 - 2) = v23 + v32;
            --v31;
          }
          while ( v31 );
        }
      }
      *(_DWORD *)(a1 + 96) += v7;
      v33 = v75;
      *(_DWORD *)(a1 + 92) += v75;
      v34 = v8[9];
      v8[9] = v34 + v33 * v8[8];
      *v76 = *((_QWORD *)v8 + 3) + v34;
      return (unsigned int)v20;
    }
    v36 = v8[9] % v66;
    v67 = v66;
    v70 = (v66 - v36) % v66;
    v69 = v8[10] - v8[9];
    v68 = v70 + v12 * v66;
    v37 = *(_QWORD *)v8;
    v71 = v37;
    v20 = *(_DWORD *)(v37 + 848);
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v20, 0xBEDu);
    }
    else
    {
      v38 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v37 + 640)
                                                                                         + 112LL))(
              *(_QWORD *)(v37 + 640),
              *((_QWORD *)v8 + 1),
              0LL,
              5 - (unsigned int)(v69 < v68),
              0,
              v72);
      v20 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xBF3u);
    }
    v40 = v71;
    if ( *(_DWORD *)(v71 + 848) || v20 != -2005532292 && v20 != -2147024882 && v20 != -2005270523 )
      goto LABEL_40;
    if ( CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
           (CD3DDeviceManager *)&g_D3DDeviceManager,
           *(struct _LUID *)(v71 + 712)) )
    {
      if ( v20 == -2005270523 )
      {
        v59 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v71 + 632) + 312LL))(*(_QWORD *)(v71 + 632));
        v40 = v71;
        v39 = v59 == -2005270480;
        *(_DWORD *)(v71 + 848) = -2003304307;
        if ( v59 != -2005270480 )
        {
LABEL_83:
          if ( *(int *)(v40 + 848) < 0 )
          {
            v20 = *(_DWORD *)(v40 + 848);
            goto LABEL_43;
          }
LABEL_41:
          if ( TranslateDXGIorD3DErrorInContext(v20, 0, &v73) )
          {
            v20 = v73;
            if ( v73 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v73, 0xD37u);
              v41 = v71;
            }
          }
          if ( v20 == -2003304307 )
          {
            *(_DWORD *)(v41 + 848) = -2003304307;
            goto LABEL_92;
          }
LABEL_43:
          if ( v20 >= 0 )
          {
            v8[8] = v67;
            *((_QWORD *)v8 + 3) = v72[0];
            if ( v69 < v68 )
              v8[9] = 0;
            else
              v8[9] += v70;
LABEL_46:
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v20, 0x1B7u);
              return (unsigned int)v20;
            }
            v42 = *((_DWORD *)v9 + 10) - *((_DWORD *)v9 + 9);
            v43 = -*((_DWORD *)v9 + 9) & 1;
            v68 = v43;
            v69 = v42;
            v44 = v43 + 2 * v13;
            v45 = *v9;
            v70 = v44;
            v20 = *(_DWORD *)(v45 + 848);
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v20, 0xBEDu);
            }
            else
            {
              v46 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v45 + 640)
                                                                                                 + 112LL))(
                      *(_QWORD *)(v45 + 640),
                      v9[1],
                      0LL,
                      5 - (unsigned int)(v42 < v44),
                      0,
                      v72);
              v20 = v46;
              if ( v46 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xBF3u);
            }
            if ( !*(_DWORD *)(v45 + 848)
              && (v20 == -2005532292 || v20 == -2147024882 || v20 == -2005270523)
              && CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                   (CD3DDeviceManager *)&g_D3DDeviceManager,
                   *(struct _LUID *)(v45 + 712)) )
            {
              if ( v20 == -2005270523 )
              {
                v62 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v45 + 632) + 312LL))(*(_QWORD *)(v45 + 632));
                *(_DWORD *)(v45 + 848) = -2003304307;
                v47 = v62 == -2005270480;
                if ( v62 != -2005270480 )
                {
LABEL_97:
                  if ( *(int *)(v45 + 848) < 0 )
                  {
                    v20 = *(_DWORD *)(v45 + 848);
                    goto LABEL_57;
                  }
LABEL_55:
                  if ( TranslateDXGIorD3DErrorInContext(v20, 0, &v73) )
                  {
                    v20 = v73;
                    if ( v73 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v73, 0xD37u);
                  }
                  if ( v20 == -2003304307 )
                  {
                    *(_DWORD *)(v45 + 848) = -2003304307;
                    goto LABEL_105;
                  }
LABEL_57:
                  if ( v20 >= 0 )
                  {
                    v9[3] = v72[0];
                    v48 = v70;
                    *((_DWORD *)v9 + 8) = 2;
                    if ( v69 < v48 )
                      *((_DWORD *)v9 + 9) = 0;
                    else
                      *((_DWORD *)v9 + 9) += v68;
                    goto LABEL_60;
                  }
LABEL_105:
                  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v20, 0x6Cu);
LABEL_60:
                  if ( v20 >= 0 )
                  {
                    v49 = v8[9];
                    if ( v8[8] == 32 )
                      v50 = v49 >> 5;
                    else
                      v50 = v49 / v8[8];
                    *(_DWORD *)(a1 + 84) = v50;
                    v51 = *((_DWORD *)v9 + 9);
                    if ( *((_DWORD *)v9 + 8) == 2 )
                      v52 = v51 >> 1;
                    else
                      v52 = v51 / *((_DWORD *)v9 + 8);
                    *(_DWORD *)(a1 + 88) = v52;
                    goto LABEL_23;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v20, 0x1B8u);
                  return (unsigned int)v20;
                }
              }
              CD3DDeviceManager::IsHardwareProtectionDisabled();
              CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
              IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
              if ( v65 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                McTemplateU0d(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
                  v64);
            }
            if ( v20 >= 0 )
              goto LABEL_55;
            goto LABEL_97;
          }
LABEL_92:
          MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v20, 0x6Cu);
          goto LABEL_46;
        }
      }
      CD3DDeviceManager::IsHardwareProtectionDisabled();
      CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
      v60 = CD3DDeviceManager::IsHardwareProtectionDisabled();
      if ( (_BYTE)v39 == v60 || (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      {
LABEL_40:
        if ( v20 >= 0 )
          goto LABEL_41;
        goto LABEL_83;
      }
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v61);
    }
    v40 = v71;
    goto LABEL_40;
  }
  CD3DBatchExecutionContext::Flush(a1, 16LL);
  v57 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v9, 2 * v13, 0);
  v73 = v57;
  if ( v57 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 152LL))(
      *(_QWORD *)(a1 + 16),
      v9[1],
      57LL);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x19Au);
  return (unsigned int)v73;
}

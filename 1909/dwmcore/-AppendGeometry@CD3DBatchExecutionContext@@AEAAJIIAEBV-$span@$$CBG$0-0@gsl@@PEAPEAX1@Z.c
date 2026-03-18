/*
 * XREFs of ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x1800639D0
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z @ 0x1800624C8 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@_N@Z.c)
 *     ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x1800638D0 (-EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry.c)
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801B3500 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180256FF0 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntr.c)
 * Callees:
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18002E49C (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180053C24 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180053C50 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x180099FC0 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     ?BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z @ 0x1801B7090 (-BeginAppend@CD3DDynamicAppendBuffer@@QEAAJII@Z.c)
 */

__int64 __fastcall CD3DBatchExecutionContext::AppendGeometry(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // r12d
  unsigned int v12; // ebp
  CD3DDynamicAppendBuffer *v13; // r10
  int v14; // edx
  unsigned int *v15; // rsi
  int v16; // eax
  int v17; // r15d
  int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // r13d
  UINT v22; // r14d
  UINT v23; // r14d
  unsigned int v24; // r13d
  char v25; // r14
  __int64 v26; // r14
  __int64 v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // r12
  int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // ecx
  int v37; // edx
  unsigned int v38; // r12d
  int v39; // r12d
  unsigned int v40; // edx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r10
  __int64 v45; // r10
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int64 v48; // r8
  unsigned int *v49; // r10
  unsigned int v50; // r9d
  unsigned __int64 v51; // rax
  __int16 v52; // r11
  unsigned __int64 v53; // r8
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned __int64 v59; // r8
  unsigned __int64 v60; // rdx
  __int64 v61; // rcx
  __int16 v62; // ax
  unsigned int v63; // edx
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // ecx
  int v79; // eax
  unsigned int v80; // ecx
  int v81; // eax
  unsigned int v82; // ecx
  int v83; // eax
  char IsHardwareProtectionDisabled; // al
  __int64 v85; // r8
  int v86; // eax
  char v87; // al
  unsigned int v88; // edx
  char v89; // r9
  CD3DDynamicAppendBuffer *v90; // r12
  __int64 v91; // rax
  int v92; // eax
  unsigned int v93; // ecx
  __int64 v94; // rcx
  unsigned int v95; // r8d
  bool v96; // [rsp+40h] [rbp-98h]
  unsigned int v97; // [rsp+44h] [rbp-94h] BYREF
  __int64 v98; // [rsp+48h] [rbp-90h] BYREF
  unsigned int v99; // [rsp+50h] [rbp-88h] BYREF
  int v100; // [rsp+54h] [rbp-84h]
  unsigned int v101; // [rsp+58h] [rbp-80h]
  CD3DDynamicAppendBuffer *v102; // [rsp+60h] [rbp-78h]
  unsigned int v103; // [rsp+68h] [rbp-70h]
  unsigned int v104; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v105; // [rsp+70h] [rbp-68h]
  _QWORD v106[12]; // [rsp+78h] [rbp-60h] BYREF
  int v107; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v108; // [rsp+E8h] [rbp+10h]
  unsigned int v109; // [rsp+F0h] [rbp+18h]
  unsigned int *v110; // [rsp+F8h] [rbp+20h]

  v110 = a4;
  v109 = a3;
  v108 = a2;
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 0;
  v8 = *a4;
  v12 = 16;
  v13 = (CD3DDynamicAppendBuffer *)(v6 + 112);
  v14 = 48;
  v15 = (unsigned int *)(v6 + 16);
  v16 = *(_DWORD *)(a1 + 76);
  v17 = 0;
  if ( !*(_BYTE *)(a1 + 72) )
    v14 = 16;
  v102 = v13;
  v18 = v14 + 8 * v16;
  v19 = 0;
  if ( *(_BYTE *)(a1 + 73) )
    v19 = 48;
  v103 = v18;
  v104 = v19;
  v20 = 100;
  v21 = 100;
  if ( a2 >= 0x64 )
    v21 = a2;
  LOBYTE(v107) = v8 != 0;
  v96 = a3 != 0;
  if ( v8 )
  {
    if ( v8 < 0x64 )
      v8 = 100;
  }
  else
  {
    v8 = 0;
  }
  if ( a3 )
  {
    if ( a3 >= 0x64 )
      v20 = a3;
  }
  else
  {
    v20 = 0;
  }
  v97 = v20;
  v22 = v18 * v21;
  v101 = v18 * v21;
  if ( v18 * v21 > v15[10] )
  {
    CD3DBatchExecutionContext::Flush(a1, 8LL);
    v77 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v15, v22, 0);
    v17 = v77;
    if ( v77 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, v77, 0x251u, 0LL);
      return (unsigned int)v17;
    }
    v20 = v97;
    v13 = v102;
    *(_BYTE *)(a1 + 81) = 1;
  }
  v23 = v104 * v20;
  if ( v104 * v20 > *((_DWORD *)v13 + 10) )
  {
    CD3DBatchExecutionContext::Flush(a1, 1024LL);
    v79 = CD3DDynamicAppendBuffer::EnsureByteSpace(v102, v23, 0);
    v17 = v79;
    if ( v79 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v79, 0x25Bu, 0LL);
      return (unsigned int)v17;
    }
    v13 = v102;
    *(_BYTE *)(a1 + 81) = 1;
  }
  if ( *(_BYTE *)(a1 + 81) )
  {
    v72 = *(_QWORD *)(a1 + 32);
    *(_BYTE *)(a1 + 81) = 0;
    v73 = 8 * *(_DWORD *)(a1 + 76);
    if ( *(_BYTE *)(a1 + 72) )
      v74 = v73 + 48;
    else
      v74 = v73 + 16;
    v99 = v74;
    if ( *(_BYTE *)(a1 + 73) )
      v100 = 48;
    else
      v100 = 0;
    v98 = 0LL;
    v106[0] = *(_QWORD *)(v72 + 24);
    v75 = *(_QWORD *)(v72 + 120);
    v76 = *(_QWORD *)(a1 + 16);
    v106[1] = v75;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, unsigned int *, __int64 *))(*(_QWORD *)v76 + 144LL))(
      v76,
      0LL,
      2LL,
      v106,
      &v99,
      &v98);
    v13 = v102;
  }
  if ( *((_QWORD *)v15 + 3) )
  {
    v68 = v15[10] - v15[9];
    v69 = v15[8] == 32 ? v68 >> 5 : v68 / v15[8];
    if ( v21 > v69 )
    {
      CD3DBatchExecutionContext::Flush(a1, 32LL);
      v13 = v102;
    }
  }
  v24 = v97;
  if ( *((_QWORD *)v13 + 3) && v97 > (unsigned int)(*((_DWORD *)v13 + 10) - *((_DWORD *)v13 + 9)) / *((_DWORD *)v13 + 8) )
    CD3DBatchExecutionContext::Flush(a1, 2048LL);
  v25 = v107;
  if ( (_BYTE)v107 )
  {
    v17 = 0;
    v26 = *(_QWORD *)(a1 + 32) + 64LL;
    if ( 2 * (unsigned __int64)v8 > *(unsigned int *)(*(_QWORD *)(a1 + 32) + 104LL) )
    {
      CD3DBatchExecutionContext::Flush(a1, 16LL);
      v81 = CD3DDynamicAppendBuffer::EnsureByteSpace((CD3DDynamicAppendBuffer *)v26, 2 * v8, 0);
      v17 = v81;
      if ( v81 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0xD0u, 0LL);
LABEL_37:
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v17, 0x27Bu, 0LL);
          return (unsigned int)v17;
        }
        v25 = v107;
        goto LABEL_39;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 152LL))(
        *(_QWORD *)(a1 + 16),
        *(_QWORD *)(v26 + 8),
        57LL);
    }
    v27 = *(_QWORD *)(v26 + 24);
    if ( v27 )
    {
      v70 = *(_DWORD *)(v26 + 40) - *(_DWORD *)(v26 + 36);
      if ( *(_DWORD *)(v26 + 32) == 2 )
        v71 = v70 >> 1;
      else
        v71 = v70 / *(_DWORD *)(v26 + 32);
      if ( v8 > v71 )
      {
        CD3DBatchExecutionContext::Flush(a1, 64LL);
        v27 = *(_QWORD *)(v26 + 24);
      }
      if ( v27 )
        goto LABEL_37;
    }
    v28 = *(_DWORD *)(v26 + 40) - *(_DWORD *)(v26 + 36);
    v29 = -*(_DWORD *)(v26 + 36) & 1;
    v99 = v29;
    LODWORD(v98) = v28;
    v30 = v29 + 2 * v8;
    v31 = *(_QWORD *)v26;
    v105 = v30;
    v17 = *(_DWORD *)(v31 + 880);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v17, 0xC00u, 0LL);
    }
    else
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v31 + 640)
                                                                                        + 112LL))(
              *(_QWORD *)(v31 + 640),
              *(_QWORD *)(v26 + 8),
              0LL,
              5 - (unsigned int)(v28 < v30),
              0,
              v106);
      v17 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v32, 0xC06u, 0LL);
    }
    if ( !*(_DWORD *)(v31 + 880)
      && (v17 == -2005532292 || v17 == -2147024882 || v17 == -2005270523)
      && (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                         (CD3DDeviceManager *)&g_D3DDeviceManager,
                         *(struct _LUID *)(v31 + 712)) )
    {
      if ( v17 == -2005270523 )
      {
        v83 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v31 + 632) + 312LL))(*(_QWORD *)(v31 + 632));
        *(_DWORD *)(v31 + 880) = -2003304307;
        LODWORD(v27) = v83 == -2005270480;
        if ( v83 != -2005270480 )
        {
LABEL_118:
          if ( *(int *)(v31 + 880) < 0 )
          {
            v17 = *(_DWORD *)(v31 + 880);
            goto LABEL_30;
          }
LABEL_28:
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v17, 0LL, &v97) )
          {
            v17 = v97;
            if ( (v97 & 0x80000000) != 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v97, 0xD4Au, 0LL);
          }
          if ( v17 == -2003304307 )
          {
            *(_DWORD *)(v31 + 880) = -2003304307;
            goto LABEL_126;
          }
LABEL_30:
          if ( v17 >= 0 )
          {
            *(_QWORD *)(v26 + 24) = v106[0];
            v33 = v105;
            *(_DWORD *)(v26 + 32) = 2;
            if ( (unsigned int)v98 < v33 )
              *(_DWORD *)(v26 + 36) = 0;
            else
              *(_DWORD *)(v26 + 36) += v99;
LABEL_33:
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v17, 0xDBu, 0LL);
            }
            else
            {
              v34 = *(_DWORD *)(v26 + 36);
              if ( *(_DWORD *)(v26 + 32) == 2 )
                v35 = v34 >> 1;
              else
                v35 = v34 / *(_DWORD *)(v26 + 32);
              *(_DWORD *)(a1 + 88) = v35;
            }
            goto LABEL_37;
          }
LABEL_126:
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v17, 0x6Cu, 0LL);
          goto LABEL_33;
        }
      }
      CD3DDeviceManager::IsHardwareProtectionDisabled();
      CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
      IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
      if ( (_BYTE)v27 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v85);
    }
    if ( v17 >= 0 )
      goto LABEL_28;
    goto LABEL_118;
  }
LABEL_39:
  if ( !*((_QWORD *)v15 + 3) )
  {
    v36 = v15[9];
    if ( v103 == 32 )
      v37 = v15[9] & 0x1F;
    else
      v37 = v36 % v103;
    v38 = v103 - v37;
    if ( v103 == 32 )
      v39 = v38 & 0x1F;
    else
      v39 = v38 % v103;
    v40 = v15[10] - v36;
    v101 += v39;
    v99 = v40;
    v41 = *(_QWORD *)v15;
    v98 = v41;
    v17 = *(_DWORD *)(v41 + 880);
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v17, 0xC00u, 0LL);
    }
    else
    {
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _DWORD, _QWORD *))(**(_QWORD **)(v41 + 640)
                                                                                         + 112LL))(
              *(_QWORD *)(v41 + 640),
              *((_QWORD *)v15 + 1),
              0LL,
              5 - (unsigned int)(v40 < v101),
              0,
              v106);
      v17 = v42;
      if ( v42 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0xC06u, 0LL);
    }
    v44 = v98;
    if ( *(_DWORD *)(v98 + 880) || v17 != -2005532292 && v17 != -2147024882 && v17 != -2005270523 )
      goto LABEL_51;
    if ( (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                         (CD3DDeviceManager *)&g_D3DDeviceManager,
                         *(struct _LUID *)(v98 + 712)) )
    {
      if ( v17 == -2005270523 )
      {
        v86 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v98 + 632) + 312LL))(*(_QWORD *)(v98 + 632));
        v44 = v98;
        v43 = v86 == -2005270480;
        *(_DWORD *)(v98 + 880) = -2003304307;
        if ( v86 != -2005270480 )
        {
LABEL_133:
          if ( *(int *)(v44 + 880) < 0 )
          {
            v17 = *(_DWORD *)(v44 + 880);
            goto LABEL_54;
          }
LABEL_52:
          if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v17, 0LL, &v107) )
          {
            v17 = v107;
            if ( v107 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v107, 0xD4Au, 0LL);
              v45 = v98;
            }
          }
          if ( v17 == -2003304307 )
          {
            *(_DWORD *)(v45 + 880) = -2003304307;
            goto LABEL_142;
          }
LABEL_54:
          if ( v17 >= 0 )
          {
            v15[8] = v103;
            *((_QWORD *)v15 + 3) = v106[0];
            if ( v99 < v101 )
              v15[9] = 0;
            else
              v15[9] += v39;
            goto LABEL_57;
          }
LABEL_142:
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v17, 0x6Cu, 0LL);
LABEL_57:
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v17, 0x281u, 0LL);
            return (unsigned int)v17;
          }
          v46 = v15[9];
          if ( v15[8] == 32 )
            v47 = v46 >> 5;
          else
            v47 = v46 / v15[8];
          *(_DWORD *)(a1 + 84) = v47;
          goto LABEL_61;
        }
      }
      CD3DDeviceManager::IsHardwareProtectionDisabled();
      CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
      v87 = CD3DDeviceManager::IsHardwareProtectionDisabled();
      if ( v89 == v87 || (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      {
LABEL_51:
        if ( v17 >= 0 )
          goto LABEL_52;
        goto LABEL_133;
      }
      McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, v88);
    }
    v44 = v98;
    goto LABEL_51;
  }
LABEL_61:
  if ( v96 )
  {
    v90 = v102;
    v91 = *((_QWORD *)v102 + 3);
    if ( !v91 )
    {
      v92 = CD3DDynamicAppendBuffer::BeginAppend(v102, v104, v24);
      v17 = v92;
      if ( v92 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x28Bu, 0LL);
        return (unsigned int)v17;
      }
      *(_DWORD *)(a1 + 92) = *((_DWORD *)v90 + 9) / *((_DWORD *)v90 + 8);
      v91 = *((_QWORD *)v90 + 3);
    }
    v94 = *((unsigned int *)v90 + 9);
    v95 = v109;
    *((_DWORD *)v90 + 9) = v94 + v109 * *((_DWORD *)v90 + 8);
    *a6 = v91 + v94;
    *(_DWORD *)(a1 + 104) += v95;
  }
  if ( v25 )
  {
    v48 = *(_QWORD *)(a1 + 32);
    v49 = v110;
    v50 = *v110;
    v51 = *(_QWORD *)(v48 + 88) + *(unsigned int *)(v48 + 100);
    *(_DWORD *)(v48 + 100) += *v110 * *(_DWORD *)(v48 + 96);
    v52 = *(_WORD *)(a1 + 84) + *(_WORD *)(a1 + 96);
    v53 = *((_QWORD *)v49 + 1);
    v54 = _mm_cvtsi32_si128(v52);
    v55 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v54, v54), 0);
    if ( v50 )
    {
      if ( v50 >= 0x20 )
      {
        v56 = v50 - 1;
        if ( v51 > v53 + 2 * v56 || v51 + 2 * v56 < v53 )
        {
          do
          {
            v57 = v7;
            v7 += 32;
            *(__m128i *)(v51 + 2 * v57) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v53 + 2 * v57)), v55);
            *(__m128i *)(v51 + 2LL * (v12 - 8)) = _mm_add_epi16(
                                                    _mm_loadu_si128((const __m128i *)(v53 + 2LL * (v12 - 8))),
                                                    v55);
            *(__m128i *)(v51 + 2LL * v12) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v53 + 2LL * v12)), v55);
            v58 = v12 + 8;
            v12 += 32;
            *(__m128i *)(v51 + 2 * v58) = _mm_add_epi16(_mm_loadu_si128((const __m128i *)(v53 + 2 * v58)), v55);
          }
          while ( v7 < (v50 & 0xFFFFFFE0) );
        }
      }
      if ( v7 < v50 )
      {
        v59 = v53 - v51;
        v60 = v51 + 2LL * v7;
        v61 = v50 - v7;
        do
        {
          v62 = *(_WORD *)(v59 + v60);
          v60 += 2LL;
          *(_WORD *)(v60 - 2) = v52 + v62;
          --v61;
        }
        while ( v61 );
      }
    }
    *(_DWORD *)(a1 + 100) += v50;
  }
  v63 = v108;
  *(_DWORD *)(a1 + 96) += v108;
  v64 = v15[9];
  v65 = v64 + v63 * v15[8];
  v66 = *((_QWORD *)v15 + 3) + v64;
  v15[9] = v65;
  *a5 = v66;
  return (unsigned int)v17;
}

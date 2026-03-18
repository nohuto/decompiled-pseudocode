/*
 * XREFs of ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0129A30
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0048030 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C012B584 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0048C94 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0048CC4 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0048D88 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14019::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14019 @ 0x1C00BBF74 (_SetDisplayConfigHandleBrokerProvidedPaths_--_2_--_AUTO_USING_PM_VirtualTopologyButNotVirtualMod.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01268EC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 */

__int64 __fastcall SetDisplayConfigHandleBrokerProvidedPaths(
        void *a1,
        char a2,
        unsigned int a3,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        struct D3DKMT_GETPATHSMODALITY **a5,
        bool *a6,
        enum _DXGK_DIAG_SDC_STAGE *a7)
{
  const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // r13
  int PathsModality; // ebx
  struct D3DKMT_GETPATHSMODALITY *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rcx
  char *v19; // rbx
  __int64 v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int64 v23; // rcx
  __int64 v24; // rax
  struct D3DKMT_GETPATHSMODALITY *v25; // rax
  __int64 v26; // rax
  struct D3DKMT_GETPATHSMODALITY *v27; // r8
  __int64 v28; // rcx
  char *v29; // rax
  unsigned int v30; // r14d
  unsigned int v31; // edi
  unsigned int *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r8
  __int64 v37; // rax
  unsigned int v38; // r9d
  __int64 v39; // r10
  unsigned int v40; // r10d
  unsigned int v41; // r11d
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // r10
  __int64 v45; // rax
  __int64 v46; // rax
  struct D3DKMT_GETPATHSMODALITY *v48; // [rsp+40h] [rbp-40h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v49; // [rsp+48h] [rbp-38h] BYREF
  __int128 v50; // [rsp+50h] [rbp-30h] BYREF
  __int128 v51; // [rsp+60h] [rbp-20h]

  v49 = 0LL;
  *(_QWORD *)&v50 = &v49;
  *((_QWORD *)&v50 + 1) = &v48;
  v8 = a4;
  v48 = 0LL;
  v51 = v50;
  if ( !a2 )
  {
    PathsModality = GetPathsModality((__int64)&v48, &v49, 16777280LL, 0);
    if ( PathsModality < 0 )
    {
      *(_DWORD *)a7 = 44;
      goto LABEL_66;
    }
    v11 = AllocPathsModality((unsigned __int16)a3 + *((_WORD *)v49 + 10));
    v48 = v11;
    if ( v11 )
    {
      *((_WORD *)v11 + 10) = 0;
      v15 = 0;
      v12 = (__int64)v49;
      if ( *((_WORD *)v49 + 10) )
      {
        do
        {
          v16 = 272LL * v15 + v12 + 48;
          if ( !(unsigned __int8)((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C0212308)(
                                   a1,
                                   *(_QWORD *)(v16 + 16),
                                   *(unsigned int *)(v16 + 28)) )
          {
            v18 = *((unsigned __int16 *)v48 + 10);
            v19 = (char *)v48 + 272 * v18;
            *((_WORD *)v48 + 10) = v18 + 1;
            v20 = 2LL;
            v21 = v19 + 48;
            do
            {
              *v21 = *(_OWORD *)v16;
              v21[1] = *(_OWORD *)(v16 + 16);
              v21[2] = *(_OWORD *)(v16 + 32);
              v21[3] = *(_OWORD *)(v16 + 48);
              v21[4] = *(_OWORD *)(v16 + 64);
              v21[5] = *(_OWORD *)(v16 + 80);
              v21[6] = *(_OWORD *)(v16 + 96);
              v21 += 8;
              v22 = *(_OWORD *)(v16 + 112);
              v16 += 128LL;
              *(v21 - 1) = v22;
              --v20;
            }
            while ( v20 );
            *v21 = *(_OWORD *)v16;
            v23 = *((_QWORD *)v19 + 6);
            if ( (v23 & 0x4000000000000LL) == 0 || (*((_DWORD *)v19 + 58) & 0xFFFF0000) == 0xFE500000 )
            {
              v24 = WdLogNewEntry5_WdAssertion(v23, 128LL, v17);
              WdLogEvent5_WdAssertion(v24);
              v23 = *((_QWORD *)v19 + 6);
            }
            *((_QWORD *)v19 + 34) = 0LL;
            *((_QWORD *)v19 + 7) = v23 & 0x18000820B8FLL;
            *((_QWORD *)v19 + 6) = v23 | 0x80000000000000LL;
          }
          v12 = (__int64)v49;
          ++v15;
        }
        while ( v15 < *((unsigned __int16 *)v49 + 10) );
        v8 = a4;
      }
      goto LABEL_18;
    }
LABEL_16:
    *(_DWORD *)a7 = 45;
    v26 = WdLogNewEntry5_WdError(v13, v12, v14);
    WdLogEvent5_WdError(v26);
    PathsModality = -1073741801;
    goto LABEL_66;
  }
  v25 = AllocPathsModality(a3);
  v48 = v25;
  if ( !v25 )
    goto LABEL_16;
  *((_WORD *)v25 + 10) = 0;
LABEL_18:
  v27 = v48;
  v28 = *((unsigned __int16 *)v48 + 10);
  *(_QWORD *)&v50 = (char *)v48 + 48;
  DWORD2(v50) = v28;
  if ( (_DWORD)v28 )
  {
    v29 = (char *)v48 + 280;
    v12 = (unsigned int)v28;
    do
    {
      *(_DWORD *)v29 |= 0x80u;
      v29[32] = 0;
      v29 += 272;
      --v12;
    }
    while ( v12 );
    v27 = v48;
  }
  v30 = *((unsigned __int16 *)v27 + 10);
  v31 = 0;
  if ( a3 )
  {
    v32 = (unsigned int *)((char *)v8 + 28);
    do
    {
      if ( !a2 )
      {
        if ( !(unsigned __int8)((__int64 (__fastcall *)(void *, _QWORD, _QWORD))qword_1C0212308)(
                                 a1,
                                 *((_QWORD *)v8 + 25 * v31 + 2),
                                 *v32) )
        {
          v42 = WdLogNewEntry5_WdError(v34, v33, v35);
          WdLogEvent5_WdError(v42);
          v43 = 43;
          PathsModality = -1073741790;
LABEL_42:
          *(_DWORD *)a7 = v43;
          goto LABEL_65;
        }
        v27 = v48;
      }
      PathsModality = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                        (const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v8 + 200 * v31),
                        *((unsigned __int16 *)v27 + 10),
                        v31,
                        1,
                        1,
                        v27,
                        a6);
      if ( PathsModality < 0 )
      {
        v43 = 46;
        goto LABEL_42;
      }
      v12 = (__int64)v48;
      if ( (*((_QWORD *)v48 + 34 * *((unsigned __int16 *)v48 + 10) + 6) & 0x4000000000000LL) == 0 )
      {
        v37 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v48, v36);
        WdLogEvent5_WdAssertion(v37);
        v12 = (__int64)v48;
      }
      v28 = 272LL * *(unsigned __int16 *)(v12 + 20);
      ++v31;
      v32 += 50;
      *(_QWORD *)(v28 + v12 + 48) &= ~0x4000000000000uLL;
      ++*((_WORD *)v48 + 10);
      v27 = v48;
    }
    while ( v31 < a3 );
  }
  v38 = v30;
  if ( v30 >= *((unsigned __int16 *)v27 + 10) )
  {
LABEL_61:
    if ( *((_WORD *)v27 + 10) )
    {
      PathsModality = 0;
      v48 = 0LL;
      *a5 = v27;
    }
    else
    {
      *(_DWORD *)a7 = 47;
      v45 = WdLogNewEntry5_WdError(v28, v12, v27);
      WdLogEvent5_WdError(v45);
      PathsModality = -1073741811;
    }
    goto LABEL_65;
  }
  while ( 1 )
  {
    v28 = 272LL * v38;
    if ( *(_DWORD *)((char *)v27 + v28 + 72) == -2 )
    {
      *(_DWORD *)((char *)v27 + v28 + 72) = 0;
      while ( 1 )
      {
        v27 = v48;
        v12 = 0LL;
        if ( !*((_WORD *)v48 + 10) )
          goto LABEL_38;
        while ( 1 )
        {
          if ( (_DWORD)v12 != v38 )
          {
            v44 = 272LL * (unsigned int)v12;
            if ( *(_DWORD *)((char *)v48 + v44 + 64) == *(_DWORD *)((char *)v48 + v28 + 64)
              && *(_DWORD *)((char *)v48 + v44 + 68) == *(_DWORD *)((char *)v48 + v28 + 68)
              && *(_DWORD *)((char *)v48 + v44 + 72) == *(_DWORD *)((char *)v48 + v28 + 72) )
            {
              break;
            }
          }
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *((unsigned __int16 *)v48 + 10) )
            goto LABEL_38;
        }
        ++*(_DWORD *)((char *)v48 + v28 + 72);
      }
    }
    v12 = 0LL;
    if ( v30 )
      break;
LABEL_38:
    if ( (*(_QWORD *)((_BYTE *)v27 + v28 + 48) & 0x4000000000000LL) == 0 )
    {
      v40 = v38 + 1;
      v41 = v38 | 0xFE500000;
      while ( v40 < *((unsigned __int16 *)v27 + 10) )
      {
        v12 = 272LL * v40;
        if ( (*(_QWORD *)((_BYTE *)v27 + v12 + 48) & 0x4000000000000LL) == 0
          && *(_DWORD *)((char *)v27 + v12 + 232) == *(_DWORD *)((char *)v27 + v28 + 232) )
        {
          *(_DWORD *)((char *)v27 + v12 + 232) = v41;
          *(_QWORD *)((char *)v48 + v12 + 48) |= 0x4000000000000uLL;
          v27 = v48;
          if ( !*((_BYTE *)v48 + v28 + 177) || *((_BYTE *)v48 + v28 + 312) )
          {
            *(_DWORD *)((char *)v48 + v12 + 72) = *(_DWORD *)((char *)v48 + v28 + 72);
            v27 = v48;
          }
        }
        ++v40;
      }
      *(_DWORD *)((char *)v27 + v28 + 232) = v41;
      *(_QWORD *)((char *)v48 + v28 + 48) |= 0x4000000000000uLL;
      v27 = v48;
    }
    if ( ++v38 >= *((unsigned __int16 *)v27 + 10) )
      goto LABEL_61;
  }
  while ( 1 )
  {
    v39 = 272LL * (unsigned int)v12;
    if ( *(_DWORD *)((char *)v27 + v39 + 64) == *(_DWORD *)((char *)v27 + v28 + 64)
      && *(_DWORD *)((char *)v27 + v39 + 68) == *(_DWORD *)((char *)v27 + v28 + 68)
      && *(_DWORD *)((char *)v27 + v39 + 72) == *(_DWORD *)((char *)v27 + v28 + 72) )
    {
      break;
    }
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v30 )
      goto LABEL_38;
  }
  v46 = WdLogNewEntry5_WdError(v28, v12, v27);
  WdLogEvent5_WdError(v46);
  PathsModality = -1073741790;
  *(_DWORD *)a7 = 48;
LABEL_65:
  SetDisplayConfigHandleBrokerProvidedPaths_::_2_::_AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14019::__AUTO_USING_PM_VirtualTopologyButNotVirtualModePath14019((__int64 *)&v50);
LABEL_66:
  FreePathsModality(*(struct D3DKMT_GETPATHSMODALITY **)v51);
  FreePathsModality(**((struct D3DKMT_GETPATHSMODALITY ***)&v51 + 1));
  return (unsigned int)PathsModality;
}

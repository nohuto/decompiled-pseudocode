/*
 * XREFs of ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x180075C5C
 * Callers:
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180075040 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x1800766A8 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?_GetDesktopWorkArea@CLivePreview@@AEAA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x180075DD4 (-_GetDesktopWorkArea@CLivePreview@@AEAA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18007783C (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_GetCoverageStateOfWindow(__int64 a1, __int64 a2)
{
  unsigned int CoverageStateOfTwoRects; // esi
  bool v3; // zf
  __int64 v5; // rax
  __int128 v6; // xmm0
  struct CWindowData *v7; // rax
  struct tagRECT v8; // xmm0
  struct tagRECT *v9; // rax
  struct tagRECT *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct tagRECT *v16; // rdx
  struct tagRECT v18; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-20h] BYREF

  CoverageStateOfTwoRects = 0;
  v3 = *(_DWORD *)(a2 + 112) == 1;
  v21[0] = 0LL;
  v21[1] = 0LL;
  if ( !v3 || (v5 = *(_QWORD *)(a1 + 536)) != 0 && *(_DWORD *)(v5 + 112) != 1 )
  {
    v3 = *(_DWORD *)(a2 + 112) == 1;
    v20 = 0uLL;
    if ( v3 )
      v6 = (__int128)*CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v19, (struct CWindowData *)a2);
    else
      v6 = *(_OWORD *)(a2 + 48);
    v7 = *(struct CWindowData **)(a1 + 536);
    v20 = v6;
    if ( v7 )
    {
      *(_QWORD *)&v19.left = 0LL;
      *(_QWORD *)&v19.right = 0LL;
      if ( *((_DWORD *)v7 + 28) == 1 )
      {
        v8 = *CLivePreview::_GetDesktopWorkArea((CLivePreview *)a1, &v18, v7);
      }
      else
      {
        v9 = (struct tagRECT *)((char *)v7 + 48);
        v10 = (struct tagRECT *)(a1 + 588);
        if ( !*(_BYTE *)(a1 + 604) )
          v10 = v9;
        v8 = *v10;
      }
      v19 = v8;
      return (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(&v19, &v20, v21);
    }
    else
    {
      v11 = 0LL;
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 552) + 40LL);
      if ( v12 )
      {
        do
        {
          if ( CoverageStateOfTwoRects )
            break;
          v13 = *(_QWORD *)(a1 + 552);
          v14 = 24 * v11;
          if ( (unsigned int)v11 >= *(_DWORD *)(v13 + 40) )
            v15 = 0LL;
          else
            v15 = v14 + *(_QWORD *)(v13 + 16);
          if ( v15 )
          {
            if ( (unsigned int)v11 >= *(_DWORD *)(v13 + 40) )
              v16 = 0LL;
            else
              v16 = (struct tagRECT *)(v14 + *(_QWORD *)(v13 + 16));
            v19 = *v16;
            CoverageStateOfTwoRects = CLivePreview::s_GetCoverageStateOfTwoRects(&v19, &v20, v21);
          }
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < v12 );
      }
    }
  }
  return CoverageStateOfTwoRects;
}

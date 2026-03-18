/*
 * XREFs of ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C02C04BC
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00CE7A8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C00D0B84 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C00D0C6C (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CF5C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z @ 0x1C02C0348 (-CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyTopology(CCD_TOPOLOGY *this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int16 v6; // cx
  unsigned int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  SIZE_T v13; // rax
  unsigned __int64 MaximumAdapterCount; // kr00_8
  __int64 v15; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = *((_QWORD *)this + 8);
  v5 = *((_QWORD *)a2 + 8);
  if ( v4 )
  {
    v6 = *(_WORD *)(v5 + 20);
    if ( *(_WORD *)(v4 + 22) >= v6 )
    {
      *(_WORD *)(v4 + 20) = v6;
      v7 = 0;
      *(_DWORD *)(*((_QWORD *)this + 8) + 32LL) = *(_DWORD *)(v5 + 32);
      *(_DWORD *)(*((_QWORD *)this + 8) + 24LL) = *(_DWORD *)(v5 + 24);
      v8 = *((_QWORD *)this + 8);
      *(_OWORD *)v8 = *(_OWORD *)v5;
      *(_DWORD *)(v8 + 16) = *(_DWORD *)(v5 + 16);
      if ( *(_WORD *)(v5 + 20) )
      {
        while ( (int)CCD_TOPOLOGY::CopyPathModalityDescriptor(
                       (CCD_TOPOLOGY *)(272LL * v7),
                       (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v7 + *((_QWORD *)this + 8) + 48LL),
                       (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(272LL * v7 + v5 + 48)) >= 0 )
        {
          if ( ++v7 >= *(unsigned __int16 *)(v5 + 20) )
            goto LABEL_8;
        }
        goto LABEL_14;
      }
LABEL_8:
      if ( *(_QWORD *)(v5 + 40) )
      {
        Global = DXGGLOBAL::GetGlobal(v8, (__int64)a2);
        MaximumAdapterCount = (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(Global, v12);
        v13 = 332 * MaximumAdapterCount;
        if ( !is_mul_ok(MaximumAdapterCount, 0x14CuLL) )
          v13 = -1LL;
        *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = operator new[](v13, 0x63644356u, PagedPool);
        v8 = *((_QWORD *)this + 8);
        if ( !*(_QWORD *)(v8 + 40) )
        {
LABEL_14:
          v15 = WdLogNewEntry5_WdLowResource(v8, a2, v9, v10);
          *(_QWORD *)(v15 + 24) = this;
          *(_QWORD *)(v15 + 32) = *((_QWORD *)this + 8);
          WdLogEvent5_WdLowResource(v15);
          return 3221225495LL;
        }
        *(_DWORD *)(v8 + 36) = *(_DWORD *)(v5 + 36);
        memmove(
          *(void **)(*((_QWORD *)this + 8) + 40LL),
          *(const void **)(v5 + 40),
          332LL * *(unsigned int *)(*((_QWORD *)this + 8) + 36LL));
      }
      return 0LL;
    }
  }
  return 3221225507LL;
}

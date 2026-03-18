/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0100A58
 * Callers:
 *     ?ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00E5FC0 (-ReleasePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D.c)
 *     ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0100950 (-ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3D.c)
 *     ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02BD9E0 (-AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VID.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(
        DMMVIDPNTOPOLOGY *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a2,
        __int64 a3)
{
  SIZE_T *p_DataSize; // rbx
  SIZE_T v5; // r8
  char *v6; // rdx
  char *v7; // rcx
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdError(this, 0LL, a3);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v9);
    return 3223192345LL;
  }
  p_DataSize = &a2[-1].GammaRamp.DataSize;
  if ( LODWORD(a2[-1].GammaRamp.DataSize) != 305419896 )
  {
    v9 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v9 + 24) = p_DataSize;
    goto LABEL_11;
  }
  v5 = p_DataSize[1];
  if ( !v5 )
    goto LABEL_8;
  v6 = (char *)this + 24;
  v7 = (char *)*((_QWORD *)this + 3);
  if ( v7 == v6 )
    goto LABEL_16;
  v7 -= 8;
  if ( !v7 )
    goto LABEL_16;
  do
  {
    if ( v7 == (char *)v5 )
      break;
    v10 = (char *)*((_QWORD *)v7 + 1);
    v7 = v10 - 8;
    if ( v10 == v6 )
      v7 = 0LL;
  }
  while ( v7 );
  if ( !v7 )
  {
LABEL_16:
    v11 = WdLogNewEntry5_WdError(v7, v6, v5);
    *(_QWORD *)(v11 + 24) = p_DataSize;
    *(_QWORD *)(v11 + 32) = this;
    WdLogEvent5_WdError(v11);
    return 3223192368LL;
  }
  else
  {
LABEL_8:
    operator delete[]((void *)p_DataSize[46]);
    operator delete(p_DataSize);
    return 0LL;
  }
}

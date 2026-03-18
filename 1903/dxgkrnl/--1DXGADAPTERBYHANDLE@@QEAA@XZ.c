/*
 * XREFs of ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C000BB64
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(DXGADAPTERBYHANDLE *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v1 + 16), (struct DXGADAPTER *)v1);
  }
}

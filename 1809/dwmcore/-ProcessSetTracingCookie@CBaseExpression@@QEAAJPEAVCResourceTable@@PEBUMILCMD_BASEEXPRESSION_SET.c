/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x180066984
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800669E4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800A2224 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  unsigned int TracingCookie; // eax
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // ecx
  CSparseStorage *v7; // rcx
  __int64 v9; // rcx
  struct CResourceTable *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  TracingCookie = CBaseExpression::GetTracingCookie(this);
  v6 = *(_DWORD *)(v5 + 8);
  if ( TracingCookie )
  {
    if ( !v6 )
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 224LL) + 160LL);
  }
  else if ( v6 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 224LL);
    ++*(_DWORD *)(v9 + 160);
    *(_BYTE *)(v9 + 416) |= 2u;
  }
  v7 = (CSparseStorage *)(v4 + 280);
  LODWORD(v10) = *(_DWORD *)(v5 + 8);
  if ( (_DWORD)v10 == `CVisual::SetVisualDesktopId'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v7 + 4LL) &= ~0x80000000;
  else
    CSparseStorage::SetData(v7, 1u, 4u, &v10);
  return 0LL;
}

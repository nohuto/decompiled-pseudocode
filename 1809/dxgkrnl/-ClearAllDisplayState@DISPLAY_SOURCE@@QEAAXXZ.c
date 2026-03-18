/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0122C48
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C012134C (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01C14DC (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C4DC0 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAXXZ @ 0x1C00F6724 (-InvalidateCache@QDC_CACHE@@QEAAXXZ.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C0121AE0 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C0122DB0 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0122DE0 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C0122E40 (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C013688C (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C01C44BC (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // ebp
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax

  for ( i = 0; i < *((_DWORD *)this + 934); ++i )
  {
    while ( 1 )
    {
      v3 = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1120);
      if ( IsDisplayPlaneConfigQueueEmpty(v3) )
        break;
      v5 = *(int *)v3;
      if ( (_DWORD)v5 == -1 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v12 + 24) = 8354LL;
        WdLogEvent5_WdAssertion(v12);
      }
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        v13 = WdLogNewEntry5_WdAssertion(v4);
        *(_QWORD *)(v13 + 24) = 8355LL;
        WdLogEvent5_WdAssertion(v13);
      }
      memset((char *)v3 + 80 * v5 + 8, 0, 0x50uLL);
      v6 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)v3 == (_DWORD)v5 )
      {
        if ( v6 == (_DWORD)v5 )
        {
          *((_DWORD *)v3 + 1) = -1;
          *(_DWORD *)v3 = -1;
        }
        else
        {
          *(_DWORD *)v3 = GetPreviousConfigIndex(v5);
        }
      }
      else if ( v6 == (_DWORD)v5 )
      {
        *((_DWORD *)v3 + 1) = GetNextConfigIndex(v5);
      }
    }
  }
  *((_DWORD *)this + 934) = 0;
  *((_BYTE *)this + 3744) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2800)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2800), *((_DWORD *)this + 700));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL::GetGlobal(v7);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 143), v9, v10, v11);
}

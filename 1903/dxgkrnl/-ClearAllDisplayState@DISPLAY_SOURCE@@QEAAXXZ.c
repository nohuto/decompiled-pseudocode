/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C013F2A8
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00CA2E8 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01F0A78 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F3CC4 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00CE98C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C013F410 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C013F664 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C013F6AC (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C013F70C (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C014703C (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C01F3390 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // ebp
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  for ( i = 0; i < *((_DWORD *)this + 934); ++i )
  {
    while ( 1 )
    {
      v3 = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1120);
      if ( IsDisplayPlaneConfigQueueEmpty(v3) )
        break;
      v6 = *(int *)v3;
      if ( (_DWORD)v6 == -1 )
      {
        v11 = WdLogNewEntry5_WdAssertion(v5, v4);
        *(_QWORD *)(v11 + 24) = 8804LL;
        WdLogEvent5_WdAssertion(v11);
      }
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v5, v4);
        *(_QWORD *)(v12 + 24) = 8805LL;
        WdLogEvent5_WdAssertion(v12);
      }
      memset((char *)v3 + 80 * v6 + 8, 0, 0x50uLL);
      v7 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)v3 == (_DWORD)v6 )
      {
        if ( v7 == (_DWORD)v6 )
        {
          *((_DWORD *)v3 + 1) = -1;
          *(_DWORD *)v3 = -1;
        }
        else
        {
          *(_DWORD *)v3 = GetPreviousConfigIndex(v6);
        }
      }
      else if ( v7 == (_DWORD)v6 )
      {
        *((_DWORD *)v3 + 1) = GetNextConfigIndex(v6);
      }
    }
  }
  *((_DWORD *)this + 934) = 0;
  *((_BYTE *)this + 3744) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2800)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2800), *((_DWORD *)this + 700));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL::GetGlobal(v9, v8);
  QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 139), 0LL);
}

/*
 * XREFs of ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@QEAAJXZ @ 0x180187814
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetManager::HandleDDAArrivalOrDeparture(CRenderTargetManager *this)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  v2 = 0LL;
  if ( *((_DWORD *)this + 20) )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v2);
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4);
      v1 = v5;
      if ( v5 < 0 )
        break;
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 20) )
        goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2D8u, 0LL);
  }
  else
  {
LABEL_4:
    if ( g_DisplayManager )
      *((_BYTE *)g_DisplayManager + 113) = 0;
  }
  return v1;
}

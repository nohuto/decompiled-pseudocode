/*
 * XREFs of ?ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18008C198
 * Callers:
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180080850 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z @ 0x18008C45C (-UpdateCursorVisibility@MPCCursorManager@@AEAAX_N00@Z.c)
 */

__int64 __fastcall MPCCursorManager::ProcessProviderDemoted(MPCCursorManager *this, struct IMPCInputProviderBase *a2)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 64) )
  {
    if ( *((_BYTE *)this + 56) && *((_BYTE *)this + 65) )
    {
      if ( ((*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2) & 2) != 0 )
      {
        MPCCursorManager::UpdateCursorVisibility(this, 0, 1, 0);
        result = 0LL;
        *((_DWORD *)this + 8) = 0;
        *(_OWORD *)this = 0uLL;
        *((_OWORD *)this + 1) = 0u;
        return result;
      }
    }
    else
    {
      *((_DWORD *)this + 8) = 0;
      *(_OWORD *)this = 0uLL;
      *((_OWORD *)this + 1) = 0u;
      MPCCursorManager::UpdateCursorVisibility(this, 1, 1, 0);
    }
  }
  return 0LL;
}

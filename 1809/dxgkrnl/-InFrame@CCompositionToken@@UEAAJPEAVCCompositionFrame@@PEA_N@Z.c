/*
 * XREFs of ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C000C680
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C000C888 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::InFrame(CCompositionToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int updated; // esi
  unsigned int (__fastcall *v7)(__int64, _QWORD); // rbx
  __int64 v8; // rax

  updated = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    v7 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 2541) + 40LL);
    v8 = (*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v7(v8, *((_QWORD *)this + 10)) )
    {
      ++*((_DWORD *)this + 7);
      *a3 = 0;
    }
    else
    {
      *((_DWORD *)this + 6) = 3;
      updated = CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
      *a3 = 1;
    }
  }
  return updated;
}

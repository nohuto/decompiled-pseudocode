/*
 * XREFs of ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180080C88
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180080124 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x180080B4C (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGIOutputInfo::UpdateDesc(DXGIOutputInfo *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx

  v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)this + 56LL))(*(_QWORD *)this, (char *)this + 16);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x2Bu);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 32LL))(
           *((_QWORD *)this + 1),
           (char *)this + 112);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x2Cu);
  }
  return v4;
}

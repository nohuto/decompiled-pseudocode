/*
 * XREFs of ?GetPresentStatistics@CHolographicInteropTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180210C50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicInteropTarget::GetPresentStatistics(
        CHolographicInteropTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  int v6; // ebx
  UINT32 v8; // [rsp+40h] [rbp+8h] BYREF
  UINT32 v9; // [rsp+44h] [rbp+Ch]

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 32);
    v6 = -2147467259;
    if ( v5 )
    {
      this = *(CHolographicInteropTarget **)(v5 + 32);
      if ( this )
      {
        v6 = (*(__int64 (__fastcall **)(CHolographicInteropTarget *, struct DXGI_FRAME_STATISTICS_DWM *, UINT32 *))(*(_QWORD *)this + 24LL))(
               this,
               a2,
               &v8);
        a3->uiNumerator = v8;
        a3->uiDenominator = v9;
      }
    }
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BC238, 1u, v6, 0x119u);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BC238, 1u, -2003304307, 0x11Du);
  }
  return (unsigned int)v6;
}

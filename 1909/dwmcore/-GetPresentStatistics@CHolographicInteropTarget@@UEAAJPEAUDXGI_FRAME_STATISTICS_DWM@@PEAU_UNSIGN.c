/*
 * XREFs of ?GetPresentStatistics@CHolographicInteropTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180243F60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicInteropTarget::GetPresentStatistics(
        CHolographicInteropTarget *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2,
        struct _UNSIGNED_RATIO *a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  signed int v6; // ebx
  UINT32 v8; // [rsp+40h] [rbp+8h] BYREF
  UINT32 v9; // [rsp+44h] [rbp+Ch]

  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 40);
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
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802E1E90, 1u, v6, 0x115u, 0LL);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802E1E90, 1u, 0x8898008D, 0x119u, 0LL);
  }
  return (unsigned int)v6;
}

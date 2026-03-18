/*
 * XREFs of ?SetDeviceGammaRamp@DXGDEVICE@@QEAAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C003F314
 * Callers:
 *     DxgkSetGammaRamp @ 0x1C0233830 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DXGDEVICE::SetDeviceGammaRamp(DXGDEVICE *this, __int64 a2, const struct DXGK_GAMMA_RAMP *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  ReferenceCounted *v8; // rcx

  v4 = (unsigned int)a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 13)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, a2);
    *(_QWORD *)(v7 + 24) = 594LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  v8 = (ReferenceCounted *)*((_QWORD *)this + v4 + 176);
  if ( v8 )
    ReferenceCounted::Release(v8, a2, (__int64)a3);
  *((_QWORD *)this + v4 + 176) = a3;
}

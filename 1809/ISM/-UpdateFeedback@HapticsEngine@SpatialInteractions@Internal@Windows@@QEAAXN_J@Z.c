/*
 * XREFs of ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x180124584
 * Callers:
 *     ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x180124170 (-StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z.c)
 *     ?Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801243D0 (-Invoke@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     ?StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180127CA0 (-StopHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UE.c)
 * Callees:
 *     floor @ 0x18012BEF4 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(
        Windows::Internal::SpatialInteractions::HapticsEngine *this,
        double a2,
        __int64 a3)
{
  double v5; // xmm7_8
  double v6; // xmm0_8
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = 1.0 / (double)*((int *)this + 56);
  v6 = floor(a2 / v5 + 0.5);
  v7 = *((_QWORD *)this + 27);
  v8 = (int)(v6 * v5 * 100.0 + 0.5);
  if ( !v7 || a3 - v7 >= *((_QWORD *)this + 26) || (_BYTE)v8 != *((_BYTE *)this + 228) )
  {
    v9 = *((_QWORD *)this + 23);
    v10 = (int)(v6 * v5 * 100.0 + 0.5);
    if ( !v9 )
    {
      std::_Xbad_function_call();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 16LL))(v9, &v10);
    *((_BYTE *)this + 228) = v8;
    *((_QWORD *)this + 27) = a3;
  }
}

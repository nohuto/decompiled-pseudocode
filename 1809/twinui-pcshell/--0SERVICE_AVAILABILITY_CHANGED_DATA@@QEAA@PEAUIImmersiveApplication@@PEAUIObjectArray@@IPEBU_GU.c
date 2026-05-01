/*
 * XREFs of ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@PEAUIImmersiveApplication@@PEAUIObjectArray@@IPEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800EAF74
 * Callers:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800FA1D8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18009B2D7 (memcpy_0.c)
 */

__int64 __fastcall SERVICE_AVAILABILITY_CHANGED_DATA::SERVICE_AVAILABILITY_CHANGED_DATA(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        int a6)
{
  unsigned __int64 v6; // rsi
  size_t v9; // rax
  void *v10; // rax

  v6 = a4;
  *(_QWORD *)a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 8));
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = a6;
  if ( (_DWORD)v6 )
  {
    v9 = 16 * v6;
    if ( !is_mul_ok(v6, 0x10uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)(a1 + 24) = v10;
    if ( v10 )
    {
      memcpy_0(v10, Src, 16LL * (unsigned int)v6);
      *(_DWORD *)(a1 + 32) = v6;
    }
  }
  return a1;
}

/*
 * XREFs of ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x180063D38
 * Callers:
 *     ?ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z @ 0x180063C20 (-ValidateActivationAndBroadcastChanged@CImmersiveMode@@UEAAXW4ZBID@@@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_38fe827a8ab492bc5ce2b2cfb44a031c___ @ 0x180063E14 (Windows--Internal--ComTaskPool--QueueTask__lambda_38fe827a8ab492bc5ce2b2cfb44a031c___.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z @ 0x180100D88 (--_GZBAND_NOTIFICATION_DATA@@QEAAPEAXI@Z.c)
 */

void __fastcall CImmersiveMode::_ScheduleListenerNotification(CImmersiveMode *this)
{
  ZBAND_NOTIFICATION_DATA *v1; // rbx
  _QWORD *v3; // rdi
  ZBAND_NOTIFICATION_DATA *v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  ZBAND_NOTIFICATION_DATA *v8; // rcx
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = v1;
    v1 = 0LL;
    v3[1] = v4;
    *((_DWORD *)v3 + 4) = 0;
    *v3 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  v9 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  if ( v3 )
  {
    *((_QWORD *)this + 44) = 0LL;
    v9 = v3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
    Windows::Internal::ComTaskPool::QueueTask__lambda_38fe827a8ab492bc5ce2b2cfb44a031c___(
      v7,
      v6,
      LODWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr),
      &v9);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
  }
  else
  {
    v8 = (ZBAND_NOTIFICATION_DATA *)*((_QWORD *)this + 44);
    if ( !v8 )
      goto LABEL_8;
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v8, v5);
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
LABEL_8:
  if ( v1 )
    ZBAND_NOTIFICATION_DATA::`scalar deleting destructor'(v1, v5);
}

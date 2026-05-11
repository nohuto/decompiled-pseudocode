/*
 * XREFs of IsSidebandIrp @ 0x1C0007904
 * Callers:
 *     UsbAudioIrpDispatcher @ 0x1C00211F0 (UsbAudioIrpDispatcher.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall IsSidebandIrp(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  PKSDEVICE DeviceForDeviceObject; // rax
  __int64 v5; // rdx
  KSPIN_LOCK *Context; // rsi
  char v7; // al
  __int64 v8; // rbp
  KIRQL v9; // dl
  KSPIN_LOCK *i; // rax

  v2 = *(char **)(a2 + 184);
  v3 = 0;
  DeviceForDeviceObject = KsGetDeviceForDeviceObject(a1);
  if ( DeviceForDeviceObject )
  {
    Context = (KSPIN_LOCK *)DeviceForDeviceObject->Context;
    v7 = *v2;
    if ( *v2 )
    {
      if ( v7 == 2 || (unsigned __int8)(v7 - 14) <= 1u )
      {
        v8 = *((_QWORD *)v2 + 6);
        v9 = KeAcquireSpinLockRaiseToDpc(Context + 118);
        for ( i = (KSPIN_LOCK *)Context[116]; i != Context + 116; i = (KSPIN_LOCK *)*i )
        {
          if ( *(i - 1) == v8 )
          {
            v3 = 1;
            break;
          }
        }
        KeReleaseSpinLock(Context + 118, v9);
      }
    }
    else
    {
      LOBYTE(v3) = RtlCompareUnicodeString((PCUNICODE_STRING)(*((_QWORD *)v2 + 6) + 88LL), &String2, 1u) == 0;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v5,
      9u,
      0x10u,
      (__int64)&WPP_c1bbbc7c6ff13e7a8b64db01ff8a6f94_Traceguids);
  }
  return v3;
}

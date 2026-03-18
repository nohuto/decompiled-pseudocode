/*
 * XREFs of ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02565F8
 * Callers:
 *     ??_GSimpleHapticsController@@QEAAPEAXI@Z @ 0x1C02532C4 (--_GSimpleHapticsController@@QEAAPEAXI@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C025360C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0253BC4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C02563EC (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::DeInitialize(SimpleHapticsController *this)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v8; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const char *v10; // [rsp+60h] [rbp-38h]
  __int64 v11; // [rsp+68h] [rbp-30h]
  unsigned int *v12; // [rsp+70h] [rbp-28h]
  __int64 v13; // [rsp+78h] [rbp-20h]

  v2 = SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
  v3 = *((_QWORD *)this + 10);
  v8 = v2;
  if ( v3 )
  {
    Win32FreePool(v3);
    *((_QWORD *)this + 10) = 0LL;
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 8) = 0LL;
    *((_WORD *)this + 36) = 0;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    Win32FreePool(v6);
    *((_QWORD *)this + 1) = 0LL;
  }
  if ( (unsigned int)dword_1C03212D0 > 4 )
  {
    v11 = 38LL;
    v10 = "SimpleHapticsController::DeInitialize";
    v12 = &v8;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C03212D0, &unk_1C02E9886, 0LL, 0LL, 4u, &pData);
  }
  return v8;
}

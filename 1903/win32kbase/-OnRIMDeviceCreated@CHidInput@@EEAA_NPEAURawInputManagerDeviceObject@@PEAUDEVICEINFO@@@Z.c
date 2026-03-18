/*
 * XREFs of ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A9840
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMCreateHandleForObject @ 0x1C006F600 (HMCreateHandleForObject.c)
 *     ?LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C017E8CC (-LogDeviceArrivedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C018FF5C (-UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CHidInput::OnRIMDeviceCreated(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  struct RawInputManagerDeviceObject *v4; // r14
  char v5; // di
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  CInputSystemMetrics *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r10
  _BYTE v16[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = a2;
  v5 = 1;
  if ( (*((_DWORD *)a2 + 72) & 0x80u) != 0 )
  {
    v7 = *((_QWORD *)a2 + 71);
    LOBYTE(a2) = 22;
    v10 = HMCreateHandleForObject(v7, (__int64)a2, (__int64)a3);
    if ( v10 )
    {
      v5 = 1;
      if ( *((_DWORD *)a3 + 2) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11);
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v16,
        v8,
        v11);
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      if ( *(_QWORD *)(v10 + 736) != -1LL )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
      *(_QWORD *)(v10 + 736) = *(_QWORD *)a3;
      if ( (*(_DWORD *)(v10 + 312) & 8) == 0 )
      {
        v15 = *((_QWORD *)v4 + 71);
        CHidInput::LogDeviceArrivedEvent(
          (CHidInput *)(v15 + 320),
          *(_WORD *)(*((_QWORD *)v4 + 69) + 40LL),
          *(unsigned __int16 *)(*((_QWORD *)v4 + 69) + 110LL),
          *(unsigned __int16 *)(*((_QWORD *)v4 + 69) + 112LL),
          *(_DWORD *)(v15 + 24),
          *(_DWORD *)(v15 + 720),
          *(_DWORD *)(v15 + 24) == 6,
          (struct _UNICODE_STRING *)(v15 + 320),
          (struct _UNICODE_STRING *)(v15 + 848));
      }
      CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(v13, a3, 1);
    }
    else
    {
      return 0;
    }
  }
  return v5;
}

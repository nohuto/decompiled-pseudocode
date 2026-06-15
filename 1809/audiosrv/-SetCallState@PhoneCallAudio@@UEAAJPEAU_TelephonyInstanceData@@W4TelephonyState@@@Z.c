/*
 * XREFs of ?SetCallState@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyState@@@Z @ 0x18011C1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z @ 0x18011B0EC (-DoEnableCellularRouting@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::SetCallState(__int64 a1, struct _TelephonyInstanceData *a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_11;
  }
  if ( a3 > 1 )
    goto LABEL_4;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, int *))(*(_QWORD *)v7 + 112LL))(
           v7,
           a2,
           &v12);
    if ( v6 >= 0 )
    {
      if ( !v12 )
      {
LABEL_4:
        v6 = -2147024809;
        goto LABEL_11;
      }
      v8 = PhoneCallAudio::DoEnableCellularRouting((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a3 == 0);
      v6 = 0;
      if ( v8 < 0 )
        v6 = v8;
    }
  }
  else
  {
    v6 = -2147019873;
  }
LABEL_11:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}

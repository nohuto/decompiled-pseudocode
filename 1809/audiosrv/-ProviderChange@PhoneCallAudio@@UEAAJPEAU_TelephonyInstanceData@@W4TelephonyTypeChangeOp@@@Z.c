/*
 * XREFs of ?ProviderChange@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18011BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyTypeChangeOp@@@Z @ 0x18011B058 (-DoEnableCellularProviderChange@PhoneCallAudio@@AEAAJPEAU_TelephonyInstanceData@@W4TelephonyType.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::ProviderChange(__int64 a1, __int64 a2, unsigned int a3)
{
  signed int v6; // ebx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_11;
  }
  if ( a3 > 2 )
    goto LABEL_10;
  v7 = *(_QWORD *)(a1 + 32);
  if ( !v7 )
  {
    v6 = -2147019873;
    goto LABEL_11;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v7 + 112LL))(v7, a2, &v11);
  if ( v6 >= 0 )
  {
    if ( !v11 )
    {
      v6 = -2147024809;
      goto LABEL_11;
    }
    v6 = PhoneCallAudio::DoEnableCellularProviderChange((struct _RTL_CRITICAL_SECTION *)(a1 - 8), a2, a3);
    if ( v6 >= 0 )
LABEL_10:
      v6 = a3 > 2 ? 0x80070057 : 0;
  }
LABEL_11:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}

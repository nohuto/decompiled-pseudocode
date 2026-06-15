/*
 * XREFs of ?GetMuteSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@W4TelephonyDataFlow@@PEAH@Z @ 0x18011B8B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetMuteSync(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v14; // [rsp+30h] [rbp-18h]

  v8 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 64));
  if ( !a4 || !a2 )
  {
    v8 = -2147467261;
    goto LABEL_14;
  }
  v9 = *(_QWORD *)(a1 + 24);
  if ( !v9 )
  {
    v10 = -2147019873;
LABEL_6:
    v8 = v10;
    goto LABEL_14;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 80LL))(v9, a2, a4);
      if ( v10 < 0 )
        goto LABEL_6;
    }
    else
    {
      v8 = -2147024809;
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, a2, a4);
    if ( v11 < 0 )
      v8 = v11;
  }
LABEL_14:
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v8;
}

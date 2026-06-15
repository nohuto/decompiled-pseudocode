/*
 * XREFs of ?GetCallStateSync@PhoneCallAudio@@UEAAJPEAU_TelephonyInstanceData@@PEAW4TelephonyState@@@Z @ 0x18011B6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::GetCallStateSync(
        PhoneCallAudio *this,
        struct _TelephonyInstanceData *a2,
        enum TelephonyState *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  v12 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  if ( !a2 || !a3 )
  {
    v6 = -2147467261;
    goto LABEL_9;
  }
  *(_DWORD *)a3 = 1;
  v7 = *((_QWORD *)this + 3);
  if ( !v7 )
  {
    v8 = -2147019873;
LABEL_6:
    v6 = v8;
    goto LABEL_9;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct _TelephonyInstanceData *, int *))(*(_QWORD *)v7 + 152LL))(
         v7,
         a2,
         &v12);
  if ( v8 < 0 )
    goto LABEL_6;
  *(_DWORD *)a3 = v12 == 0;
LABEL_9:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}

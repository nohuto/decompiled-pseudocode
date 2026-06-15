/*
 * XREFs of ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x180063264
 * Callers:
 *     ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x180051F60 (-CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPE.c)
 *     ??1?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAA@XZ @ 0x1801277B0 (--1-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x1801278A8 (--1PhoneCallAudio@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<PhoneCallEndTimer>::Free(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}

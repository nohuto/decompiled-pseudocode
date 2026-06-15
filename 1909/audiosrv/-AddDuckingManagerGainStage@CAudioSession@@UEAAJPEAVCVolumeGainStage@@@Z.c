/*
 * XREFs of ?AddDuckingManagerGainStage@CAudioSession@@UEAAJPEAVCVolumeGainStage@@@Z @ 0x1800CCC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VCVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVolumeGainStage@@@Z @ 0x1800CCA38 (--4-$com_ptr_t@VCVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCVolumeGainSt.c)
 */

__int64 __fastcall CAudioSession::AddDuckingManagerGainStage(CAudioSession *this, struct CVolumeGainStage *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  float v6; // xmm1_4
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 408);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = *((_QWORD *)this + 56);
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 36));
    v5 = *((_QWORD *)this + 56);
    v6 = *((float *)a2 + 14);
    if ( *(float *)(v5 + 56) > v6 && !*(_BYTE *)(v5 + 32) )
      *(float *)(v5 + 56) = v6;
  }
  else
  {
    wil::com_ptr_t<CVolumeGainStage,wil::err_returncode_policy>::operator=((__int64 *)this + 56, (__int64)a2);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}

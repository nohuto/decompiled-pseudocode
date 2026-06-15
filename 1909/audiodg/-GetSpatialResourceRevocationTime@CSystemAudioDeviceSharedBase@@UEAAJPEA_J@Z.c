/*
 * XREFs of ?GetSpatialResourceRevocationTime@CSystemAudioDeviceSharedBase@@UEAAJPEA_J@Z @ 0x140032490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetSpatialResourceRevocationTime(
        CSystemAudioDeviceSharedBase *this,
        __int64 *a2)
{
  CSystemAudioDeviceSharedBase *v3; // rbx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v3 = this;
  v5 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v5);
  LODWORD(v3) = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v3 + 41) + 168LL))(
                  *((_QWORD *)v3 + 41),
                  a2);
  EtwEventActivityIdControl(4LL, &v5);
  return (unsigned int)v3;
}

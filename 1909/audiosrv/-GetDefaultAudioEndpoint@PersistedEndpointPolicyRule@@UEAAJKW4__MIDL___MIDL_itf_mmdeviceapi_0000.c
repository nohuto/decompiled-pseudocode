/*
 * XREFs of ?GetDefaultAudioEndpoint@PersistedEndpointPolicyRule@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_NPEAPEAG@Z @ 0x180042F40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PersistedEndpointPolicyRule::GetDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _BYTE *a5,
        __int64 a6)
{
  __int64 v6; // rdi

  v6 = a6;
  *(_QWORD *)a6 = 0LL;
  if ( a2 != GetCurrentProcessId()
    && (!g_ADGProcess || a2 != LODWORD(g_ADGProcess[2].OwningThread))
    && g_PolicyManager
    && (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 176LL))(g_PolicyManager) )
  {
    a6 = 0LL;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 40LL))(
           g_PolicyManager,
           a2,
           &a6) >= 0 )
    {
      if ( !a6 )
        return 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a6 + 40LL))(a6, a3, a4, v6);
      if ( a5 )
        *a5 = 1;
    }
    if ( a6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 16LL))(a6);
  }
  return 0LL;
}

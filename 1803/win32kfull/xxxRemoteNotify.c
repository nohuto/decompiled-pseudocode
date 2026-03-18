/*
 * XREFs of xxxRemoteNotify @ 0x1C0110AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteNotify(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // rbx

  v2 = a1;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
  {
    if ( v2 + 1 < v2 || (unsigned __int64)(v2 + 1) > MmUserProbeAddress )
      v2 = (_DWORD *)MmUserProbeAddress;
    switch ( *v2 )
    {
      case 6:
        return 0LL;
      case 0xB:
        gdwHydraHint |= 0x4000000u;
        break;
      case 0xC:
        gdwHydraHint |= 0x8000000u;
        break;
      default:
        return 0LL;
    }
    SetConnectCompletedState(1LL);
    return 0LL;
  }
  return 3221225506LL;
}

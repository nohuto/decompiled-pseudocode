/*
 * XREFs of xxxRemoteNotify @ 0x1C0118FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxRemoteNotify(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx

  v4 = a1;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
  {
    if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    switch ( *v4 )
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

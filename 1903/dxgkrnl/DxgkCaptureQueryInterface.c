/*
 * XREFs of DxgkCaptureQueryInterface @ 0x1C020B150
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01428A0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkCaptureQueryInterface(unsigned __int16 *a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD *v5; // rax

  if ( *a1 == 48 && a1[1] == 1 )
  {
    *((_QWORD *)a1 + 1) = 0LL;
    *((_QWORD *)a1 + 2) = DxgkCddInterfaceDereference;
    *((_QWORD *)a1 + 3) = DxgkCddInterfaceDereference;
    *((_QWORD *)a1 + 4) = DxgkCaptureAcquireSynchronization;
    *((_QWORD *)a1 + 5) = DxgkCaptureReleaseSynchronization;
    result = 0LL;
    *a2 = 48;
  }
  else
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdError(48LL, a2, a3);
    v5[3] = -1073741811LL;
    v5[4] = *a1;
    v5[5] = 528LL;
    v5[6] = a1[1];
    v5[7] = 1LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  return result;
}

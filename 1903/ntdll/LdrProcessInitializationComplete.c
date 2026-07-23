/*
 * XREFs of LdrProcessInitializationComplete @ 0x18007F5B0
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwSetEvent @ 0x18009C8A0 (ZwSetEvent.c)
 *     sub_1800CFA48 @ 0x1800CFA48 (sub_1800CFA48.c)
 */

int LdrProcessInitializationComplete()
{
  struct _PEB *v0; // rax
  __int64 v1; // rcx
  int v2; // r8d
  int v3; // r9d
  __int64 v4; // rcx

  LODWORD(v0) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v0 )
  {
    v0 = NtCurrentPeb();
    v1 = (__int64)&v0->SharedData->UserModeGlobalLogger[2];
  }
  else
  {
    v1 = 2147353476LL;
  }
  if ( *(_BYTE *)v1 )
  {
    v0 = NtCurrentPeb();
    if ( (v0->TracingFlags & 4) != 0 )
    {
      LODWORD(v0) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v0 )
      {
        v0 = NtCurrentPeb();
        v4 = (__int64)&v0->SharedData->UserModeGlobalLogger[2] + 1;
      }
      else
      {
        v4 = 2147353477LL;
      }
      if ( (*(_BYTE *)v4 & 0x20) != 0 )
      {
        LOBYTE(v3) = -1;
        LOBYTE(v2) = -1;
        LODWORD(v0) = sub_1800CFA48(5252, -1, v2, v3, 0LL, 0LL);
      }
    }
  }
  _InterlockedIncrement(&dword_180165418);
  if ( qword_180165378 )
    LODWORD(v0) = ZwSetEvent(qword_180165378, 0LL);
  return (int)v0;
}

/*
 * XREFs of PopPowerRequestCreateInfo @ 0x14069DD50
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x1400EB528 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1400ECD28 (PoDestroyReasonContext.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x14069DE44 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x14069DFD4 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, char a2, __int64 *a3)
{
  __int64 v5; // rdx
  int UserPowerRequest; // edi
  _QWORD *v7; // rbx
  unsigned int *v8; // rsi
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  v12 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    UserPowerRequest = PoCaptureReasonContext(a1, 1, 0LL, 1, 0LL, &P);
    if ( UserPowerRequest < 0 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = P;
      LOBYTE(v5) = a2;
      UserPowerRequest = PopCreateUserPowerRequest(Object, v5, P);
      if ( UserPowerRequest >= 0 )
      {
        v8 = (unsigned int *)Object[0];
        v7 = 0LL;
        UserPowerRequest = ObInsertObjectEx((_QWORD *)Object[0], 0LL, 0, 0, 0, 0LL, &v12);
        if ( UserPowerRequest >= 0 )
          PopNotifySessionUserPowerRequestCreated(v8[4], v8[7], v12);
      }
    }
  }
  else
  {
    v7 = P;
    UserPowerRequest = -1073741637;
  }
  if ( a3 )
    *a3 = v12;
  if ( v7 )
    PoDestroyReasonContext(v7);
  return (unsigned int)UserPowerRequest;
}

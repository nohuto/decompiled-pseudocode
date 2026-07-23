/*
 * XREFs of PopPowerRequestCreateInfo @ 0x140589318
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PoCaptureReasonContext @ 0x1400020AC (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x140589440 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x140589C2C (PopCreateUserPowerRequest.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, __int64 a2, __int64 *a3)
{
  char v4; // si
  _QWORD *v5; // rbx
  int inserted; // edi
  __int64 v7; // rdx
  int UserPowerRequest; // eax
  unsigned int *v9; // rsi
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v4 = a2;
  v13 = 0LL;
  Object[0] = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    LOBYTE(a2) = 1;
    inserted = PoCaptureReasonContext(a1, a2, 0LL, 1, 0LL, (PVOID *)&v12);
    if ( inserted >= 0 )
    {
      v5 = (_QWORD *)v12;
      LOBYTE(v7) = v4;
      UserPowerRequest = PopCreateUserPowerRequest(Object, v7, v12);
      v9 = (unsigned int *)Object[0];
      inserted = UserPowerRequest;
      if ( UserPowerRequest >= 0 )
      {
        v5 = 0LL;
        ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
        inserted = ObInsertObjectEx(v9, 0LL, 0, 0LL, (__int64)&v13);
        if ( inserted >= 0 )
          PopNotifySessionUserPowerRequestCreated(v9[4], v9[7], v13);
      }
      if ( v9 )
        ObfDereferenceObjectWithTag(v9, 0x72506F50u);
    }
    else
    {
      v5 = 0LL;
    }
  }
  else
  {
    v5 = (_QWORD *)v12;
    inserted = -1073741637;
  }
  if ( a3 )
    *a3 = v13;
  if ( v5 )
    PoDestroyReasonContext(v5);
  return (unsigned int)inserted;
}

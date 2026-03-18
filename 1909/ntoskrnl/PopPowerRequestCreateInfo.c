/*
 * XREFs of PopPowerRequestCreateInfo @ 0x1406B3BE0
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     PoDestroyReasonContext @ 0x1400D64DC (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x14010535C (PoCaptureReasonContext.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     PopNotifySessionUserPowerRequestCreated @ 0x1406B3D08 (PopNotifySessionUserPowerRequestCreated.c)
 *     PopCreateUserPowerRequest @ 0x1406B3DA4 (PopCreateUserPowerRequest.c)
 */

__int64 __fastcall PopPowerRequestCreateInfo(unsigned __int64 a1, char a2, __int64 *a3)
{
  _QWORD *v5; // rbx
  int inserted; // edi
  __int64 v7; // rdx
  int UserPowerRequest; // eax
  unsigned int *v9; // rsi
  PVOID Object[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  Object[0] = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    inserted = PoCaptureReasonContext(a1, 1, 0LL, 1, 0LL, &v12);
    if ( inserted >= 0 )
    {
      v5 = (_QWORD *)v12;
      LOBYTE(v7) = a2;
      UserPowerRequest = PopCreateUserPowerRequest(Object, v7, v12);
      v9 = (unsigned int *)Object[0];
      inserted = UserPowerRequest;
      if ( UserPowerRequest >= 0 )
      {
        v5 = 0LL;
        ObfReferenceObjectWithTag(Object[0], 0x72506F50u);
        inserted = ObInsertObjectEx(v9, 0LL, 0, 0, 0, 0LL, &v13);
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

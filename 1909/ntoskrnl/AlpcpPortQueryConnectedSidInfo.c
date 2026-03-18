/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x1406B46E4
 * Callers:
 *     NtAlpcQueryInformation @ 0x1406B43B0 (NtAlpcQueryInformation.c)
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     AlpcpReferenceConnectedPort @ 0x1405E5150 (AlpcpReferenceConnectedPort.c)
 *     SeQueryUserSidToken @ 0x140656D1C (SeQueryUserSidToken.c)
 *     SeCaptureSid @ 0x140658A6C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140658B6C (SeReleaseSid.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  struct _KPROCESS *v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // r13
  signed __int64 *v14; // rsi
  PACCESS_TOKEN v15; // rbx
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v19; // [rsp+48h] [rbp-A0h]
  PSID v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v21 = a1;
  v20 = a2;
  Sid1 = 0LL;
  memset(Sid2, 0, 0x44uLL);
  if ( !a1 )
    return 3221225485LL;
  if ( !a5 )
  {
    if ( a4 )
      *a4 = 0;
    Sid1 = a2;
    goto LABEL_6;
  }
  if ( a4 )
    *a4 = 0;
  result = SeCaptureSid((char *)a2, a5, v8, v9, v17, 1, &Sid1);
  v19 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v11 = 0LL;
    v12 = AlpcpReferenceConnectedPort(a1);
    v13 = (_QWORD *)v12;
    if ( v12 )
    {
      v14 = (signed __int64 *)(v12 + 352);
      ExAcquirePushLockSharedEx(v12 + 352, 0LL);
      if ( (v13[3] & 1) == 0 )
        v11 = (struct _KPROCESS *)v13[3];
      if ( v11 )
        ObfReferenceObjectWithTag(v11, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v14);
      KeAbPostRelease((ULONG_PTR)v14);
      ObfDereferenceObject(v13);
    }
    if ( v11 )
    {
      v15 = PsReferencePrimaryToken(v11);
      SeQueryUserSidToken((__int64)v15, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&v11[1].Affinity.Bitmap[5], (unsigned __int64)v15);
      LOBYTE(v15) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(v11, 0x63706C41u);
      v16 = (_BYTE)v15 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v16 = -1073741769;
    }
    if ( Sid1 != a2 )
      SeReleaseSid(Sid1, a5, 1);
    return v16;
  }
  return result;
}

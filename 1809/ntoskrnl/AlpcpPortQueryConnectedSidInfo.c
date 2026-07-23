/*
 * XREFs of AlpcpPortQueryConnectedSidInfo @ 0x14068FD4C
 * Callers:
 *     NtAlpcQueryInformation @ 0x14068FA30 (NtAlpcQueryInformation.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     AlpcpReferenceConnectedPort @ 0x14068FEF4 (AlpcpReferenceConnectedPort.c)
 */

__int64 __fastcall AlpcpPortQueryConnectedSidInfo(__int64 a1, PSID a2, __int64 a3, _DWORD *a4, char a5)
{
  __int64 result; // rax
  struct _KPROCESS *v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // r13
  signed __int64 *v11; // r14
  PACCESS_TOKEN v12; // rbx
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-C8h]
  PSID Sid1; // [rsp+40h] [rbp-A8h] BYREF
  int v16; // [rsp+48h] [rbp-A0h]
  PSID v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+58h] [rbp-90h]
  _BYTE Sid2[80]; // [rsp+60h] [rbp-88h] BYREF

  v18 = a1;
  v17 = a2;
  Sid1 = 0LL;
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
  result = SeCaptureSid((char *)a2, a5, a3, (__int64)a4, v14, 1, &Sid1);
  v16 = result;
  if ( (int)result >= 0 )
  {
LABEL_6:
    v8 = 0LL;
    v9 = AlpcpReferenceConnectedPort(a1);
    v10 = (_QWORD *)v9;
    if ( v9 )
    {
      v11 = (signed __int64 *)(v9 + 352);
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
      if ( (v10[3] & 1) == 0 )
        v8 = (struct _KPROCESS *)v10[3];
      if ( v8 )
        ObfReferenceObjectWithTag(v8, 0x63706C41u);
      if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      ObfDereferenceObject(v10);
    }
    if ( v8 )
    {
      v12 = PsReferencePrimaryToken(v8);
      SeQueryUserSidToken((__int64)v12, Sid2, 0x44u, 0LL);
      ObFastDereferenceObject((signed __int64 *)&v8[1].Affinity.Bitmap[5], (unsigned __int64)v12);
      LOBYTE(v12) = RtlEqualSid(Sid1, Sid2);
      ObfDereferenceObjectWithTag(v8, 0x63706C41u);
      v13 = (_BYTE)v12 == 0 ? 0xC00002A0 : 0;
    }
    else
    {
      v13 = -1073741769;
    }
    if ( Sid1 != a2 )
      SeReleaseSid(Sid1, a5, 1);
    return v13;
  }
  return result;
}

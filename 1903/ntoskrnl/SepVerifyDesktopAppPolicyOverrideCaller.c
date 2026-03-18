/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x14031D044
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140084754 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlQueryPackageClaims @ 0x140084370 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PsReferenceEffectiveToken @ 0x1405DEBD0 (PsReferenceEffectiveToken.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(int a1)
{
  bool v2; // si
  __int64 v3; // rbx
  _KPROCESS *Process; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  char v8; // [rsp+48h] [rbp-C0h] BYREF
  int v9; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  size_t v11; // [rsp+58h] [rbp-B0h] BYREF
  size_t v12; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+78h] [rbp-90h] BYREF
  char v15; // [rsp+88h] [rbp-80h] BYREF
  wchar_t v16[128]; // [rsp+98h] [rbp-70h] BYREF
  wchar_t v17[128]; // [rsp+198h] [rbp+90h] BYREF

  v10 = 0LL;
  v9 = 0;
  v12 = 256LL;
  v2 = 0;
  v11 = 256LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = 0LL;
  v8 = 0;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return 1;
  if ( RtlQueryPackageClaims(a1, v16, &v11, 0LL, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v3 = PsReferenceEffectiveToken(
           (unsigned int)KeGetCurrentThread(),
           (unsigned int)&v9,
           (unsigned int)&v8,
           (unsigned int)&v15,
           0LL);
    if ( RtlQueryPackageClaims(v3, v17, &v12, 0LL, 0LL, 0LL, (int)&v10, 0LL) >= 0 && (v10 & 4) != 0 )
    {
      String1.Length = v11 - 2;
      String1.MaximumLength = v11 - 2;
      String1.Buffer = v16;
      String2.Length = v12 - 2;
      String2.MaximumLength = v12 - 2;
      String2.Buffer = v17;
      v2 = RtlCompareUnicodeString(&String1, &String2, 0) == 0;
    }
    if ( v3 )
    {
      if ( v9 == 1 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        _m_prefetchw(&Process[1].Affinity.Bitmap[5]);
        v5 = Process[1].Affinity.Bitmap[5];
        while ( (v3 ^ (unsigned __int64)v5) < 0xF )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[5], v5 + 1, v5);
          if ( v6 == v5 )
            return v2;
        }
        ObfDereferenceObject((PVOID)v3);
      }
      else
      {
        ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
      }
    }
  }
  return v2;
}

/*
 * XREFs of SepVerifyDesktopAppxImage @ 0x1402FF200
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x1400DA0A0 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x1400AA890 (SeGetTrustLabelAce.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF3BC (SepVerifyDesktopAppxPackageName.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferenceProcessFilePointer @ 0x14061DB90 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x140650FB4 (ObQuerySecurityObject.c)
 *     RtlCreateSecurityDescriptor @ 0x140651050 (RtlCreateSecurityDescriptor.c)
 */

__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, __int64 a2, char a3, _BYTE *a4)
{
  _BYTE *v5; // rdi
  __int64 TrustLabelAce; // r15
  NTSTATUS v9; // ebx
  int SecurityObject; // eax
  _BYTE *PoolWithTag; // rax
  _BYTE v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  v5 = 0LL;
  v13[0] = 0;
  TrustLabelAce = 0LL;
  *a4 = 0;
  v9 = PsReferenceProcessFilePointer(a1, &NumberOfBytes[1]);
  if ( v9 < 0 )
    goto LABEL_21;
  NumberOfBytes[0] = 512;
  v5 = SecurityDescriptor;
  v9 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v9 < 0 )
    goto LABEL_21;
  SecurityObject = ObQuerySecurityObject(
                     NumberOfBytes[1],
                     132,
                     (unsigned int)SecurityDescriptor,
                     512,
                     (__int64)NumberOfBytes);
  if ( SecurityObject == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v9 = -1073741801;
      goto LABEL_21;
    }
    v9 = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
    if ( v9 < 0 )
      goto LABEL_21;
    SecurityObject = ObQuerySecurityObject(NumberOfBytes[1], 132, (_DWORD)v5, NumberOfBytes[0], (__int64)NumberOfBytes);
  }
  if ( SecurityObject < 0 )
  {
    v9 = 0;
    goto LABEL_21;
  }
  if ( !v5 )
  {
    v9 = -1073739509;
    goto LABEL_21;
  }
  v9 = SepVerifyDesktopAppxPackageName(a2, v5, v13);
  if ( v9 >= 0 && a3 == 1 )
    TrustLabelAce = SeGetTrustLabelAce((__int64)v5);
  if ( v13[0] == 1 )
  {
    if ( a3 == 1 )
    {
      if ( TrustLabelAce )
      {
LABEL_20:
        *a4 = 1;
        goto LABEL_21;
      }
      v9 = -1073740702;
    }
    if ( a3 )
      goto LABEL_21;
    goto LABEL_20;
  }
LABEL_21:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ObfDereferenceObjectWithTag(*(PVOID *)&NumberOfBytes[1], 0x746C6644u);
  if ( v5 && v5 != SecurityDescriptor )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}

/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x180086F48
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086CB0 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlSetControlSecurityDescriptor @ 0x180080EC0 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(__int64 *a1, char **a2)
{
  _BYTE *Heap; // rax
  __int64 v5; // rsi
  int SecurityDescriptor; // ebx
  void *ProcessHeap; // rcx
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // r8
  __int64 result; // rax
  __int16 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v5 = (__int64)Heap;
  if ( !Heap )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( SecurityDescriptor >= 0 )
  {
    v13 = 0;
    v14 = 1280;
    v12 = 257;
    v15 = 18;
    v8 = RtlAllocateHeap((__int64)ProcessHeap, 0, 28LL);
    v9 = (char *)v8;
    if ( !v8 )
    {
      SecurityDescriptor = -1073741670;
      goto LABEL_12;
    }
    SecurityDescriptor = RtlCreateAcl(v8, 0x1Cu, 2);
    if ( SecurityDescriptor >= 0 )
    {
      SecurityDescriptor = RtlpAddKnownAce(v9, 2u, 3, 0x1FFFFF, (__int64)&v12, 0);
      v10 = (__int64)v9;
      if ( SecurityDescriptor < 0 )
      {
LABEL_11:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
LABEL_12:
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        goto LABEL_13;
      }
      SecurityDescriptor = RtlSetDaclSecurityDescriptor(v5, 1, (__int64)v9, 0);
      if ( SecurityDescriptor >= 0 )
      {
        SecurityDescriptor = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u);
        if ( SecurityDescriptor >= 0 )
        {
          *a1 = v5;
          result = 0LL;
          *a2 = v9;
          return result;
        }
      }
    }
    v10 = (__int64)v9;
    goto LABEL_11;
  }
LABEL_13:
  RtlFreeHeap((__int64)ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}

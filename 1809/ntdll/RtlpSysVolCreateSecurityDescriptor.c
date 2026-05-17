/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x18008CFA8
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008CD10 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180042860 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180044270 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x180045030 (RtlCreateSecurityDescriptor.c)
 *     RtlSetControlSecurityDescriptor @ 0x180085E00 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(unsigned __int64 *a1, char **a2)
{
  _BYTE *Heap; // rax
  unsigned __int64 v5; // rsi
  int SecurityDescriptor; // ebx
  void *ProcessHeap; // rcx
  __int64 v8; // rax
  char *v9; // rdi
  unsigned __int64 v10; // r8
  __int64 result; // rax
  __int16 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v5 = (unsigned __int64)Heap;
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
      v10 = (unsigned __int64)v9;
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
    v10 = (unsigned __int64)v9;
    goto LABEL_11;
  }
LABEL_13:
  RtlFreeHeap((__int64)ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}

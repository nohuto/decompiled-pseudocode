/*
 * XREFs of sub_1800868A8 @ 0x1800868A8
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086610 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180011A50 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180012750 (RtlSetDaclSecurityDescriptor.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlSetControlSecurityDescriptor @ 0x180080820 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800868A8(_QWORD *a1, ACL **a2)
{
  PVOID Heap; // rax
  void *v5; // rsi
  int SecurityDescriptor; // ebx
  PVOID ProcessHeap; // rcx
  ACL *v8; // rax
  ACL *v9; // rdi
  ACL *v10; // r8
  __int64 result; // rax
  __int16 Sid; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
  v5 = Heap;
  if ( !Heap )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1u);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( SecurityDescriptor >= 0 )
  {
    v13 = 0;
    v14 = 1280;
    Sid = 257;
    v15 = 18;
    v8 = (ACL *)RtlAllocateHeap(ProcessHeap, 0, 0x1CuLL);
    v9 = v8;
    if ( !v8 )
    {
      SecurityDescriptor = -1073741670;
      goto LABEL_12;
    }
    SecurityDescriptor = RtlCreateAcl(v8, 0x1Cu, 2u);
    if ( SecurityDescriptor >= 0 )
    {
      SecurityDescriptor = sub_180014974(v9, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Sid, 0);
      v10 = v9;
      if ( SecurityDescriptor < 0 )
      {
LABEL_11:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
LABEL_12:
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        goto LABEL_13;
      }
      SecurityDescriptor = RtlSetDaclSecurityDescriptor(v5, 1u, v9, 0);
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
    v10 = v9;
    goto LABEL_11;
  }
LABEL_13:
  RtlFreeHeap(ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}

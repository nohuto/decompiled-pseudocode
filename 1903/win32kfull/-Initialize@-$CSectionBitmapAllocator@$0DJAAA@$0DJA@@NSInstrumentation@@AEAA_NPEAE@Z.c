/*
 * XREFs of ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C015D480
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C015D408 (-Create@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 * Callees:
 *     _lambda_44742df1108025026aa3ca3052aff655_::operator() @ 0x1C015D540 (_lambda_44742df1108025026aa3ca3052aff655_--operator().c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Initialize(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  ULONG v5; // eax
  bool v6; // zf
  __int64 v7; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char result; // al
  __int64 v13; // rdx
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v4 = __rdtsc();
  Seed = v4;
  a1[2] = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  v5 = RtlRandomEx(&Seed);
  v6 = (v5 | a1[2]) == 0LL;
  a1[2] |= v5;
  v7 = a1[2];
  if ( v6 )
  {
    a1[2] = 1LL;
    v7 = 1LL;
  }
  a1[3] ^= v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 8uLL, 0x6F736955u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  *PoolWithTag = 0LL;
  v10 = lambda_44742df1108025026aa3ca3052aff655_::operator()(v9, 228LL);
  if ( !v10 )
    return 0;
  v11 = v10 ^ a1[2];
  result = 1;
  v13 = a2 ^ a1[2];
  a1[3] = v11;
  a1[1] = v13;
  return result;
}

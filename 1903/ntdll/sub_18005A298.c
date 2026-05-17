/*
 * XREFs of sub_18005A298 @ 0x18005A298
 * Callers:
 *     RtlGetFileMUIPath @ 0x180059D90 (RtlGetFileMUIPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18005A3AC @ 0x18005A3AC (sub_18005A3AC.c)
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18005A298(__m128i *a1, __int64 a2, int a3, int a4, char a5, char a6, void *a7)
{
  __m128i v7; // xmm6
  int *v11; // rbx
  unsigned int v12; // edi
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 Heap; // rax
  int v17; // eax
  unsigned int v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v20[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v21[132]; // [rsp+68h] [rbp-A0h] BYREF

  v7 = *a1;
  memset(v21, 0, 0x208uLL);
  v18 = 520;
  v11 = v21;
  if ( !a6 )
    goto LABEL_2;
  v14 = _mm_srli_si128(v7, 8).m128i_u64[0];
  v15 = sub_18005BB70(v14, a2, &v18, v21);
  if ( v15 == -1073741789 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v18);
    v11 = (int *)Heap;
    if ( !Heap )
    {
LABEL_2:
      *(__m128i *)v20 = v7;
      v12 = sub_18005A3AC((int)v20, a2, a3, a4, a5, a7);
      goto LABEL_3;
    }
    v15 = sub_18005BB70(v14, a2, &v18, Heap);
  }
  if ( v15 < 0 )
    goto LABEL_2;
  *(__m128i *)v19 = v7;
  v17 = sub_18005A3AC((int)v19, (int)v11, a3, a4, a5, a7);
  v12 = v17;
  if ( v17 < 0 )
    goto LABEL_2;
LABEL_3:
  if ( v11 != v21 && v11 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v11);
  return v12;
}

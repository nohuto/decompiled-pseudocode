/*
 * XREFs of _lambda_35c4e12550229a4699a78f989695a2d8_::operator() @ 0x1800C3CAC
 * Callers:
 *     _lambda_35c4e12550229a4699a78f989695a2d8_::_lambda_invoker_cdecl_ @ 0x1800C3C80 (_lambda_35c4e12550229a4699a78f989695a2d8_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Emplace_reallocate__anonymous_namespace_::ProcessResourceUsageRecord_const_&_ @ 0x1800CF9EC (std--vector__anonymous_namespace_--ProcessResourceUsageRecord_std--allocator__anonymous_namespac.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

char __fastcall lambda_35c4e12550229a4699a78f989695a2d8_::operator()(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _DWORD *a7)
{
  unsigned int v7; // ebx
  int v8; // esi
  int v9; // r14d
  int v10; // r15d
  int v11; // r12d
  int v12; // r13d
  char result; // al
  PSLIST_ENTRY v14; // rcx
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v22; // [rsp+2Ch] [rbp-6Dh]
  _OWORD v24[4]; // [rsp+38h] [rbp-61h] BYREF
  __int128 v25; // [rsp+78h] [rbp-21h]
  __int128 v26; // [rsp+88h] [rbp-11h]
  unsigned __int64 v27; // [rsp+98h] [rbp-1h]

  v7 = 0;
  v8 = a7[20];
  v9 = a7[16];
  v10 = a7[19];
  v11 = a7[15];
  v12 = a7[18];
  v22 = a7[17];
  if ( v22 > 5000 || v8 > 1000 || v9 > 10000 || v10 > 200 || v11 > 500 || (result = 0, v12 > 1000) )
    result = 1;
  if ( result || (a6 & 0x20) != 0 )
  {
    memset_0(v24, 0, 0x68uLL);
    LOBYTE(v7) = (a6 & 0x20) != 0;
    LODWORD(v24[0]) = a3;
    v14 = ListEntry + 1;
    *((_QWORD *)&v24[0] + 1) = a4;
    result = v22;
    v15 = *((_QWORD *)&ListEntry[1].Next + 1);
    v27 = __PAIR64__(v7, v8);
    *(_QWORD *)&v26 = __PAIR64__(v22, v9);
    HIDWORD(v25) = v11;
    *((_QWORD *)&v26 + 1) = __PAIR64__(v10, v12);
    if ( ListEntry[2].Next == (struct _SLIST_ENTRY *)v15 )
    {
      return std::vector__anonymous_namespace_::ProcessResourceUsageRecord_std::allocator__anonymous_namespace_::ProcessResourceUsageRecord___::_Emplace_reallocate__anonymous_namespace_::ProcessResourceUsageRecord_const___(
               v14,
               v15,
               v24);
    }
    else
    {
      v16 = v24[1];
      *(_OWORD *)v15 = v24[0];
      v17 = v24[2];
      *(_OWORD *)(v15 + 16) = v16;
      v18 = v24[3];
      *(_OWORD *)(v15 + 32) = v17;
      v19 = v25;
      *(_OWORD *)(v15 + 48) = v18;
      v20 = v26;
      *(_OWORD *)(v15 + 64) = v19;
      *(_QWORD *)&v19 = v27;
      *(_OWORD *)(v15 + 80) = v20;
      *(_QWORD *)(v15 + 96) = v19;
      *((_QWORD *)&v14->Next + 1) += 104LL;
    }
  }
  return result;
}

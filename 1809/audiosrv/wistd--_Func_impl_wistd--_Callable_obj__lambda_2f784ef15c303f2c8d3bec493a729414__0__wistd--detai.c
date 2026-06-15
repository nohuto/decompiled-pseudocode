/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18000AED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000AF80 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000BACC (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18000C354 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AFCF8 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

char __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        void **a2,
        unsigned __int64 *a3,
        void **a4,
        size_t *a5,
        unsigned int *a6)
{
  _BYTE *v7; // rdi
  void *v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v10; // r15d
  void *v11; // r13
  size_t v12; // rbp
  char v13; // bl
  unsigned __int64 v15; // rdx
  void *v16[2]; // [rsp+30h] [rbp-48h] BYREF
  void *v17[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( **(_QWORD **)(a1 + 8) < **(_QWORD **)(a1 + 16) )
    goto LABEL_3;
  v7 = *(_BYTE **)(a1 + 24);
  v8 = *a4;
  v9 = *a3;
  v10 = *a6;
  v11 = *a2;
  v12 = *a5;
  v13 = 0;
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(
         (wil::details_abi::RawUsageIndex *)v7,
         *a2,
         *a3,
         *a4,
         *a5,
         *a6) )
  {
    goto LABEL_3;
  }
  v15 = v9 + v12 + 32;
  if ( *((_QWORD *)v7 + 3) )
  {
    if ( v7[58] )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)(v7 + 24), v15);
  }
  else
  {
    *(_OWORD *)v16 = 0LL;
    *(_OWORD *)v17 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v16, v15 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        (wil::details_abi::RawUsageIndex *)v7,
        v16[0],
        0LL,
        (char *)v17[0] - (char *)v16[0]);
      wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v7 + 48, &v17[1]);
      v7[58] = 1;
    }
    if ( v17[1] )
      operator delete(v17[1]);
  }
  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(
         (wil::details_abi::RawUsageIndex *)v7,
         v11,
         v9,
         v8,
         v12,
         v10) )
  {
LABEL_3:
    v13 = 1;
    ++**(_QWORD **)(a1 + 8);
  }
  return v13;
}

/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x18001B250
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x1800DE960 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800AD4A8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall anonymous_namespace_::Compressor::Compress(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rsi
  PVOID v7; // rdx
  unsigned __int64 v8; // rcx
  size_t v9; // rbp
  BYTE *v10; // rax
  char v11; // cl
  BYTE *v12; // r9
  BYTE *v13; // rbx
  LONG *v15; // [rsp+30h] [rbp-18h]
  LONG *v16; // [rsp+30h] [rbp-18h]
  INT v17; // [rsp+38h] [rbp-10h]
  INT v18; // [rsp+38h] [rbp-10h]
  PVOID context; // [rsp+50h] [rbp+8h] BYREF
  __int64 input_used; // [rsp+60h] [rbp+18h] BYREF

  v5 = CreateCompressor(2LL, 0LL, &context);
  v6 = 0LL;
  v7 = context;
  if ( v5 != 1 )
    v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
  context = v7;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v9 = v8 / 0xA;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v8 / 0xA )
  {
    v10 = (BYTE *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8 / 0xA);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = &v10[v9];
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v10 = 0LL;
  }
  v12 = v10;
  if ( v11 )
  {
    v13 = &v10[v9];
    memset_0(v10, 0, v9);
    v12 = *(BYTE **)a1;
    LODWORD(v10) = (_DWORD)v13;
    *(_QWORD *)(a1 + 8) = v13;
  }
  if ( Compress(
         context,
         *(const BYTE **)a3,
         *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
         v12,
         (_DWORD)v10 - (_DWORD)v12,
         (PLONG)&input_used,
         v15,
         v17) == 1
    || GetLastError() == 122
    && (std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
          a1,
          input_used),
        Compress(
          context,
          *(const BYTE **)a3,
          *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
          *(PBYTE *)a1,
          *(_DWORD *)(a1 + 8) - *(_DWORD *)a1,
          (PLONG)&input_used,
          v16,
          v18) == 1) )
  {
    v6 = input_used;
  }
  else
  {
    input_used = 0LL;
  }
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(a1, v6);
  CloseCompressor(context);
  return a1;
}

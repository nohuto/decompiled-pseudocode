/*
 * XREFs of ?IsCompressedFormatSupported@CEndpointCharacteristics@@AEAA_NAEBU_GUID@@@Z @ 0x18000C494
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180002B90 (std--_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     std::_Func_impl_no_alloc__lambda_50d01a9f2b1728a1535e201a0253d264__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18000BF50 (std--_Func_impl_no_alloc__lambda_50d01a9f2b1728a1535e201a0253d264__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     std::_Func_impl_no_alloc__lambda_9cd369e588a5ffc689e2be563576fbcb__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18011B240 (std--_Func_impl_no_alloc__lambda_9cd369e588a5ffc689e2be563576fbcb__bool_WAVEFORMATE_ea_18011B240.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEndpointCharacteristics::IsCompressedFormatSupported(
        CEndpointCharacteristics *this,
        const struct _GUID *a2)
{
  __int64 v2; // rcx
  char v4; // bl
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  PROPVARIANT pvar; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = *((_QWORD *)this + 5);
  pvar = 0LL;
  v11 = 0LL;
  v4 = 0;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &PKEY_Endpoint_EncodedFormatSupport,
         &pvar) >= 0
    && (_WORD)pvar == 65
    && (unsigned int)v11 >= 0xC )
  {
    v6 = *(_DWORD *)(v12 + 8);
    if ( (unsigned int)v11 == 16LL * v6 + 12 )
    {
      v7 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          v8 = 16LL * v7;
          v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)(v8 + v12 + 12);
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)(v8 + v12 + 12) )
            v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)(v8 + v12 + 20);
          if ( !v9 )
            break;
          if ( ++v7 >= v6 )
            goto LABEL_3;
        }
        v4 = 1;
      }
    }
  }
LABEL_3:
  PropVariantClear(&pvar);
  return v4;
}

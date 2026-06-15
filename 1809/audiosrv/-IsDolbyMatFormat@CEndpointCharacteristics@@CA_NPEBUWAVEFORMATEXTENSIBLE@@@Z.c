/*
 * XREFs of ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18010BF6C
 * Callers:
 *     _lambda_0004505bc0d239ceb97d539ab355086f_::operator() @ 0x180107B24 (_lambda_0004505bc0d239ceb97d539ab355086f_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_d688b6ce4f9a3e900547f5cf0679d940__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Do_call @ 0x18010E0B0 (std--_Func_impl_no_alloc__lambda_d688b6ce4f9a3e900547f5cf0679d940__bool_WAVEFORMATE_ea_18010E0B0.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEndpointCharacteristics::IsDolbyMatFormat(const struct WAVEFORMATEXTENSIBLE *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax

  v1 = *(_QWORD *)&a1->SubFormat.Data1 - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v1 )
    v1 = *(_QWORD *)a1->SubFormat.Data4 - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v1 )
    return 1;
  v2 = *(_QWORD *)&a1->SubFormat.Data1 - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)a1->SubFormat.Data4 - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
  if ( !v2 )
    return 1;
  v3 = *(_QWORD *)&a1->SubFormat.Data1 - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)a1->SubFormat.Data4 - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
  return !v3;
}

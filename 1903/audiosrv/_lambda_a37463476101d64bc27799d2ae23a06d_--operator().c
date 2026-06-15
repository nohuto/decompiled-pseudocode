/*
 * XREFs of _lambda_a37463476101d64bc27799d2ae23a06d_::operator() @ 0x1800EDA6C
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@PEAPEAUIAudioDeviceGraph@@@Z @ 0x180011B00 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_a37463476101d64bc27799d2ae23a06d_::operator()(__int64 a1, char a2)
{
  unsigned int v2; // r10d
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( !**(_DWORD **)a1 )
    return 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)(*(_QWORD *)v5 + 96LL);
    if ( v6 > 0x1F )
      break;
    *(_DWORD *)(*(_QWORD *)v5 + 80LL) |= 1 << v6;
    *(_DWORD *)(**(_QWORD **)(a1 + 8) + 92LL) = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 96LL);
    if ( a2 )
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 88LL) = *(_DWORD *)(**(_QWORD **)(a1 + 8) + 96LL);
    v7 = v2++;
    v8 = **(_QWORD **)(a1 + 8);
    *(_OWORD *)(v8 + 16LL * (unsigned int)(*(_DWORD *)(v8 + 96))++ + 200) = *(_OWORD *)(**(_QWORD **)(a1 + 16) + 16 * v7);
    if ( v2 >= **(_DWORD **)a1 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x780,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x887C0073LL);
  return 2289827955LL;
}

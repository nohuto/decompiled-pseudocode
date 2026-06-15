/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___ @ 0x1801058CC
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___ @ 0x180106800 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7___.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     _lambda_bc829bb10b63470994cc211668497c87_::operator() @ 0x180107FF8 (_lambda_bc829bb10b63470994cc211668497c87_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_842ca742cbee8aba9251bc84064452f9___(
        __int64 a1,
        struct tWAVEFORMATEX *a2,
        _QWORD *a3)
{
  WORD *v4; // r13
  char *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // r15
  WORD *v12; // r12
  int v13; // r14d
  WORD v14; // dx
  struct tWAVEFORMATEX *v15; // r9
  WORD v16; // cx
  WORD v17; // ax
  DWORD v18; // r8d
  int v19; // edi
  bool v20; // al
  char v22; // [rsp+30h] [rbp-49h] BYREF
  bool v23; // [rsp+31h] [rbp-48h]
  int v24; // [rsp+34h] [rbp-45h] BYREF
  int v25; // [rsp+38h] [rbp-41h]
  _QWORD *v26; // [rsp+40h] [rbp-39h]
  struct tWAVEFORMATEX *Src; // [rsp+48h] [rbp-31h]
  PROPVARIANT pvar; // [rsp+50h] [rbp-29h] BYREF
  LPCOLESTR lpsz; // [rsp+58h] [rbp-21h]
  __int64 v30; // [rsp+60h] [rbp-19h]
  GUID iid; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v32[4]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v33[4]; // [rsp+88h] [rbp+Fh] BYREF

  v26 = a3;
  Src = a2;
  v33[0] = 2097184;
  v33[1] = 1572896;
  v33[2] = 1572888;
  v33[3] = 1048592;
  v32[0] = 2097184;
  v32[1] = 1572888;
  v32[2] = 1048592;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v4 = (WORD *)v33;
    v25 = 4;
  }
  else
  {
    v4 = (WORD *)v32;
    v25 = 3;
  }
  if ( *(_DWORD *)(a1 + 156) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_6216252c8c3d6586d79c5c0eed6f8f6d_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v30 = 0LL;
    v6 = 8LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      v8 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
        v8 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
        if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
          v9 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
        if ( !v9 )
          v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_842ca742cbee8aba9251bc84064452f9_>'::`2'::PreferredFormatsLineIn;
      }
      else
      {
        v5 = 0LL;
        v6 = 0LL;
      }
    }
    PropVariantClear(&pvar);
    if ( !v6 )
      return 0LL;
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_842ca742cbee8aba9251bc84064452f9_>'::`2'::PreferredFormatsRender;
    v6 = 4LL;
  }
  v10 = 0LL;
  v11 = v5 + 8;
  while ( 2 )
  {
    v12 = v4;
    v13 = 0;
    do
    {
      v14 = *((_WORD *)v11 - 2);
      v15 = Src;
      v16 = *v12;
      v17 = v12[1];
      v24 = 0;
      Src->nChannels = v14;
      v18 = *(v11 - 2);
      v15[1].wFormatTag = v17;
      v15->wBitsPerSample = v16;
      v15->nSamplesPerSec = v18;
      *(_DWORD *)&v15[1].nChannels = *v11;
      v23 = 0;
      v15->nBlockAlign = v14 * (v16 >> 3);
      v15->nAvgBytesPerSec = v18 * (unsigned __int16)(v14 * (v16 >> 3));
      v15->cbSize = 22;
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v26 + 24LL))(
              *v26,
              v26[1],
              *(unsigned int *)v26[1],
              &v24);
      if ( v19 < 0 )
        return (unsigned int)v19;
      if ( v24 && (v22 = 0, lambda_bc829bb10b63470994cc211668497c87_::operator()(v26 + 3, Src, &v22), v22) )
      {
        v19 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v26[2]);
        v20 = v19 >= 0;
      }
      else
      {
        v20 = v23;
      }
      if ( v19 < 0 )
        return (unsigned int)v19;
      if ( v20 )
        return 0LL;
      v12 += 2;
      ++v13;
    }
    while ( v13 < v25 );
    ++v10;
    v11 += 3;
    if ( v10 < v6 )
      continue;
    break;
  }
  return 0LL;
}

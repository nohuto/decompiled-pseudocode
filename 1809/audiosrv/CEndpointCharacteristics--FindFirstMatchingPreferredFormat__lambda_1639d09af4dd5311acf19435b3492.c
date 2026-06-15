/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_1639d09af4dd5311acf19435b349233d___ @ 0x180066280
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800664F0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062F18 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator() @ 0x180066BA0 (_lambda_c576b7c555b6a6b1a6c16cffcb9322a9_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_1639d09af4dd5311acf19435b349233d___(
        __int64 a1,
        struct tWAVEFORMATEX *a2,
        _QWORD *a3)
{
  WORD *v4; // r13
  char *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rsi
  _DWORD *v9; // r15
  WORD *v10; // r12
  int v11; // r14d
  WORD v12; // dx
  struct tWAVEFORMATEX *v13; // r9
  WORD v14; // cx
  WORD v15; // ax
  DWORD v16; // r8d
  int v17; // edi
  bool v18; // al
  int v20; // [rsp+34h] [rbp-45h] BYREF
  int v21; // [rsp+38h] [rbp-41h]
  _QWORD *v22; // [rsp+40h] [rbp-39h]
  struct tWAVEFORMATEX *Src; // [rsp+48h] [rbp-31h]
  PROPVARIANT pvar; // [rsp+50h] [rbp-29h] BYREF
  LPCOLESTR lpsz; // [rsp+58h] [rbp-21h]
  __int64 v26; // [rsp+60h] [rbp-19h]
  GUID iid; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v28[4]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v29[4]; // [rsp+88h] [rbp+Fh] BYREF

  v22 = a3;
  Src = a2;
  v29[0] = 2097184;
  v29[1] = 1572896;
  v29[2] = 1572888;
  v29[3] = 1048592;
  v28[0] = 2097184;
  v28[1] = 1572888;
  v28[2] = 1048592;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v4 = (WORD *)v29;
    v21 = 4;
  }
  else
  {
    v4 = (WORD *)v28;
    v21 = 3;
  }
  if ( *(_DWORD *)(a1 + 156) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    pvar = 0LL;
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_1639d09af4dd5311acf19435b349233d_>'::`2'::PreferredFormatsMicrophone;
    lpsz = 0LL;
    v26 = 0LL;
    v6 = 8LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v7 + 40LL))(
           v7,
           &PKEY_AudioEndpoint_JackSubType,
           &pvar) >= 0
      && (_WORD)pvar == 31
      && IIDFromString(lpsz, &iid) >= 0 )
    {
      if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1
        && *(_QWORD *)iid.Data4 == *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4 )
      {
        v5 = 0LL;
        v6 = 0LL;
      }
      else if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1
             && *(_QWORD *)iid.Data4 == *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4 )
      {
        v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_1639d09af4dd5311acf19435b349233d_>'::`2'::PreferredFormatsLineIn;
      }
    }
    PropVariantClear(&pvar);
    if ( !v6 )
      return 0LL;
  }
  else
  {
    v5 = (char *)&`CEndpointCharacteristics::FindFirstMatchingPreferredFormat<_lambda_1639d09af4dd5311acf19435b349233d_>'::`2'::PreferredFormatsRender;
    v6 = 4LL;
  }
  v8 = 0LL;
  v9 = v5 + 8;
  while ( 2 )
  {
    v10 = v4;
    v11 = 0;
    do
    {
      v12 = *((_WORD *)v9 - 2);
      v13 = Src;
      v14 = *v10;
      v15 = v10[1];
      v20 = 0;
      Src->nChannels = v12;
      v16 = *(v9 - 2);
      v13[1].wFormatTag = v15;
      v13->wBitsPerSample = v14;
      v13->nSamplesPerSec = v16;
      *(_DWORD *)&v13[1].nChannels = *v9;
      v13->nBlockAlign = v12 * (v14 >> 3);
      v13->nAvgBytesPerSec = v16 * (unsigned __int16)(v12 * (v14 >> 3));
      v13->cbSize = 22;
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v22 + 24LL))(
              *v22,
              v22[1],
              *(unsigned int *)v22[1],
              &v20);
      if ( v17 < 0 )
        return (unsigned int)v17;
      if ( v20 && (unsigned __int8)lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator()(v22 + 3, Src) )
      {
        v17 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v22[2]);
        v18 = v17 >= 0;
      }
      else
      {
        v18 = 0;
      }
      if ( v17 < 0 )
        return (unsigned int)v17;
      if ( v18 )
        return 0LL;
      v10 += 2;
      ++v11;
    }
    while ( v11 < v21 );
    ++v8;
    v9 += 3;
    if ( v8 < v6 )
      continue;
    break;
  }
  return 0LL;
}

/*
 * XREFs of CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01cb4___ @ 0x180112EBC
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180113B14 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800058A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800675C8 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     _lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator() @ 0x180115254 (_lambda_04a35e8f1ced65175c9c81cacfacedb9_--operator().c)
 */

__int64 __fastcall CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_ae96820b4eb80ed9553374ed48d01cb4___(
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
  int v22; // [rsp+34h] [rbp-45h] BYREF
  int v23; // [rsp+38h] [rbp-41h]
  _QWORD *v24; // [rsp+40h] [rbp-39h]
  struct tWAVEFORMATEX *Src; // [rsp+48h] [rbp-31h]
  PROPVARIANT pvar; // [rsp+50h] [rbp-29h] BYREF
  LPCOLESTR lpsz; // [rsp+58h] [rbp-21h]
  __int64 v28; // [rsp+60h] [rbp-19h]
  GUID iid; // [rsp+68h] [rbp-11h] BYREF
  _DWORD v30[4]; // [rsp+78h] [rbp-1h] BYREF
  _DWORD v31[4]; // [rsp+88h] [rbp+Fh] BYREF

  v24 = a3;
  Src = a2;
  v31[0] = 2097184;
  v31[1] = 1572896;
  v31[2] = 1572888;
  v31[3] = 1048592;
  v30[0] = 2097184;
  v30[1] = 1572888;
  v30[2] = 1048592;
  if ( IsGetDefaultSpatialRenderingModePresent() && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v4 = (WORD *)v31;
    v23 = 4;
  }
  else
  {
    v4 = (WORD *)v30;
    v23 = 3;
  }
  if ( *(_DWORD *)(a1 + 156) )
  {
    v7 = *(_QWORD *)(a1 + 40);
    pvar = 0LL;
    v5 = (char *)&unk_1801827A0;
    lpsz = 0LL;
    v28 = 0LL;
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
          v5 = (char *)&unk_180182800;
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
    v5 = (char *)&unk_180182860;
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
      v22 = 0;
      Src->nChannels = v14;
      v18 = *(v11 - 2);
      v15[1].wFormatTag = v17;
      v15->wBitsPerSample = v16;
      v15->nSamplesPerSec = v18;
      *(_DWORD *)&v15[1].nChannels = *v11;
      v15->nBlockAlign = v14 * (v16 >> 3);
      v15->nAvgBytesPerSec = v18 * (unsigned __int16)(v14 * (v16 >> 3));
      v15->cbSize = 22;
      v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)*v24 + 24LL))(
              *v24,
              v24[1],
              *(unsigned int *)v24[1],
              &v22);
      if ( v19 < 0 )
        return (unsigned int)v19;
      if ( v22 && (unsigned __int8)lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator()(v24 + 3, Src) )
      {
        v19 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)v24[2]);
        v20 = v19 >= 0;
      }
      else
      {
        v20 = 0;
      }
      if ( v19 < 0 )
        return (unsigned int)v19;
      if ( v20 )
        return 0LL;
      v12 += 2;
      ++v13;
    }
    while ( v13 < v23 );
    ++v10;
    v11 += 3;
    if ( v10 < v6 )
      continue;
    break;
  }
  return 0LL;
}

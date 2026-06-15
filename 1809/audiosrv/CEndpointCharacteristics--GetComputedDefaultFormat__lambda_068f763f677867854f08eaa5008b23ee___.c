/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1801062A4
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180106DD4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 * Callees:
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18010538C (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___ @ 0x18010564C (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180108CC0 (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180110954 (-LogEPCError@@YAXPEBDHJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
        __int64 a1,
        int a2,
        __int128 *a3,
        struct tWAVEFORMATEX **a4)
{
  GUID fmtid; // xmm0
  int FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  char *v11; // rbx
  void *v12; // rcx
  __int64 v13; // rcx
  LPVOID v15; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  PROPVARIANT pvar; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  PROPVARIANT v25; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v29[40]; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+E0h] [rbp-20h]
  _OWORD v31[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v32; // [rsp+120h] [rbp+20h]
  GUID v33; // [rsp+130h] [rbp+30h] BYREF
  DWORD pid; // [rsp+140h] [rbp+40h]
  GUID v35; // [rsp+148h] [rbp+48h] BYREF
  int v36; // [rsp+158h] [rbp+58h]

  v30 = -2LL;
  ppv = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  *a4 = 0LL;
  pvar = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  *(_QWORD *)&v33.Data1 = 0x4C7D1B2C233164C8LL;
  *(_QWORD *)v33.Data4 = 0x67257A6871B668BCLL;
  v36 = 1;
  v35 = v33;
  if ( a2 == 3 )
  {
    fmtid = PKEY_Endpoint_KeywordDetector_ConnectorId.fmtid;
    pid = PKEY_Endpoint_KeywordDetector_ConnectorId.pid;
  }
  else
  {
    *(_QWORD *)&v33.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v33.Data4 = 0xFC181731B718BA83uLL;
    fmtid = v33;
    pid = 1;
  }
  v33 = fmtid;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
                                                                            *(_QWORD *)(a1 + 40),
                                                                            &v35,
                                                                            &pvar);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
                                                                            *(_QWORD *)(a1 + 40),
                                                                            &v33,
                                                                            &v25);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = CoCreateInstance(
                                                                            &CLSID_MMDeviceEnumerator,
                                                                            0LL,
                                                                            0x17u,
                                                                            &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                                                            &ppv);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 40LL))(
                                                                            ppv,
                                                                            v23,
                                                                            &v20);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 24LL))(
                                                                            v20,
                                                                            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                                                            23LL,
                                                                            0LL,
                                                                            &v19);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL))(
                                                                            v19,
                                                                            (unsigned int)v26,
                                                                            &v17);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_30;
  v15 = 0LL;
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, LPVOID *))(*(_QWORD *)v17 + 104LL))(
                                                                            v17,
                                                                            1LL,
                                                                            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                                                                            &v15);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    goto LABEL_11;
  pv = 0LL;
  if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v15 + 32LL))(v15, &pv) >= 0 )
  {
    v28 = *a3;
    *(_OWORD *)v29 = a3[1];
    FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                              v9,
                                                                              (__int64)&v28,
                                                                              (unsigned int *)pv,
                                                                              a4);
    if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_11:
      if ( v15 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_30;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v17 + 104LL))(
                                                                            v17,
                                                                            1LL,
                                                                            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                                            &v18);
  if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d >= 0 && !*a4 )
  {
    v10 = v18;
    v15 = 0LL;
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v15);
    v11 = (char *)v15;
    if ( !v15 )
    {
      FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = -2147024882;
      v12 = 0LL;
LABEL_22:
      CoTaskMemFree(v12);
      goto LABEL_30;
    }
    *(_DWORD *)v15 = 104;
    *((GUID *)v11 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
    *((GUID *)v11 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    *((GUID *)v11 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
    *((_WORD *)v11 + 32) = -2;
    *(GUID *)(v11 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *((_DWORD *)v11 + 22) = 1;
    *(_QWORD *)&v28 = v10;
    *((_QWORD *)&v28 + 1) = v11;
    *(_QWORD *)v29 = a4;
    *(_OWORD *)&v29[8] = *a3;
    *(_OWORD *)&v29[24] = a3[1];
    v31[0] = v28;
    v31[1] = *(_OWORD *)v29;
    v31[2] = *(_OWORD *)&v29[16];
    v32 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v29[24], *(__m128d *)&v29[24]);
    FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d___(
                                                                              a1,
                                                                              (struct tWAVEFORMATEX *)(v11 + 64),
                                                                              v31);
    v12 = v11;
    if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
      goto LABEL_22;
    CoTaskMemFree(v11);
    if ( *a4 )
      goto LABEL_30;
    v15 = 0LL;
    FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v18 + 32LL))(
                                                                              v18,
                                                                              &v15);
    if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
    {
      v12 = v15;
      goto LABEL_22;
    }
    v28 = *a3;
    *(_OWORD *)v29 = a3[1];
    FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                              v13,
                                                                              (__int64)&v28,
                                                                              (unsigned int *)v15,
                                                                              a4);
    v12 = v15;
    if ( FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d < 0 )
      goto LABEL_22;
    CoTaskMemFree(v15);
    if ( !*a4 )
      FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d = -2004287480;
  }
LABEL_30:
  PropVariantClear(&pvar);
  PropVariantClear(&v25);
  LogEPCError(
    "CEndpointCharacteristics::GetComputedDefaultFormat",
    6096,
    FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)FirstMatchingPreferredFormat__lambda_6216252c8c3d6586d79c5c0eed6f8f6d;
}

/*
 * XREFs of ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167A7C
 * Callers:
 *     DxgkInitializeBlockList @ 0x1C0167960 (DxgkInitializeBlockList.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _TlgCreateWsz @ 0x1C000E2B8 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C0024F78 (wcscmp_0.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C0168EC0 (DxgkRetrieveStringFromRegistry.c)
 *     DxgkFreeUnicodeString @ 0x1C029D240 (DxgkFreeUnicodeString.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C029D278 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C029D488 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 */

__int64 __fastcall CheckKernelBlockList(
        struct _FDO_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  struct _FDO_CONTEXT *v5; // r13
  unsigned int v6; // edi
  const unsigned __int16 *v7; // r15
  NTSTATUS v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  WCHAR *v13; // r14
  ULONG v14; // eax
  ULONG v15; // r13d
  unsigned __int64 v16; // rax
  __m128i *v17; // r12
  wchar_t *Buffer; // rax
  unsigned int v19; // edi
  __m128i v20; // xmm0
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r15
  __int64 v23; // r14
  unsigned __int64 v24; // rax
  const wchar_t *v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // edi
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // r14
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  const wchar_t *v32; // rcx
  __int64 v33; // rbx
  char v34; // r14
  unsigned int v35; // edi
  unsigned __int16 v36; // ax
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // r12
  __int64 v40; // rbx
  const wchar_t *v41; // rcx
  char v42; // r10
  BOOLEAN v43; // al
  const WCHAR *v44; // rdi
  const WCHAR *v45; // rbx
  const GUID *v46; // r9
  char v47; // r10
  int v48; // eax
  __int64 v49; // r10
  LPCGUID v50; // r9
  __int64 v51; // rax
  __m128i *v52; // rsi
  __int64 v53; // r12
  unsigned int v54; // edi
  unsigned __int16 v55; // ax
  unsigned __int64 v56; // r14
  __int64 v57; // r15
  unsigned __int64 v58; // rax
  const wchar_t *v59; // rcx
  __int64 v60; // rbx
  unsigned int v61; // edi
  unsigned __int16 v62; // ax
  unsigned __int64 v63; // r14
  __int64 v64; // r15
  unsigned __int64 v65; // rax
  const wchar_t *v66; // rcx
  __int64 v67; // rbx
  unsigned int v68; // edi
  unsigned __int16 v69; // ax
  unsigned __int64 v70; // r14
  __int64 v71; // r15
  unsigned __int64 v72; // rax
  const wchar_t *v73; // rcx
  __int64 v74; // rbx
  unsigned int v75; // edi
  unsigned __int16 v76; // ax
  unsigned __int64 v77; // r14
  __int64 v78; // r15
  unsigned __int64 v79; // rax
  const wchar_t *v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rdi
  struct _UNICODE_STRING *v83; // rbx
  unsigned __int8 v84[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v85; // [rsp+38h] [rbp-C8h] BYREF
  LPCWSTR v86; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v87; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v88; // [rsp+50h] [rbp-B0h]
  enum _QAI_DRIVERVERSION v89; // [rsp+54h] [rbp-ACh] BYREF
  __m128i v90; // [rsp+60h] [rbp-A0h]
  LPCWSTR pwsz; // [rsp+70h] [rbp-90h]
  void *KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-80h] BYREF
  ULONG v94; // [rsp+84h] [rbp-7Ch]
  WCHAR *v95; // [rsp+88h] [rbp-78h]
  struct _FDO_CONTEXT *v96; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD KeyInformation[14]; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v102; // [rsp+140h] [rbp+40h]
  __int64 v103; // [rsp+148h] [rbp+48h]
  unsigned int *v104; // [rsp+150h] [rbp+50h]
  __int64 v105; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  LPCWSTR *v107; // [rsp+170h] [rbp+70h]
  __int64 v108; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v109; // [rsp+180h] [rbp+80h] BYREF
  LPCWSTR *v110; // [rsp+190h] [rbp+90h]
  __int64 v111; // [rsp+198h] [rbp+98h]
  struct _UNICODE_STRING v112[20]; // [rsp+1A0h] [rbp+A0h] BYREF

  v96 = a1;
  v5 = a1;
  v87 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v88 = 0;
  DestinationString.Buffer = 0LL;
  v6 = 0;
  pwsz = a4;
  v7 = a4;
  v85 = a3;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Kernel");
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0;
  memset(KeyInformation, 0, 0x30uLL);
  v8 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v8 < 0 )
    goto LABEL_6;
  if ( !KeyInformation[8] )
    goto LABEL_6;
  v12 = KeyInformation[9] + 18;
  v95 = (WCHAR *)operator new[]((unsigned int)(KeyInformation[9] + 18), 0x4B677844u, PagedPool);
  v13 = v95;
  if ( !v95 )
    goto LABEL_6;
  if ( !KeyInformation[8] )
    goto LABEL_63;
  v14 = v12 - 2;
  v15 = 0;
  v94 = v12 - 2;
  do
  {
    v8 = ZwEnumerateValueKey(KeyHandle, v15, KeyValueBasicInformation, v13, v14, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_61;
    if ( *((_DWORD *)v13 + 1) != 7 )
      goto LABEL_61;
    v16 = (unsigned __int64)*((unsigned int *)v13 + 2) >> 1;
    v84[0] = 0;
    v86 = v13 + 6;
    v13[v16 + 6] = 0;
    v8 = ParseAndCompareBlockListCondition(v13 + 6, v87, v85, v7, a5, v84);
    if ( v8 < 0 )
      goto LABEL_61;
    if ( !v84[0] )
      goto LABEL_61;
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    RtlInitUnicodeString(&ValueName, v13 + 6);
    if ( v6 >= 0x14 )
      goto LABEL_61;
    v17 = (__m128i *)&v112[v6];
    v8 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName);
    if ( v8 < 0 )
      goto LABEL_61;
    Buffer = v112[v6].Buffer;
    v19 = 0;
    v21 = (unsigned __int64)v17->m128i_u16[0] >> 1;
    v90 = *v17;
    v20 = v90;
    Buffer[v21 - 1] = 0;
    LOWORD(Buffer) = _mm_cvtsi128_si32(v20);
    v22 = (unsigned __int16)Buffer;
    if ( (_WORD)Buffer )
    {
      v23 = v90.m128i_i64[1];
      v24 = 0LL;
      do
      {
        v25 = (const wchar_t *)(v24 + v23);
        v26 = -1LL;
        do
          ++v26;
        while ( v25[v26] );
        if ( !(_DWORD)v26 )
          break;
        if ( !wcscmp_0(v25, L"GPU_P_ALL") )
        {
          v84[0] = 1;
          goto LABEL_27;
        }
        v19 += v26 + 1;
        v24 = 2LL * v19;
      }
      while ( v24 < v22 );
    }
    v84[0] = 0;
LABEL_27:
    v27 = 0;
    v28 = _mm_cvtsi128_si32(*v17);
    v90 = *v17;
    v29 = v28;
    if ( v28 )
    {
      v30 = v90.m128i_i64[1];
      v31 = 0LL;
      do
      {
        v32 = (const wchar_t *)(v31 + v30);
        v33 = -1LL;
        do
          ++v33;
        while ( v32[v33] );
        if ( !(_DWORD)v33 )
          break;
        if ( !wcscmp_0(v32, L"GPU_PV_ALL") )
        {
          v34 = 1;
          goto LABEL_35;
        }
        v27 += v33 + 1;
        v31 = 2LL * v27;
      }
      while ( v31 < v29 );
    }
    v34 = 0;
LABEL_35:
    v35 = 0;
    v36 = _mm_cvtsi128_si32(*v17);
    v90 = *v17;
    v37 = v36;
    if ( v36 )
    {
      v38 = 0LL;
      v39 = v90.m128i_i64[1];
      do
      {
        v40 = -1LL;
        v41 = (const wchar_t *)(v38 + v39);
        do
          ++v40;
        while ( v41[v40] );
        if ( !(_DWORD)v40 )
          break;
        if ( !wcscmp_0(v41, L"GPU_PV_HIGH_SECURITY") )
        {
          v42 = 1;
          goto LABEL_43;
        }
        v35 += v40 + 1;
        v38 = 2LL * v35;
      }
      while ( v38 < v37 );
    }
    v42 = 0;
LABEL_43:
    if ( (v34 || v42) && dword_1C00A1888 > 5u )
    {
      v43 = TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000200uLL);
      v44 = pwsz;
      if ( v43 )
      {
        v103 = 4LL;
        v102 = &v87;
        v105 = 4LL;
        v104 = &v85;
        TlgCreateWsz(&pDesc, pwsz);
        v45 = v86;
        v89 = a5;
        v108 = 4LL;
        v107 = (LPCWSTR *)&v89;
        TlgCreateWsz(&v109, v86);
        if ( !v47 || (v48 = 1, v34) )
          v48 = 0;
        LODWORD(v86) = v48;
        v110 = &v86;
        v111 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0073F2A, 0LL, v46, 8u, &pData);
        goto LABEL_56;
      }
    }
    else
    {
      v44 = pwsz;
    }
    v45 = v86;
LABEL_56:
    if ( v84[0] && dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000001000uLL) )
    {
      v102 = &v87;
      v103 = 4LL;
      v104 = &v85;
      v105 = 4LL;
      TlgCreateWsz(&pDesc, v44);
      LODWORD(v86) = a5;
      v108 = v49;
      v107 = &v86;
      TlgCreateWsz(&v109, v45);
      TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0073EC6, 0LL, v50, 7u, &pData);
    }
    v13 = v95;
    v6 = v88 + 1;
    v7 = pwsz;
    ++v88;
LABEL_61:
    v14 = v94;
    ++v15;
  }
  while ( v15 < KeyInformation[8] );
  v5 = v96;
LABEL_63:
  operator delete[](v13);
LABEL_6:
  ZwClose(KeyHandle);
  if ( v6 >= 0x14 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v51 + 24) = 719LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( v6 )
  {
    v52 = (__m128i *)v112;
    v53 = v6;
    do
    {
      v54 = 0;
      v55 = _mm_cvtsi128_si32(*v52);
      v90 = *v52;
      v56 = v55;
      if ( v55 )
      {
        v57 = v90.m128i_i64[1];
        v58 = 0LL;
        do
        {
          v59 = (const wchar_t *)(v57 + v58);
          v60 = -1LL;
          do
            ++v60;
          while ( v59[v60] );
          if ( !(_DWORD)v60 )
            break;
          if ( !wcscmp_0(v59, L"GPU_PV_ALL") )
          {
            *((_DWORD *)v5 + 1430) |= 0x80u;
            break;
          }
          v54 += v60 + 1;
          v58 = 2LL * v54;
        }
        while ( v58 < v56 );
      }
      v61 = 0;
      v62 = _mm_cvtsi128_si32(*v52);
      v90 = *v52;
      v63 = v62;
      if ( v62 )
      {
        v64 = v90.m128i_i64[1];
        v65 = 0LL;
        do
        {
          v66 = (const wchar_t *)(v64 + v65);
          v67 = -1LL;
          do
            ++v67;
          while ( v66[v67] );
          if ( !(_DWORD)v67 )
            break;
          if ( !wcscmp_0(v66, L"GPU_PV_HIGH_SECURITY") )
          {
            *((_DWORD *)v5 + 1430) |= 0x200u;
            break;
          }
          v61 += v67 + 1;
          v65 = 2LL * v61;
        }
        while ( v65 < v63 );
      }
      v68 = 0;
      v69 = _mm_cvtsi128_si32(*v52);
      v90 = *v52;
      v70 = v69;
      if ( v69 )
      {
        v71 = v90.m128i_i64[1];
        v72 = 0LL;
        do
        {
          v73 = (const wchar_t *)(v71 + v72);
          v74 = -1LL;
          do
            ++v74;
          while ( v73[v74] );
          if ( !(_DWORD)v74 )
            break;
          if ( !wcscmp_0(v73, L"GPU_P_ALL") )
          {
            *((_DWORD *)v5 + 1430) |= 0x100u;
            break;
          }
          v68 += v74 + 1;
          v72 = 2LL * v68;
        }
        while ( v72 < v70 );
      }
      v75 = 0;
      v76 = _mm_cvtsi128_si32(*v52);
      v90 = *v52;
      v77 = v76;
      if ( v76 )
      {
        v78 = v90.m128i_i64[1];
        v79 = 0LL;
        do
        {
          v80 = (const wchar_t *)(v78 + v79);
          v81 = -1LL;
          do
            ++v81;
          while ( v80[v81] );
          if ( !(_DWORD)v81 )
            break;
          if ( !wcscmp_0(v80, L"DISABLE_MPO") )
          {
            *((_DWORD *)v5 + 1430) |= 0x400u;
            break;
          }
          v75 += v81 + 1;
          v79 = 2LL * v75;
        }
        while ( v79 < v77 );
      }
      ++v52;
      --v53;
    }
    while ( v53 );
    v82 = v88;
    v85 = 0;
    v8 = ConvertStringsToOneMultiString(v112, v88, (unsigned __int16 **)v5 + 716, &v85);
    if ( v8 >= 0 )
      *((_DWORD *)v5 + 1434) = 2 * v85;
    if ( v8 == -1073741637 )
      *((_BYTE *)v5 + 5740) = 1;
    if ( (_DWORD)v82 )
    {
      v83 = v112;
      do
      {
        DxgkFreeUnicodeString(v83++);
        --v82;
      }
      while ( v82 );
    }
  }
  return (unsigned int)v8;
}

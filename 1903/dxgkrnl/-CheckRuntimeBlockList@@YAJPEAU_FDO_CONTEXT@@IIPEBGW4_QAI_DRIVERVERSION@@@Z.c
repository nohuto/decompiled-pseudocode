/*
 * XREFs of ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0167BDC
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

__int64 __fastcall CheckRuntimeBlockList(
        struct _FDO_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  struct _FDO_CONTEXT *v5; // rbx
  __int64 v6; // rdi
  const unsigned __int16 *v7; // r15
  NTSTATUS v8; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  WCHAR *v13; // r14
  ULONG v14; // eax
  ULONG v15; // ecx
  unsigned __int64 v16; // rax
  __m128i *v17; // r13
  wchar_t *Buffer; // rax
  unsigned int v19; // r14d
  __m128i v20; // xmm0
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  unsigned __int64 v24; // rax
  const wchar_t *v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // r14d
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // r15
  __int64 v30; // r12
  unsigned __int64 v31; // rax
  const wchar_t *v32; // rcx
  __int64 v33; // rbx
  char v34; // r15
  unsigned int v35; // r14d
  unsigned __int16 v36; // ax
  unsigned __int64 v37; // r12
  __int64 v38; // r13
  unsigned __int64 v39; // rax
  const wchar_t *v40; // rcx
  __int64 v41; // rbx
  char v42; // r10
  BOOLEAN v43; // al
  const WCHAR *v44; // r14
  const WCHAR *v45; // rbx
  const GUID *v46; // r9
  char v47; // r10
  int v48; // eax
  __int64 v49; // r10
  LPCGUID v50; // r9
  __int64 v51; // rax
  int v52; // eax
  struct _UNICODE_STRING *v53; // rbx
  unsigned __int8 v54[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v55; // [rsp+34h] [rbp-CCh] BYREF
  LPCWSTR v56; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v57; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v58; // [rsp+48h] [rbp-B8h] BYREF
  LPCWSTR pwsz; // [rsp+50h] [rbp-B0h]
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  enum _QAI_DRIVERVERSION v62; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v63; // [rsp+68h] [rbp-98h]
  struct _FDO_CONTEXT *v64; // [rsp+70h] [rbp-90h]
  __m128i v65; // [rsp+80h] [rbp-80h]
  WCHAR *v66; // [rsp+90h] [rbp-70h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD KeyInformation[14]; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  unsigned int *v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  LPCWSTR *v77; // [rsp+170h] [rbp+70h]
  __int64 v78; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+180h] [rbp+80h] BYREF
  LPCWSTR *v80; // [rsp+190h] [rbp+90h]
  __int64 v81; // [rsp+198h] [rbp+98h]
  struct _UNICODE_STRING v82[20]; // [rsp+1A0h] [rbp+A0h] BYREF

  v64 = a1;
  v5 = a1;
  v57 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = 0LL;
  DestinationString.Buffer = 0LL;
  v7 = a4;
  pwsz = a4;
  v58 = a3;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Runtime");
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
  if ( v8 >= 0 && KeyInformation[8] )
  {
    v12 = KeyInformation[9] + 18;
    v66 = (WCHAR *)operator new[]((unsigned int)(KeyInformation[9] + 18), 0x4B677844u, PagedPool);
    v13 = v66;
    if ( v66 )
    {
      v14 = 0;
      v55 = 0;
      if ( KeyInformation[8] )
      {
        v15 = v12 - 2;
        v63 = v12 - 2;
        while ( 1 )
        {
          v8 = ZwEnumerateValueKey(KeyHandle, v14, KeyValueBasicInformation, v13, v15, &ResultLength);
          if ( v8 >= 0 && *((_DWORD *)v13 + 1) == 7 )
          {
            v16 = (unsigned __int64)*((unsigned int *)v13 + 2) >> 1;
            v54[0] = 0;
            v56 = v13 + 6;
            v13[v16 + 6] = 0;
            v8 = ParseAndCompareBlockListCondition(v13 + 6, v57, v58, v7, a5, v54);
            if ( v8 >= 0 )
            {
              if ( v54[0] )
              {
                *(_QWORD *)&ValueName.Length = 0LL;
                ValueName.Buffer = 0LL;
                RtlInitUnicodeString(&ValueName, v13 + 6);
                if ( (unsigned int)v6 < 0x14 )
                {
                  v17 = (__m128i *)&v82[(unsigned int)v6];
                  v8 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName);
                  if ( v8 >= 0 )
                    break;
                }
              }
            }
          }
LABEL_61:
          v15 = v63;
          v14 = v55 + 1;
          v55 = v14;
          if ( v14 >= KeyInformation[8] )
            goto LABEL_62;
        }
        Buffer = v82[(unsigned int)v6].Buffer;
        v19 = 0;
        v21 = (unsigned __int64)v17->m128i_u16[0] >> 1;
        v65 = *v17;
        v20 = v65;
        Buffer[v21 - 1] = 0;
        LOWORD(Buffer) = _mm_cvtsi128_si32(v20);
        v22 = (unsigned __int16)Buffer;
        if ( (_WORD)Buffer )
        {
          v23 = v65.m128i_i64[1];
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
              v54[0] = 1;
              goto LABEL_27;
            }
            v19 += v26 + 1;
            v24 = 2LL * v19;
          }
          while ( v24 < v22 );
        }
        v54[0] = 0;
LABEL_27:
        v27 = 0;
        v28 = _mm_cvtsi128_si32(*v17);
        v65 = *v17;
        v29 = v28;
        if ( v28 )
        {
          v30 = v65.m128i_i64[1];
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
        v65 = *v17;
        v37 = v36;
        if ( v36 )
        {
          v38 = v65.m128i_i64[1];
          v39 = 0LL;
          do
          {
            v40 = (const wchar_t *)(v39 + v38);
            v41 = -1LL;
            do
              ++v41;
            while ( v40[v41] );
            if ( !(_DWORD)v41 )
              break;
            if ( !wcscmp_0(v40, L"GPU_PV_HIGH_SECURITY") )
            {
              v42 = 1;
              goto LABEL_43;
            }
            v35 += v41 + 1;
            v39 = 2LL * v35;
          }
          while ( v39 < v37 );
        }
        v42 = 0;
LABEL_43:
        if ( (v34 || v42) && dword_1C00A1888 > 5u )
        {
          v43 = TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000200uLL);
          v44 = pwsz;
          if ( v43 )
          {
            v73 = 4LL;
            v72 = &v57;
            v75 = 4LL;
            v74 = &v58;
            TlgCreateWsz(&pDesc, pwsz);
            v45 = v56;
            v62 = a5;
            v78 = 4LL;
            v77 = (LPCWSTR *)&v62;
            TlgCreateWsz(&v79, v56);
            if ( !v47 || (v48 = 1, v34) )
              v48 = 0;
            LODWORD(v56) = v48;
            v80 = &v56;
            v81 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0073F2A, 0LL, v46, 8u, &pData);
            goto LABEL_56;
          }
        }
        else
        {
          v44 = pwsz;
        }
        v45 = v56;
LABEL_56:
        if ( v54[0] && dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000001000uLL) )
        {
          v72 = &v57;
          v73 = 4LL;
          v74 = &v58;
          v75 = 4LL;
          TlgCreateWsz(&pDesc, v44);
          LODWORD(v56) = a5;
          v78 = v49;
          v77 = &v56;
          TlgCreateWsz(&v79, v45);
          TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0073EC6, 0LL, v50, 7u, &pData);
        }
        v13 = v66;
        v6 = (unsigned int)(v6 + 1);
        v7 = pwsz;
        goto LABEL_61;
      }
LABEL_62:
      operator delete[](v13);
    }
    v5 = v64;
  }
  ZwClose(KeyHandle);
  if ( (unsigned int)v6 >= 0x14 )
  {
    v51 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v51 + 24) = 779LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( (_DWORD)v6 )
  {
    v55 = 0;
    v52 = ConvertStringsToOneMultiString(v82, v6, (unsigned __int16 **)v5 + 718, &v55);
    v8 = v52;
    if ( v52 >= 0 )
      *((_DWORD *)v5 + 1438) = 2 * v55;
    if ( v52 == -1073741637 )
      *((_BYTE *)v5 + 5756) = 1;
    v53 = v82;
    do
    {
      DxgkFreeUnicodeString(v53++);
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v8;
}

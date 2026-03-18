/*
 * XREFs of ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0150A40
 * Callers:
 *     ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150524 (-CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0150620 (-CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00015B0 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C0022E38 (wcscmp_0.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C014E780 (DxgkRetrieveStringFromRegistry.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C0150C74 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 */

__int64 __fastcall FindBlockListStrings(
        PCWSTR SourceString,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5,
        unsigned int *a6,
        struct _UNICODE_STRING *a7)
{
  unsigned int *v7; // r12
  struct _UNICODE_STRING *v8; // r13
  ULONG v10; // esi
  NTSTATUS v12; // edi
  int v13; // r14d
  unsigned __int16 *v14; // rbx
  ULONG v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  const wchar_t *v19; // rcx
  __int64 v20; // rax
  char v21; // cl
  unsigned __int16 v22; // ax
  unsigned __int64 v23; // rax
  const wchar_t *v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26; // r11
  unsigned __int16 v27; // ax
  unsigned __int64 v28; // rax
  const wchar_t *v29; // rcx
  __int64 v30; // rax
  char v31; // r10
  const GUID *v32; // r9
  char v33; // r11
  char v34; // r10
  BOOL v35; // eax
  LPCGUID v36; // r9
  char v37; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v38[3]; // [rsp+31h] [rbp-CFh] BYREF
  enum _QAI_DRIVERVERSION v39; // [rsp+34h] [rbp-CCh] BYREF
  __m128i *v40; // [rsp+38h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+50h] [rbp-B0h]
  ULONG ResultLength; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v45; // [rsp+5Ch] [rbp-A4h]
  __m128i v46; // [rsp+60h] [rbp-A0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD KeyInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  unsigned int *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp+30h] BYREF
  __m128i **v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+150h] [rbp+50h] BYREF
  __m128i **v60; // [rsp+160h] [rbp+60h]
  __int64 v61; // [rsp+168h] [rbp+68h]
  unsigned int v62; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned int v63; // [rsp+1E0h] [rbp+E0h] BYREF

  v63 = a3;
  v62 = a2;
  v7 = a6;
  v8 = a7;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v10 = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v12 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v12 >= 0 )
  {
    if ( KeyInformation[8] )
    {
      v13 = KeyInformation[9] + 18;
      v14 = (unsigned __int16 *)operator new((unsigned int)(KeyInformation[9] + 18), 0x4B677844u, PagedPool);
      if ( v14 )
      {
        if ( KeyInformation[8] )
        {
          v15 = v13 - 2;
          v45 = v13 - 2;
          do
          {
            v12 = ZwEnumerateValueKey(KeyHandle, v10, KeyValueBasicInformation, v14, v15, &ResultLength);
            if ( v12 >= 0 && *((_DWORD *)v14 + 1) == 7 )
            {
              v16 = (unsigned __int64)*((unsigned int *)v14 + 2) >> 1;
              v38[0] = 0;
              v14[v16 + 6] = 0;
              v12 = ParseAndCompareBlockListCondition(v14 + 6, v62, v63, a4, a5, v38);
              if ( v12 >= 0 )
              {
                if ( v38[0] )
                {
                  RtlInitUnicodeString(&ValueName, v14 + 6);
                  if ( *v7 < 0x14 )
                  {
                    v12 = DxgkRetrieveStringFromRegistry(KeyHandle, &ValueName, (__int64)&v8[*v7]);
                    if ( v12 >= 0 )
                    {
                      v17 = 2LL * *v7;
                      v39 = 0;
                      *(_WORD *)(*((_QWORD *)&v8->Buffer + v17)
                               + 2 * ((unsigned __int64)*(&v8->Length + 4 * v17) >> 1)
                               - 2) = 0;
                      v40 = (__m128i *)&v8[*v7];
                      LOWORD(v17) = _mm_cvtsi128_si32(*v40);
                      v46 = *v40;
                      v43 = (unsigned __int16)v17;
                      if ( (_WORD)v17 )
                      {
                        v18 = 0LL;
                        do
                        {
                          v19 = (const wchar_t *)(v18 + v46.m128i_i64[1]);
                          v20 = -1LL;
                          do
                            ++v20;
                          while ( v19[v20] );
                          v42 = v20;
                          if ( !(_DWORD)v20 )
                            break;
                          if ( !wcscmp_0(v19, L"GPU_P_ALL") )
                          {
                            v21 = 1;
                            goto LABEL_25;
                          }
                          v18 = 2LL * (unsigned int)(v42 + 1 + v39);
                          v39 += v42 + 1;
                        }
                        while ( v18 < v43 );
                      }
                      v21 = 0;
LABEL_25:
                      v37 = v21;
                      v39 = 0;
                      v22 = _mm_cvtsi128_si32(*v40);
                      v46 = *v40;
                      v42 = v22;
                      if ( v22 )
                      {
                        v23 = 0LL;
                        while ( 1 )
                        {
                          v24 = (const wchar_t *)(v23 + v46.m128i_i64[1]);
                          v25 = -1LL;
                          do
                            ++v25;
                          while ( v24[v25] );
                          v43 = v25;
                          if ( !(_DWORD)v25 )
                          {
LABEL_32:
                            v21 = v37;
                            goto LABEL_33;
                          }
                          if ( !wcscmp_0(v24, L"GPU_PV_ALL") )
                            break;
                          v23 = 2LL * (unsigned int)(v43 + 1 + v39);
                          v39 += v43 + 1;
                          if ( v23 >= v42 )
                            goto LABEL_32;
                        }
                        v21 = v37;
                        v26 = 1;
                      }
                      else
                      {
LABEL_33:
                        v26 = 0;
                      }
                      v38[0] = v26;
                      v39 = 0;
                      v27 = _mm_cvtsi128_si32(*v40);
                      v46 = *v40;
                      v42 = v27;
                      if ( v27 )
                      {
                        v28 = 0LL;
                        while ( 1 )
                        {
                          v29 = (const wchar_t *)(v28 + v46.m128i_i64[1]);
                          v30 = -1LL;
                          do
                            ++v30;
                          while ( v29[v30] );
                          v43 = v30;
                          if ( !(_DWORD)v30 )
                          {
LABEL_41:
                            v21 = v37;
                            v26 = v38[0];
                            goto LABEL_42;
                          }
                          if ( !wcscmp_0(v29, L"GPU_PV_HIGH_SECURITY") )
                            break;
                          v28 = 2LL * (unsigned int)(v43 + 1 + v39);
                          v39 += v43 + 1;
                          if ( v28 >= v42 )
                            goto LABEL_41;
                        }
                        v26 = v38[0];
                        v31 = 1;
                        v21 = v37;
                      }
                      else
                      {
LABEL_42:
                        v31 = 0;
                      }
                      if ( (v26 || v31) && dword_1C008D838 > 5u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000000200uLL) )
                        {
                          v53 = 4LL;
                          v52 = &v62;
                          v55 = 4LL;
                          v54 = &v63;
                          TlgCreateWsz(&pDesc, a4);
                          v39 = a5;
                          v58 = 4LL;
                          v57 = (__m128i **)&v39;
                          TlgCreateWsz(&v59, v14 + 6);
                          v35 = v34 && !v33;
                          LODWORD(v40) = v35;
                          v60 = &v40;
                          v61 = 4LL;
                          TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006B319, 0LL, v32, 8u, &pData);
                        }
                        v21 = v37;
                      }
                      if ( v21 && dword_1C008D838 > 5u )
                      {
                        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C008D838, 0x400000001000uLL) )
                        {
                          v53 = 4LL;
                          v52 = &v62;
                          v55 = 4LL;
                          v54 = &v63;
                          TlgCreateWsz(&pDesc, a4);
                          LODWORD(v40) = a5;
                          v58 = 4LL;
                          v57 = &v40;
                          TlgCreateWsz(&v59, v14 + 6);
                          TlgWrite((TraceLoggingHProvider)&dword_1C008D838, &unk_1C006B2B5, 0LL, v36, 7u, &pData);
                        }
                      }
                      ++*v7;
                    }
                  }
                }
              }
            }
            v15 = v45;
            ++v10;
          }
          while ( v10 < KeyInformation[8] );
        }
        operator delete[](v14);
      }
    }
  }
  ZwClose(KeyHandle);
  return (unsigned int)v12;
}

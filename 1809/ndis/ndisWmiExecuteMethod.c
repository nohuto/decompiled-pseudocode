/*
 * XREFs of ndisWmiExecuteMethod @ 0x1C00B4A84
 * Callers:
 *     ndisWMIDispatch @ 0x1C00B537C (ndisWMIDispatch.c)
 * Callees:
 *     ndisWmiGetGuid @ 0x1C0009C20 (ndisWmiGetGuid.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisOidPMAddRemove @ 0x1C0016A60 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 *     ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues @ 0x1C00F6418 (ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues.c)
 *     ndisWmiXlateNdisOffloadToWmiOffload @ 0x1C00F6644 (ndisWmiXlateNdisOffloadToWmiOffload.c)
 *     ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams @ 0x1C00F6960 (ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C011EB94 (ndisReferenceVcPtr.c)
 */

__int64 __fastcall ndisWmiExecuteMethod(char *MiniportAdapterHandle, __int64 a2, unsigned int a3, int *a4)
{
  signed __int32 v7; // eax
  char *v8; // r12
  __int64 v9; // rax
  wchar_t *v10; // rdx
  signed int v11; // ebx
  char *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rsi
  int v19; // ecx
  NDIS_HANDLE RequestHandle; // rdx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // esi
  int v26; // ecx
  int v27; // edx
  UINT BytesNeeded; // eax
  UINT v29; // eax
  int v30; // edx
  UINT v31; // eax
  char *v33; // r12
  char *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rbx
  NDIS_HANDLE v37; // rdx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rdx
  int BytesWritten; // eax
  signed int v44; // eax
  _QWORD *v45; // rcx
  __m128i *v46; // r8
  __m128i v47; // xmm2
  __int32 v48; // edx
  unsigned int v49; // ecx
  UINT v51; // [rsp+58h] [rbp-A8h]
  int v52; // [rsp+60h] [rbp-A0h]
  NDIS_PORT_NUMBER v53; // [rsp+64h] [rbp-9Ch]
  void *v54; // [rsp+68h] [rbp-98h]
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  struct _NDIS_OID_REQUEST Request; // [rsp+90h] [rbp-70h] BYREF
  __m128i v58; // [rsp+190h] [rbp+90h]
  __int32 v59; // [rsp+1A0h] [rbp+A0h]

  v52 = 0;
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x3Bu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
  v7 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v7 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  v8 = 0LL;
  if ( (*(_DWORD *)(a2 + 44) & 0x80u) != 0 )
    goto LABEL_11;
  v9 = *(unsigned int *)(a2 + 48);
  v10 = (wchar_t *)(v9 + a2 + 2);
  v11 = 0;
  v12 = 0LL;
  String2.Buffer = v10;
  String2.MaximumLength = *(_WORD *)(v9 + a2);
  String2.Length = String2.MaximumLength;
  if ( String2.MaximumLength >= 0x30u && v10 && v10[5] == 58 )
  {
    v33 = MiniportAdapterHandle + 1352;
    v34 = (char *)*((_QWORD *)MiniportAdapterHandle + 169);
    while ( v34 != v33 )
    {
      v12 = v34 - 320;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v34 - 24), &String2, 1u) )
      {
        if ( !(unsigned __int8)ndisReferenceVcPtr(v34 - 320, v35) )
        {
          if ( (unsigned __int8)byte_1C00A0261 >= 2u )
            WPP_SF_q(0xAu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
          v11 = -1073741823;
        }
        break;
      }
      v34 = *(char **)v34;
      v12 = 0LL;
    }
    if ( v34 == v33 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_qZ(
          0xBu,
          &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids,
          (__int64)MiniportAdapterHandle,
          &String2.Length);
      v11 = -1073741162;
    }
    v8 = v12;
    if ( v11 < 0 )
      v8 = 0LL;
  }
  else if ( !RtlEqualUnicodeString(*((PCUNICODE_STRING *)MiniportAdapterHandle + 486), &String2, 1u) )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0xCu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
    v11 = -1073741162;
  }
  if ( v11 < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x3Cu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
    v8 = 0LL;
    goto LABEL_44;
  }
  if ( !v8 )
  {
LABEL_11:
    v13 = *((_QWORD *)MiniportAdapterHandle + 475);
    if ( v13 )
      ndisReferenceMiniportByName((PCUNICODE_STRING)(v13 + 8));
  }
  if ( (int)ndisWmiGetGuid(&v56, (__int64)MiniportAdapterHandle, (_QWORD *)(a2 + 24), 0) < 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x3Du, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
    goto LABEL_86;
  }
  v14 = v56;
  v15 = *(_DWORD *)(v56 + 24);
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (unsigned __int8)byte_1C00A0261 >= 2u )
      WPP_SF_q(0x3Eu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
    v11 = -1073741637;
    goto LABEL_45;
  }
  if ( (v15 & 0x200) != 0 )
  {
    v16 = *(unsigned int *)(a2 + 64);
    if ( (unsigned int)v16 >= 0x20 )
    {
      v17 = *(unsigned int *)(a2 + 60);
      v18 = v17 + a2;
      if ( *(_BYTE *)(v17 + a2) == 2 && *(_BYTE *)(v18 + 1) == 1 && *(_WORD *)(v18 + 2) >= 0x20u )
      {
        v53 = *(_DWORD *)(v18 + 4);
        v54 = *(void **)(v18 + 16);
        v51 = *(_DWORD *)(v18 + 24);
        if ( (v15 & 0x2000000) != 0 )
        {
          v19 = *(_DWORD *)(v56 + 16);
          if ( ((v19 + 67042805) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)(v19 + 67042802) <= 1 && a3 - (unsigned int)v17 < 0x20 )
            {
              v30 = 56;
              if ( a3 >= 0x38 )
              {
                *(_DWORD *)(a2 + 44) |= 0x20u;
                v31 = v17 + 32;
                goto LABEL_41;
              }
LABEL_93:
              v11 = -1073741789;
              v30 = 4;
              goto LABEL_43;
            }
          }
          else if ( a3 - (unsigned int)v17 < 0x10C )
          {
            v30 = 56;
            if ( a3 >= 0x38 )
            {
              *(_DWORD *)(a2 + 44) |= 0x20u;
              v31 = v17 + 268;
              goto LABEL_41;
            }
            goto LABEL_93;
          }
          memset(&Request, 0, 0xF8uLL);
          *(_DWORD *)&Request.NdisReserved[16] |= 8u;
          RequestHandle = &ndisIntReqWmi;
          *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqWmi;
          Request.Header = (NDIS_OBJECT_HEADER)15466902;
          Request.DATA.QUERY_INFORMATION.Oid = *(_DWORD *)(v56 + 16);
          Request.RequestType = NdisRequestQueryStatistics;
          Request.PortNumber = *(_DWORD *)(v18 + 4);
          Request.DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)(v17 + a2);
          Request.DATA.QUERY_INFORMATION.InformationBufferLength = a3 - v17;
          Request.RequestId = v54;
          if ( !v54 )
            RequestHandle = Request.RequestHandle;
          Request.RequestHandle = RequestHandle;
          Request.Timeout = v51;
          goto LABEL_26;
        }
        if ( *(_DWORD *)(v56 + 16) == 66086 && a3 - (unsigned int)v17 < 0x43C )
        {
          v30 = 56;
          if ( a3 >= 0x38 )
          {
            *(_DWORD *)(a2 + 44) |= 0x20u;
            v31 = v17 + 1084;
            goto LABEL_41;
          }
          goto LABEL_93;
        }
        memmove((void *)(v17 + a2), (const void *)(v18 + 32), v16 - 32);
        if ( (*(_DWORD *)(v14 + 24) & 0x4000000) == 0 )
        {
          memset(&Request, 0, 0xF8uLL);
          v37 = &ndisIntReqWmi;
          *(_DWORD *)&Request.NdisReserved[16] |= 8u;
          v39 = *(unsigned int *)(a2 + 60);
          Request.PortNumber = v53;
          *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqWmi;
          Request.Header = (NDIS_OBJECT_HEADER)15466902;
          Request.RequestType = NdisRequestMethod;
          Request.DATA.QUERY_INFORMATION.Oid = *(_DWORD *)(v14 + 16);
          Request.DATA.QUERY_INFORMATION.BytesNeeded = *(_DWORD *)(a2 + 56);
          Request.DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)(a2 + v39);
          Request.DATA.QUERY_INFORMATION.InformationBufferLength = *(_DWORD *)(a2 + 64) - 32;
          Request.DATA.QUERY_INFORMATION.BytesWritten = a3 - v39;
LABEL_108:
          Request.RequestId = v54;
          if ( !v54 )
            v37 = Request.RequestHandle;
          Request.RequestHandle = v37;
          Request.Timeout = v51;
          goto LABEL_26;
        }
        if ( *(_DWORD *)(a2 + 56) == 1 )
        {
          v36 = *(unsigned int *)(a2 + 60);
          if ( a3 - (unsigned int)v36 < 0x10 )
          {
            v30 = 56;
            if ( a3 >= 0x38 )
            {
              *(_DWORD *)(a2 + 44) |= 0x20u;
              v31 = v36 + 16;
              goto LABEL_41;
            }
            goto LABEL_93;
          }
          v52 = 16;
          memset(&Request, 0, 0xF8uLL);
          *(_DWORD *)&Request.NdisReserved[16] |= 8u;
          v37 = &ndisIntReqWmi;
          *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqWmi;
          Request.Header = (NDIS_OBJECT_HEADER)15466902;
          Request.DATA.QUERY_INFORMATION.Oid = *(_DWORD *)(v14 + 16);
          Request.PortNumber = v53;
          Request.DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)(a2 + v36);
          v38 = *(_DWORD *)(a2 + 64) - 32;
          Request.RequestType = NdisRequestSetInformation;
          Request.DATA.QUERY_INFORMATION.InformationBufferLength = v38;
          goto LABEL_108;
        }
      }
    }
LABEL_86:
    v11 = -1073741811;
    goto LABEL_45;
  }
  memset(&Request, 0, 0xF8uLL);
  *(_DWORD *)&Request.NdisReserved[16] |= 8u;
  v40 = *(unsigned int *)(a2 + 60);
  *(_QWORD *)&Request.NdisReserved[32] = &ndisIntReqWmi;
  Request.Header = (NDIS_OBJECT_HEADER)15466902;
  *(_QWORD *)&Request.RequestType = 12LL;
  Request.DATA.QUERY_INFORMATION.Oid = *(_DWORD *)(v56 + 16);
  Request.DATA.QUERY_INFORMATION.BytesNeeded = *(_DWORD *)(a2 + 56);
  Request.DATA.QUERY_INFORMATION.InformationBuffer = (PVOID)(a2 + v40);
  Request.DATA.QUERY_INFORMATION.InformationBufferLength = *(_DWORD *)(a2 + 64);
  Request.DATA.QUERY_INFORMATION.BytesWritten = a3 - v40;
LABEL_26:
  v21 = *(_DWORD *)(v14 + 16) + 50265846;
  if ( v21 <= 5 && (v22 = 43, _bittest(&v22, v21)) )
    v23 = ndisOidPMAddRemove(MiniportAdapterHandle, 0LL, &Request);
  else
    v23 = ndisQuerySetMiniport(MiniportAdapterHandle, v8, &Request, 0LL, 0LL);
  v25 = v23;
  if ( ((v23 + 1073676268) & 0xFFFFFFFD) != 0 )
  {
    if ( v23 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 2u )
        WPP_SF_q(0x3Fu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle);
      if ( (byte_1C00A2081 & 0x10) != 0 )
        McTemplateK0jqxqdq(
          v24,
          &ExecuteMethodFailed,
          (const GUID *)(MiniportAdapterHandle + 4040),
          (__int64)(MiniportAdapterHandle + 4040),
          *((_DWORD *)MiniportAdapterHandle + 1022),
          *((_QWORD *)MiniportAdapterHandle + 507),
          v25,
          78,
          *(_DWORD *)(a2 + 56));
      if ( (*(_DWORD *)(v14 + 24) & 0x200) != 0 )
      {
        if ( (v25 & 0xC0010000) == 0xC0010000 )
          v25 = (unsigned __int16)v25 | 0xC0230000;
      }
      else if ( v25 != 259 && v25 != -2147483643 )
      {
        v41 = -1073741823;
        if ( v25 != -1073741823 && v25 != -1073741670 && v25 != -1073741637 )
        {
          if ( v25 == -1073676267 )
            v41 = -1073741811;
          v11 = v41;
          goto LABEL_45;
        }
      }
      v11 = v25;
    }
    else
    {
      v26 = *(_DWORD *)(v14 + 16);
      if ( Request.RequestType != NdisRequestMethod )
      {
        if ( Request.RequestType == NdisRequestSetInformation )
        {
          if ( v26 != -50265846 && v26 != -50265843 )
          {
            v45 = (_QWORD *)(a2 + *(unsigned int *)(a2 + 60));
            *v45 = 0LL;
            v45[1] = 0LL;
            *(_DWORD *)v45 = 1048837;
            *((_BYTE *)v45 + 8) = Request.SupportedRevision;
            v27 = *(_DWORD *)(a2 + 60) + v52;
            BytesWritten = v52;
LABEL_140:
            *(_DWORD *)(a2 + 64) = BytesWritten;
            goto LABEL_36;
          }
          BytesWritten = 196;
        }
        else
        {
          if ( ((v26 + 67042805) & 0xFFFFFFFD) != 0 )
          {
            if ( (unsigned int)(v26 + 67042802) <= 1 )
            {
              v46 = (__m128i *)(a2 + *(unsigned int *)(a2 + 60));
              v47 = *v46;
              v48 = v46[1].m128i_i32[0];
              v46[1].m128i_i32[3] = v48;
              v46->m128i_i32[0] = _mm_cvtsi128_si32(v47);
              v59 = v48;
              v46->m128i_i16[1] = 32;
              v49 = _mm_cvtsi128_si32(_mm_srli_si128(v47, 8));
              v58 = v47;
              v46->m128i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v47, 4));
              v46->m128i_i32[2] = v49 & 3;
              v46->m128i_i32[3] = (v49 >> 2) & 3;
              v46[1].m128i_i32[0] = (v49 >> 4) & 3;
              v46[1].m128i_i32[1] = (unsigned __int8)v49 >> 6;
              v46[1].m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v47, 12));
              v27 = *(_DWORD *)(a2 + 60) + 32;
              *(_DWORD *)(a2 + 64) = 32;
            }
            else
            {
              v27 = Request.DATA.QUERY_INFORMATION.BytesWritten + *(_DWORD *)(a2 + 60);
              *(_DWORD *)(a2 + 64) = Request.DATA.QUERY_INFORMATION.BytesWritten;
            }
            goto LABEL_36;
          }
          ndisWmiXlateNdisOffloadToWmiOffload(a2 + *(unsigned int *)(a2 + 60));
          BytesWritten = 268;
        }
        goto LABEL_138;
      }
      v42 = *(unsigned int *)(a2 + 60);
      if ( v26 == 66086 )
      {
        ndisWmiXlateNdisRecvQueueParamsToWmiRecvQueueParams(a2 + v42);
        BytesWritten = 1084;
LABEL_138:
        LODWORD(v42) = *(_DWORD *)(a2 + 60);
        goto LABEL_139;
      }
      if ( v26 != 66085 )
      {
        BytesWritten = Request.DATA.METHOD_INFORMATION.BytesWritten;
LABEL_139:
        v27 = BytesWritten + v42;
        goto LABEL_140;
      }
      v44 = ndisWmiXlateEnumNdisRecvQueuesToWmiRecvQueues(
              (void *)(a2 + v42),
              Request.DATA.METHOD_INFORMATION.BytesWritten);
      v11 = v44;
      if ( v44 == -1073676268 )
      {
        v30 = 56;
        if ( a3 >= 0x38 )
        {
          *(_DWORD *)(a2 + 44) |= 0x20u;
          *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 60) + 32;
          goto LABEL_42;
        }
        goto LABEL_93;
      }
      if ( !v44 )
      {
        v27 = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(a2 + 64) = 0;
LABEL_36:
        v11 = 0;
        *(_DWORD *)a2 = v27;
        *a4 = v27;
        goto LABEL_45;
      }
      if ( (v44 & 0xC0010000) == 0xC0010000 )
        v11 = (unsigned __int16)v44 | 0xC0230000;
    }
LABEL_44:
    if ( v11 == 259 )
      goto LABEL_47;
    goto LABEL_45;
  }
  BytesNeeded = Request.DATA.METHOD_INFORMATION.BytesNeeded;
  if ( Request.RequestType != NdisRequestMethod )
    BytesNeeded = Request.DATA.QUERY_INFORMATION.BytesNeeded;
  v29 = *(_DWORD *)(a2 + 60) + BytesNeeded;
  v30 = 56;
  if ( a3 >= 0x38 )
  {
    *(_DWORD *)(a2 + 44) |= 0x20u;
    v31 = v29 + 32;
LABEL_41:
    *(_DWORD *)(a2 + 48) = v31;
LABEL_42:
    *(_DWORD *)a2 = 56;
    v11 = 0;
LABEL_43:
    *a4 = v30;
    goto LABEL_44;
  }
  v11 = -1073741789;
  *a4 = 4;
LABEL_45:
  if ( v8 )
    ndisDereferenceVcPtr(v8);
LABEL_47:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x40u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)MiniportAdapterHandle, v11);
  return (unsigned int)v11;
}

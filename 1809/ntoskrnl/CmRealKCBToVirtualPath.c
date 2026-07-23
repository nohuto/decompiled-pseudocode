/*
 * XREFs of CmRealKCBToVirtualPath @ 0x1407F31A8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmpReparseToVirtualPath @ 0x1407F48FC (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     CmpConstructName @ 0x1405D9B94 (CmpConstructName.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     CmpGetVirtualizationID @ 0x1407F4744 (CmpGetVirtualizationID.c)
 */

__int64 __fastcall CmRealKCBToVirtualPath(__int64 a1, __m128i *a2, __int64 a3, UNICODE_STRING *a4)
{
  char v6; // r15
  _QWORD *v8; // rsi
  NTSTATUS VirtualizationID; // ebx
  unsigned int v10; // ebx
  __m128i v11; // xmm0
  wchar_t *v12; // xmm0_8
  unsigned __int16 Length; // ax
  wchar_t *PoolWithTag; // rax
  wchar_t *v15; // rax
  UNICODE_STRING v16; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v18; // [rsp+40h] [rbp-10h] BYREF

  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&v16.Length = 0LL;
  v6 = 0;
  v16.Buffer = 0LL;
  if ( !CmpVEEnabled )
    return 3221225485LL;
  v8 = (_QWORD *)CmpConstructName(a1);
  if ( !v8 )
    return 3221225626LL;
  VirtualizationID = CmpGetVirtualizationID(&Source);
  if ( VirtualizationID >= 0 )
  {
    v10 = *(unsigned __int16 *)v8 + Source.Length + 38;
    if ( a2 )
    {
      v11 = *a2;
      *(_QWORD *)&v16.Length = a2->m128i_i64[0];
      v12 = (wchar_t *)_mm_srli_si128(v11, 8).m128i_u64[0];
      v16.Buffer = v12;
      if ( v12 )
      {
        Length = v16.Length;
        if ( v16.Length )
        {
          if ( *v12 )
          {
            if ( *v12 == 92 )
            {
              Length = v16.Length - 2;
              v16.Buffer = v12 + 1;
              v16.Length -= 2;
            }
            if ( Length )
            {
              v10 += Length + 2;
              v6 = 1;
            }
          }
        }
      }
    }
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x624E4D43u);
    a4->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      a4->MaximumLength = v10;
      a4->Length = 0;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\Registry\\User\\");
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeStringToString(a4, &Source);
      if ( VirtualizationID < 0 )
        goto LABEL_23;
      VirtualizationID = RtlAppendUnicodeToString(a4, L"\\VirtualStore");
      if ( VirtualizationID < 0
        || (v15 = (wchar_t *)(v8[1] + 18LL),
            *(_QWORD *)&v18.Length = *v8,
            v18.Buffer = v15,
            v18.Length = *(_WORD *)v8 - 18,
            VirtualizationID = RtlAppendUnicodeStringToString(a4, &v18),
            VirtualizationID < 0)
        || v6
        && ((VirtualizationID = RtlAppendUnicodeToString(a4, L"\\"), VirtualizationID < 0)
         || (VirtualizationID = RtlAppendUnicodeStringToString(a4, &v16), VirtualizationID < 0)) )
      {
LABEL_23:
        RtlFreeAnsiString(a4);
      }
    }
    else
    {
      VirtualizationID = -1073741670;
    }
  }
  CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
  RtlFreeAnsiString(&Source);
  return (unsigned int)VirtualizationID;
}

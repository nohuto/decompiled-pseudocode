/*
 * XREFs of CmpReportAuditVirtualizationEvent @ 0x1407F66E0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1407F2E74 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     SeReportSecurityEventWithSubCategory @ 0x140091D90 (SeReportSecurityEventWithSubCategory.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     SeSetAuditParameter @ 0x1401194B0 (SeSetAuditParameter.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 *     CmpEffectiveTokenForSubject @ 0x1406B3374 (CmpEffectiveTokenForSubject.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpReportAuditVirtualizationEvent(__int64 a1, __int64 a2)
{
  UNICODE_STRING *p_UnicodeString; // rsi
  UNICODE_STRING *v5; // rdi
  int AllocatedFullProcessImageName; // ebx
  ULONG v7; // r12d
  ULONG v8; // r8d
  ULONG v9; // r14d
  _KPROCESS *CurrentThreadProcess; // rax
  ULONG v11; // r8d
  NTSTATUS v12; // eax
  PVOID P; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 Data; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _SE_ADT_PARAMETER_ARRAY AuditParameters; // [rsp+70h] [rbp-90h] BYREF

  P = 0LL;
  p_UnicodeString = 0LL;
  v5 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Security");
  AuditParameters.AuditId = 5039;
  AuditParameters.Type = 8;
  AuditParameters.CategoryId = 3;
  AuditParameters.ParameterCount = 0;
  Data = *(_QWORD *)(CmpEffectiveTokenForSubject((__int64 *)a2, 0LL) + 24);
  AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeLogonId, 0, &Data);
  v7 = ++AuditParameters.ParameterCount;
  if ( AllocatedFullProcessImageName < 0 )
    goto LABEL_18;
  if ( CmpVEEnabled && (*(_DWORD *)(a1 + 176) & 0x1000000) != 0 )
  {
    *(_QWORD *)&v15.Length = 0LL;
    CmpConstructNameWithStatus(a1, &v15);
    v5 = *(UNICODE_STRING **)&v15.Length;
    if ( !*(_QWORD *)&v15.Length )
    {
LABEL_5:
      AllocatedFullProcessImageName = -1073741670;
      goto LABEL_18;
    }
    AllocatedFullProcessImageName = CmVirtualKCBToRealPath(a1, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      p_UnicodeString = &UnicodeString;
LABEL_11:
      AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v7, p_UnicodeString);
      v8 = ++AuditParameters.ParameterCount;
      if ( AllocatedFullProcessImageName >= 0 )
      {
        AllocatedFullProcessImageName = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeString, v8, v5);
        v9 = ++AuditParameters.ParameterCount;
        if ( AllocatedFullProcessImageName >= 0 )
        {
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(
                                            (__int64)CurrentThreadProcess,
                                            (__int64)&P);
          if ( AllocatedFullProcessImageName >= 0 )
          {
            AllocatedFullProcessImageName = SeSetAuditParameter(
                                              &AuditParameters,
                                              SeAdtParmTypePtr,
                                              v9,
                                              *(PVOID *)(a2 + 24));
            v11 = ++AuditParameters.ParameterCount;
            if ( AllocatedFullProcessImageName >= 0 )
            {
              v12 = SeSetAuditParameter(&AuditParameters, SeAdtParmTypeFileSpec, v11, P);
              ++AuditParameters.ParameterCount;
              AllocatedFullProcessImageName = v12;
              if ( v12 >= 0 )
              {
                AllocatedFullProcessImageName = SeReportSecurityEventWithSubCategory(
                                                  0,
                                                  &DestinationString,
                                                  0LL,
                                                  &AuditParameters,
                                                  0x76u);
                if ( AllocatedFullProcessImageName >= 0 )
                  AllocatedFullProcessImageName = 0;
              }
            }
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v15.Length = 0LL;
    CmpConstructNameWithStatus(a1, &v15);
    p_UnicodeString = *(UNICODE_STRING **)&v15.Length;
    if ( !*(_QWORD *)&v15.Length )
      goto LABEL_5;
    RtlInitUnicodeString(&v15, 0LL);
    AllocatedFullProcessImageName = CmRealKCBToVirtualPath(a1, (__m128i *)&v15, a2, &UnicodeString);
    if ( AllocatedFullProcessImageName >= 0 )
    {
      v5 = &UnicodeString;
      goto LABEL_11;
    }
  }
LABEL_18:
  if ( P )
    ExFreePoolWithTag(P, 0x61506553u);
  if ( p_UnicodeString == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( p_UnicodeString )
  {
    CmpFreeTransientPoolWithTag(p_UnicodeString, 0x624E4D43u);
  }
  if ( v5 == &UnicodeString )
  {
    RtlFreeAnsiString(&UnicodeString);
  }
  else if ( v5 )
  {
    CmpFreeTransientPoolWithTag(v5, 0x624E4D43u);
  }
  return (unsigned int)AllocatedFullProcessImageName;
}

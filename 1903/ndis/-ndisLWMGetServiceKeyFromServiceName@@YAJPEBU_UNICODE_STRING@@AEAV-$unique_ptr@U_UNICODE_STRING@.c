/*
 * XREFs of ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C0117FA0
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D810 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C0106E0C (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisLWMGetServiceKeyFromServiceName(const UNICODE_STRING *a1, void **a2)
{
  void **v2; // r15
  WCHAR *Buffer; // rdx
  NTSTATUS v5; // eax
  int v6; // edx
  unsigned int v7; // esi
  int Length; // ecx
  unsigned __int16 v9; // si
  _UNICODE_STRING *v10; // rbx
  wchar_t *v11; // rdi
  NTSTATUS appended; // eax
  int v13; // r9d
  void *v14; // rcx
  UNICODE_STRING Source; // [rsp+40h] [rbp-79h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-69h] BYREF
  _OWORD v18[6]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+7h]
  WCHAR v20; // [rsp+C8h] [rbp+Fh]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      121,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1);
  }
  LODWORD(Buffer) = 65534;
  if ( (unsigned __int16)(a1->Length & 0xFFFE) >= (unsigned __int16)(a1->MaximumLength & 0xFFFE)
    || (Buffer = (WCHAR *)a1->Buffer, Buffer[(unsigned __int64)a1->Length >> 1]) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Buffer) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Buffer,
        1,
        122,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
    }
    v7 = -1073741811;
    goto LABEL_27;
  }
  v5 = RtlCheckRegistryKey(1u, Buffer);
  v7 = v5;
  if ( v5 >= 0 )
  {
    LODWORD(Buffer) = 104;
    Length = a1->Length;
    v18[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
    v20 = aRegistryMachin[52];
    v18[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
    v18[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
    Source.Buffer = (wchar_t *)v18;
    v9 = Length + 106;
    v18[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
    v18[4] = *(_OWORD *)L"ControlSet\\Services\\";
    v18[5] = *(_OWORD *)L"et\\Services\\";
    v19 = *(_QWORD *)L"ces\\";
    *(_QWORD *)&Source.Length = 6946920LL;
    if ( (unsigned int)(Length + 122) >= 0x10
      && (MakeSizedPoolPtr<_UNICODE_STRING>(P, 104LL, (unsigned int)(Length + 122)),
          (v10 = (_UNICODE_STRING *)P[0]) != 0LL) )
    {
      v11 = (wchar_t *)P[0];
    }
    else
    {
      v11 = 0LL;
      v10 = 0LL;
    }
    if ( !v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Buffer) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)Buffer,
          1,
          124,
          (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
      }
      v7 = -1073741670;
      goto LABEL_16;
    }
    v10->Buffer = v11 + 8;
    v10->Length = 0;
    v10->MaximumLength = v9;
    appended = RtlAppendUnicodeStringToString(v10, &Source);
    v7 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(v10, a1);
      v7 = appended;
      if ( appended >= 0 )
      {
        v14 = *v2;
        *v2 = v11;
        if ( v14 )
          ExFreePoolWithTag(v14, 0);
        goto LABEL_27;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v13 = 126;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      v13 = 125;
    }
    LOBYTE(Buffer) = 2;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buffer,
      1,
      v13,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      appended);
LABEL_16:
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    goto LABEL_27;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v7;
  LOBYTE(v6) = 2;
  WPP_RECORDER_SF_D(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v6,
    1,
    123,
    (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
    v5);
LABEL_27:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Buffer) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Buffer,
      1,
      127,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)a1,
      v7);
  }
  return v7;
}

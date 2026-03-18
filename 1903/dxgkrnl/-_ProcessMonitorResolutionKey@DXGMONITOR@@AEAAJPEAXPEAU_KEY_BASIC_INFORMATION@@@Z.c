/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0174230
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0173FC0 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01716D8 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ParseResolutionKeyName @ 0x1C017444C (ParseResolutionKeyName.c)
 *     ParseFreqRangeValue @ 0x1C02CAB5C (ParseFreqRangeValue.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned __int16 v13; // r14
  void *v14; // r12
  PVOID v15; // rsi
  ULONG Length; // r15d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // bl
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v37; // rbx
  UINT v38; // ecx
  UINT v39; // eax
  UINT v40; // ecx
  UINT v41; // eax
  UINT v42; // eax
  int valid; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rsi
  DXGMONITOR *v48; // rbx
  DXGMONITOR **v49; // rcx
  __int64 v50; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  UINT v52; // [rsp+34h] [rbp-65h] BYREF
  UINT v53; // [rsp+38h] [rbp-61h] BYREF
  UINT v54; // [rsp+3Ch] [rbp-5Dh] BYREF
  UINT v55; // [rsp+40h] [rbp-59h] BYREF
  UINT v56; // [rsp+44h] [rbp-55h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  _WORD v58[2]; // [rsp+50h] [rbp-49h] BYREF
  int v59; // [rsp+54h] [rbp-45h]
  WCHAR *Name; // [rsp+58h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  WCHAR SourceString[8]; // [rsp+A0h] [rbp+7h] BYREF

  v58[0] = a3->NameLength;
  v58[1] = v58[0];
  KeyHandle = 0LL;
  v59 = 0;
  v52 = 0;
  Name = a3->Name;
  v53 = 0;
  if ( !(unsigned __int8)ParseResolutionKeyName(v58, &v52, &v53) )
  {
    v26 = WdLogNewEntry5_WdError(v6, v5, v7);
    goto LABEL_33;
  }
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v58;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v12 = v8;
  if ( v8 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v27 + 24) = v12;
LABEL_23:
    WdLogEvent5_WdError(v27);
    goto LABEL_17;
  }
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  wcscpy(SourceString, L"ModeX");
  RtlInitUnicodeString(&DestinationString, SourceString);
  LODWORD(v12) = -1073741801;
  v13 = 1;
  while ( 1 )
  {
    v14 = KeyHandle;
    v15 = 0LL;
    SourceString[4] = v13 + 48;
    Length = 1024;
    do
    {
      if ( v15 )
        operator delete[](v15);
      v15 = operator new[](Length, 0x4D677844u, PagedPool);
      if ( v15 )
      {
        ResultLength = 0;
        v20 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, v15, Length, &ResultLength);
        Length = ResultLength;
        v23 = v20;
      }
      else
      {
        v28 = WdLogNewEntry5_WdError(v18, v17, v19);
        WdLogEvent5_WdError(v28);
        v23 = -1073741801;
      }
    }
    while ( v23 == -2147483643 || v23 == -1073741789 );
    if ( v23 < 0 )
    {
      if ( v15 )
        operator delete[](v15);
      v24 = WdLogNewEntry5_WdTrace(v22, v21);
      *(_QWORD *)(v24 + 24) = v13;
      *(_QWORD *)(v24 + 32) = v23;
      goto LABEL_15;
    }
    ResultLength = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v29 = ParseFreqRangeValue(
            (_DWORD)v15,
            (unsigned int)&ResultLength,
            (unsigned int)&v54,
            (unsigned int)&v55,
            (__int64)&v56);
    operator delete[](v15);
    if ( !v29 )
      break;
    v33 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new[](0x40uLL, 0x4D677844u, PagedPool);
    v37 = v33;
    if ( !v33 )
    {
      v27 = WdLogNewEntry5_WdError(v35, v34, v36);
      goto LABEL_23;
    }
    v33->RangeLimits.MinVSyncFreq.Numerator = ResultLength;
    v38 = v54;
    v33->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v33->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v39 = v52;
    v37->RangeLimits.MaxVSyncFreq.Numerator = v38;
    v40 = v55;
    v37->Constraint.ActiveSize.cx = v39;
    v41 = v53;
    v37->RangeLimits.MinHSyncFreq.Numerator = v40;
    v37->Constraint.ActiveSize.cy = v41;
    v42 = v56;
    v37->RangeLimits.MinVSyncFreq.Denominator = 1;
    v37->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v37->RangeLimits.MinHSyncFreq.Denominator = 1;
    v37->RangeLimits.MaxHSyncFreq.Numerator = v42;
    v37->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v37);
    v47 = valid;
    if ( valid < 0 )
    {
      v50 = WdLogNewEntry5_WdWarning(v45, v44, v46);
      *(_QWORD *)(v50 + 24) = v47;
      WdLogEvent5_WdWarning(v50);
      operator delete(v37);
    }
    else
    {
      v48 = (DXGMONITOR *)&v37[1];
      v49 = (DXGMONITOR **)*((_QWORD *)this + 34);
      if ( *v49 != (DXGMONITOR *)((char *)this + 264) )
        __fastfail(3u);
      *(_QWORD *)v48 = (char *)this + 264;
      *((_QWORD *)v48 + 1) = v49;
      *v49 = v48;
      *((_QWORD *)this + 34) = v48;
      ++*((_DWORD *)this + 64);
      ++*((_DWORD *)this + 33);
    }
LABEL_15:
    if ( ++v13 >= 9u )
    {
      LODWORD(v12) = 0;
      goto LABEL_17;
    }
  }
  v26 = WdLogNewEntry5_WdError(v31, v30, v32);
  *(_QWORD *)(v26 + 24) = v13;
LABEL_33:
  WdLogEvent5_WdError(v26);
  LODWORD(v12) = -1073741823;
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v12;
}

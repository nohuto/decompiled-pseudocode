/*
 * XREFs of ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0294BA8
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0296410 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ParseFreqRangeValue @ 0x1C0294634 (ParseFreqRangeValue.c)
 *     ParseResolutionKeyName @ 0x1C029489C (ParseResolutionKeyName.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C029A46C (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessMonitorResolutionKey(
        DXGMONITOR *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int16 v11; // r14
  void *v12; // r13
  _DWORD *v13; // rsi
  ULONG Length; // r12d
  __int64 v15; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v26; // rax
  __int64 v27; // rcx
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v28; // rbx
  UINT v29; // ecx
  UINT v30; // eax
  UINT v31; // ecx
  int v32; // eax
  UINT v33; // eax
  int valid; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rsi
  DXGMONITOR *v39; // rbx
  DXGMONITOR **v40; // rcx
  __int64 v41; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-69h] BYREF
  UINT v44; // [rsp+34h] [rbp-65h] BYREF
  int v45; // [rsp+38h] [rbp-61h] BYREF
  UINT v46; // [rsp+3Ch] [rbp-5Dh] BYREF
  UINT v47; // [rsp+40h] [rbp-59h] BYREF
  UINT v48; // [rsp+44h] [rbp-55h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  const void *v50[2]; // [rsp+50h] [rbp-49h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  WCHAR SourceString[8]; // [rsp+A0h] [rbp+7h] BYREF

  LOWORD(v50[0]) = a3->NameLength;
  WORD1(v50[0]) = v50[0];
  KeyHandle = 0LL;
  v50[1] = a3->Name;
  v44 = 0;
  v45 = 0;
  if ( !ParseResolutionKeyName(v50, &v44, &v45) )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    goto LABEL_31;
  }
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v50;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
LABEL_5:
    WdLogEvent5_WdError(v10);
    goto LABEL_32;
  }
  wcscpy(SourceString, L"ModeX");
  RtlInitUnicodeString(&DestinationString, SourceString);
  LODWORD(v9) = -1073741801;
  v11 = 1;
  while ( 1 )
  {
    v12 = KeyHandle;
    v13 = 0LL;
    SourceString[4] = v11 + 48;
    Length = 1024;
    do
    {
      if ( v13 )
        operator delete[](v13);
      v13 = operator new(Length, 0x4D677844u, PagedPool);
      if ( v13 )
      {
        ResultLength = 0;
        v16 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, v13, Length, &ResultLength);
        Length = ResultLength;
        v21 = v16;
      }
      else
      {
        v22 = WdLogNewEntry5_WdError(v15);
        WdLogEvent5_WdError(v22);
        v21 = -1073741801;
      }
    }
    while ( v21 == -2147483643 || v21 == -1073741789 );
    if ( v21 < 0 )
    {
      if ( v13 )
        operator delete[](v13);
      v23 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
      *(_QWORD *)(v23 + 24) = v11;
      *(_QWORD *)(v23 + 32) = v21;
      goto LABEL_25;
    }
    ResultLength = 0;
    v46 = 0;
    v47 = 0;
    v48 = 0;
    v24 = ParseFreqRangeValue(v13, (int)&ResultLength, (int)&v46, (__int64)&v47, (__int64)&v48);
    operator delete[](v13);
    if ( !v24 )
      break;
    v26 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new(0x40uLL, 0x4D677844u, PagedPool);
    v28 = v26;
    if ( !v26 )
    {
      v10 = WdLogNewEntry5_WdError(v27);
      goto LABEL_5;
    }
    v26->RangeLimits.MinVSyncFreq.Numerator = ResultLength;
    v29 = v46;
    v26->Origin = D3DKMDT_MCO_SPECIFICCAP_REGISTRYOVERRIDE;
    v26->ConstraintType = D3DKMDT_MFRC_ACTIVESIZE;
    v30 = v44;
    v28->RangeLimits.MaxVSyncFreq.Numerator = v29;
    v31 = v47;
    v28->Constraint.ActiveSize.cx = v30;
    v32 = v45;
    v28->RangeLimits.MinHSyncFreq.Numerator = v31;
    v28->Constraint.ActiveSize.cy = v32;
    v33 = v48;
    v28->RangeLimits.MinVSyncFreq.Denominator = 1;
    v28->RangeLimits.MaxVSyncFreq.Denominator = 1;
    v28->RangeLimits.MinHSyncFreq.Denominator = 1;
    v28->RangeLimits.MaxHSyncFreq.Numerator = v33;
    v28->RangeLimits.MaxHSyncFreq.Denominator = 1;
    valid = IsValidFrequencyRange(v28);
    v38 = valid;
    if ( valid < 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v41 + 24) = v38;
      WdLogEvent5_WdWarning(v41);
      operator delete(v28);
    }
    else
    {
      v39 = (DXGMONITOR *)&v28[1];
      v40 = (DXGMONITOR **)*((_QWORD *)this + 34);
      if ( *v40 != (DXGMONITOR *)((char *)this + 264) )
        __fastfail(3u);
      *(_QWORD *)v39 = (char *)this + 264;
      *((_QWORD *)v39 + 1) = v40;
      *v40 = v39;
      *((_QWORD *)this + 34) = v39;
      ++*((_DWORD *)this + 64);
      ++*((_DWORD *)this + 33);
    }
LABEL_25:
    if ( ++v11 >= 9u )
    {
      LODWORD(v9) = 0;
      goto LABEL_32;
    }
  }
  v6 = WdLogNewEntry5_WdError(v25);
  *(_QWORD *)(v6 + 24) = v11;
LABEL_31:
  WdLogEvent5_WdError(v6);
  LODWORD(v9) = -1073741823;
LABEL_32:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v9;
}

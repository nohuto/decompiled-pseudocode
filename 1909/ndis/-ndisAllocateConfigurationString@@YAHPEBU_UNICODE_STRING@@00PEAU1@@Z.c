/*
 * XREFs of ?ndisAllocateConfigurationString@@YAHPEBU_UNICODE_STRING@@00PEAU1@@Z @ 0x1C002AF7C
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C002B8A0 (NdisOpenConfigurationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C002B130 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        const struct _UNICODE_STRING *a1,
        const struct _UNICODE_STRING *a2,
        const struct _UNICODE_STRING *a3,
        PUNICODE_STRING Destination)
{
  const struct _UNICODE_STRING *v6; // rsi
  unsigned __int16 *p_MaximumLength; // r14
  unsigned int v9; // ebx
  int v10; // edx
  unsigned __int16 *v11; // r8
  int v12; // r10d
  unsigned __int16 *v13; // r8
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  unsigned __int16 v17; // ax
  PVOID PoolWithTag; // rax
  char v20; // [rsp+30h] [rbp-38h]

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      8,
      36,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)a1,
      v20,
      (char)a3);
  }
  p_MaximumLength = &Destination->MaximumLength;
  v9 = 0;
  v12 = RtlUShortAdd(a1->Length, ndisParameterStr.Length, &Destination->MaximumLength);
  if ( v6 )
  {
    RtlUShortAdd(*p_MaximumLength, a3->Length, v11);
    v14 = RtlUShortAdd(*p_MaximumLength, v6->Length, v13);
    v12 = v15 | v14 | v16;
  }
  v17 = *p_MaximumLength + 2;
  Destination->Buffer = 0LL;
  *p_MaximumLength = v17;
  Destination->Length = 0;
  if ( v12
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x2020444Eu),
        (Destination->Buffer = (wchar_t *)PoolWithTag) == 0LL) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(PoolWithTag, 0, *p_MaximumLength);
    RtlCopyUnicodeString(Destination, a1);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( v6 )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, v6);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1,
      37,
      (struct _GUID *)&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
      (char)a1,
      (char)v6,
      (char)a3);
  }
  return v9;
}

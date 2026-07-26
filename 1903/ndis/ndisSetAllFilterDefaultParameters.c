/*
 * XREFs of ndisSetAllFilterDefaultParameters @ 0x1C00904C0
 * Callers:
 *     ndisCreateFilterDriverRegistry @ 0x1C00382C0 (ndisCreateFilterDriverRegistry.c)
 *     ndisCreateFilterAdapterRegistry @ 0x1C003A590 (ndisCreateFilterAdapterRegistry.c)
 *     ndisCreateFilterInstanceRegistry @ 0x1C008DF04 (ndisCreateFilterInstanceRegistry.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisSetFilterDefaultParameter @ 0x1C00907CC (ndisSetFilterDefaultParameter.c)
 */

__int64 __fastcall ndisSetAllFilterDefaultParameters(const UNICODE_STRING *a1, char a2, const UNICODE_STRING *a3)
{
  ULONG v3; // esi
  unsigned int v7; // ebx
  int v8; // edx
  _WORD *v9; // rdi
  wchar_t *PoolWithTag; // rax
  int v11; // edx
  _WORD *v12; // rax
  ULONG i; // edx
  NTSTATUS v14; // eax
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-39h] BYREF
  char v17[8]; // [rsp+60h] [rbp-29h] BYREF
  _WORD *v18; // [rsp+68h] [rbp-21h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+100h] [rbp+77h] BYREF

  v3 = 0;
  KeyHandle = 0LL;
  v7 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination.Length = 0;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v9 = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ResultLength = 0;
  *(_QWORD *)v17 = 0LL;
  v18 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      91,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      a2,
      (char)a3);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\");
  Destination.MaximumLength = DestinationString.Length + a3->Length + 2 + a1->Length;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
  Destination.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, a1);
    RtlAppendUnicodeStringToString(&Destination, a3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &Destination;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) )
    {
      KeyHandle = 0LL;
      goto LABEL_19;
    }
    v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x218uLL, 0x2020444Eu);
    v9 = v12;
    if ( v12 )
    {
      memset(v12, 0, 0x218uLL);
      ResultLength = 0;
      for ( i = 0; ; i = v3 )
      {
        v14 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, v9, 0x216u, &ResultLength);
        if ( v14 == -2147483622 )
          break;
        if ( v14 )
        {
          v7 = -1073741823;
          break;
        }
        *(_WORD *)v17 = v9[6];
        *(_WORD *)&v17[2] = *(_WORD *)v17 + 2;
        v18 = v9 + 8;
        v7 = ndisSetFilterDefaultParameter(a2, (char)KeyHandle, (char)v17);
        if ( v7 )
          break;
        ++v3;
        memset(v9, 0, 0x218uLL);
        ResultLength = 0;
      }
    }
    else
    {
      v7 = -1073741670;
    }
    PoolWithTag = Destination.Buffer;
  }
  else
  {
    v7 = -1073741670;
  }
  if ( !KeyHandle )
    goto LABEL_20;
  ZwClose(KeyHandle);
LABEL_19:
  PoolWithTag = Destination.Buffer;
LABEL_20:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      1u,
      0x5Cu,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1,
      a2,
      (char)a3,
      v7);
  return v7;
}

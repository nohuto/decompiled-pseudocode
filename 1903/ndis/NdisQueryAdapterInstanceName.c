/*
 * XREFs of NdisQueryAdapterInstanceName @ 0x1C0092A60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C0037C6C (WPP_RECORDER_SF_qZL.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

NDIS_STATUS __stdcall NdisQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE NdisBindingHandle)
{
  __int64 v2; // rsi
  char v3; // bp
  NDIS_STATUS v5; // ebx
  UNICODE_STRING *v6; // rsi
  unsigned int MaximumLength; // r15d
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rdi
  char v11; // [rsp+28h] [rbp-40h]

  v2 = *((_QWORD *)NdisBindingHandle + 2);
  v3 = (char)NdisBindingHandle;
  v5 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)NdisBindingHandle;
    LOBYTE(NdisBindingHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisBindingHandle,
      6,
      50,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      v11);
  }
  v6 = *(UNICODE_STRING **)(v2 + 3856);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6->MaximumLength, 0x6E61444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, MaximumLength);
      pAdapterInstanceName->Buffer = v9;
      pAdapterInstanceName->Length = 0;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) >= 0 )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      pAdapterInstanceName->Buffer = 0LL;
    }
  }
LABEL_10:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisBindingHandle,
      6u,
      0x33u,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      v3,
      &v6->Length,
      v5);
  return v5;
}

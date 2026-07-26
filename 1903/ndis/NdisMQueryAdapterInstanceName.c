/*
 * XREFs of NdisMQueryAdapterInstanceName @ 0x1C003E7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

NDIS_STATUS __stdcall NdisMQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE MiniportHandle)
{
  NDIS_HANDLE v2; // rsi
  NDIS_STATUS v4; // ebx
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  int v7; // edx
  wchar_t *v8; // rdi
  char v10; // [rsp+28h] [rbp-40h]

  v2 = MiniportHandle;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)MiniportHandle;
    LOBYTE(MiniportHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportHandle,
      13,
      10,
      (struct _GUID *)&WPP_4849804957333e8e63baf56ffeec9ebd_Traceguids,
      v10);
  }
  v5 = *(unsigned __int16 *)(*((_QWORD *)v2 + 482) + 2LL);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6E61444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v5);
    pAdapterInstanceName->Buffer = v8;
    pAdapterInstanceName->Length = 0;
    pAdapterInstanceName->MaximumLength = v5;
    if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, *((PCUNICODE_STRING *)v2 + 482)) >= 0 )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_6:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      11,
      (struct _GUID *)&WPP_4849804957333e8e63baf56ffeec9ebd_Traceguids,
      (char)v2,
      v4);
  }
  return v4;
}

/*
 * XREFs of NdisMQueryAdapterResources @ 0x1C009E5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

void __stdcall NdisMQueryAdapterResources(
        PNDIS_STATUS Status,
        NDIS_HANDLE WrapperConfigurationContext,
        PNDIS_RESOURCE_LIST ResourceList,
        PUINT BufferSize)
{
  __int64 v4; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  unsigned int v10; // ecx
  char v11[8]; // [rsp+28h] [rbp-30h]

  v4 = *((_QWORD *)WrapperConfigurationContext + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_QWORD *)v11 = *((_QWORD *)WrapperConfigurationContext + 1);
    LOBYTE(WrapperConfigurationContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)WrapperConfigurationContext,
      1,
      54,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v11[0]);
  }
  v8 = *(_QWORD *)(v4 + 944);
  v9 = 0;
  if ( v8 )
  {
    v10 = 20 * *(_DWORD *)(v8 + 16) + 8;
    if ( *BufferSize >= v10 )
    {
      memmove(ResourceList, (const void *)(v8 + 12), v10);
    }
    else
    {
      *BufferSize = v10;
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741823;
  }
  *Status = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      1,
      55,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      v4,
      v9);
  }
}

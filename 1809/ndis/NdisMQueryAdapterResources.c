/*
 * XREFs of NdisMQueryAdapterResources @ 0x1C00F1DE0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

void __stdcall NdisMQueryAdapterResources(
        PNDIS_STATUS Status,
        NDIS_HANDLE WrapperConfigurationContext,
        PNDIS_RESOURCE_LIST ResourceList,
        PUINT BufferSize)
{
  __int64 v4; // rdi
  __int64 v8; // rdx
  int v9; // ebx
  unsigned int v10; // ecx

  v4 = *((_QWORD *)WrapperConfigurationContext + 1);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x36u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v4);
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
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x37u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v4, v9);
}

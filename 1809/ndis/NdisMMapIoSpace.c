/*
 * XREFs of NdisMMapIoSpace @ 0x1C00D0950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qLLL @ 0x1C0061844 (WPP_SF_qLLL.c)
 *     ndisTranslateResources @ 0x1C00D0A10 (ndisTranslateResources.c)
 */

NDIS_STATUS __stdcall NdisMMapIoSpace(
        PVOID *VirtualAddress,
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress,
        UINT Length)
{
  ULONG LowPart; // ebx
  __int64 v5; // rbp
  void *v8; // rax
  int v9; // ebx
  ULONG v11; // [rsp+20h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  LowPart = PhysicalAddress.LowPart;
  v5 = Length;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    v11 = PhysicalAddress.LowPart;
    WPP_SF_qLLL(
      0x18u,
      &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids,
      (__int64)MiniportAdapterHandle,
      PhysicalAddress.HighPart,
      v11,
      Length);
  }
  if ( (*((_DWORD *)MiniportAdapterHandle + 928) & 0x10) != 0 )
  {
    *VirtualAddress = 0LL;
    return -1073741670;
  }
  else
  {
    if ( (unsigned int)ndisTranslateResources(
                         (_DWORD)MiniportAdapterHandle,
                         3,
                         LowPart,
                         (unsigned int)&v13,
                         (__int64)&v14) )
    {
      v9 = -1073741823;
    }
    else
    {
      v8 = (void *)MmMapIoSpaceEx(v13, v5, 516LL);
      *VirtualAddress = v8;
      v9 = v8 == 0LL ? 0xC000009A : 0;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0x19u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)MiniportAdapterHandle, v9);
    return v9;
  }
}

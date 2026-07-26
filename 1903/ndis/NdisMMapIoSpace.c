/*
 * XREFs of NdisMMapIoSpace @ 0x1C002D860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C001BF94 (WPP_RECORDER_SF_qLLL.c)
 *     ndisTranslateResources @ 0x1C002EA28 (ndisTranslateResources.c)
 */

NDIS_STATUS __stdcall NdisMMapIoSpace(
        PVOID *VirtualAddress,
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_PHYSICAL_ADDRESS PhysicalAddress,
        UINT Length)
{
  __int64 v5; // rbp
  int v7; // edx
  void *v8; // rax
  unsigned int v9; // ebx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF

  v11 = 0LL;
  v5 = Length;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportAdapterHandle,
      1u,
      0x18u,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)MiniportAdapterHandle,
      SBYTE4(PhysicalAddress.QuadPart),
      PhysicalAddress.QuadPart,
      Length);
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 0x10) != 0 )
  {
    *VirtualAddress = 0LL;
    return -1073741670;
  }
  else
  {
    if ( (unsigned int)ndisTranslateResources((char)MiniportAdapterHandle, (__int64)&v11) )
    {
      v9 = -1073741823;
    }
    else
    {
      v8 = (void *)MmMapIoSpaceEx(0LL, v5, 516LL);
      *VirtualAddress = v8;
      v9 = v8 == 0LL ? 0xC000009A : 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        1,
        25,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        (char)MiniportAdapterHandle,
        v9);
    }
    return v9;
  }
}

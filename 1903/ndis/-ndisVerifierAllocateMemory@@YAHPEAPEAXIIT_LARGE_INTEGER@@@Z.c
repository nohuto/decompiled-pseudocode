/*
 * XREFs of ?ndisVerifierAllocateMemory@@YAHPEAPEAXIIT_LARGE_INTEGER@@@Z @ 0x1C00A9470
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisAllocateMemory @ 0x1C0080A40 (NdisAllocateMemory.c)
 *     ?ndisVerifierInjectResourceFailure@@YAEE@Z @ 0x1C00A9928 (-ndisVerifierInjectResourceFailure@@YAEE@Z.c)
 */

__int64 __fastcall ndisVerifierAllocateMemory(void **a1, int a2, __int64 a3, union _LARGE_INTEGER a4)
{
  UINT v6; // r8d
  NDIS_PHYSICAL_ADDRESS v7; // r9
  UINT v8; // r10d
  char *v9; // rax
  PVOID VirtualAddress; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) & 0x400) != 0 && (unsigned int)(a2 + 40) < 0x28 )
  {
    *a1 = 0LL;
    return 3221225485LL;
  }
  else
  {
    ndisMiniportTrackAlloc = 0LL;
    ndisDriverTrackAlloc = 0LL;
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) |= 0x800u;
    if ( ndisVerifierInjectResourceFailure((unsigned __int8)a1) )
    {
      v9 = 0LL;
    }
    else if ( v6 )
    {
      NdisAllocateMemory(&VirtualAddress, v8, v6, v7);
      v9 = (char *)VirtualAddress;
    }
    else
    {
      v9 = (char *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
                     512LL,
                     v8,
                     1836467278LL,
                     24LL,
                     retaddr);
    }
    *a1 = v9;
    if ( v9 )
    {
      if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) & 0x400) != 0 )
        *a1 = v9 + 40;
    }
    return *a1 == 0LL ? 0xC0000001 : 0;
  }
}

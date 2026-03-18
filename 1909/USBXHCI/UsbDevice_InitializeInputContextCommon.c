/*
 * XREFs of UsbDevice_InitializeInputContextCommon @ 0x1C0005590
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C00056D8 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextCommon(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  unsigned int v4; // edx
  void *v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rdi
  int v9; // ecx
  __int64 result; // rax
  __int64 v11; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v3 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 44);
  else
    v4 = 0;
  if ( v3 )
    v5 = *(void **)(v3 + 16);
  else
    v5 = 0LL;
  memset(v5, 0, v4);
  v6 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v6 )
    v6 = *(_QWORD *)(v6 + 16);
  v7 = -(*(_DWORD *)(v2 + 100) & 4);
  *(_DWORD *)(v6 + 4) |= 1u;
  v8 = v6 + (v7 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v9 = *(_DWORD *)v8 | 0x4000000;
    *(_DWORD *)v8 = v9;
    *(_BYTE *)(v8 + 7) = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v8 = v9 | 0x2000000;
      *(_DWORD *)(v8 + 8) ^= (*(_DWORD *)(v8 + 8) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL);
  if ( (result & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v11 )
    {
      if ( *(int *)(a1 + 20) < 2 )
      {
        result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   v11,
                   off_1C00562C0);
        if ( *(_DWORD *)(result + 144) > 1u )
          *(_DWORD *)v8 |= 0x2000000u;
      }
    }
  }
  return result;
}

/*
 * XREFs of ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C01BE2B4
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01C646C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0049348 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapIommuContiguousInternal @ 0x1C0049394 (DpiMapIommuContiguousInternal.c)
 */

__int64 __fastcall DXGADAPTER::MapHardwareReservedRangesToIoMmu(DXGADAPTER *this)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  _QWORD *v4; // r14
  SIZE_T v5; // rbx
  __int64 v6; // rdi
  __int64 IoMmuContextFromDevice; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax

  LODWORD(v1) = 0;
  v2 = 0;
  if ( *((_DWORD *)this + 1066) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(*((_QWORD *)this + 534) + 16LL * v2);
      v5 = v4[1];
      v6 = *v4 / 4096LL;
      IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(*((_QWORD *)this + 24));
      v8 = DpiMapIommuContiguousInternal(IoMmuContextFromDevice, (struct _MDL *)v6, v5);
      v1 = v8;
      if ( v8 < 0 )
        break;
      if ( ++v2 >= *((_DWORD *)this + 1066) )
        return (unsigned int)v1;
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v12[3] = *v4;
    v12[4] = v4[1];
    v12[5] = v1;
    WdLogEvent5_WdWarning(v12);
  }
  return (unsigned int)v1;
}

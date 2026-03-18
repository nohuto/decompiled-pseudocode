/*
 * XREFs of ?MapHardwareReservedRangesToIoMmu@DXGADAPTER@@QEAAJXZ @ 0x1C01ED924
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F515C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 * Callees:
 *     DpiMapIommuContiguous @ 0x1C029CBC0 (DpiMapIommuContiguous.c)
 */

__int64 __fastcall DXGADAPTER::MapHardwareReservedRangesToIoMmu(DXGADAPTER *this)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  _QWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax

  LODWORD(v1) = 0;
  v2 = 0;
  if ( *((_DWORD *)this + 1064) )
  {
    while ( 1 )
    {
      v4 = (_QWORD *)(*((_QWORD *)this + 533) + 16LL * v2);
      v5 = DpiMapIommuContiguous(*((_QWORD *)this + 24), *v4 / 4096LL, v4[1], 4, (__int64)v4);
      v1 = v5;
      if ( v5 < 0 )
        break;
      if ( ++v2 >= *((_DWORD *)this + 1064) )
        return (unsigned int)v1;
    }
    v9 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, v6, v8);
    v9[3] = *v4;
    v9[4] = v4[1];
    v9[5] = v1;
    WdLogEvent5_WdWarning(v9);
  }
  return (unsigned int)v1;
}

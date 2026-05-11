/*
 * XREFs of PropertyInitializeMixerControlRange @ 0x1C00279A0
 * Callers:
 *     TopologyProcessMixerUnit @ 0x1C0023F80 (TopologyProcessMixerUnit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PropertyInitializeMixerControlRange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  int v7; // esi
  int v8; // r8d
  unsigned int v9; // esi
  unsigned int v10; // ebp
  int v12; // [rsp+68h] [rbp+10h] BYREF

  v6 = 129;
  v7 = *(_BYTE *)(a3 + 1) != 0 ? 2 : 0;
  v8 = 0;
  v9 = v7 + 129;
  v10 = *(_DWORD *)(a3 + 4) + *(_DWORD *)(*(_QWORD *)(a2 + 128) + 4LL);
  do
  {
    if ( v8 < 0 )
      break;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, int, int *))(a2 + 136))(
           a1,
           a2,
           v6,
           v10,
           *(_DWORD *)(a3 + 8),
           1,
           &v12);
    if ( v8 >= 0 )
    {
      switch ( v6 )
      {
        case 0x81u:
          *(_DWORD *)(a3 + 12) = v12;
          break;
        case 0x82u:
          *(_DWORD *)(a3 + 24) = v12;
          break;
        case 0x83u:
          *(_DWORD *)(a3 + 28) = v12;
          break;
        case 0x84u:
          *(_DWORD *)(a3 + 16) = v12;
          break;
      }
    }
    ++v6;
  }
  while ( v6 <= v9 );
  return (unsigned int)v8;
}

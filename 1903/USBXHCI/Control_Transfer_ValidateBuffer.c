/*
 * XREFs of Control_Transfer_ValidateBuffer @ 0x1C002C2E8
 * Callers:
 *     Control_MapTransfer @ 0x1C002A448 (Control_MapTransfer.c)
 * Callees:
 *     WPP_RECORDER_SF_DDi @ 0x1C000415C (WPP_RECORDER_SF_DDi.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0029D1C (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C002D124 (WPP_RECORDER_SF_DDqDD.c)
 */

__int64 __fastcall Control_Transfer_ValidateBuffer(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // edx
  int v4; // ecx
  unsigned int v5; // r10d
  unsigned int v6; // r11d

  v1 = *(_QWORD *)(a1 + 344);
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 64);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v1 + 104);
    if ( v5 > 0x10000 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v1,
          29,
          (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24),
          v5,
          0);
      return (unsigned int)-1073741637;
    }
    v6 = *(_DWORD *)(a1 + 4);
    if ( v5 > v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          v1,
          30,
          (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24),
          v5,
          v6);
      return (unsigned int)-1073741670;
    }
    if ( v5 == v6 && (*(_DWORD *)(v1 + 80) & 0xFFFLL) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          v1,
          0x1Fu,
          (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24),
          *(_DWORD *)(v1 + 104));
      return (unsigned int)-1073741670;
    }
    if ( v4 == 3 && **(_QWORD **)(v1 + 72) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDi(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          2u,
          v1,
          0x20u,
          (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(v1 + 24));
      return (unsigned int)-1073741637;
    }
  }
  return v3;
}

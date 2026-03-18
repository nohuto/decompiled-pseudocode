/*
 * XREFs of Bulk_Stage_EstimateRequiredSegments @ 0x1C003685C
 * Callers:
 *     Bulk_PrepareStage @ 0x1C0034E7C (Bulk_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0029AC0 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDDDDDD @ 0x1C0038758 (WPP_RECORDER_SF_DDDDDDD.c)
 */

__int64 __fastcall Bulk_Stage_EstimateRequiredSegments(_DWORD *a1, int *a2)
{
  __int64 v4; // rbx
  int v5; // edi
  int v6; // r9d
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 336LL) & 8) != 0 )
  {
    v5 = 1;
  }
  else
  {
    v6 = *(_DWORD *)(v4 + 192);
    v7 = *(_DWORD *)(v4 + 196) - v6 - (unsigned int)(*(_DWORD *)(v4 + 196) - v6) % a1[20];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
        *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
        *(_DWORD *)(v4 + 196),
        v6);
    v8 = a1[21];
    if ( v8 > v7 )
    {
      v9 = *(_DWORD *)(v4 + 196) - *(_DWORD *)(v4 + 196) % a1[20];
      v10 = (v8 - v7 + v9 - 1) / v9;
      v5 = v10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDDDD(
          *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
          5u,
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          0x21u,
          (__int64)&WPP_7d510b11cf7730484f23e28c4fa6ef2f_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
          *(_DWORD *)(v4 + 64),
          *(_DWORD *)(v4 + 196) - *(_DWORD *)(v4 + 196) % a1[20],
          v10);
    }
    else
    {
      v5 = 0;
    }
  }
  v11 = *(_QWORD *)(v4 + 40);
  *a2 = v5;
  result = *(_QWORD *)(v11 + 336);
  if ( (result & 0x2000000000000LL) != 0 )
  {
    result = *(_QWORD *)(v4 + 48);
    if ( *(_DWORD *)(result + 20) == 3 )
    {
      result = *(_QWORD *)(v4 + 56);
      if ( *(_DWORD *)(result + 120) == 6 )
      {
        result = (unsigned int)(v5 + 1);
        *a2 = result;
      }
    }
  }
  return result;
}

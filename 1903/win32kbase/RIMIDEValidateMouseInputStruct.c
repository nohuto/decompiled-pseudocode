/*
 * XREFs of RIMIDEValidateMouseInputStruct @ 0x1C014B768
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C014AD44 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C013AA70 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateMouseInputStruct(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v3; // r8d
  int v4; // eax
  unsigned __int64 v5; // rcx
  unsigned int v6; // eax
  char v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+28h] [rbp-20h]

  v1 = *(_DWORD *)(a1 + 12);
  v3 = 1;
  if ( (*(_BYTE *)(a1 + 12) & 6) == 6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        v1,
        1,
        22,
        (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
        *(_DWORD *)(a1 + 12));
      v1 = *(_DWORD *)(a1 + 12);
    }
    v3 = 0;
  }
  if ( (v1 & 0x18) == 0x18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = v1;
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v1, 1, 23, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v8);
      v1 = *(_DWORD *)(a1 + 12);
    }
    v3 = 0;
  }
  if ( (v1 & 0x60) == 0x60 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = v1;
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v1, 1, 24, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v9);
      v1 = *(_DWORD *)(a1 + 12);
    }
    v3 = 0;
  }
  v4 = ((v1 >> 7) & 1) + 1;
  if ( (v1 & 0x100) == 0 )
    v4 = (v1 >> 7) & 1;
  LODWORD(v5) = v4 + 1;
  if ( (v1 & 0x800) == 0 )
    LODWORD(v5) = v4;
  v6 = v5 + 1;
  if ( (v1 & 0x1000) == 0 )
    v6 = v5;
  if ( v6 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v1;
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v1, 1, 25, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v10);
    }
    v3 = 0;
  }
  if ( *(_DWORD *)(a1 + 16) )
  {
    v1 = 800;
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)(a1 + 16) > (unsigned int)v5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 2;
        WPP_RECORDER_SF_Dd(
          (_DWORD)gRimLog,
          v1,
          1,
          26,
          (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
          *(_DWORD *)(a1 + 16),
          (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
      }
      v3 = 0;
    }
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_i(v5, v1, v3, 27, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, *(_QWORD *)(a1 + 24));
    }
    return 0;
  }
  return v3;
}

/*
 * XREFs of RIMIDEValidateKeybdInputStruct @ 0x1C014B51C
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C014A94C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C011EE78 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C013AA70 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateKeybdInputStruct(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rdx
  int v2; // ecx
  unsigned __int16 v3; // cx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 1);
  if ( (v2 & 4) != 0 && (*v1 || (v2 & 0xFFFF7FE9) != 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_D(
        (_DWORD)gRimLog,
        (_DWORD)v1,
        1,
        28,
        (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
        v2);
    }
    return 0LL;
  }
  if ( (v2 & 8) == 0 )
  {
    v3 = *v1;
    if ( *v1 > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 2;
        WPP_RECORDER_SF_D(
          (_DWORD)gRimLog,
          (_DWORD)v1,
          1,
          29,
          (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
          v3);
      }
      return 0LL;
    }
  }
  if ( *((_DWORD *)v1 + 2)
    && *((_DWORD *)v1 + 2) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = *((_DWORD *)v1 + 2);
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_Dd(
        (_DWORD)gRimLog,
        (_DWORD)v1,
        1,
        30,
        (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids,
        v4,
        (unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24);
    }
    return 0LL;
  }
  v5 = *((_QWORD *)v1 + 2);
  if ( v5 && (*((_DWORD *)v1 + 1) & 0x8000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *((_QWORD *)v1 + 2);
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_i(v5, (_DWORD)v1, 0, 31, (__int64)&WPP_2b6b994a0a793843830e01c2639db3fc_Traceguids, v7);
    }
    return 0LL;
  }
  return 1LL;
}

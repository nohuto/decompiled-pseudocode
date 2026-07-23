/*
 * XREFs of sub_180016690 @ 0x180016690
 * Callers:
 *     sub_180016590 @ 0x180016590 (sub_180016590.c)
 * Callees:
 *     sub_1800167FC @ 0x1800167FC (sub_1800167FC.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_180016690(__int64 a1, __int64 a2, const WCHAR *a3, _WORD *a4)
{
  __int16 v8; // r8
  DWORD v9; // esi
  int v10; // eax
  __int16 v11; // dx
  __int64 v13; // r9
  __int64 v14; // r10
  __int64 v15; // rcx
  bool v16; // zf
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    *a4 = -1;
    RtlInitUnicodeString(&DestinationString, a3);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return 3221225524LL;
    v8 = -1;
    v9 = ((Lcid - 4096) & 0xFFFFFBFF) != 0 ? Lcid : 0;
    if ( *a3 )
    {
      v8 = sub_1800167FC(*(_QWORD *)(a1 + 32), a3, 0LL, &Lcid);
      if ( v8 < 0 )
        goto LABEL_23;
      v10 = 0;
    }
    else
    {
      v10 = -1073741811;
    }
    if ( v10 >= 0 )
    {
LABEL_10:
      v11 = 0;
      if ( !*(_WORD *)(a2 + 4) )
        return 3221225524LL;
      v13 = *(_QWORD *)(a2 + 24);
      while ( 1 )
      {
        if ( *(_WORD *)(v13 + 6LL * v11) == 1 )
        {
          if ( !v9 )
            goto LABEL_21;
          v16 = *(__int16 *)(v13 + 6LL * v11 + 4) == v9;
          goto LABEL_20;
        }
        if ( *(_WORD *)(v13 + 6LL * v11) != 2 )
          break;
        v14 = *(__int16 *)(v13 + 6LL * v11 + 4);
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        if ( v8 > 0 && v8 == *(_WORD *)(28 * v14 + v15 + 6) )
        {
LABEL_17:
          *a4 = v11;
          return 0LL;
        }
        if ( v9 )
        {
          v16 = v9 == *(unsigned __int16 *)(28 * v14 + v15 + 4);
LABEL_20:
          if ( v16 )
            goto LABEL_17;
        }
LABEL_21:
        if ( ++v11 >= (int)*(unsigned __int16 *)(a2 + 4) )
          return 3221225524LL;
      }
      if ( *(_WORD *)(v13 + 6LL * v11) != 3 || v8 == -1 )
        goto LABEL_21;
      v16 = *(_WORD *)(v13 + 6LL * v11 + 4) == (unsigned __int16)v8;
      goto LABEL_20;
    }
LABEL_23:
    v8 = -1;
    goto LABEL_10;
  }
  return 3221225485LL;
}

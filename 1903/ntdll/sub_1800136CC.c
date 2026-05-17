/*
 * XREFs of sub_1800136CC @ 0x1800136CC
 * Callers:
 *     sub_1800173F0 @ 0x1800173F0 (sub_1800173F0.c)
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 *     LdrLoadAlternateResourceModule @ 0x18007C990 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x1800EBBF0 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     sub_18000EF6C @ 0x18000EF6C (sub_18000EF6C.c)
 *     sub_18001292C @ 0x18001292C (sub_18001292C.c)
 *     sub_18001583C @ 0x18001583C (sub_18001583C.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_1800136CC(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4, bool *a5)
{
  unsigned __int64 v5; // r12
  unsigned int v7; // ebx
  __int64 v9; // rdi
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _WORD v21[2]; // [rsp+20h] [rbp-C1h] BYREF
  int v22; // [rsp+24h] [rbp-BDh] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-B9h] BYREF
  _BYTE v24[176]; // [rsp+40h] [rbp-A1h] BYREF

  v5 = a3;
  v7 = 0;
  v22 = 0;
  v21[0] = 0;
  memset(v24, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v5 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = qword_180166098;
  if ( *(_QWORD *)(a2 + 16) )
    v9 = *(_QWORD *)(a2 + 16);
  *a5 = 0;
  v10 = *a4;
  if ( !*a4 )
  {
    *a4 = 0;
    v11 = *(_QWORD *)(a2 + 24);
    switch ( *(_WORD *)(v11 + 6 * v5) )
    {
      case 1:
        v15 = *(_WORD *)(v11 + 6 * v5 + 4);
LABEL_14:
        *a4 = v15;
        goto LABEL_11;
      case 2:
        v12 = *(_WORD *)(28LL * *(__int16 *)(v11 + 6 * v5 + 4) + *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL) + 4);
        *a4 = v12;
        if ( v12 )
        {
LABEL_11:
          v13 = *(_QWORD *)(a2 + 32);
          *a5 = !_bittest64(&v13, v5);
          return v7;
        }
        v19 = 28LL * *(__int16 *)(v11 + 6 * v5 + 4);
        v20 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL);
        if ( *(__int16 *)(v19 + v20 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v18 = *(__int16 *)(v19 + v20 + 6);
        break;
      case 3:
        v18 = *(__int16 *)(v11 + 6 * v5 + 4);
        break;
      default:
        return (unsigned int)-1073741595;
    }
    RtlInitUnicodeString(
      &DestinationString,
      (PCWSTR)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 24LL)
             + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 16LL) + 2 * v18)));
    if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v22) )
    {
      v15 = v22;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  DestinationString.MaximumLength = 170;
  DestinationString.Buffer = (wchar_t *)v24;
  if ( !(unsigned __int8)RtlLCIDToCultureName(v10, &DestinationString) )
    return (unsigned int)-1073741823;
  if ( *(_DWORD *)(v9 + 120) < 0x3E8u )
  {
    LOBYTE(v16) = 1;
    v17 = sub_18001583C(v9, DestinationString.Buffer, v16, v21);
  }
  else
  {
    if ( (int)sub_18001292C((_QWORD *)v9, DestinationString.Buffer) >= 0 )
      return v7;
    v17 = sub_18000EF6C(v9, DestinationString.Buffer);
  }
  if ( v17 < 0 )
    *a5 = 1;
  return v7;
}

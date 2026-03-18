/*
 * XREFs of NVMeInitStreams @ 0x1C000BD00
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B078 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0010100 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014580 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00147FC (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall NVMeInitStreams(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // di
  __int64 result; // rax
  unsigned int NamespaceId; // eax
  __int64 v6; // r8
  char v7; // cl
  __int16 v8; // cx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // ax
  _DWORD v13[16]; // [rsp+20h] [rbp-50h] BYREF

  v2 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1536) + 256LL) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 3712) & 7) == 3 )
    return *(_BYTE *)(a1 + 3713) != a2 ? 0xC1000003 : 0;
  NamespaceId = GetNamespaceId(a1, a2);
  v7 = *(_BYTE *)(a1 + 3712);
  if ( (v7 & 4) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 3713);
  }
  else if ( NamespaceId > *(_DWORD *)(v6 + 516) || !*(_QWORD *)(a1 + 8LL * v2 + 1648) )
  {
    return 3238002694LL;
  }
  if ( (v7 & 1) == 0 )
  {
    memset(v13, 0, sizeof(v13));
    result = NVMeDirectiveIdentifyReturnParameters(a1);
    if ( (_DWORD)result )
      return result;
    if ( (v13[0] & 2) != 0 )
    {
      result = NVMeDirectiveIdentifyEnableDirective(a1);
      if ( (_DWORD)result )
        return result;
      result = NVMeDirectiveIdentifyReturnParameters(a1);
      if ( (_DWORD)result )
        return result;
      if ( (v13[8] & 2) != 0 )
      {
        *(_BYTE *)(a1 + 3712) |= 1u;
        goto LABEL_15;
      }
    }
    return 3238002695LL;
  }
LABEL_15:
  memset(v13, 0, 0x20uLL);
  result = NVMeDirectiveStreamsReturnParameters(a1);
  if ( (_DWORD)result )
    return result;
  v8 = HIWORD(v13[5]);
  v9 = v13[0];
  v10 = HIWORD(v13[0]);
  *(_DWORD *)(a1 + 3724) = v13[4];
  *(_DWORD *)(a1 + 3728) = LOWORD(v13[5]);
  *(_WORD *)(a1 + 3718) = v13[6];
  *(_WORD *)(a1 + 3720) = v8 + v10;
  *(_BYTE *)(a1 + 3713) = v2;
  *(_WORD *)(a1 + 3714) = v9;
  *(_WORD *)(a1 + 3716) = v8;
  if ( !v9 )
    return 3238002695LL;
  if ( v9 > v10 )
    v9 = v10;
  if ( !v9 )
    return 3238002695LL;
  result = NVMeDirectiveStreamsAllocateResources(a1);
  if ( !(_DWORD)result )
  {
    result = NVMeDirectiveStreamsReturnParameters(a1);
    if ( !(_DWORD)result )
    {
      v11 = HIWORD(v13[5]);
      v12 = HIWORD(v13[5]) + HIWORD(v13[0]);
      *(_WORD *)(a1 + 3716) = HIWORD(v13[5]);
      *(_WORD *)(a1 + 3720) = v12;
      if ( v11 )
      {
        *(_BYTE *)(a1 + 3712) = *(_BYTE *)(a1 + 3712) & 0xF9 | 2;
        return 0LL;
      }
      return 3238002695LL;
    }
  }
  return result;
}

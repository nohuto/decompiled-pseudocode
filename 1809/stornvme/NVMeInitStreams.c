/*
 * XREFs of NVMeInitStreams @ 0x1C000E75C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 *     IoctlStorageStreamsGetParameters @ 0x1C0011488 (IoctlStorageStreamsGetParameters.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0014D50 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0014FC8 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall NVMeInitStreams(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // di
  __int64 result; // rax
  unsigned int NamespaceId; // eax
  __int64 v6; // r8
  char v7; // cl
  unsigned int v8; // esi
  __int64 v9; // r8
  __int16 v10; // cx
  unsigned __int16 v11; // r8
  unsigned __int16 v12; // dx
  __int64 v13; // r8
  __int16 v14; // cx
  __int16 v15; // ax
  unsigned __int16 v16; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v17; // [rsp+22h] [rbp-4Eh]
  int v18; // [rsp+30h] [rbp-40h]
  unsigned __int16 v19; // [rsp+34h] [rbp-3Ch]
  __int16 v20; // [rsp+36h] [rbp-3Ah]
  __int16 v21; // [rsp+38h] [rbp-38h]
  char v22; // [rsp+40h] [rbp-30h]

  v2 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1528) + 256LL) & 0x20) == 0 )
    return 3238002695LL;
  if ( (*(_BYTE *)(a1 + 3704) & 7) == 3 )
    return *(_BYTE *)(a1 + 3705) != a2 ? 0xC1000003 : 0;
  NamespaceId = GetNamespaceId(a1, a2);
  v7 = *(_BYTE *)(a1 + 3704);
  v8 = NamespaceId;
  if ( (v7 & 4) != 0 )
  {
    v2 = *(_BYTE *)(a1 + 3705);
  }
  else if ( NamespaceId > *(_DWORD *)(v6 + 516) || !*(_QWORD *)(a1 + 8LL * v2 + 1640) )
  {
    return 3238002694LL;
  }
  if ( (v7 & 1) == 0 )
  {
    result = NVMeDirectiveIdentifyReturnParameters(a1, NamespaceId, v6, &v16);
    if ( (_DWORD)result )
      return result;
    if ( (v16 & 2) != 0 )
    {
      result = NVMeDirectiveIdentifyEnableDirective(a1);
      if ( (_DWORD)result )
        return result;
      result = NVMeDirectiveIdentifyReturnParameters(a1, v8, v9, &v16);
      if ( (_DWORD)result )
        return result;
      if ( (v22 & 2) != 0 )
      {
        *(_BYTE *)(a1 + 3704) |= 1u;
        goto LABEL_15;
      }
    }
    return 3238002695LL;
  }
LABEL_15:
  result = NVMeDirectiveStreamsReturnParameters(a1, v8, v6, &v16);
  if ( (_DWORD)result )
    return result;
  v10 = v20;
  v11 = v16;
  v12 = v17;
  *(_DWORD *)(a1 + 3716) = v18;
  *(_DWORD *)(a1 + 3720) = v19;
  *(_WORD *)(a1 + 3710) = v21;
  *(_WORD *)(a1 + 3712) = v10 + v12;
  *(_BYTE *)(a1 + 3705) = v2;
  *(_WORD *)(a1 + 3706) = v11;
  *(_WORD *)(a1 + 3708) = v10;
  if ( !v11 )
    return 3238002695LL;
  if ( v11 > v12 )
    v11 = v12;
  if ( !v11 )
    return 3238002695LL;
  result = NVMeDirectiveStreamsAllocateResources(a1, v8);
  if ( !(_DWORD)result )
  {
    result = NVMeDirectiveStreamsReturnParameters(a1, v8, v13, &v16);
    if ( !(_DWORD)result )
    {
      v14 = v20;
      v15 = v20 + v17;
      *(_WORD *)(a1 + 3708) = v20;
      *(_WORD *)(a1 + 3712) = v15;
      if ( v14 )
      {
        *(_BYTE *)(a1 + 3704) = *(_BYTE *)(a1 + 3704) & 0xF9 | 2;
        return 0LL;
      }
      return 3238002695LL;
    }
  }
  return result;
}

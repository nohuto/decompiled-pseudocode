/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x1C00112E4
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00150B8 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edi
  _DWORD *v6; // rsi
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned __int8 v9; // cl
  unsigned int NamespaceId; // r15d
  __int64 v11; // r8
  int v12; // edx
  unsigned __int64 v13; // rax
  unsigned int Status; // eax
  int v16; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+50h] [rbp-38h]

  v2 = *(_BYTE *)(a2 + 2);
  v3 = 0;
  if ( v2 == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v7) >= 0x24u )
  {
    if ( v2 == 40 )
      v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
    else
      v9 = *(_BYTE *)(a2 + 7);
    if ( v9 == 255 )
    {
      *(_BYTE *)(a2 + 3) = 32;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(a1 + 3704) & 3) == 3 && *(unsigned __int8 *)(a1 + 3705) == v9 )
    {
      NamespaceId = GetNamespaceId(a1, v9);
      v8 = NVMeDirectiveStreamsReturnParameters(a1, NamespaceId, v11, v17);
      if ( v8 )
      {
LABEL_15:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_29;
      }
      v12 = v18;
      v13 = *(unsigned int *)(a2 + v7);
      v16 = v18;
      if ( v13 < (unsigned __int64)(4 * (unsigned int)v18 + 12) + 28 )
      {
        v6[8] = 4 * v18 + 12;
        v3 = 8;
        v6[7] = 1;
        v8 = -1056964604;
        *(_BYTE *)(a2 + 3) = 18;
        goto LABEL_29;
      }
      if ( v6[7] == 1 )
      {
        if ( v18 )
        {
          Status = NVMeDirectiveStreamsGetStatus(a1, NamespaceId, v18, (unsigned int)&v16, (__int64)(v6 + 10));
          v12 = v16;
          v8 = Status;
        }
        else
        {
          v8 = 0;
        }
        if ( !v8 )
        {
          v6[9] = v12;
          v3 = 4 * v12 + 12;
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_29;
        }
        if ( v8 == -1056964604 )
        {
          v6[7] = 1;
          v6[8] = 4 * v12 + 12;
          v3 = 8;
          *(_BYTE *)(a2 + 3) = 18;
          goto LABEL_29;
        }
        goto LABEL_15;
      }
      v8 = -1056964602;
    }
    else
    {
      v8 = -1056964601;
    }
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_29;
  }
  *(_BYTE *)(a2 + 3) = 21;
LABEL_6:
  v8 = -1056964602;
LABEL_29:
  v6[6] = v3;
  return v8;
}

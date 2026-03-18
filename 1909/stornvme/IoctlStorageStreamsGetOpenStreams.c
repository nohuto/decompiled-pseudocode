/*
 * XREFs of IoctlStorageStreamsGetOpenStreams @ 0x1C000FF48
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C00148EC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetOpenStreams(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edi
  _DWORD *v6; // rsi
  __int64 v7; // r14
  unsigned int v8; // ecx
  unsigned __int8 v9; // cl
  int v10; // edx
  unsigned int Status; // eax
  int v13; // [rsp+30h] [rbp-58h]
  _WORD v14[16]; // [rsp+38h] [rbp-50h] BYREF

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
    if ( (*(_BYTE *)(a1 + 3712) & 3) == 3 && *(unsigned __int8 *)(a1 + 3713) == v9 )
    {
      GetNamespaceId(a1, v9);
      memset(v14, 0, sizeof(v14));
      v8 = NVMeDirectiveStreamsReturnParameters(a1);
      if ( v8 )
      {
LABEL_15:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_29;
      }
      v10 = v14[12];
      v13 = v14[12];
      if ( *(unsigned int *)(a2 + v7) < (unsigned __int64)(4 * (unsigned int)v14[12] + 12) + 28 )
      {
        v6[8] = 4 * v14[12] + 12;
        v3 = 8;
        v6[7] = 1;
        v8 = -1056964604;
        *(_BYTE *)(a2 + 3) = 18;
        goto LABEL_29;
      }
      if ( v6[7] == 1 )
      {
        if ( v14[12] )
        {
          Status = NVMeDirectiveStreamsGetStatus(a1, (__int64)(v6 + 10));
          v10 = v13;
          v8 = Status;
        }
        else
        {
          v8 = 0;
        }
        if ( !v8 )
        {
          v6[9] = v10;
          v3 = 4 * v10 + 12;
          *(_BYTE *)(a2 + 3) = 1;
          goto LABEL_29;
        }
        if ( v8 == -1056964604 )
        {
          v6[7] = 1;
          v6[8] = 4 * v10 + 12;
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

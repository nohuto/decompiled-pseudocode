/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C0011488
 * Callers:
 *     IoctlToNVMe @ 0x1C0002698 (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0005144 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     NVMeInitStreams @ 0x1C000E75C (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0015380 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r13
  int v5; // r15d
  __int64 v6; // rdi
  unsigned int v7; // edx
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // eax
  _DWORD *v12; // rbx
  unsigned int inited; // r14d
  unsigned int NamespaceId; // eax
  __int64 v15; // r8
  __int16 v16; // ax
  int v17; // r12d
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  unsigned __int16 v22; // cx
  __int64 v24; // [rsp+D8h] [rbp-70h]
  _BYTE v25[2]; // [rsp+E0h] [rbp-68h] BYREF
  __int16 v26; // [rsp+E2h] [rbp-66h]
  __int16 v27; // [rsp+F6h] [rbp-52h]
  __int16 v28; // [rsp+F8h] [rbp-50h]

  v24 = *(_QWORD *)(a1 + 1640);
  v4 = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v6 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(unsigned __int8 *)(a2 + 7);
  GetNamespaceId(a1, v6);
  if ( (unsigned int)v6 >= 0xFF || !v8 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_30;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v4 = *(_DWORD **)(a2 + 64);
    v10 = 60LL;
  }
  else
  {
    v4 = *(_DWORD **)(a2 + 24);
    v10 = 16LL;
  }
  v11 = *(_DWORD *)(a2 + v10);
  v12 = v4 + 7;
  if ( v11 < 0x4C )
  {
    if ( v11 >= 0x24 )
    {
      *v12 = 1;
      v4[8] = 48;
      inited = -1056964604;
      v5 = 8;
      *(_BYTE *)(a2 + 3) = 18;
      goto LABEL_31;
    }
    goto LABEL_11;
  }
  if ( *v12 != 1 )
  {
LABEL_11:
    *(_BYTE *)(a2 + 3) = 6;
LABEL_30:
    inited = -1056964602;
    goto LABEL_31;
  }
  if ( (*(_BYTE *)(a1 + 3704) & 7) == 3 && *(_BYTE *)(a1 + 3705) == (_BYTE)v6 && *(_WORD *)(a1 + 3708) > v9 )
  {
    NamespaceId = GetNamespaceId(a1, v7);
    inited = NVMeDirectiveStreamsReturnParameters(a1, NamespaceId, v15, v25);
    if ( inited )
    {
      inited = 0;
      *(_WORD *)(a1 + 3710) = -1;
      v16 = -1;
    }
    else
    {
      v16 = v26 + v27;
      *(_WORD *)(a1 + 3710) = v28;
    }
    *(_WORD *)(a1 + 3712) = v16;
  }
  else
  {
    inited = NVMeInitStreams(a1, v7);
  }
  v17 = *(_DWORD *)(v24 + 52);
  if ( inited )
  {
    *(_BYTE *)(a2 + 3) = 4;
  }
  else
  {
    v5 = 48;
    memset(v4 + 7, 0, 0x30uLL);
    *v12 = 1;
    v4[8] = 48;
    v4[9] = v17;
    v18 = v17 * *(_DWORD *)(a1 + 3716);
    v4[10] = v18;
    v4[11] = v18 * *(_DWORD *)(a1 + 3720);
    v19 = *(unsigned __int16 *)(a1 + 3708);
    v4[18] = v19;
    v4[13] = v19;
    v4[14] = v18;
    v4[12] = 1;
    v4[15] = *(unsigned __int16 *)(a1 + 3708);
    v20 = -1;
    v21 = *(unsigned __int16 *)(a1 + 3710);
    if ( (_WORD)v21 == 0xFFFF )
      v21 = -1;
    v4[17] = v21;
    v22 = *(_WORD *)(a1 + 3712);
    if ( v22 != 0xFFFF )
      v20 = v22;
    v4[16] = v20;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_31:
  if ( (unsigned int)v6 < 0xFF )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v6 + 1640), 0LL);
  v4[6] = v5;
  return inited;
}

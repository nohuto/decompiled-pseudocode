/*
 * XREFs of IoctlStorageStreamsGetParameters @ 0x1C0010100
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0014BB4 (NVMeDirectiveStreamsReturnParameters.c)
 */

__int64 __fastcall IoctlStorageStreamsGetParameters(__int64 a1, __int64 a2)
{
  _DWORD *v4; // r13
  int v5; // r15d
  __int64 v6; // rdi
  unsigned __int8 v7; // dl
  __int64 v8; // r8
  unsigned __int16 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // eax
  _DWORD *v12; // rbx
  unsigned int inited; // r14d
  __int16 v14; // ax
  int v15; // r12d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  unsigned __int16 v20; // cx
  __int64 v22; // [rsp+D8h] [rbp-70h]
  _WORD v23[16]; // [rsp+E0h] [rbp-68h] BYREF

  v22 = *(_QWORD *)(a1 + 1648);
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
  if ( (*(_BYTE *)(a1 + 3712) & 7) == 3 && *(_BYTE *)(a1 + 3713) == (_BYTE)v6 && *(_WORD *)(a1 + 3716) > v9 )
  {
    memset(v23, 0, sizeof(v23));
    GetNamespaceId(a1, v6);
    inited = NVMeDirectiveStreamsReturnParameters(a1);
    if ( inited )
    {
      inited = 0;
      *(_WORD *)(a1 + 3718) = -1;
      v14 = -1;
    }
    else
    {
      v14 = v23[1] + v23[11];
      *(_WORD *)(a1 + 3718) = v23[12];
    }
    *(_WORD *)(a1 + 3720) = v14;
  }
  else
  {
    inited = NVMeInitStreams(a1, v7);
  }
  v15 = *(_DWORD *)(v22 + 52);
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
    v4[9] = v15;
    v16 = v15 * *(_DWORD *)(a1 + 3724);
    v4[10] = v16;
    v4[11] = v16 * *(_DWORD *)(a1 + 3728);
    v17 = *(unsigned __int16 *)(a1 + 3716);
    v4[18] = v17;
    v4[13] = v17;
    v4[14] = v16;
    v4[12] = 1;
    v4[15] = *(unsigned __int16 *)(a1 + 3716);
    v18 = -1;
    v19 = *(unsigned __int16 *)(a1 + 3718);
    if ( (_WORD)v19 == 0xFFFF )
      v19 = -1;
    v4[17] = v19;
    v20 = *(_WORD *)(a1 + 3720);
    if ( v20 != 0xFFFF )
      v18 = v20;
    v4[16] = v18;
    *(_BYTE *)(a2 + 3) = 1;
  }
LABEL_31:
  if ( (unsigned int)v6 < 0xFF )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v6 + 1648));
  v4[6] = v5;
  return inited;
}

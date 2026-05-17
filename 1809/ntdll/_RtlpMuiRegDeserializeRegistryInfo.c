/*
 * XREFs of _RtlpMuiRegDeserializeRegistryInfo @ 0x18004C8C0
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18004B7A8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegDeserializeRegistryInfo(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  unsigned __int64 v4; // r11
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v17; // rdx

  v3 = 0;
  v4 = a2;
  if ( !a3 || !a1 || a2 < 0xA8 )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
  {
    if ( a2 < (unsigned __int64)(unsigned int)v6 + 24 )
      return (unsigned int)-1073741811;
    v7 = a1 + (unsigned int)v6;
    *(_QWORD *)(a1 + 24) = v7;
    if ( (unsigned int)v4 < *(_DWORD *)v7 + (int)v6 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v7 + 16) = v7 + 24;
  }
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 )
  {
    if ( v4 < (unsigned __int64)(unsigned int)v8 + 32 )
      return (unsigned int)-1073741811;
    v9 = a1 + (unsigned int)v8;
    *(_QWORD *)(a1 + 32) = v9;
    if ( (unsigned int)v4 < *(_DWORD *)v9 + (int)v8 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v9 + 16) = v9 + 32;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)
                                             + 2LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 4LL);
  }
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 )
  {
    if ( v4 < (unsigned __int64)(unsigned int)v10 + 16 )
      return (unsigned int)-1073741811;
    v11 = a1 + (unsigned int)v10;
    *(_QWORD *)(a1 + 40) = v11;
    if ( (unsigned int)v4 < *(_DWORD *)v11 + (int)v10 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v11 + 8) = v11 + 16;
  }
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    if ( v4 < (unsigned __int64)(unsigned int)v12 + 64 )
      return (unsigned int)-1073741811;
    v17 = a1 + (unsigned int)v12;
    *(_QWORD *)(a1 + 56) = v17;
    if ( (unsigned int)v4 < *(_DWORD *)v17 + (int)v12 )
      return (unsigned int)-1073741811;
    *(_QWORD *)(v17 + 24) = v17 + 64;
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL) = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 128);
  if ( v13 )
  {
    if ( (unsigned int)v4 < (int)v13 + *(_DWORD *)(a1 + 148) )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 128) = a1 + (unsigned int)v13;
  }
  v14 = *(_QWORD *)(a1 + 152);
  if ( v14 )
  {
    if ( (unsigned int)v4 < (int)v14 + *(_DWORD *)(a1 + 160) )
      return (unsigned int)-1073741811;
    *(_QWORD *)(a1 + 152) = a1 + (unsigned int)v14;
  }
  v15 = *(_QWORD *)(a1 + 136);
  if ( v15 )
  {
    if ( (unsigned int)v4 >= (int)v15 + *(_DWORD *)(a1 + 144) )
    {
      *(_QWORD *)(a1 + 136) = a1 + (unsigned int)v15;
      goto LABEL_22;
    }
    return (unsigned int)-1073741811;
  }
LABEL_22:
  *(_DWORD *)a1 = 1024;
  *a3 = a1;
  return v3;
}

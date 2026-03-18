/*
 * XREFs of IoctlStorageStreamsReleaseId @ 0x1C00104C8
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0003DA4 (GetNamespaceId.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0014AC4 (NVMeDirectiveStreamsReleaseId.c)
 */

__int64 __fastcall IoctlStorageStreamsReleaseId(__int64 a1, __int64 a2)
{
  char v4; // cl
  _DWORD *v5; // rdi
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int v10; // r9d
  __int64 result; // rax

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
  {
    v5 = *(_DWORD **)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_DWORD **)(a2 + 24);
    v6 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v6) < 0x28u )
  {
    *(_BYTE *)(a2 + 3) = 21;
LABEL_22:
    result = 3238002694LL;
    goto LABEL_23;
  }
  if ( v5[8] < 0xCu || v5[7] != 1 )
  {
    *(_BYTE *)(a2 + 3) = 6;
    goto LABEL_22;
  }
  if ( v4 == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(_BYTE *)(a2 + 7);
  v8 = v7;
  if ( v7 == 255 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(a1 + 3712) & 3) == 3 && *(unsigned __int8 *)(a1 + 3713) == v7 )
  {
    v9 = v5[9];
    if ( !v9 || *(unsigned __int16 *)(a1 + 3714) < v9 || v9 > 0xFFFF )
    {
      *(_BYTE *)(a2 + 3) = 6;
      goto LABEL_22;
    }
    GetNamespaceId(a1, v8);
    result = NVMeDirectiveStreamsReleaseId(v10);
    *(_BYTE *)(a2 + 3) = (_DWORD)result != 0 ? 4 : 1;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 6;
    result = 3238002695LL;
  }
LABEL_23:
  v5[6] = 0;
  return result;
}

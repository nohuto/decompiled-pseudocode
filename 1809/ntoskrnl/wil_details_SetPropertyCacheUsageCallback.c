/*
 * XREFs of wil_details_SetPropertyCacheUsageCallback @ 0x14026BFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetPropertyCacheUsageCallback(unsigned int *a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v4; // edx
  int v5; // r8d
  unsigned int v6; // r9d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 result; // rax

  v2 = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 4LL) = 0;
  **(_DWORD **)a2 = (*a1 & 8) == 0;
  *a1 |= 8u;
  v4 = *a1;
  v5 = *(_DWORD *)(a2 + 8);
  if ( ((*a1 >> 15) & 1) == (v5 == 4) )
  {
    v6 = *a1;
  }
  else
  {
    if ( (v4 & 0x7FC0) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)a2 + 8LL) = v5 == 0 ? 4 : 0;
      *(_DWORD *)(*(_QWORD *)a2 + 4LL) = (*a1 >> 6) & 0x1FF;
      *a1 &= 0xFFFF803F;
      v4 = *a1;
      v5 = *(_DWORD *)(a2 + 8);
    }
    if ( v5 == 4 )
      v2 = 0x8000;
    v6 = v4 & 0xFFFF7FFF | v2;
    *a1 = v6;
  }
  v7 = ((unsigned __int64)v6 >> 6) & 0x1FF;
  v8 = *(_QWORD *)(a2 + 16) + v7;
  if ( v8 > 0x1FF || v8 < v7 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(*(_QWORD *)a2 + 8LL) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(*(_QWORD *)a2 + 4LL) = (*a1 >> 6) & 0x1FF;
    v6 = *a1;
  }
  result = 1LL;
  *a1 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)((_WORD)v8 << 6)) & 0x7FC0;
  return result;
}

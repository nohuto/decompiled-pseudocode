/*
 * XREFs of MiCheckWsLimits @ 0x14013C3F8
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckWsLimits(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3, char a4, char a5)
{
  unsigned __int64 v5; // rbx
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // cl
  __int64 result; // rax

  v5 = *a2;
  v6 = 0;
  v7 = *a3;
  if ( *a2 > *a3 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = *a2;
    v6 = 1073741826;
  }
  if ( v7 > 0x7FFFFFFF0LL )
  {
    v7 = 0x7FFFFFFF0LL;
    v6 = 1073741826;
  }
  if ( v5 > 0x7FFFFFFF0LL )
  {
    v5 = 0x7FFFFFFF0LL;
    v6 = 1073741826;
  }
  v9 = 20LL;
  if ( v5 < 0x14 )
  {
    v5 = 20LL;
    v6 = 1073741826;
    if ( v7 < 0x14 )
      v7 = 20LL;
  }
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
    v9 = *(_QWORD *)(v10 + 32);
  if ( v9 + 6 >= v7 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = v9 + 7;
    v6 = 1073741826;
  }
  if ( (a4 & 4) == 0 )
  {
    v11 = *(_BYTE *)(a1 + 184);
    if ( (v11 >= 0 || (a4 & 8) != 0) && (a4 & 1) == 0 && (((a4 & 2) == 0) & ((unsigned __int8)v11 >> 6)) == 0 )
      goto LABEL_14;
  }
  if ( v5 + 6 >= v7 )
  {
    if ( (a5 & 1) == 0 )
      return 3221225548LL;
    v7 = v5 + 7;
    v6 = 1073741826;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 || v7 >= 0x1000 )
    goto LABEL_14;
  if ( (a5 & 1) != 0 )
  {
    v7 = 4096LL;
    v6 = 1073741826;
LABEL_14:
    *a2 = v5;
    result = v6;
    *a3 = v7;
    return result;
  }
  return 3221225548LL;
}

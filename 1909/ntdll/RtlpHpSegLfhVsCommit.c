/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180047370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180047490 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010B280 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char v6; // r8
  __int64 v7; // r10
  char v8; // r9
  __int64 v9; // r10
  char v10; // al
  __int64 DescriptorValidateSafe; // rax

  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
    v6 = *(_BYTE *)(a1 + 8);
    v9 = DescriptorValidateSafe;
    v8 = v6;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 8);
    v7 = a2 & *(_QWORD *)a1;
    v8 = v6;
    if ( (a1 ^ v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v7 + 0x10)) == 0xA2E64EADA2E64EADuLL )
      v9 = 32 * ((unsigned __int64)(unsigned int)(a2 - v7) >> v6) + v7;
    else
      v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_13;
  v10 = *(_BYTE *)(v9 + 24);
  if ( (v10 & 1) == 0 )
    goto LABEL_13;
  if ( (v10 & 2) != 0 )
  {
    if ( (v10 & 0xCu) >= 8 || (v8 = v6, (((1 << v6) - 1) & a2) == 0) )
    {
      v6 = v8;
      return RtlpHpSegPageRangeCommit(
               a1,
               v9,
               ((_DWORD)a2 - (unsigned int)((v9 - (v9 & *(_QWORD *)a1)) >> 5 << v6) - ((unsigned int)v9 & *(_DWORD *)a1)) >> 12,
               a3 >> 12,
               0,
               0LL);
    }
LABEL_14:
    v9 = 0LL;
    return RtlpHpSegPageRangeCommit(
             a1,
             v9,
             ((_DWORD)a2 - (unsigned int)((v9 - (v9 & *(_QWORD *)a1)) >> 5 << v6) - ((unsigned int)v9 & *(_DWORD *)a1)) >> 12,
             a3 >> 12,
             0,
             0LL);
  }
  v9 += -32LL * *(unsigned __int8 *)(v9 + 31);
  if ( (*(_BYTE *)(v9 + 24) & 3) != 3 || (v6 = v8, (*(_BYTE *)(v9 + 24) & 0xCu) < 8) )
  {
LABEL_13:
    v6 = v8;
    goto LABEL_14;
  }
  return RtlpHpSegPageRangeCommit(
           a1,
           v9,
           ((_DWORD)a2 - (unsigned int)((v9 - (v9 & *(_QWORD *)a1)) >> 5 << v6) - ((unsigned int)v9 & *(_DWORD *)a1)) >> 12,
           a3 >> 12,
           0,
           0LL);
}

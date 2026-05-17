/*
 * XREFs of sub_1800D8110 @ 0x1800D8110
 * Callers:
 *     <none>
 * Callees:
 *     RtlCommitDebugInfo_0 @ 0x180075708 (RtlCommitDebugInfo_0.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800EEE20 @ 0x1800EEE20 (sub_1800EEE20.c)
 */

__int64 __fastcall sub_1800D8110(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rsi
  char *v4; // rax
  char *v5; // rdi
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 *i; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax

  v2 = (_DWORD *)a2[14];
  v4 = RtlCommitDebugInfo_0(a2, 0x58u);
  v5 = v4;
  if ( !v4 )
    return 3221225495LL;
  memset(v4, 0, 0x58uLL);
  result = sub_1800EEE20(a1, v5);
  if ( (int)result < 0 )
  {
    v7 = *((_QWORD *)v5 + 3);
    *(_QWORD *)v5 = a1;
    *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v5 + 6) = 16;
    *((_WORD *)v5 + 7) = *(_WORD *)(a1 + 304);
    for ( i = *(__int64 **)(a1 + 288); i != (__int64 *)(a1 + 288); i = (__int64 *)*i )
    {
      v7 += (unsigned int)((*((_DWORD *)i + 8) - *((_DWORD *)i + 14)) << 12);
      *((_QWORD *)v5 + 3) = v7;
    }
    if ( *(_DWORD *)(a1 + 16) == -571548178
      || (*(_BYTE *)(a1 + 418) != 2 ? (v9 = 0LL) : (v9 = *(_QWORD *)(a1 + 408)), !v9) )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 40) - v9;
    }
    *((_QWORD *)v5 + 3) = v7 + v10;
    *((_QWORD *)v5 + 2) = v7 + v10 - 16LL * *(_QWORD *)(a1 + 192);
    ++*v2;
    return 0LL;
  }
  else
  {
    ++*v2;
  }
  return result;
}

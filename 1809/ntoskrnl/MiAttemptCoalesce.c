/*
 * XREFs of MiAttemptCoalesce @ 0x140100B80
 * Callers:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiAdjustPteBins @ 0x1400EFB88 (MiAdjustPteBins.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x140100CB8 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x140100D60 (RtlInterlockedSetClearRunEx.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  _QWORD *v14; // r8
  _QWORD *v15; // r9
  bool v16; // zf
  _QWORD *v17; // r8

  v3 = 32LL;
  if ( (*(_DWORD *)(a1 + 24) & 4) == 0 )
    v3 = 512LL;
  v5 = 0LL;
  LOBYTE(v6) = v3 + a2;
  v7 = ~(v3 - 1);
  v8 = a2 & v7;
  v9 = (v7 & (v3 + a2 + a3 - 1)) - (a2 & v7);
  if ( v9 )
  {
    do
    {
      v10 = v5 + v8;
      v11 = v3 - 1 + v5 + v8;
      if ( v11 < *(_QWORD *)a1 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = *(_QWORD *)(v12 + 8 * (v10 >> 6));
        v14 = (_QWORD *)(v12 + 8 * (v10 >> 6));
        v15 = (_QWORD *)(v12 + 8 * (v11 >> 6));
        if ( v14 == v15 )
        {
          v16 = (v13 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v3) << v10)) == 0;
LABEL_10:
          LOBYTE(v6) = v16;
          if ( v16 )
          {
            LODWORD(v6) = RtlInterlockedSetClearRunEx(a1, v5 + v8, v3);
            if ( (_DWORD)v6 == 1 )
              LOBYTE(v6) = MiReturnSystemPtes(a1, v5 + v8, v3, 0LL);
          }
          goto LABEL_7;
        }
        v6 = -1LL << v10;
        if ( (v13 & (-1LL << v10)) == 0 )
        {
          v17 = v14 + 1;
          if ( v17 != v15 )
          {
            while ( !*v17 )
            {
              if ( ++v17 == v15 )
                goto LABEL_16;
            }
            goto LABEL_7;
          }
LABEL_16:
          v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v11) & *v17) == 0;
          goto LABEL_10;
        }
      }
LABEL_7:
      v5 += v3;
    }
    while ( v5 < v9 );
  }
  return v6;
}

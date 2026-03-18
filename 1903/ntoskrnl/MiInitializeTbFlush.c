/*
 * XREFs of MiInitializeTbFlush @ 0x140A0F138
 * Callers:
 *     MiInitializeTbFlushing @ 0x140A0F0EC (MiInitializeTbFlushing.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x14006AEF0 (MiReleasePtes.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

ULONG_PTR __fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  ULONG_PTR result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  bool v22; // zf
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // r11
  signed __int32 v27[6]; // [rsp+8h] [rbp-100h] BYREF
  __int128 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int128 v30; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v32; // [rsp+60h] [rbp-A8h]
  ULONG_PTR v33; // [rsp+68h] [rbp-A0h]
  _QWORD v34[24]; // [rsp+78h] [rbp-90h] BYREF

  v32 = a1;
  v1 = a1;
  v30 = 0uLL;
  v28 = 0uLL;
  memset(v34, 0, 0xB8uLL);
  result = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)(unsigned int)v1);
  v33 = result;
  v3 = result;
  if ( result )
  {
    v34[3] = 0LL;
    LODWORD(v34[1]) = 20;
    MiMakeValidPte(result, qword_140466848, 1);
    v4 = (__int64)(v3 << 25) >> 16;
    v5 = v4;
    if ( !v1 )
    {
LABEL_7:
      v8 = 0;
      v9 = 0LL;
      v10 = 0LL;
      if ( !v1 )
        goto $exit$104_0;
      while ( 1 )
      {
        v28 = 0uLL;
        v11 = v1 - v10;
        v29 = 4LL;
        v12 = (v1 - v10) >> 1;
        do
        {
          v31 = __rdtsc();
          _InterlockedOr(v27, 0);
          if ( v10 )
          {
            MiInsertTbFlushEntry((__int64)v34, v4, v10, 0);
            MiFlushTbList((int *)v34, v13, v14, v15);
          }
          else
          {
            KeFlushTb(0LL, 2u);
          }
          _InterlockedOr(v27, 0);
          *(_QWORD *)&v28 = __rdtsc() - v31 + v28;
          v16 = __rdtsc();
          _InterlockedOr(v27, 0);
          if ( v12 )
          {
            v17 = v4 + (v10 << 12);
            v18 = (v11 << 12) + v17 - 4096;
            v19 = v12;
            do
            {
              v17 += 4096LL;
              v18 -= 4096LL;
              --v19;
            }
            while ( v19 );
          }
          _InterlockedOr(v27, 0);
          v20 = __rdtsc();
          v21 = *((_QWORD *)&v28 + 1) + ((unsigned int)v20 | ((unsigned __int64)HIDWORD(v20) << 32)) - v16;
          v22 = v29-- == 1;
          *((_QWORD *)&v28 + 1) = v21;
        }
        while ( !v22 );
        v1 = v32;
        v23 = (unsigned __int64)v28 >> 2;
        v24 = v21 >> 2;
        *(_QWORD *)&v28 = (unsigned __int64)v28 >> 2;
        *((_QWORD *)&v28 + 1) = v24;
        if ( v10 )
        {
          if ( v23 + v24 >= *((_QWORD *)&v30 + 1) + (_QWORD)v30 )
          {
            v25 = v10 - 1;
            if ( v8 )
              v25 = v9;
            ++v8;
            v9 = v25;
            if ( v8 == 3 )
            {
              qword_140465B50 = v25;
LABEL_25:
              if ( v8 == 3 )
                return MiReleasePtes((__int64)&qword_1404669C0, v33, v1);
$exit$104_0:
              qword_140465B50 = v10;
              return MiReleasePtes((__int64)&qword_1404669C0, v33, v1);
            }
          }
          else
          {
            v8 = 0;
          }
        }
        else
        {
          v30 = v28;
        }
        if ( ++v10 >= v32 )
          goto LABEL_25;
      }
    }
    v6 = v1;
    while ( 1 )
    {
      if ( MiPteInShadowRange(v3) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140465BEC) && (v26 & 1) != 0 )
            v7 |= 0x8000000000000000uLL;
          *(_QWORD *)v3 = v7;
          MiWritePteShadow(v3);
          goto LABEL_6;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v26 & 1) != 0 )
        {
          v7 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v3 = v7;
LABEL_6:
      v3 += 8LL;
      v5 += 4096LL;
      if ( !--v6 )
        goto LABEL_7;
    }
  }
  return result;
}

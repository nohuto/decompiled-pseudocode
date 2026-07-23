/*
 * XREFs of MiInitializeTbFlush @ 0x1409BAC04
 * Callers:
 *     MiInitializeTbFlushing @ 0x1409BABB8 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     KeFlushTb @ 0x1400755A0 (KeFlushTb.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

ULONG_PTR __fastcall MiInitializeTbFlush(unsigned __int64 a1)
{
  unsigned __int64 v1; // rsi
  ULONG_PTR result; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // edi
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  char v25; // r11
  signed __int32 v26[8]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v27; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v28; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int128 v31; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v32; // [rsp+58h] [rbp-B0h]
  ULONG_PTR v33; // [rsp+60h] [rbp-A8h]
  __int128 v34; // [rsp+68h] [rbp-A0h]
  int v35; // [rsp+78h] [rbp-90h] BYREF
  int v36; // [rsp+7Ch] [rbp-8Ch]
  int v37; // [rsp+80h] [rbp-88h]
  int v38; // [rsp+84h] [rbp-84h]
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]

  v32 = a1;
  v1 = a1;
  v31 = 0uLL;
  result = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)a1);
  v33 = result;
  v3 = result;
  if ( result )
  {
    v38 = 0;
    v35 = 0;
    LOWORD(v36) = 0;
    v39 = 0LL;
    v40 = 0LL;
    v37 = 20;
    MiMakeValidPte(result, qword_14043BE88, 1);
    v4 = (__int64)(v3 << 25) >> 16;
    v5 = v4;
    if ( !v1 )
    {
LABEL_7:
      v8 = 0LL;
      v30 = 0LL;
      LODWORD(v27) = 0;
      if ( !v1 )
        goto LABEL_29;
      while ( 1 )
      {
        v29 = 4LL;
        v28 = v1 - v8;
        v9 = 0LL;
        v10 = 0LL;
        v11 = (v1 - v8) >> 1;
        v12 = v1 - v8;
        do
        {
          v28 = __rdtsc();
          _InterlockedOr(v26, 0);
          if ( v8 )
          {
            MiInsertTbFlushEntry((__int64)&v35, v4, v8, 0);
            MiFlushTbList(&v35, v13, v14, v15);
          }
          else
          {
            KeFlushTb(0, 2u);
          }
          _InterlockedOr(v26, 0);
          v9 += __rdtsc() - v28;
          v16 = __rdtsc();
          _InterlockedOr(v26, 0);
          if ( v11 )
          {
            v17 = v4 + (v8 << 12);
            v18 = v11;
            v19 = v17 + (v12 << 12) - 4096;
            do
            {
              v17 += 4096LL;
              v19 -= 4096LL;
              --v18;
            }
            while ( v18 );
          }
          _InterlockedOr(v26, 0);
          v20 = __rdtsc();
          v10 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v16;
          --v29;
        }
        while ( v29 );
        v21 = v27;
        v1 = v32;
        v22 = v9 >> 2;
        v23 = v10 >> 2;
        *(_QWORD *)&v34 = v22;
        *((_QWORD *)&v34 + 1) = v23;
        if ( v8 )
        {
          if ( v23 + v22 >= *((_QWORD *)&v31 + 1) + (_QWORD)v31 )
          {
            v24 = v8 - 1;
            if ( (_DWORD)v27 )
              v24 = v30;
            v21 = v27 + 1;
            v30 = v24;
            LODWORD(v27) = v21;
            if ( v21 == 3 )
            {
              qword_14043B1D0 = v24;
LABEL_25:
              if ( v21 == 3 )
                return MiReleasePtes((__int64)&qword_14043C060, v33, v1);
LABEL_29:
              qword_14043B1D0 = v8;
              return MiReleasePtes((__int64)&qword_14043C060, v33, v1);
            }
          }
          else
          {
            v21 = 0;
            LODWORD(v27) = 0;
          }
        }
        else
        {
          v31 = v34;
        }
        if ( ++v8 >= v32 )
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
          if ( !HIBYTE(word_14043B26C) && (v25 & 1) != 0 )
            v7 |= 0x8000000000000000uLL;
          *(_QWORD *)v3 = v7;
          MiWritePteShadow(v3, v7);
          goto LABEL_6;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v25 & 1) != 0 )
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

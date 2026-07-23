/*
 * XREFs of MiJoinBitmapPages @ 0x1402B50B0
 * Callers:
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiReturnPfnList @ 0x140185D7C (MiReturnPfnList.c)
 *     MiReturnSplitPageCharges @ 0x140192914 (MiReturnSplitPageCharges.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiJoinBitmapPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // r15
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  BOOL v10; // ebp
  int v11; // r8d
  __int64 v12; // r11
  bool v13; // zf
  int v14; // r8d
  __int64 v15; // rdx
  char v16; // r11
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // [rsp+20h] [rbp-108h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-100h]
  int v23; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v24; // [rsp+34h] [rbp-F4h]
  int v25; // [rsp+38h] [rbp-F0h]
  int v26; // [rsp+3Ch] [rbp-ECh]
  __int64 v27; // [rsp+40h] [rbp-E8h]
  __int64 v28; // [rsp+48h] [rbp-E0h]

  v22 = a2;
  v4 = a2;
  v5 = (__int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMakeValidPte((unsigned __int64)v5, qword_14043BE88, 536870913);
  v6 = 0LL;
  if ( a3 )
  {
    v7 = a3;
    while ( 1 )
    {
      v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v21);
      *(_QWORD *)(48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) = v6;
      v6 = 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v10 = MiPteInShadowRange((unsigned __int64)v5);
      if ( !v10 )
        goto LABEL_11;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v11 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_11;
        v13 = (v9 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_11;
        v13 = (v9 & 1) == 0;
      }
      if ( !v13 )
        v9 |= 0x8000000000000000uLL;
LABEL_11:
      *v5 = v9;
      if ( v11 )
        MiWritePteShadow((__int64)v5, v9);
      v14 = 0;
      v15 = v12;
      if ( !v10 )
        goto LABEL_21;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v14 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v17 = (v16 & 1) == 0;
          goto LABEL_19;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v17 = (v16 & 1) == 0;
LABEL_19:
        if ( !v17 )
          v15 |= 0x8000000000000000uLL;
      }
LABEL_21:
      *v5 = v15;
      if ( v14 )
        MiWritePteShadow((__int64)v5, v15);
      ++v5;
      if ( !--v7 )
      {
        v4 = v22;
        break;
      }
    }
  }
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 20;
  MiInsertTbFlushEntry((__int64)&v23, v4, a3, 0);
  MiFlushTbList(&v23, v18, v19, v20);
  MiReturnPfnList(v6);
  MiReturnSplitPageCharges((__int64)&MiSystemPartition, a3, 5);
}

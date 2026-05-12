/*
 * XREFs of RaidInitializePerfOpts @ 0x1C0024F68
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqdqqqq @ 0x1C0036A90 (McTemplateK0qqdqqqq.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     RaidIsDmaInitialized @ 0x1C006E904 (RaidIsDmaInitialized.c)
 *     RaidInitializeDma @ 0x1C006E91C (RaidInitializeDma.c)
 */

__int64 __fastcall RaidInitializePerfOpts(__int64 a1, char a2, unsigned int *a3)
{
  __int64 v3; // r11
  char v4; // r12
  char v5; // dl
  unsigned int *v6; // rdi
  __int64 v7; // rsi
  int v8; // ebp
  bool v9; // r13
  char v10; // r10
  char v11; // r9
  unsigned int v12; // ebx
  __int64 *v13; // rax
  unsigned int v14; // eax
  int v15; // r14d
  unsigned int v16; // ecx
  __int16 v17; // dx
  unsigned int v18; // r14d
  int v19; // ecx
  unsigned int v20; // r13d
  char v21; // r12
  unsigned int v22; // r13d
  __int64 v23; // rcx
  unsigned __int16 epi16; // r11
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r10
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  __int64 v31; // rax
  __int64 v32; // r9
  PDEVICE_OBJECT v33; // rcx
  __int64 v34; // rdx
  PDEVICE_OBJECT v35; // rcx
  __int64 v36; // rdx
  __int64 *v37; // r12
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(__int64, _QWORD *); // rax
  int v43; // eax
  unsigned int v44; // eax
  char v45; // [rsp+50h] [rbp-68h]
  _QWORD v46[2]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v47; // [rsp+68h] [rbp-50h]
  char v48; // [rsp+C0h] [rbp+8h]
  char v50; // [rsp+D0h] [rbp+18h]
  char v51; // [rsp+D8h] [rbp+20h]

  v3 = 0LL;
  v4 = a2;
  v45 = 0;
  v5 = 0;
  v48 = 0;
  v6 = a3;
  v51 = 0;
  v7 = 0LL;
  v50 = 0;
  v8 = 0;
  v9 = 0;
  LOBYTE(a3) = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( !a1 )
  {
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_71;
    }
    v34 = 22LL;
    goto LABEL_70;
  }
  if ( !v6 )
  {
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_71;
    }
    v34 = 23LL;
LABEL_70:
    WPP_SF_(v33->AttachedDevice, v34, &WPP_2427d071e20036a288b852fd33055616_Traceguids);
LABEL_71:
    v12 = -1056964602;
    goto LABEL_58;
  }
  v13 = *(__int64 **)(a1 - 16);
  v7 = *v13;
  if ( (*(_BYTE *)(*v13 + 104) & 0x10) == 0 )
  {
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v36 = 24LL;
    goto LABEL_80;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
  {
    McTemplateK0qqdqqqq(
      a1,
      (unsigned int)&EventAdapterInitPerfConfigData,
      (_DWORD)a3,
      *v6,
      v6[1],
      v6[2],
      v6[3],
      v6[4],
      v6[5],
      v6[6]);
    LOBYTE(a3) = 0;
    v5 = 0;
    v11 = 0;
    v10 = 0;
    v3 = 0LL;
  }
  v14 = *v6;
  v15 = 3;
  if ( *v6 )
    v9 = v6[1] >= 0xC;
  if ( v14 >= 2 && v6[1] >= 0x18 )
  {
    LOBYTE(a3) = 1;
    v45 = 1;
    v15 = 7;
  }
  if ( v14 >= 3 && v6[1] >= 0x28 )
  {
    v5 = 1;
    v48 = 1;
    v15 |= 0x18u;
  }
  if ( v14 >= 4 && v6[1] >= 0x28 )
  {
    v10 = 1;
    v51 = 1;
    v15 |= 0x20u;
  }
  if ( v14 >= 5 && v6[1] >= 0x28 )
  {
    if ( KeGetCurrentIrql() )
      goto LABEL_20;
    v46[0] = 1LL;
    v46[1] = 0LL;
    v47 = 0LL;
    if ( !*(_BYTE *)(v7 + 4514) )
      goto LABEL_20;
    v37 = (__int64 *)(v7 + 720);
    if ( !(unsigned __int8)RaidIsDmaInitialized(v7 + 720) )
    {
      RaidInitializeDma(v39, *(_QWORD *)(v7 + 32), v7 + 320);
      v3 = 0LL;
    }
    if ( v7 != -720 && (v40 = *v37) != 0 && (v41 = *(_QWORD *)(v40 + 8)) != 0 )
    {
      if ( *(int *)(v7 + 748) < 3 || (v42 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v41 + 128)) == 0LL )
      {
LABEL_94:
        v4 = a2;
LABEL_20:
        LOBYTE(a3) = v45;
        v11 = 1;
        v5 = v48;
        v10 = v51;
        v50 = 1;
        goto LABEL_21;
      }
      v43 = v42(v40, v46);
      v3 = 0LL;
    }
    else
    {
      v43 = -1073741811;
    }
    if ( v43 >= 0 )
    {
      v4 = a2;
      if ( (v47 & 2) != 0 )
        v15 |= 0x40u;
      goto LABEL_20;
    }
    goto LABEL_94;
  }
LABEL_21:
  if ( !v9 && !(_BYTE)a3 && !v5 && !v10 && !v11 )
  {
    if ( !v4 )
    {
      v12 = -1056964602;
      goto LABEL_58;
    }
    v6[1] = 12;
    *v6 = 1;
  }
  if ( v4 )
  {
    v6[2] = v15;
    v8 = v15;
    v12 = v3;
    goto LABEL_58;
  }
  v16 = v6[2];
  if ( (~v15 & v16) != 0 )
  {
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v36 = 25LL;
    goto LABEL_80;
  }
  if ( (v16 & 2) != 0 )
  {
    v8 = 2;
    *(_DWORD *)(v7 + 4808) = -v6[3];
    v16 = v6[2];
  }
  if ( (v16 & 1) != 0 )
  {
    v8 |= 1u;
    v17 = *(_WORD *)(v7 + 4804) | 1;
    *(_WORD *)(v7 + 4804) = v17;
    if ( *(_BYTE *)(v7 + 4513) != 1 || *(_QWORD *)(v7 + 4824) == v3 || *(_QWORD *)(v7 + 4504) == v3 )
    {
      v21 = v48;
LABEL_44:
      v16 = v6[2];
      goto LABEL_45;
    }
    v18 = v3;
    v19 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 4496) + 4LL);
    v20 = v19 - 1;
    if ( !(_BYTE)a3 || (v6[2] & 4) == 0 )
    {
LABEL_32:
      *(_WORD *)(v7 + 4804) = v17 ^ (v17 ^ (4 * v19)) & 0x3FC | 2;
      v21 = v48;
      v22 = v20 + 1;
      *(_WORD *)(v7 + 4806) = KeQueryActiveGroupCount();
      if ( v18 < v22 )
      {
        v23 = 16LL * v18;
        do
        {
          epi16 = _mm_extract_epi16(*(__m128i *)(*(_QWORD *)(v7 + 4504) + v23), 4);
          v25 = *(_QWORD *)(*(_QWORD *)(v7 + 4504) + v23);
          if ( epi16 != 0xFFFF )
          {
            if ( v48 && (v6[2] & 0xC) == 0xC )
            {
              v8 |= 8u;
              *(_WORD *)(*((_QWORD *)v6 + 4) + v23 + 8) = epi16;
              *(_QWORD *)(v23 + *((_QWORD *)v6 + 4)) = v25;
            }
            if ( v18 < 0xFF )
            {
              LODWORD(a3) = 0;
              if ( v25 )
              {
                do
                {
                  v26 = v25;
                  if ( (v25 & 1) != 0 )
                  {
                    v31 = *(_QWORD *)(v7 + 4824);
                    v32 = (unsigned int)a3 + (epi16 << 6);
                    if ( *(_BYTE *)(v32 + v31) == 0xFF )
                      *(_BYTE *)(v32 + v31) = v18;
                  }
                  v25 >>= 1;
                  LODWORD(a3) = (_DWORD)a3 + 1;
                }
                while ( v26 >= 2 );
              }
            }
          }
          ++v18;
          v23 += 16LL;
        }
        while ( v18 < v22 );
      }
      v11 = v50;
      LOBYTE(v3) = 0;
      goto LABEL_44;
    }
    v18 = v6[4];
    v44 = v6[5];
    if ( v18 <= v44 && v44 <= v20 )
    {
      v20 = v6[5];
      LOWORD(v19) = v44 - v18 + 1;
      v8 |= 4u;
      goto LABEL_32;
    }
    v35 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_81;
    }
    v36 = 26LL;
LABEL_80:
    WPP_SF_(v35->AttachedDevice, v36, &WPP_2427d071e20036a288b852fd33055616_Traceguids);
    goto LABEL_81;
  }
  if ( (_BYTE)a3 && (v16 & 4) != 0 || (v16 & 0x20) != 0 )
    goto LABEL_81;
  v21 = v48;
LABEL_45:
  if ( v21 && (v16 & 8) != 0 )
  {
    v8 |= 8u;
    v6[6] = *(_DWORD *)(v7 + 4800);
  }
  v27 = v16;
  if ( !v21 || (v16 & 0x10) == 0 )
    goto LABEL_50;
  if ( (v8 & 1) == 0 )
  {
LABEL_81:
    v12 = -1056964607;
    goto LABEL_58;
  }
  v8 |= 0x10u;
  *(_BYTE *)(v7 + 4515) |= 1u;
  v27 = v6[2];
LABEL_50:
  v28 = v27;
  if ( v51 != (_BYTE)v3 && (v27 & 0x20) != 0 )
  {
    v8 |= 0x20u;
    *(_BYTE *)(v7 + 4515) |= 2u;
    v28 = v6[2];
  }
  v29 = v28;
  if ( v11 && (v28 & 0x40) != 0 )
  {
    v8 |= 0x40u;
    *(_BYTE *)(v7 + 4515) |= 4u;
    v29 = v6[2];
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0qqdqqqq(
      v29,
      (unsigned int)&EventAdapterFinalPerfConfigData,
      (_DWORD)a3,
      *v6,
      v6[1],
      v29,
      v6[3],
      v6[4],
      v6[5],
      v6[6]);
LABEL_58:
  if ( v8 != v6[2] )
  {
    if ( (v8 & 2) != 0 )
      *(_DWORD *)(v7 + 4808) = 0;
    if ( (v8 & 1) != 0 )
    {
      *(_BYTE *)(v7 + 4515) &= ~1u;
      *(_WORD *)(v7 + 4804) = 0;
    }
    if ( (v8 & 0x20) != 0 )
      *(_BYTE *)(v7 + 4515) &= ~2u;
  }
  return v12;
}

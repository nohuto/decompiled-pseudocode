/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C000E61C
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C0008040 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000E098 (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  unsigned __int16 v2; // bx
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // r8
  __int64 PSM; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // cx
  __int64 v11; // rdx
  unsigned __int16 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // rbx
  unsigned int v20; // esi
  _QWORD **v22; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD v26[5]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v27[7]; // [rsp+68h] [rbp-1h] BYREF
  char v28; // [rsp+D0h] [rbp+67h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(v27, 0, sizeof(v27));
  *(_DWORD *)(a1 + 146) = 0xFFFF;
  v2 = 0;
  if ( *(_WORD *)(a1 + 144) )
  {
    while ( 1 )
    {
      memset(v26, 0, sizeof(v26));
      _InterlockedOr((volatile signed __int32 *)v26 + 1, 1u);
      if ( *(_BYTE *)(a1 + 240) )
      {
        v4 = v2 + 1;
        LOWORD(v26[0]) = v2 + 1;
        if ( ((unsigned __int8)(1 << ((v2 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v2 + 1) >> 3)
                                                                + a1
                                                                + 1187)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v26 + 1, 0xFFFFFFFE);
          v4 = v26[0];
        }
        BYTE2(v26[0]) = *(_BYTE *)(a1 + 2490);
      }
      else
      {
        v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 128) + 8LL * v2);
        v4 = *v3;
        LOWORD(v26[0]) = *v3;
        if ( *((_DWORD *)v3 + 1) == 102 )
        {
          _InterlockedAnd((volatile signed __int32 *)v26 + 1, 0xFFFFFFFE);
          v4 = v26[0];
        }
        if ( *((_DWORD *)v3 + 2) == 116 )
        {
          _InterlockedOr((volatile signed __int32 *)v26 + 1, 0x10u);
          v4 = v26[0];
        }
        HIDWORD(v26[0]) ^= (BYTE4(v26[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x40;
        HIDWORD(v26[0]) ^= (BYTE4(v26[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x80;
        BYTE2(v26[0]) = *((_BYTE *)v3 + 3);
        if ( (unsigned __int8)(BYTE2(v26[0]) - 1) > 4u )
          BYTE2(v26[0]) = 5;
      }
      if ( v4 > *(_WORD *)(a1 + 148) )
        *(_WORD *)(a1 + 148) = v4;
      if ( v4 < *(_WORD *)(a1 + 146) )
        *(_WORD *)(a1 + 146) = v4;
      LODWORD(v26[1]) = 512;
      PSM = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v26);
      if ( !PSM )
        break;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             PSM,
             off_1C0064258);
      *(_QWORD *)(v6 + 1248) = &PSM20StateTable;
      *(_DWORD *)(v6 + 1124) = 3000;
      *(_DWORD *)(v6 + 1256) = 3000;
      v7 = (_QWORD *)(v6 + 248);
      v8 = *(_QWORD **)(a1 + 2368);
      if ( *v8 != a1 + 2360 )
LABEL_57:
        __fastfail(3u);
      *v7 = a1 + 2360;
      ++v2;
      v7[1] = v8;
      *v8 = v7;
      *(_QWORD *)(a1 + 2368) = v7;
      ++*(_DWORD *)(a1 + 2356);
      if ( v2 >= *(_WORD *)(a1 + 144) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v9 = 0;
    *(_DWORD *)(a1 + 152) = 0xFFFF;
    v10 = 0;
    if ( *(_WORD *)(a1 + 150) )
    {
      while ( 1 )
      {
        memset(v26, 0, sizeof(v26));
        _InterlockedOr((volatile signed __int32 *)v26 + 1, 1u);
        if ( *(_BYTE *)(a1 + 240) )
        {
          v12 = v9 + 1;
          LOWORD(v26[0]) = v9 + 1;
          if ( ((unsigned __int8)(1 << ((v9 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v9 + 1) >> 3)
                                                                  + a1
                                                                  + 1190)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v26 + 1, 0xFFFFFFFE);
            v12 = v26[0];
          }
          if ( *(_BYTE *)(a1 + 261) )
          {
            _InterlockedOr((volatile signed __int32 *)v26 + 1, 0x100u);
            v12 = v26[0];
            HIDWORD(v26[2]) = *(_DWORD *)(a1 + 156);
          }
          v26[3] = *(_QWORD *)(a1 + 2504);
          LODWORD(v26[4]) = *(_DWORD *)(a1 + 2512);
          BYTE2(v26[0]) = *(_BYTE *)(a1 + 2490);
        }
        else
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v9);
          LOWORD(v26[0]) = *(_WORD *)v11;
          if ( *(_DWORD *)(v11 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)v26 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v11 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)v26 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)v26 + 1, 0x100u);
          if ( *(_BYTE *)(v11 + 2) )
            HIDWORD(v26[2]) = *(_DWORD *)(a1 + 156);
          v12 = v26[0];
          v26[3] = *(_QWORD *)(v11 + 16);
          LODWORD(v26[4]) = *(unsigned __int16 *)(v11 + 14);
          BYTE2(v26[0]) = *(_BYTE *)(v11 + 3);
          if ( (unsigned __int8)(BYTE2(v26[0]) - 1) > 4u )
            BYTE2(v26[0]) = 5;
        }
        if ( v12 > *(_WORD *)(a1 + 154) )
          *(_WORD *)(a1 + 154) = v12;
        if ( v12 < *(_WORD *)(a1 + 152) )
          *(_WORD *)(a1 + 152) = v12;
        LODWORD(v26[1]) = 768;
        v13 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v26);
        if ( !v13 )
          break;
        v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v13,
                off_1C0064258);
        *(_QWORD *)(v14 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v14 + 1124) = 5000;
        *(_DWORD *)(v14 + 1256) = 5000;
        v15 = (_QWORD *)(v14 + 248);
        v16 = *(_QWORD **)(a1 + 2368);
        if ( *v16 != a1 + 2360 )
          goto LABEL_57;
        *v15 = a1 + 2360;
        ++v9;
        v15[1] = v16;
        *v16 = v15;
        *(_QWORD *)(a1 + 2368) = v15;
        ++*(_DWORD *)(a1 + 2356);
        if ( v9 >= *(_WORD *)(a1 + 150) )
        {
          v10 = *(_WORD *)(a1 + 154);
          goto LABEL_42;
        }
      }
    }
    else
    {
LABEL_42:
      v17 = *(_WORD *)(a1 + 148);
      v18 = 2;
      if ( v17 <= v10 )
        v17 = v10;
      *(_WORD *)(a1 + 48) = v17;
      if ( ((unsigned __int64)v17 >> 3) + 1 >= 2 )
        v18 = (v17 >> 3) + 1;
      if ( v18 <= *(_WORD *)(a1 + 88) )
        v18 = *(_WORD *)(a1 + 88);
      v19 = v18;
      *(_WORD *)(a1 + 1128) = v18;
      memset(v27, 0, sizeof(v27));
      v27[4] = *(_QWORD *)(a1 + 16);
      LODWORD(v27[0]) = 56;
      v27[3] = 0x100000001LL;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, unsigned __int64, char *, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v27,
             (unsigned int)ExDefaultNonPagedPoolType,
             1748191317LL,
             (v19 + 3) & 0xFFFFFFFFFFFFFFFCuLL,
             &v28,
             a1 + 1120) >= 0 )
      {
        v20 = 2053;
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
        return v20;
      }
    }
  }
  v22 = (_QWORD **)(a1 + 2360);
  v20 = 2045;
  while ( 1 )
  {
    v25 = *v22;
    if ( *v22 == v22 )
      return v20;
    if ( (_QWORD **)v25[1] != v22 )
      goto LABEL_57;
    v23 = (_QWORD *)*v25;
    if ( *(_QWORD **)(*v25 + 8LL) != v25 )
      goto LABEL_57;
    *v22 = v23;
    v23[1] = v22;
    --*(_DWORD *)(a1 + 2356);
    v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            v25 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v24);
  }
}

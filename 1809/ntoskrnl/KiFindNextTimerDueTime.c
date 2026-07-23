/*
 * XREFs of KiFindNextTimerDueTime @ 0x14005FD20
 * Callers:
 *     PpmIdlePrepare @ 0x14005F3A0 (PpmIdlePrepare.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140061FF0 (KiGetNextTimerExpirationDueTime.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiFindNextTimerDueTime(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // r14
  unsigned int v7; // edi
  __int64 v8; // r15
  __int64 *v9; // rsi
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // r11
  unsigned __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v20; // ecx
  unsigned int v21; // eax
  __int64 v22; // rbp
  unsigned int v23; // edi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  _QWORD *v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r9
  unsigned int v34; // r9d
  unsigned __int64 v35; // rsi
  unsigned __int16 v36; // bx
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // r10
  __int64 v39; // r14
  unsigned __int64 v40; // r8
  _QWORD *v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // r8
  unsigned __int64 v46; // [rsp+38h] [rbp+10h]

  v4 = -1LL;
  v5 = (unsigned __int8)(a2 >> 18);
  if ( KiSerializeTimerExpiration )
  {
    if ( !a3 )
      return v4;
    v20 = *(_DWORD *)(a1 + 11888);
    v21 = (unsigned __int8)(v5 - v20);
    if ( v21 > 1 )
      return 0LL;
    v22 = (unsigned __int8)v20;
    v23 = 0;
    v46 = (a2 & 0xFFFFFFFFFFFC0000uLL) - (v21 << 18) + 0x4000000;
LABEL_24:
    v24 = v4;
    if ( (unsigned __int64)(unsigned int)v22 >= KiPendingTimerBitmaps[0] )
      v25 = 0LL;
    else
      v25 = (unsigned int)v22;
    v26 = KiPendingTimerBitmaps[0] - 1;
    while ( 1 )
    {
      if ( v26 - v25 == -1LL )
      {
        LODWORD(v29) = -1;
      }
      else
      {
        v27 = (_QWORD *)(qword_1405434C8[0] + 8 * (v25 >> 6));
        v28 = ((1LL << (v25 & 0x3F)) - 1) | ~*v27;
        if ( v28 == -1 )
        {
          while ( (unsigned __int64)++v27 <= qword_1405434C8[0] + 8 * (v26 >> 6) )
          {
            v28 = ~*v27;
            if ( *v27 )
              goto LABEL_29;
          }
LABEL_69:
          LODWORD(v29) = -1;
          goto LABEL_70;
        }
LABEL_29:
        _BitScanForward64((unsigned __int64 *)&v28, ~v28);
        v29 = v28 + (((__int64)v27 - qword_1405434C8[0]) >> 3 << 6);
        if ( v29 > v26 )
          goto LABEL_69;
        if ( v29 != -1LL )
          goto LABEL_31;
      }
LABEL_70:
      if ( !v25 )
      {
LABEL_31:
        if ( (_DWORD)v29 == -1 )
          return v4;
        v23 += (unsigned __int8)(v29 - v22 + 1);
        if ( v23 > 0x100 )
          return v4;
        v30 = 32LL * (unsigned int)v29;
        v31 = *(_QWORD *)(v30 + KiProcessorBlock[0] + 14488);
        if ( v31 < v4 )
        {
          if ( v31 < v46 )
          {
            v32 = (unsigned __int8)(v31 >> 18);
            if ( v32 == (_DWORD)v29 )
              return *(_QWORD *)(v30 + KiProcessorBlock[0] + 14488);
            v22 = (unsigned __int8)(v29 + 1);
            v4 = (v31 & 0xFFFFFFFFFFFC0000uLL) + ((((_DWORD)v29 - v32) << 18) & 0x3FC0000);
            if ( v4 >= v24 )
              v4 = v24;
            goto LABEL_24;
          }
          v4 = *(_QWORD *)(v30 + KiProcessorBlock[0] + 14488);
        }
        v22 = (unsigned __int8)(v29 + 1);
        goto LABEL_24;
      }
      v44 = v22 + 1;
      if ( (unsigned __int64)(v22 + 1) > KiPendingTimerBitmaps[0] )
        v44 = KiPendingTimerBitmaps[0];
      v26 = v44 - 1;
      v25 = 0LL;
    }
  }
  if ( v5 != (unsigned __int8)*(_DWORD *)(a1 + 11888) )
    return 0LL;
  if ( a3 )
  {
    v34 = -1;
    v35 = v5 << 9;
    v36 = 0;
    while ( 1 )
    {
      v37 = KiPendingTimerBitmaps[2 * v36];
      if ( v35 >= v37 )
        v38 = 0LL;
      else
        v38 = v5 << 9;
      v39 = KiPendingTimerBitmaps[2 * v36 + 1];
      v40 = v37 - 1;
      while ( 1 )
      {
        if ( v40 - v38 == -1LL )
          goto LABEL_76;
        v41 = (_QWORD *)(v39 + 8 * (v38 >> 6));
        v42 = ~*v41;
        if ( v42 == -1 )
        {
          while ( (unsigned __int64)++v41 <= v39 + 8 * (v40 >> 6) )
          {
            v42 = ~*v41;
            if ( v42 != -1 )
              goto LABEL_55;
          }
LABEL_76:
          LODWORD(v43) = -1;
          goto LABEL_77;
        }
LABEL_55:
        _BitScanForward64((unsigned __int64 *)&v42, ~v42);
        v43 = v42 + (((__int64)v41 - v39) >> 3 << 6);
        if ( v43 > v40 )
        {
          LODWORD(v43) = -1;
        }
        else if ( v43 != -1LL )
        {
          break;
        }
LABEL_77:
        if ( !v38 )
          break;
        v45 = v35 + 1;
        if ( v35 + 1 > v37 )
          v45 = KiPendingTimerBitmaps[2 * v36];
        v40 = v45 - 1;
        v38 = 0LL;
      }
      if ( (_DWORD)v43 != -1 && (unsigned __int8)(((unsigned int)v43 >> 9) - v5) < v34 )
        v34 = (unsigned __int8)(((unsigned int)v43 >> 9) - v5);
      if ( ++v36 >= (unsigned __int16)KiActiveGroups )
      {
        if ( v34 != -1 )
          return (unsigned int)KeTimeIncrement + (a2 & 0xFFFFFFFFFFFC0000uLL) + (v34 << 18);
        return v4;
      }
    }
  }
  v6 = *(_QWORD *)(a1 + 200);
  v7 = 0;
  v8 = KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1];
  v9 = &KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208)];
  while ( 2 )
  {
    v10 = *v9;
    v11 = (unsigned __int64)v5 << 9;
    if ( v11 >= *v9 )
      v12 = 0LL;
    else
      v12 = (unsigned __int64)v5 << 9;
    v13 = v9[1];
    v14 = v10 - 1;
    while ( 1 )
    {
      if ( v14 - v12 == -1LL )
      {
        LODWORD(v17) = -1;
      }
      else
      {
        v15 = (_QWORD *)(v13 + 8 * (v12 >> 6));
        v16 = ~*v15;
        if ( v16 == -1 )
        {
          while ( (unsigned __int64)++v15 <= v13 + 8 * (v14 >> 6) )
          {
            v16 = ~*v15;
            if ( v16 != -1 )
              goto LABEL_10;
          }
LABEL_38:
          LODWORD(v17) = -1;
          goto LABEL_39;
        }
LABEL_10:
        _BitScanForward64((unsigned __int64 *)&v16, ~v16);
        v17 = v16 + (((__int64)v15 - v13) >> 3 << 6);
        if ( v17 > v14 )
          goto LABEL_38;
        if ( v17 != -1LL )
          break;
      }
LABEL_39:
      if ( !v12 )
        break;
      v33 = v11 + 1;
      if ( v11 + 1 > v10 )
        v33 = *v9;
      v14 = v33 - 1;
      v12 = 0LL;
    }
    if ( (_DWORD)v17 != -1 )
    {
      v18 = (unsigned int)v17 >> 9;
      v7 += (unsigned __int8)(v18 - v5) + 1;
      if ( v7 <= 0x100 )
      {
        if ( (*(_QWORD *)(((unsigned __int64)v18 << 6) + v8) & v6) == 0 )
        {
          v5 = (unsigned __int8)(v18 + 1);
          continue;
        }
        return a2 + (v7 << 18);
      }
    }
    return v4;
  }
}

/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C002230C
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0024150 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C0014BD8 (WPP_RECORDER_SF_dddd.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7)
{
  unsigned int v7; // edi
  int v11; // r12d
  unsigned __int16 v12; // bx
  unsigned __int16 v13; // r15
  __int64 v14; // r9
  int Ulong; // eax
  unsigned int v16; // ebp
  int v17; // r8d
  unsigned __int16 v18; // bx
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // bx
  unsigned __int16 v25; // bx
  __int64 v27; // [rsp+90h] [rbp+8h]
  unsigned __int16 *v28; // [rsp+A0h] [rbp+18h]

  v28 = a3;
  v7 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v27 = v14;
  *a3 = 0;
  if ( !a6 )
  {
LABEL_36:
    if ( (v11 & 4) == 0 )
    {
      if ( v12 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v12) = 52;
        *(_WORD *)(a2 + 4LL * v12 + 2) = 5;
      }
      v24 = v12 + 1;
      if ( v24 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v24) = 180;
        *(_WORD *)(a2 + 4LL * v24 + 2) = 5;
      }
      v12 = v24 + 1;
    }
    if ( (v11 & 5) == 0 )
    {
      if ( v12 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v12) = (a7 != 0 ? 0x4000 : 0) | 0x35;
        *(_WORD *)(a2 + 4LL * v12 + 2) = 10;
      }
      v25 = v12 + 1;
      if ( v25 < a4 )
      {
        *(_DWORD *)(a2 + 4LL * v25) = (a7 != 0 ? 0x4000 : 0) | 0xB5;
        *(_WORD *)(a2 + 4LL * v25 + 2) = 10;
      }
      v12 = v25 + 1;
    }
    *a3 = v12;
    return v7;
  }
  while ( 1 )
  {
    Ulong = XilRegister_ReadUlong(v14, (unsigned int *)(a5 + 4LL * v13));
    v16 = Ulong & 0xF;
    if ( _bittest(&v11, v16) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v23 = 193;
      goto LABEL_54;
    }
    v11 |= 1 << v16;
    if ( v12 < a4 )
    {
      if ( !a7 || (v17 = 0x4000, v16 <= 4) )
        v17 = 0;
      *(_DWORD *)(a2 + 4LL * v12) = v17 | Ulong & 0x30;
      *(_WORD *)(a2 + 4LL * v12 + 2) = HIWORD(Ulong);
      *(_DWORD *)(a2 + 4LL * v12) = v16 | *(_DWORD *)(a2 + 4LL * v12) & 0xFFFFFFF0;
    }
    if ( (Ulong & 0xC0) == 0x80 )
      break;
    if ( (Ulong & 0xC0) == 0 )
    {
      if ( v12 < a4 )
        *(_DWORD *)(a2 + 4LL * v12) &= 0xFFFFFF3F;
      v18 = v12 + 1;
      if ( v18 < a4 )
      {
        if ( !a7 || (v22 = 0x4000, v16 <= 4) )
          v22 = 0;
        *(_DWORD *)(a2 + 4LL * v18) = v22 | Ulong & 0x30;
        *(_WORD *)(a2 + 4LL * v18 + 2) = HIWORD(Ulong);
        *(_DWORD *)(a2 + 4LL * v18) = Ulong & 0xF | *(_DWORD *)(a2 + 4LL * v18) & 0xFFFFFFB0 | 0x80;
      }
      goto LABEL_27;
    }
    if ( (Ulong & 0xC0) == 0xC0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v23 = 196;
      goto LABEL_54;
    }
LABEL_29:
    if ( ++v13 >= a6 )
    {
      a3 = v28;
      goto LABEL_36;
    }
    v14 = v27;
  }
  if ( v12 < a4 )
    *(_DWORD *)(a2 + 4LL * v12) = *(_DWORD *)(a2 + 4LL * v12) & 0xFFFFFF3F | 0x40;
  v18 = v12 + 1;
  if ( ++v13 >= a6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v23 = 194;
LABEL_54:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      v23,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      Ulong & 0xF);
    return (unsigned int)-1073741811;
  }
  v19 = XilRegister_ReadUlong(v27, (unsigned int *)(a5 + 4LL * v13));
  v20 = v19 & 0xF;
  if ( v20 == v16 && (unsigned __int8)v19 >> 6 == 3 )
  {
    if ( v18 < a4 )
    {
      if ( !a7 || (v21 = 0x4000, v16 <= 4) )
        v21 = 0;
      *(_DWORD *)(a2 + 4LL * v18) = v21 | v19 & 0x30;
      *(_WORD *)(a2 + 4LL * v18 + 2) = WORD1(v19);
      *(_DWORD *)(a2 + 4LL * v18) = v20 | *(_DWORD *)(a2 + 4LL * v18) & 0xFFFFFFF0 | 0xC0;
    }
LABEL_27:
    v12 = v18 + 1;
    goto LABEL_29;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xBu,
      0xC3u,
      (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
      v16,
      2,
      v19 & 0xF,
      (unsigned __int8)v19 >> 6);
  return (unsigned int)-1073741811;
}

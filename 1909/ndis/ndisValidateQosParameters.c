/*
 * XREFs of ndisValidateQosParameters @ 0x1C0071904
 * Callers:
 *     ndisOidPreQosSetParameters @ 0x1C006E0C0 (ndisOidPreQosSetParameters.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009AAB4 (ndisMIndicateQosParametersChange.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C003332C (WPP_RECORDER_SF_DDD.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00669BC (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00695B4 (WPP_RECORDER_SF_DD_ea_1C00695B4.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C00696C4 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_LLL @ 0x1C00698F8 (WPP_RECORDER_SF_LLL_ea_1C00698F8.c)
 *     WPP_RECORDER_SF_LLLL @ 0x1C00699D4 (WPP_RECORDER_SF_LLLL.c)
 *     WPP_RECORDER_SF_LLLLLLq @ 0x1C0069AD0 (WPP_RECORDER_SF_LLLLLLq.c)
 *     WPP_RECORDER_SF_qDqLq @ 0x1C0069C44 (WPP_RECORDER_SF_qDqLq.c)
 *     WPP_RECORDER_SF_qDqLqD @ 0x1C0069D70 (WPP_RECORDER_SF_qDqLqD.c)
 */

__int64 __fastcall ndisValidateQosParameters(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int *a5)
{
  unsigned int v5; // r15d
  char v7; // di
  __int64 v9; // r8
  int v11; // r13d
  unsigned int v12; // ecx
  int v13; // r12d
  unsigned int v14; // r11d
  int v15; // r10d
  unsigned int v16; // edx
  unsigned __int8 *v17; // r14
  unsigned __int8 v18; // al
  unsigned int v19; // ecx
  char v20; // al
  unsigned __int8 v21; // al
  __int64 v22; // r11
  unsigned int v23; // eax
  int v24; // r10d
  int v25; // ebp
  int v26; // [rsp+20h] [rbp-88h]
  char v27[8]; // [rsp+38h] [rbp-70h]
  int v28; // [rsp+40h] [rbp-68h]

  v5 = a4;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    *(_DWORD *)&v27[4] = HIDWORD(a3);
    WPP_RECORDER_SF_qDqLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, a4, v26);
  }
  if ( a5 )
    *a5 = 52;
  v9 = *(_QWORD *)(a1 + 4912);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          11,
          118,
          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids);
      }
    }
    return 3221225659LL;
  }
  v11 = a3[1];
  if ( (v11 & 2) != 0 )
  {
    v12 = a3[2];
    v13 = 0;
    v14 = 0;
    a4 = 0LL;
    v15 = 0;
    if ( !v12 || v7 && v12 > *(_DWORD *)(v9 + 8) )
    {
      if ( v7 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x77u,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            v12,
            *(_DWORD *)(v9 + 8));
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          11,
          120,
          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids);
      }
    }
    else
    {
      v16 = 0;
      v17 = (unsigned __int8 *)(a3 + 3);
      do
      {
        v18 = *v17;
        if ( *v17 >= 8u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
          {
            *(_DWORD *)v27 = 8;
            WPP_RECORDER_SF_DDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0xBu,
              0x79u,
              (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
              v16,
              v18,
              *(_QWORD *)v27);
          }
          return 3221291029LL;
        }
        if ( !_bittest(&v13, v18) )
        {
          v13 |= 1 << v18;
          ++v14;
          if ( *((_BYTE *)a3 + v18 + 28) == 2 )
            a4 = (unsigned int)(a4 + 1);
        }
        ++v16;
        ++v17;
      }
      while ( v16 < 8 );
      if ( v14 > v12 || v7 && (unsigned int)a4 > *(_DWORD *)(v9 + 12) )
      {
        if ( v7 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_LLLL(*((_QWORD *)WPP_GLOBAL_Control + 8), (__int64)WPP_GLOBAL_Control, v9, a4, v26);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
               && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          WPP_RECORDER_SF_LL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0xBu,
            0x7Bu,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            v14,
            a3[2]);
        }
      }
      else
      {
        v19 = 0;
        a2 = 0LL;
        do
        {
          if ( _bittest(&v13, v19) )
          {
            v20 = *((_BYTE *)a3 + a2 + 28);
            if ( v20 )
            {
              if ( v20 != 2 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  WPP_RECORDER_SF_DDDD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    *((unsigned __int8 *)a3 + v19 + 28),
                    0xBu,
                    0x7Fu,
                    (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                    v19,
                    *((_BYTE *)a3 + v19 + 28),
                    0,
                    2);
                }
                return 3221291029LL;
              }
              v21 = *((_BYTE *)a3 + a2 + 20);
              if ( !v21 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  WPP_RECORDER_SF_DD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    5u,
                    0xBu,
                    0x7Eu,
                    (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                    v19,
                    v19);
                }
                return 3221291029LL;
              }
              v15 += v21;
            }
            else if ( v7 && (*(_DWORD *)(v9 + 4) & 1) == 0 || *((_BYTE *)a3 + a2 + 20) )
            {
              if ( v7 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && *((_WORD *)WPP_GLOBAL_Control + 36) )
                {
                  v28 = *((unsigned __int8 *)a3 + v19 + 20);
                  WPP_RECORDER_SF_DDDD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v28,
                    0xBu,
                    0x7Cu,
                    (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                    v19,
                    *(_DWORD *)(v9 + 4),
                    v19,
                    v28);
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                     && *((_WORD *)WPP_GLOBAL_Control + 36) )
              {
                *(_DWORD *)v27 = *((unsigned __int8 *)a3 + v19 + 20);
                WPP_RECORDER_SF_DDD(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  5u,
                  0xBu,
                  0x7Du,
                  (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                  v19,
                  v19,
                  *(_QWORD *)v27);
              }
              return 3221291029LL;
            }
          }
          ++v19;
          ++a2;
        }
        while ( v19 < 8 );
        if ( !v15 || v15 == 100 )
          goto LABEL_69;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LOBYTE(a2) = 5;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            a2,
            11,
            128,
            (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
            v15);
        }
      }
    }
    return 3221291029LL;
  }
LABEL_69:
  if ( (v11 & 0x20000) != 0 )
  {
    a2 = (unsigned int)a3[12];
    v22 = (unsigned int)a3[10];
    a4 = (unsigned int)a3[11];
    v9 = (__int64)a3 + a2;
    if ( (_DWORD)v22
      && ((unsigned int)a4 < 0x10 || (a4 & 3) != 0 || (unsigned int)a2 < 0x34 || (unsigned int)a2 > v5 || (v9 & 3) != 0) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLLLLLq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, v9, a4, v26);
      return 3221291029LL;
    }
    if ( (unsigned __int64)(a4 * v22) > 0xFFFFFFFF || (v23 = a2 + a4 * v22, v23 < (unsigned int)a2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LLL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, v9, a4, v26);
      return 3221291029LL;
    }
    if ( v5 < v23 )
    {
      if ( a5 )
        *a5 = v23;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0xBu,
          0x83u,
          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
          v5,
          a2 + a4 * v22);
      return 3221291028LL;
    }
    v24 = 0;
    if ( (_DWORD)v22 )
    {
      a2 = 1LL;
      while ( *(_BYTE *)v9 == 0xB7 && *(_BYTE *)(v9 + 1) && *(_WORD *)(v9 + 2) >= 0x10u )
      {
        v25 = *(_DWORD *)(v9 + 4);
        if ( (v25 & 0xFF000000) != 0
          || (unsigned __int16)(*(_WORD *)(v9 + 8) - 1) > 5u
          || *(_WORD *)(v9 + 12)
          || *(_WORD *)(v9 + 14) >= 8u )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
            WPP_RECORDER_SF_DDDDDDDDDDD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5u,
              0xBu,
              0x85u,
              (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
              v24,
              v25,
              0,
              0,
              *(_WORD *)(v9 + 8),
              7,
              *(_WORD *)(v9 + 12),
              1,
              0,
              *(_WORD *)(v9 + 14),
              8);
          return 3221291029LL;
        }
        v9 += a4;
        if ( ++v24 >= (unsigned int)v22 )
          goto LABEL_109;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        LOBYTE(a2) = 5;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          11,
          132,
          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
          v24);
      }
      return 3221291029LL;
    }
  }
LABEL_109:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
    WPP_RECORDER_SF_qDqLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, v9, a4, v26);
  return 0LL;
}

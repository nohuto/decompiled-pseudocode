/*
 * XREFs of EtwpDiskProvTraceDisk @ 0x140310AC4
 * Callers:
 *     EtwpTraceIo @ 0x1401830E0 (EtwpTraceIo.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x14005B930 (EtwpLevelKeywordEnabled.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

char __fastcall EtwpDiskProvTraceDisk(__int16 a1, __int64 a2, __int64 a3, GUID *a4)
{
  __int64 v8; // rax
  ULONGLONG v9; // rbx
  void *v10; // rdi
  void *v11; // rbp
  unsigned __int8 v12; // r10
  _QWORD *v13; // r11
  __int64 v14; // r9
  unsigned __int8 v15; // r10
  _QWORD *v16; // rsi
  unsigned __int8 v17; // r10
  __int64 v18; // r9
  unsigned __int8 v19; // r10
  unsigned __int64 v21; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+98h] [rbp-50h] BYREF

  LOBYTE(v8) = (unsigned __int8)memset(v22, 0, sizeof(v22));
  v9 = EtwpDiskProvRegHandle;
  v21 = 0LL;
  if ( EtwpDiskProvRegHandle )
  {
    if ( a1 == 266 )
    {
      v10 = &KDskEvt_Read;
    }
    else if ( a1 == 270 )
    {
      v10 = &KDskEvt_Flush;
    }
    else
    {
      v10 = &KDskEvt_Write;
    }
    *(_DWORD *)(a2 + 8) -= 4;
    v11 = (void *)((*(_QWORD *)(v9 + 104) + 28LL) & -(__int64)(*(_QWORD *)(v9 + 104) != 0LL));
    if ( *(_BYTE *)(v9 + 100)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 32) + 96LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1)) )
    {
      EtwpEventWriteFull(
        v13,
        v12,
        0,
        0,
        (unsigned __int16 *)v10,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)v22,
        0LL,
        *(_WORD *)(v9 + 98),
        v11,
        &v21);
    }
    if ( *(_BYTE *)(v9 + 101)
      && EtwpLevelKeywordEnabled(*(_QWORD *)(v9 + 40) + 96LL, *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1)) )
    {
      EtwpEventWriteFull(
        *(_QWORD **)(v9 + 32),
        v15,
        0,
        0,
        (unsigned __int16 *)v10,
        0,
        0,
        a4,
        0LL,
        1u,
        a2,
        a3,
        (__int64)v22,
        v14,
        *(_WORD *)(v9 + 98),
        v11,
        &v21);
    }
    v8 = *(_QWORD *)(v9 + 32);
    v16 = *(_QWORD **)(v8 + 400);
    if ( v16 )
    {
      LOBYTE(v8) = (unsigned __int8)memset(v22, 0, sizeof(v22));
      if ( *(_BYTE *)(v9 + 102) )
      {
        LOBYTE(v8) = EtwpLevelKeywordEnabled((__int64)(v16 + 12), *((_BYTE *)v10 + 4), *((_QWORD *)v10 + 1));
        if ( (_BYTE)v8 )
          LOBYTE(v8) = EtwpEventWriteFull(
                         v16,
                         v17,
                         0,
                         0,
                         (unsigned __int16 *)v10,
                         0,
                         0,
                         a4,
                         0LL,
                         1u,
                         a2,
                         a3,
                         (__int64)v22,
                         0LL,
                         *(_WORD *)(v9 + 98),
                         v11,
                         &v21);
      }
      if ( *(_BYTE *)(v9 + 103) )
      {
        LOBYTE(v8) = EtwpLevelKeywordEnabled(
                       *(_QWORD *)(*(_QWORD *)(v9 + 40) + 400LL) + 96LL,
                       *((_BYTE *)v10 + 4),
                       *((_QWORD *)v10 + 1));
        if ( (_BYTE)v8 )
          LOBYTE(v8) = EtwpEventWriteFull(
                         *(_QWORD **)(*(_QWORD *)(v9 + 32) + 400LL),
                         v19,
                         0,
                         0,
                         (unsigned __int16 *)v10,
                         0,
                         0,
                         a4,
                         0LL,
                         1u,
                         a2,
                         a3,
                         (__int64)v22,
                         v18,
                         *(_WORD *)(v9 + 98),
                         v11,
                         &v21);
      }
    }
  }
  return v8;
}

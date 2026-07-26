/*
 * XREFs of ndisRemoveOpenWakeUpPattern @ 0x1C0076484
 * Callers:
 *     ndisPostSetRemoveWakeUpPattern @ 0x1C00755A0 (ndisPostSetRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 */

_UNKNOWN **__fastcall ndisRemoveOpenWakeUpPattern(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r15
  _DWORD *v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rdi
  __int64 v9; // r13
  const void *v10; // rcx
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rax
  _UNKNOWN **result; // rax
  char v16; // [rsp+30h] [rbp-48h]
  int v17; // [rsp+90h] [rbp+18h]
  int v18; // [rsp+98h] [rbp+20h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      35,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v16,
      a3);
  }
  if ( !a3 )
  {
    v6 = *(_DWORD **)(a1 + 496);
    v7 = 0LL;
    while ( v6 )
    {
      v8 = *(_DWORD **)(v4 + 40);
      if ( v8[4] == v6[16] && v8[2] == v6[14] )
      {
        v9 = (unsigned int)v6[15];
        v10 = *(const void **)(v4 + 40);
        v11 = (unsigned int)v8[3];
        v17 = v8[1];
        v12 = v6[13];
        v8[1] = 0;
        v6[13] = 0;
        v8[3] = 0;
        v13 = (unsigned int)v6[14];
        v6[15] = 0;
        v18 = v12;
        if ( !memcmp(v10, v6 + 12, v13 + 24) && !memcmp((char *)v8 + v11, (char *)v6 + v9 + 48, (unsigned int)v6[16]) )
        {
          v14 = *(_QWORD *)v6;
          if ( v7 )
            *v7 = v14;
          else
            *(_QWORD *)(a1 + 496) = v14;
          ExFreePoolWithTag(v6, 0);
          v8[3] = v11;
          break;
        }
        v8[3] = v11;
        v6[15] = v9;
        v8[1] = v17;
        v6[13] = v18;
      }
      v7 = v6;
      v6 = *(_DWORD **)v6;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_qqL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          a2,
                          11,
                          36,
                          (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
                          a1,
                          v4,
                          a3);
  }
  return result;
}

/*
 * XREFs of sub_180044D74 @ 0x180044D74
 * Callers:
 *     sub_180044D60 @ 0x180044D60 (sub_180044D60.c)
 * Callees:
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180044E1C @ 0x180044E1C (sub_180044E1C.c)
 *     sub_180048780 @ 0x180048780 (sub_180048780.c)
 *     sub_180103470 @ 0x180103470 (sub_180103470.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_180044D74(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_180044E1C(a1, a2);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    v9 = (v6 & *(_QWORD *)a1) + ((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( a2 > v9 )
    {
      if ( (*(_BYTE *)(v6 + 24) & 0xC) == 8 )
      {
        v10 = sub_1800413B0(*(_QWORD *)(a1 + 24), v9, a2, a3);
      }
      else
      {
        v10 = sub_180038C70(*(PRTL_SRWLOCK *)(a1 + 32), v9, a2, a3, (unsigned int *)&v17);
        if ( v10 )
        {
          v14 = *(_QWORD *)(a1 + 24);
          if ( (unsigned int)v17 <= (unsigned int)*(unsigned __int16 *)(v14 + 60) - 16 )
            sub_180048780(v14, (unsigned int)v17, 0LL);
        }
      }
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v10 )
      {
        LOBYTE(v7) = (*(_BYTE *)(v8 + 24) & 0xC) != 8;
        v16 = (unsigned int)(v7 + 2);
LABEL_24:
        sub_180103470(*(_QWORD *)(a1 + 56), a2, v16);
      }
    }
    else
    {
      sub_180036AE0(a1, v6, 0, a3);
      v10 = 1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && SharedData->ServiceSessionId )
        v12 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v16 = 3LL;
        goto LABEL_24;
      }
    }
  }
  else
  {
    sub_18010A694(9, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  return v10;
}

/*
 * XREFs of sub_180009D9C @ 0x180009D9C
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x1800060E0 (RtlRegisterForWnfMetaNotification.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x180009D50 (RtlSubscribeWnfStateChangeNotification.c)
 *     sub_1800FBBCC @ 0x1800FBBCC (sub_1800FBBCC.c)
 * Callees:
 *     sub_18000645C @ 0x18000645C (sub_18000645C.c)
 *     sub_1800078BC @ 0x1800078BC (sub_1800078BC.c)
 *     sub_1800097B0 @ 0x1800097B0 (sub_1800097B0.c)
 *     sub_180009EE8 @ 0x180009EE8 (sub_180009EE8.c)
 *     sub_18000A060 @ 0x18000A060 (sub_18000A060.c)
 *     sub_18000A204 @ 0x18000A204 (sub_18000A204.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_180009D9C(
        __int64 *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 v9; // rsi
  int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // rax
  int v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v19 = 0LL;
  v9 = 0LL;
  if ( byte_180165408 )
  {
    return (unsigned int)-1073741558;
  }
  else
  {
    v14 = RtlRunOnceExecuteOnce(&unk_180166300, sub_18007BDE0, 0LL, 0LL);
    if ( v14 >= 0 )
    {
      if ( !a7 || (v9 = sub_1800097B0(a7)) != 0 )
      {
        v14 = sub_18000A204((unsigned int)&v19, a3, a4, a5, v9, a8, a9);
        if ( v14 < 0 || (v9 = 0LL, v14 = sub_18000A060(&v20, a2, a6), v14 < 0) )
        {
          v16 = v19;
        }
        else
        {
          v15 = v19;
          *a1 = v19;
          v14 = sub_180009EE8(v20, v15);
          if ( v14 < 0 )
          {
            *a1 = 0LL;
            sub_18000645C(*(_QWORD *)(v15 + 24), v15, &v18);
          }
          v16 = 0LL;
          v19 = 0LL;
        }
        if ( v16 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v19);
        if ( v9 )
          sub_1800078BC(v9);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v14;
}

/*
 * XREFs of RootHub_D0Entry @ 0x1C0020EF4
 * Callers:
 *     Controller_InternalReset @ 0x1C000EF9C (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0020E08 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0046FAC (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C00471B4 (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  int v1; // esi
  __int64 v3; // r14
  unsigned int *v4; // rbp
  __int64 v5; // rbx
  int Ulong; // eax
  unsigned __int8 v7; // r8
  unsigned __int16 v8; // r9
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+30h] [rbp-28h]

  v1 = 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *(_BYTE *)(a1 + 57) = 1;
  if ( *(_DWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v4 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 16LL * (unsigned int)(v1 - 1));
      v5 = (unsigned int)(v1 - 1);
      Ulong = XilRegister_ReadUlong(v3, v4);
      v7 = *(_BYTE *)(88 * v5 + *(_QWORD *)(a1 + 48) + 13);
      if ( v7 == 2 )
        break;
      if ( v7 != 3 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v13) = v7;
          LODWORD(v12) = v1;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            2u,
            0xBu,
            0x21u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v12,
            v13);
        }
        goto LABEL_13;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v8 = 32;
LABEL_8:
        LODWORD(v13) = Ulong;
        LODWORD(v12) = v1;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          v8,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v12,
          v13);
      }
LABEL_9:
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x20000000LL) != 0 )
      {
        v9 = 88 * v5;
        DynamicLock_Acquire(*(_QWORD *)(v9 + *(_QWORD *)(a1 + 48) + 24));
        v10 = XilRegister_ReadUlong(v3, v4);
        XilRegister_WriteUlong(v3, v4, v10 & 0xC200 | 0xE000000);
        DynamicLock_Release(*(_QWORD *)(v9 + *(_QWORD *)(a1 + 48) + 24));
      }
LABEL_13:
      if ( (unsigned int)++v1 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_9;
    v8 = 31;
    goto LABEL_8;
  }
  return 0LL;
}

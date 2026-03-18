/*
 * XREFs of RootHub_D0Entry @ 0x1C001D548
 * Callers:
 *     Controller_InternalReset @ 0x1C000CB80 (Controller_InternalReset.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C0041760 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C004195C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_D0Entry(__int64 a1)
{
  int v1; // esi
  __int64 v3; // r14
  unsigned int *v4; // rbp
  __int64 v5; // rbx
  int Ulong; // eax
  unsigned __int8 v7; // r8
  __int64 v8; // rcx
  unsigned __int16 v9; // dx
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

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
      v7 = *(_BYTE *)(*(_QWORD *)(a1 + 48) + 80 * v5 + 13);
      v8 = *(_QWORD *)(a1 + 8);
      if ( v7 == 2 )
        break;
      if ( v7 == 3 )
      {
        v9 = 32;
LABEL_6:
        LODWORD(v14) = Ulong;
        LODWORD(v13) = v1;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(v8 + 72),
          4u,
          0xBu,
          v9,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v13,
          v14);
        if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 0x20000000LL) != 0 )
        {
          v10 = 10 * v5;
          DynamicLock_Acquire(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v10 + 24));
          v11 = XilRegister_ReadUlong(v3, v4);
          XilRegister_WriteUlong(v3, v4, v11 & 0xC200 | 0xE000000);
          DynamicLock_Release(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v10 + 24));
        }
        goto LABEL_9;
      }
      LODWORD(v14) = v7;
      LODWORD(v13) = v1;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v8 + 72),
        2u,
        0xBu,
        0x21u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v13,
        v14);
LABEL_9:
      if ( (unsigned int)++v1 > *(_DWORD *)(a1 + 16) )
        return 0LL;
    }
    v9 = 31;
    goto LABEL_6;
  }
  return 0LL;
}

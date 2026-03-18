/*
 * XREFs of Controller_ExecuteDSMToSendPORTSCValues @ 0x1C000C200
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_P @ 0x1C0011E68 (WPP_RECORDER_SF_P.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 *     Controller_ExecuteDSM @ 0x1C0059160 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_ExecuteDSMToSendPORTSCValues(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rbp
  _DWORD *PoolWithTag; // rax
  int v6; // edx
  int v7; // r8d
  _DWORD *v8; // rsi
  _DWORD *v9; // r14
  int Ulong; // eax

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 560) )
  {
    v3 = *(_QWORD *)(a1 + 152);
    v4 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 83LL);
    PoolWithTag = ExAllocatePoolWithTag(
                    *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                    (unsigned int)(4 * v4 + 4),
                    0x49434858u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(4 * v4 + 4));
      *v8 = v4;
      if ( (_DWORD)v4 )
      {
        v9 = v8 + 1;
        do
        {
          Ulong = XilRegister_ReadUlong(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 88LL), v1 + *(_QWORD *)(v3 + 40));
          v1 += 16LL;
          *v9++ = Ulong;
          --v4;
        }
        while ( v4 );
      }
      Controller_ExecuteDSM(a1, &GUID_DSM_SEND_PORTSC_VALUES, 1LL);
      ExFreePoolWithTag(v8, 0x49434858u);
    }
    else
    {
      WPP_RECORDER_SF_P(*(_QWORD *)(a1 + 72), v6, v7, 247);
    }
  }
}

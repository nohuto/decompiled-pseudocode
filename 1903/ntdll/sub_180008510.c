/*
 * XREFs of sub_180008510 @ 0x180008510
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180008510(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  __int16 v5; // ax
  char v6; // bl
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rdx

  v5 = *(_WORD *)(a1 + 98);
  v6 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((v5 & 0x3FFF) - 2) <= 1u )
    {
      if ( *(__int16 *)(a2 + 78) < 0 && qword_180163510 )
        v8 = *(_QWORD *)(qword_180163510 + 88);
      else
        v8 = *(_QWORD *)(a1 + 88);
      *a3 = v8;
      *(_QWORD *)(a2 + 24) = v8;
      sub_18000AD08(a1, a2);
      goto LABEL_6;
    }
  }
  else if ( *(_DWORD *)a2 == 4 )
  {
    if ( (unsigned __int16)((v5 & 0x3FFF) - 2) <= 1u )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest((char *)a2);
      v6 = 1;
      *a5 = 1;
    }
  }
  else
  {
    if ( (v5 & 0x3FFF) == *(_DWORD *)a2 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a2 + 24) = v10;
      v11 = *(_QWORD *)(a1 + 56);
      *a3 = v10;
      *a4 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(a2, v11);
LABEL_6:
      *a5 = 1;
      return v6;
    }
    if ( (v5 & 0x3FFF) == 0xA
      && *(_DWORD *)a2 == 7
      && *(_DWORD *)(a2 + 36) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    {
      *a4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
      *a5 = 1;
    }
  }
  return v6;
}

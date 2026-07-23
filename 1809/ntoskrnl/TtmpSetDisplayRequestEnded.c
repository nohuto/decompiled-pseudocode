/*
 * XREFs of TtmpSetDisplayRequestEnded @ 0x14088253C
 * Callers:
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x140882730 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiGetTerminalById @ 0x14087FD00 (TtmiGetTerminalById.c)
 *     TtmiScheduleSessionWorker @ 0x140881480 (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x140881BDC (TtmpFindPowerRequestEntryById.c)
 */

void __fastcall TtmpSetDisplayRequestEnded(__int64 a1, int a2)
{
  char v3; // si
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r14
  int TerminalById; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( !TtmpFindPowerRequestEntryById(a1, a2, &v12) )
    return;
  v4 = (_QWORD **)(v12 + 48);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v7 = v5 - 1;
    v6[1] = v4;
    TerminalById = TtmiGetTerminalById(&v12, a1, *((_DWORD *)v5 - 2));
    if ( TerminalById < 0 )
    {
      TtmiLogError("TtmpSetDisplayRequestEnded", 756, TerminalById, -1);
      goto LABEL_13;
    }
    v9 = v12;
    if ( *(_DWORD *)(v12 + 24) != 1416459348 )
      goto LABEL_13;
    v10 = *(_DWORD *)(v12 + 32);
    if ( v10 )
    {
      v11 = v10 - 1;
      *(_DWORD *)(v12 + 32) = v11;
      if ( !v11 )
      {
        *(_DWORD *)(v9 + 36) |= 0x24u;
        v3 = 1;
      }
LABEL_13:
      ExFreePoolWithTag(v7, 0x52507454u);
    }
    else
    {
      TtmiLogError("TtmpSetDisplayRequestEnded", 738, -1073741811, -1);
    }
  }
  if ( v3 )
    TtmiScheduleSessionWorker(a1, 2);
}

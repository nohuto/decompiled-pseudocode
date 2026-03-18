/*
 * XREFs of TtmpSetDisplayRequestEnded @ 0x1408BF074
 * Callers:
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x1408BF260 (TtmpUpdateDisplayRequiredPowerRequest.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     TtmiGetTerminalById @ 0x1408BC5C4 (TtmiGetTerminalById.c)
 *     TtmiScheduleSessionWorker @ 0x1408BDEDC (TtmiScheduleSessionWorker.c)
 *     TtmpFindPowerRequestEntryById @ 0x1408BE794 (TtmpFindPowerRequestEntryById.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 */

void __fastcall TtmpSetDisplayRequestEnded(__int64 a1, int a2)
{
  char v3; // si
  _QWORD **v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( !TtmpFindPowerRequestEntryById(a1, a2, &v11) )
    return;
  v4 = (_QWORD **)(v11 + 48);
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
    if ( (int)TtmiGetTerminalById(&v11, a1, *((_DWORD *)v5 - 2)) < 0 )
    {
      TtmiLogError("TtmpSetDisplayRequestEnded");
      goto LABEL_13;
    }
    v8 = v11;
    if ( *(_DWORD *)(v11 + 24) != 1416459348 )
      goto LABEL_13;
    v9 = *(_DWORD *)(v11 + 32);
    if ( v9 )
    {
      v10 = v9 - 1;
      *(_DWORD *)(v11 + 32) = v10;
      if ( !v10 )
      {
        *(_DWORD *)(v8 + 36) |= 0x24u;
        v3 = 1;
      }
LABEL_13:
      ExFreePoolWithTag(v7, 0x52507454u);
    }
    else
    {
      TtmiLogError("TtmpSetDisplayRequestEnded");
    }
  }
  if ( v3 )
    TtmiScheduleSessionWorker(a1, 2);
}

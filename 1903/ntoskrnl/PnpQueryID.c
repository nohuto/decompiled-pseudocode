/*
 * XREFs of PnpQueryID @ 0x1407020A8
 * Callers:
 *     PipProcessStartPhase3 @ 0x1406FEE28 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1407021A4 (PnpIrpQueryID.c)
 *     PnpFixupID @ 0x14070222C (PnpFixupID.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PnpLogEvent @ 0x1408621D8 (PnpLogEvent.c)
 *     PnpSetInvalidIDEvent @ 0x14086DE20 (PnpSetInvalidIDEvent.c)
 */

__int64 __fastcall PnpQueryID(__int64 a1, int a2, PVOID *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  int ID; // ebx
  int v10; // r9d
  int v11; // edx
  int v12; // r8d
  int v13; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v18; // [rsp+38h] [rbp-20h]

  v17[1] = 0;
  v5 = *(_QWORD *)(a1 + 32);
  *a4 = 0;
  ID = PnpIrpQueryID(v5);
  if ( ID < 0 )
  {
LABEL_15:
    if ( ID == -1073479624 || !a2 || a2 == 3 && ID == -1073741670 )
    {
      PipSetDevNodeProblem(a1, 9LL, (unsigned int)ID);
      v15 = *(_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(v15 + 396) & 0x200000) == 0 )
      {
        PipSetDevNodeFlags(v15, 0x200000LL);
        PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
      }
    }
    if ( ID != -1073479624 && !a2 && ID != -1073741670 )
    {
      v16 = *(_QWORD *)(a1 + 16) + 56LL;
      v17[0] = 5242958;
      v18 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v16, v17, (unsigned int)ID, 0LL, 0);
    }
    if ( *a3 )
    {
      ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
      *a4 = 0;
    }
    return (unsigned int)ID;
  }
  if ( !a2 )
  {
    v10 = 1;
LABEL_7:
    v12 = 0;
    v11 = 200;
    goto LABEL_8;
  }
  if ( a2 > 0 )
  {
    if ( a2 <= 2 )
    {
      v10 = -1;
      v11 = 1024;
      v12 = 1;
LABEL_8:
      v13 = PnpFixupID((unsigned int)*a3, v11, v12, v10, *(_QWORD *)(a1 + 16) + 56LL);
      goto LABEL_9;
    }
    if ( a2 == 3 )
    {
      v10 = 0;
      goto LABEL_7;
    }
  }
  v13 = 0;
LABEL_9:
  *a4 = 2 * v13;
  if ( !(2 * v13) )
    ID = -1073479624;
  if ( ID < 0 )
    goto LABEL_15;
  return (unsigned int)ID;
}

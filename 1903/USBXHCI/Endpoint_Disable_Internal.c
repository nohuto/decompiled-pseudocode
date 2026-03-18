/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C0018194
 * Callers:
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C00182F0 (Endpoint_Enable.c)
 * Callees:
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0017360 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C001DC20 (WPP_RECORDER_SF_ddql.c)
 *     TR_Disable_Internal @ 0x1C00288AC (TR_Disable_Internal.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 a1, __int64 a2)
{
  char v2; // di
  bool v4; // si
  __int64 v5; // rdi
  unsigned int i; // ebp
  __int64 v7; // rdx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddql(
      *(_QWORD *)(*(_QWORD *)a1 + 72LL),
      a2,
      (unsigned __int8)a2,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL));
  v4 = !*(_BYTE *)(a1 + 36) && !*(_BYTE *)(a1 + 1336) || v2;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 )
    {
      for ( i = 1; i <= *(_DWORD *)(v5 + 8); ++i )
      {
        LOBYTE(a2) = v4;
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48), a2);
      }
    }
  }
  else
  {
    v5 = 0LL;
    LOBYTE(a2) = v4;
    TR_Disable_Internal(*(_QWORD *)(a1 + 88), a2);
  }
  if ( v4 )
  {
    if ( v5 )
    {
      XilEndpoint_FreeStreamContextArray((_QWORD *)v5);
      if ( v5 == *(_QWORD *)(a1 + 128) )
      {
        ExFreePoolWithTag((PVOID)v5, 0x49434858u);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      if ( v7 != *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v7);
    }
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}

/*
 * XREFs of ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C0061624
 * Callers:
 *     ndisPnPPortDeactivation @ 0x1C006272C (ndisPnPPortDeactivation.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisFindPortByPortNumber @ 0x1C0062034 (ndisFindPortByPortNumber.c)
 */

void __fastcall ndisRollbackPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int *a2, int a3)
{
  unsigned int *v4; // rsi
  unsigned int *v6; // r10
  __int64 PortByPortNumber; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  char v10; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      40,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1,
      v10);
  }
  if ( a3 )
  {
    v6 = v4;
    do
    {
      PortByPortNumber = ndisFindPortByPortNumber(a1, *v6);
      if ( PortByPortNumber )
      {
        *(_DWORD *)(PortByPortNumber + 16) = *(_DWORD *)(PortByPortNumber + 20);
        ++a1->NumberOfActivePorts;
      }
      v6 = (unsigned int *)(v8 + 4);
    }
    while ( v9 != 1 );
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      23,
      41,
      (struct _GUID *)&WPP_e0f2aa06e6d63a65c11fd644ab7d6728_Traceguids,
      (char)a1,
      (char)v4);
  }
}

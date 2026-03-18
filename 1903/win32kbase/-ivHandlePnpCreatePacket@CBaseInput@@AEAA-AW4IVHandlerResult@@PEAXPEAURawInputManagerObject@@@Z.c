/*
 * XREFs of ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018CFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01883F0 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C01894D0 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, struct _IVPnpCreatePacket *a2, char *a3)
{
  struct _IVPnpCreatePacket *v4; // rdi
  unsigned int v5; // ebx
  int PacketForRimDev; // eax
  int v7; // edx
  int v8; // r9d
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  struct _IVPnpCreatePacket *v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+58h] [rbp-20h]
  char v15; // [rsp+60h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, (_DWORD)a2, 12, 29, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v12 = 0LL;
  v13 = 0LL;
  v5 = 1;
  v14 = 0LL;
  v15 = 1;
  v11 = v4;
  PacketForRimDev = IVDeSerializeIVPnpCreatePacketForRimDev(v4, (struct CIVSerializer *)v10);
  if ( PacketForRimDev < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 32;
      goto LABEL_11;
    }
LABEL_12:
    v5 = 0;
    goto LABEL_13;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 12, 30, (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  PacketForRimDev = RIMVirtDeviceClassNotify(a3, ((unsigned __int64)v4 + 8) & -(__int64)(v4 != 0LL));
  if ( PacketForRimDev < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 31;
LABEL_11:
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_D(
        (_DWORD)gBaseLog,
        v7,
        12,
        v8,
        (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids,
        PacketForRimDev);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
LABEL_13:
  CIVSerializer::~CIVSerializer((CIVSerializer *)v10);
  return v5;
}

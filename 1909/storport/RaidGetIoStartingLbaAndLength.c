/*
 * XREFs of RaidGetIoStartingLbaAndLength @ 0x1C0037E9C
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RiNormalizeDeviceQueue @ 0x1C000B274 (RiNormalizeDeviceQueue.c)
 *     RaidZoneWriteGroupListSearchRequest @ 0x1C0039CF8 (RaidZoneWriteGroupListSearchRequest.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidGetIoStartingLbaAndLength(char *a1, __int64 a2, __int64 a3)
{
  char v4; // cl
  __int64 v5; // rax

  v4 = *a1;
  LOBYTE(v5) = v4 - 8;
  if ( ((v4 - 8) & 0xFD) != 0 )
  {
    LOBYTE(v5) = v4 - 40;
    if ( ((v4 - 40) & 0xFD) != 0 )
    {
      LOBYTE(v5) = v4 + 88;
      if ( ((v4 + 88) & 0xFD) != 0 )
      {
        if ( ((v4 + 120) & 0xFD) != 0 )
        {
          if ( a2 )
            *(_QWORD *)a2 = -1LL;
          if ( a3 )
            *(_DWORD *)a3 = 0;
          return v5;
        }
        if ( a2 )
        {
          *(_BYTE *)(a2 + 7) = a1[2];
          *(_BYTE *)(a2 + 6) = a1[3];
          *(_BYTE *)(a2 + 5) = a1[4];
          *(_BYTE *)(a2 + 4) = a1[5];
          *(_BYTE *)(a2 + 3) = a1[6];
          *(_BYTE *)(a2 + 2) = a1[7];
          *(_BYTE *)(a2 + 1) = a1[8];
          LOBYTE(v5) = a1[9];
          *(_BYTE *)a2 = v5;
        }
        if ( a3 )
        {
          *(_BYTE *)(a3 + 3) = a1[10];
          *(_BYTE *)(a3 + 2) = a1[11];
          *(_BYTE *)(a3 + 1) = a1[12];
          LOBYTE(v5) = a1[13];
LABEL_13:
          *(_BYTE *)a3 = v5;
        }
      }
      else
      {
        if ( a2 )
        {
          *(_BYTE *)(a2 + 3) = a1[2];
          *(_BYTE *)(a2 + 2) = a1[3];
          *(_BYTE *)(a2 + 1) = a1[4];
          LOBYTE(v5) = a1[5];
          *(_BYTE *)a2 = v5;
        }
        if ( a3 )
        {
          *(_BYTE *)(a3 + 3) = a1[6];
          *(_BYTE *)(a3 + 2) = a1[7];
          *(_BYTE *)(a3 + 1) = a1[8];
          LOBYTE(v5) = a1[9];
          goto LABEL_13;
        }
      }
    }
    else
    {
      if ( a2 )
      {
        *(_BYTE *)(a2 + 3) = a1[2];
        *(_BYTE *)(a2 + 2) = a1[3];
        *(_BYTE *)(a2 + 1) = a1[4];
        LOBYTE(v5) = a1[5];
        *(_BYTE *)a2 = v5;
      }
      if ( a3 )
      {
        *(_BYTE *)(a3 + 1) = a1[7];
        LOBYTE(v5) = a1[8];
        goto LABEL_13;
      }
    }
  }
  else
  {
    if ( a2 )
    {
      v5 = (unsigned __int8)a1[3];
      *(_QWORD *)a2 = v5 | (((unsigned __int8)a1[2] | ((unsigned __int64)(a1[1] & 0x1F) << 8)) << 8);
    }
    if ( a3 )
    {
      LODWORD(v5) = (unsigned __int8)a1[4];
      *(_DWORD *)a3 = v5;
    }
  }
  return v5;
}

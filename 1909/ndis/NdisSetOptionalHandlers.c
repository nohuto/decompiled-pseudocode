/*
 * XREFs of NdisSetOptionalHandlers @ 0x1C002DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisFSetRestartAttributes @ 0x1C002E024 (ndisFSetRestartAttributes.c)
 *     ndisSetSystemPowerNotificationHandlers @ 0x1C00A6FF8 (ndisSetSystemPowerNotificationHandlers.c)
 *     ndisSetMiniportReenumerateHandlers @ 0x1C011919C (ndisSetMiniportReenumerateHandlers.c)
 *     ndisSetDevicePowerNotificationHandlers @ 0x1C0119604 (ndisSetDevicePowerNotificationHandlers.c)
 *     ndisSetNDKHandlers @ 0x1C011A230 (ndisSetNDKHandlers.c)
 *     ndisSetSSHandlers @ 0x1C011C3A8 (ndisSetSSHandlers.c)
 *     ?ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C0121DC8 (-ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z.c)
 */

NDIS_STATUS __stdcall NdisSetOptionalHandlers(NDIS_HANDLE NdisHandle, PNDIS_DRIVER_OPTIONAL_HANDLERS OptionalHandlers)
{
  PNDIS_DRIVER_OPTIONAL_HANDLERS v2; // rdi
  NDIS_STATUS v4; // ebx
  int v5; // edx
  unsigned int Type; // ecx
  unsigned int v7; // ecx
  NDIS_STATUS restarted; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  _OWORD *v17; // rax
  bool v18; // zf
  bool v19; // zf
  unsigned __int8 v20; // al
  unsigned __int8 v21; // al
  UCHAR Revision; // al

  v2 = OptionalHandlers;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OptionalHandlers) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OptionalHandlers,
      1,
      114,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisHandle);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  Type = v2->Header.Type;
  if ( Type > 0xA6 )
  {
    v5 = Type - 176;
    switch ( Type )
    {
      case 0xB0u:
        switch ( *(_BYTE *)NdisHandle )
        {
          case 3:
            *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&v2[4].Header.Type;
            *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&v2[6].Header.Type;
            *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&v2[2].Header.Type;
            break;
          case 0x11:
            *((_QWORD *)NdisHandle + 450) = *(_QWORD *)&v2[4].Header.Type;
            *((_QWORD *)NdisHandle + 451) = *(_QWORD *)&v2[6].Header.Type;
            *((_QWORD *)NdisHandle + 452) = *(_QWORD *)&v2[2].Header.Type;
            break;
          case 0x12:
            *((_QWORD *)NdisHandle + 97) = *(_QWORD *)&v2[4].Header.Type;
            *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&v2[6].Header.Type;
            *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&v2[2].Header.Type;
            break;
          default:
            goto LABEL_46;
        }
        goto LABEL_9;
      case 0xB2u:
        restarted = ndisSetNDKHandlers(NdisHandle, v2);
        goto LABEL_8;
      case 0xB4u:
        restarted = ndisSetSSHandlers(NdisHandle, v2);
        goto LABEL_8;
    }
    v5 = Type - 184;
    if ( Type != 184 )
    {
      if ( Type == 187 )
      {
        restarted = ndisSetSystemPowerNotificationHandlers((char)NdisHandle);
        goto LABEL_8;
      }
      if ( Type == 188 )
      {
        restarted = ndisSetMiniportReenumerateHandlers((char)NdisHandle);
        goto LABEL_8;
      }
      v5 = Type - 196;
      if ( Type == 196 )
      {
        restarted = ndisPDSetBufferManagerHandlers(NdisHandle, v2);
        goto LABEL_8;
      }
      if ( Type == 198 )
      {
        restarted = ndisSetDevicePowerNotificationHandlers((char)NdisHandle);
        goto LABEL_8;
      }
      goto LABEL_46;
    }
    Revision = v2->Header.Revision;
    if ( (Revision != 2 || v2->Header.Size >= 0xF0u) && (Revision != 1 || v2->Header.Size >= 0x70u) )
    {
      if ( *(_BYTE *)NdisHandle != 2 )
        goto LABEL_46;
      *((_QWORD *)NdisHandle + 114) = *(_QWORD *)&v2[2].Header.Type;
      *((_QWORD *)NdisHandle + 115) = *(_QWORD *)&v2[4].Header.Type;
      *((_QWORD *)NdisHandle + 117) = *(_QWORD *)&v2[6].Header.Type;
      *((_QWORD *)NdisHandle + 116) = *(_QWORD *)&v2[8].Header.Type;
      *((_QWORD *)NdisHandle + 118) = *(_QWORD *)&v2[10].Header.Type;
      *((_QWORD *)NdisHandle + 119) = *(_QWORD *)&v2[12].Header.Type;
      *((_QWORD *)NdisHandle + 120) = *(_QWORD *)&v2[14].Header.Type;
      *((_QWORD *)NdisHandle + 121) = *(_QWORD *)&v2[16].Header.Type;
      *((_QWORD *)NdisHandle + 122) = *(_QWORD *)&v2[18].Header.Type;
      *((_QWORD *)NdisHandle + 123) = *(_QWORD *)&v2[20].Header.Type;
      *((_QWORD *)NdisHandle + 124) = *(_QWORD *)&v2[22].Header.Type;
      *((_QWORD *)NdisHandle + 125) = *(_QWORD *)&v2[24].Header.Type;
      *((_QWORD *)NdisHandle + 126) = *(_QWORD *)&v2[26].Header.Type;
      *((_QWORD *)NdisHandle + 127) = *(_QWORD *)&v2[28].Header.Type;
      *((_QWORD *)NdisHandle + 128) = *(_QWORD *)&v2[30].Header.Type;
      if ( v2->Header.Revision >= 2u )
      {
        *((_QWORD *)NdisHandle + 129) = *(_QWORD *)&v2[32].Header.Type;
        *((_QWORD *)NdisHandle + 130) = *(_QWORD *)&v2[34].Header.Type;
        *((_QWORD *)NdisHandle + 131) = *(_QWORD *)&v2[36].Header.Type;
        *((_QWORD *)NdisHandle + 132) = *(_QWORD *)&v2[38].Header.Type;
        *((_QWORD *)NdisHandle + 133) = *(_QWORD *)&v2[40].Header.Type;
        *((_QWORD *)NdisHandle + 134) = *(_QWORD *)&v2[42].Header.Type;
        *((_QWORD *)NdisHandle + 135) = *(_QWORD *)&v2[44].Header.Type;
        *((_QWORD *)NdisHandle + 136) = *(_QWORD *)&v2[46].Header.Type;
        *((_QWORD *)NdisHandle + 137) = *(_QWORD *)&v2[48].Header.Type;
        *((_QWORD *)NdisHandle + 138) = *(_QWORD *)&v2[50].Header.Type;
        *((_QWORD *)NdisHandle + 139) = *(_QWORD *)&v2[52].Header.Type;
        *((_QWORD *)NdisHandle + 140) = *(_QWORD *)&v2[54].Header.Type;
        *((_QWORD *)NdisHandle + 141) = *(_QWORD *)&v2[56].Header.Type;
        *((_QWORD *)NdisHandle + 142) = *(_QWORD *)&v2[58].Header.Type;
      }
      goto LABEL_9;
    }
    goto LABEL_51;
  }
  if ( Type == 166 )
  {
    if ( v2->Header.Revision && v2->Header.Size >= 0xA0u )
    {
      if ( *(_BYTE *)NdisHandle != 3 )
        goto LABEL_46;
      *(_OWORD *)((char *)NdisHandle + 472) = *(_OWORD *)&v2->Header.Type;
      *(_OWORD *)((char *)NdisHandle + 488) = *(_OWORD *)&v2[4].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 504) = *(_OWORD *)&v2[8].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 520) = *(_OWORD *)&v2[12].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 536) = *(_OWORD *)&v2[16].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 552) = *(_OWORD *)&v2[20].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 568) = *(_OWORD *)&v2[24].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 584) = *(_OWORD *)&v2[28].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 600) = *(_OWORD *)&v2[32].Header.Type;
      *(_OWORD *)((char *)NdisHandle + 616) = *(_OWORD *)&v2[36].Header.Type;
      goto LABEL_9;
    }
LABEL_51:
    v4 = -1073741811;
    goto LABEL_9;
  }
  v7 = Type - 140;
  if ( !v7 )
  {
    if ( *(_BYTE *)NdisHandle == 5 )
    {
      restarted = ndisFSetRestartAttributes((char)NdisHandle, v2);
LABEL_8:
      v4 = restarted;
      goto LABEL_9;
    }
    goto LABEL_46;
  }
  v10 = v7 - 2;
  if ( !v10 )
  {
    v21 = *(_BYTE *)NdisHandle;
    if ( *(_BYTE *)NdisHandle < 3u )
      goto LABEL_46;
    if ( v21 <= 5u )
      goto LABEL_9;
    v19 = v21 == 18;
LABEL_45:
    if ( v19 )
      goto LABEL_9;
    goto LABEL_46;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      if ( *(_BYTE *)NdisHandle == 3 )
      {
        *((_QWORD *)NdisHandle + 24) = *(_QWORD *)&v2[2].Header.Type;
        *((_QWORD *)NdisHandle + 25) = *(_QWORD *)&v2[4].Header.Type;
        *((_QWORD *)NdisHandle + 26) = *(_QWORD *)&v2[6].Header.Type;
        *((_QWORD *)NdisHandle + 27) = *(_QWORD *)&v2[8].Header.Type;
        goto LABEL_9;
      }
      goto LABEL_46;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( *(_BYTE *)NdisHandle == 2 )
      {
        *((_QWORD *)NdisHandle + 63) = *(_QWORD *)&v2[2].Header.Type;
        *((_QWORD *)NdisHandle + 64) = *(_QWORD *)&v2[4].Header.Type;
        *((_QWORD *)NdisHandle + 65) = *(_QWORD *)&v2[6].Header.Type;
        *((_QWORD *)NdisHandle + 66) = *(_QWORD *)&v2[8].Header.Type;
        *((_QWORD *)NdisHandle + 67) = *(_QWORD *)&v2[10].Header.Type;
        *((_QWORD *)NdisHandle + 69) = *(_QWORD *)&v2[12].Header.Type;
        goto LABEL_9;
      }
      goto LABEL_46;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( *(_BYTE *)NdisHandle == 2 )
      {
        *((_QWORD *)NdisHandle + 98) = *(_QWORD *)&v2[2].Header.Type;
        *((_QWORD *)NdisHandle + 99) = *(_QWORD *)&v2[4].Header.Type;
        *((_QWORD *)NdisHandle + 100) = *(_QWORD *)&v2[6].Header.Type;
        *((_QWORD *)NdisHandle + 101) = *(_QWORD *)&v2[8].Header.Type;
        goto LABEL_9;
      }
      goto LABEL_46;
    }
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 17 )
          goto LABEL_46;
        if ( v2->Header.Revision && v2->Header.Size >= 0x88u )
        {
          if ( *(_BYTE *)NdisHandle == 2 )
          {
            v17 = (char *)NdisHandle + 640;
            goto LABEL_28;
          }
          if ( *(_BYTE *)NdisHandle == 3 )
          {
            v17 = (char *)NdisHandle + 632;
LABEL_28:
            *v17 = *(_OWORD *)&v2->Header.Type;
            v17[1] = *(_OWORD *)&v2[4].Header.Type;
            v17[2] = *(_OWORD *)&v2[8].Header.Type;
            v17[3] = *(_OWORD *)&v2[12].Header.Type;
            v17[4] = *(_OWORD *)&v2[16].Header.Type;
            v17[5] = *(_OWORD *)&v2[20].Header.Type;
            v17[6] = *(_OWORD *)&v2[24].Header.Type;
            v17[7] = *(_OWORD *)&v2[28].Header.Type;
            v17[8] = *(_OWORD *)&v2[32].Header.Type;
            goto LABEL_9;
          }
LABEL_46:
          v4 = -1073741637;
          goto LABEL_9;
        }
        goto LABEL_51;
      }
      v18 = *(_BYTE *)NdisHandle == 2;
    }
    else
    {
      if ( *(_BYTE *)NdisHandle == 3 )
      {
LABEL_33:
        v19 = *(_DWORD *)&v2[2] == 1;
        goto LABEL_45;
      }
      v18 = *(_BYTE *)NdisHandle == 18;
    }
    if ( !v18 )
      goto LABEL_46;
    goto LABEL_33;
  }
  v20 = *(_BYTE *)NdisHandle;
  if ( *(_BYTE *)NdisHandle != 2 && (v20 <= 3u || v20 > 5u) )
    goto LABEL_46;
LABEL_9:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      115,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisHandle,
      v4);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v4;
}

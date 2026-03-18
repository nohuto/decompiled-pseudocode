/*
 * XREFs of BlackScreenDiagnostics::GetVidPnOwnership @ 0x1400073A8
 * Callers:
 *     ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x1400072FC (-GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     ??0?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@@Z @ 0x140006B58 (--0-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@_K.c)
 *     ??0?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_KAEBV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@@Z @ 0x140006BE4 (--0-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@_K.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXXZ @ 0x1400083FC (-_Tidy@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEA.c)
 *     ?_Tidy@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXXZ @ 0x140008438 (-_Tidy@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEA.c)
 */

__int64 __fastcall BlackScreenDiagnostics::GetVidPnOwnership(_DWORD *a1)
{
  int DisplayConfigBufferSizes; // ebx
  DISPLAYCONFIG_PATH_INFO *v3; // rsi
  DISPLAYCONFIG_MODE_INFO *v4; // r14
  __int64 v5; // rdx
  DISPLAYCONFIG_PATH_INFO *v6; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-19h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+34h] [rbp-15h] BYREF
  __int64 v12; // [rsp+38h] [rbp-11h] BYREF
  DISPLAYCONFIG_MODE_INFO *modeInfoArray[3]; // [rsp+40h] [rbp-9h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray[3]; // [rsp+58h] [rbp+Fh] BYREF
  LUID adapterId; // [rsp+70h] [rbp+27h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+2Fh]

  numPathArrayElements = 0;
  numModeInfoArrayElements = 0;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
  if ( DisplayConfigBufferSizes >= 0 )
  {
    if ( numPathArrayElements )
    {
      std::vector<DISPLAYCONFIG_PATH_INFO>::vector<DISPLAYCONFIG_PATH_INFO>((__int64)pathArray, numPathArrayElements);
      std::vector<DISPLAYCONFIG_MODE_INFO>::vector<DISPLAYCONFIG_MODE_INFO>(
        (__int64)modeInfoArray,
        numModeInfoArrayElements);
      v3 = pathArray[0];
      v4 = modeInfoArray[0];
      DisplayConfigBufferSizes = QueryDisplayConfig(
                                   2u,
                                   &numPathArrayElements,
                                   pathArray[0],
                                   &numModeInfoArrayElements,
                                   modeInfoArray[0],
                                   0LL);
      if ( DisplayConfigBufferSizes < 0 )
      {
        *a1 = 5;
      }
      else
      {
        v5 = 0LL;
        if ( numPathArrayElements )
        {
          while ( *(_QWORD *)&v4[(unsigned __int64)v3[(unsigned int)v5].sourceInfo.modeInfoIdx].desktopImageInfo.DesktopImageRegion.top )
          {
            v5 = (unsigned int)(v5 + 1);
            if ( (unsigned int)v5 >= numPathArrayElements )
              goto LABEL_20;
          }
          adapterId = 0LL;
          v16 = 0;
          v6 = &v3[(unsigned int)v5];
          adapterId = v6->sourceInfo.adapterId;
          v7 = D3DKMTOpenAdapterFromLuid(&adapterId);
          if ( v7 < 0 )
          {
            *a1 = 6;
            DisplayConfigBufferSizes = RtlNtStatusToDosError(v7);
          }
          else
          {
            v12 = v16;
            HIDWORD(v12) = v6->sourceInfo.id;
            v8 = D3DKMTCheckVidPnExclusiveOwnership(&v12);
            if ( v8 == -1071775738 )
            {
              *a1 = 2;
              DisplayConfigBufferSizes = 0;
            }
            else if ( v8 == -1071775732 )
            {
              *a1 = 3;
              DisplayConfigBufferSizes = 0;
            }
            else if ( v8 )
            {
              *a1 = 7;
              DisplayConfigBufferSizes = RtlNtStatusToDosError(v8);
            }
            else
            {
              *a1 = 1;
              DisplayConfigBufferSizes = 0;
            }
          }
        }
      }
LABEL_20:
      std::vector<DISPLAYCONFIG_MODE_INFO>::_Tidy(modeInfoArray, v5);
      std::vector<DISPLAYCONFIG_PATH_INFO>::_Tidy(pathArray);
    }
    else
    {
      *a1 = 4;
    }
  }
  return (unsigned int)DisplayConfigBufferSizes;
}

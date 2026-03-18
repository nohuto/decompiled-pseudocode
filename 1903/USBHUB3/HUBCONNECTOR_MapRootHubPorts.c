/*
 * XREFs of HUBCONNECTOR_MapRootHubPorts @ 0x1C00788F4
 * Callers:
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0070DB0 (HUBFDO_EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     HUBCONNECTOR_RegisterPort @ 0x1C007809C (HUBCONNECTOR_RegisterPort.c)
 */

void __fastcall HUBCONNECTOR_MapRootHubPorts(__int64 a1)
{
  unsigned __int16 v1; // si
  unsigned __int16 v3; // r15
  unsigned __int16 v4; // r14
  unsigned __int16 v5; // r13
  __int64 i; // rbx
  __int64 v7; // rbx
  int v8; // eax
  __int64 k; // rbp
  __int64 v10; // rbp
  int v11; // eax
  __int64 j; // rcx
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-40h]
  __int64 v15; // [rsp+30h] [rbp-38h]

  v1 = *(_WORD *)(a1 + 152);
  v3 = *(_WORD *)(a1 + 154);
  v4 = *(_WORD *)(a1 + 146);
  v5 = *(_WORD *)(a1 + 148);
  if ( v1 <= v3 )
  {
    while ( v4 <= v5 )
    {
      for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v7 + 248) )
      {
        v7 = i - 248;
        if ( a1 == v7 - 2112 )
          break;
        if ( *(_WORD *)(v7 + 200) == v4 )
        {
          if ( v7 )
          {
            if ( (*(_DWORD *)(v7 + 204) & 0x10) != 0 )
            {
              if ( v4 == v5 )
              {
                *(_WORD *)(v7 + 212) = v1;
                *(_WORD *)(v7 + 214) = v3;
                *(_DWORD *)(v7 + 1368) = 1;
                *(_DWORD *)(v7 + 1372) = *(_DWORD *)(a1 + 96);
                while ( 2 )
                {
                  if ( v1 <= v3 )
                  {
                    for ( j = *(_QWORD *)(a1 + 2360); ; j = *(_QWORD *)(v13 + 248) )
                    {
                      v13 = j - 248;
                      if ( a1 == v13 - 2112 )
                        goto LABEL_37;
                      if ( *(_WORD *)(v13 + 200) == v1 )
                        break;
                    }
                    if ( !v13
                      || (*(_DWORD *)(v13 + 1368) = 1,
                          *(_DWORD *)(v13 + 1372) = *(_DWORD *)(a1 + 96),
                          *(_DWORD *)(v13 + 1392) = v1,
                          *(_WORD *)(v13 + 1388) = 0,
                          (int)HUBCONNECTOR_RegisterPort(v13) >= 0) )
                    {
LABEL_37:
                      ++v1;
                      continue;
                    }
                  }
                  break;
                }
              }
              else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_(
                  *(_QWORD *)(v7 + 1432),
                  2u,
                  6u,
                  0x18u,
                  (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids);
              }
              return;
            }
            *(_DWORD *)(v7 + 1368) = 1;
            *(_DWORD *)(v7 + 1372) = *(_DWORD *)(a1 + 96);
            *(_DWORD *)(v7 + 1392) = v1;
            v8 = *(_DWORD *)(v7 + 204);
            *(_WORD *)(v7 + 1388) = 0;
            if ( (v8 & 1) != 0 )
            {
              if ( (int)HUBCONNECTOR_RegisterPort(v7) < 0 )
                return;
              for ( k = *(_QWORD *)(a1 + 2360); ; k = *(_QWORD *)(v10 + 248) )
              {
                v10 = k - 248;
                if ( a1 == v10 - 2112 )
                  goto LABEL_16;
                if ( *(_WORD *)(v10 + 200) == v1 )
                  break;
              }
              if ( !v10 )
              {
LABEL_16:
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LODWORD(v14) = v4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(v7 + 1432),
                    2u,
                    6u,
                    0x19u,
                    (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
                    v14);
                }
                break;
              }
              *(_DWORD *)(v10 + 1368) = 1;
              *(_DWORD *)(v10 + 1372) = *(_DWORD *)(a1 + 96);
              *(_DWORD *)(v10 + 1392) = v1;
              v11 = *(_DWORD *)(v10 + 204);
              *(_WORD *)(v10 + 1388) = 0;
              if ( (v11 & 1) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v15) = v1;
                LODWORD(v14) = v4;
                WPP_RECORDER_SF_dD(
                  *(_QWORD *)(v7 + 1432),
                  2u,
                  6u,
                  0x1Au,
                  (__int64)&WPP_db693aa1fcfc37323e5a8b81ddef70b5_Traceguids,
                  v14,
                  v15);
              }
              if ( (int)HUBCONNECTOR_RegisterPort(v10) < 0 )
                return;
            }
          }
          break;
        }
      }
      ++v1;
      ++v4;
      if ( v1 > v3 )
        return;
    }
  }
}

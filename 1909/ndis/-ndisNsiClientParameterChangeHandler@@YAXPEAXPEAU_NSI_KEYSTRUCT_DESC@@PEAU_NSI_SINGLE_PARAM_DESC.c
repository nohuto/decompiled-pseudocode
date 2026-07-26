/*
 * XREFs of ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00FF7E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_dd @ 0x1C001D754 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ddLLL @ 0x1C003E904 (WPP_RECORDER_SF_ddLLL.c)
 *     McTemplateK0j @ 0x1C00662E0 (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0066348 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C00663AC (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C0066430 (McTemplateK0qxqqq.c)
 *     McTemplateK0x @ 0x1C00664E4 (McTemplateK0x.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x1C00669BC (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 */

int __fastcall ndisNsiClientParameterChangeHandler(unsigned __int64 a1, int **a2, _DWORD *a3, __int64 a4)
{
  _UNKNOWN **v4; // rax
  int v5; // edi
  const LARGE_INTEGER *v9; // rdx
  int *v10; // r14
  int v12; // [rsp+20h] [rbp-88h]
  __int64 v13; // [rsp+40h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  int v15; // [rsp+C8h] [rbp+20h]

  v4 = &retaddr;
  v15 = a4;
  v5 = a4;
  v9 = &WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v4) = WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                    0x16u,
                    0x63u,
                    (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                    a1,
                    (char)a2,
                    (char)a3,
                    a4);
    v9 = &WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids;
  }
  v10 = *a2;
  if ( *a2 && a1 <= 0x11 )
  {
    LODWORD(v4) = a1;
    if ( (_DWORD)a1 )
    {
      LODWORD(v4) = a1 - 1;
      if ( (_DWORD)a1 == 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          LODWORD(v4) = WPP_RECORDER_SF_dd(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                          22,
                          101,
                          (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                          *((_WORD *)v10 + 3),
                          BYTE3(*(_QWORD *)v10));
        if ( (byte_1C00E8081 & 0x20) != 0 )
          LODWORD(v4) = McTemplateK0qx(
                          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
                          (__int64)v9,
                          (__int64)a3,
                          *((unsigned __int16 *)*a2 + 3),
                          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
      }
      else
      {
        LODWORD(v4) = a1 - 6;
        if ( (_DWORD)a1 == 6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v4) = WPP_RECORDER_SF_DDDDDDDDDDD(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4u,
                            0x16u,
                            0x66u,
                            (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                            *v10,
                            *((_WORD *)v10 + 2),
                            *((_WORD *)v10 + 3),
                            *((_BYTE *)v10 + 8),
                            *((_BYTE *)v10 + 9),
                            *((_BYTE *)v10 + 10),
                            *((_BYTE *)v10 + 11),
                            *((_BYTE *)v10 + 12),
                            *((_BYTE *)v10 + 13),
                            *((_BYTE *)v10 + 14),
                            *((unsigned __int8 *)v10 + 15));
            v5 = v15;
          }
          if ( (byte_1C00E8081 & 0x20) != 0 )
            LODWORD(v4) = McTemplateK0j(a1, (__int64)v9, (__int64)a3, (__int64)v10);
        }
        else
        {
          LODWORD(v4) = a1 - 7;
          if ( (_DWORD)a1 == 7 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = 4;
              LODWORD(v4) = WPP_RECORDER_SF_D(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              (int)v9,
                              22,
                              103,
                              (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                              *v10);
            }
            if ( (byte_1C00E8081 & 0x20) != 0 )
              LODWORD(v4) = McTemplateK0q(a1, &ChangeNotificationCompartment, &NDIS_PROVIDER_ID, **a2);
          }
          else if ( (_DWORD)a1 == 17 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              LODWORD(v4) = WPP_RECORDER_SF_dd(
                              *((_QWORD *)WPP_GLOBAL_Control + 8),
                              (int)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                              22,
                              104,
                              (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                              *((_WORD *)v10 + 3),
                              BYTE3(*(_QWORD *)v10));
            if ( (byte_1C00E8081 & 0x20) != 0 )
              LODWORD(v4) = McTemplateK0x(a1, &ChangeNotificationTimestamping, &NDIS_PROVIDER_ID, *(_QWORD *)*a2);
          }
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        LODWORD(v4) = WPP_RECORDER_SF_ddLLL(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        (*(_QWORD *)v10 >> 24) & 0xFFFFFFLL,
                        (__int64)a3,
                        a4,
                        v12);
      if ( (byte_1C00E8081 & 0x20) != 0 )
        LODWORD(v4) = McTemplateK0qxqqq(
                        (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
                        (__int64)v9,
                        (__int64)a3,
                        *((unsigned __int16 *)*a2 + 3),
                        BYTE3(*(_QWORD *)*a2),
                        *a3,
                        a3[4],
                        a3[5]);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v5;
    LODWORD(v4) = WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)v9,
                    0x16u,
                    0x69u,
                    (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
                    a1,
                    (char)a2,
                    (char)a3,
                    v13);
  }
  return (int)v4;
}

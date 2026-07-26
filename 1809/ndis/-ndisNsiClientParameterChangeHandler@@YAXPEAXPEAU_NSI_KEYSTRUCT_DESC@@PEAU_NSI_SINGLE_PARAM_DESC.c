/*
 * XREFs of ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00CFDA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0j @ 0x1C00410DC (McTemplateK0j.c)
 *     McTemplateK0q @ 0x1C0041144 (McTemplateK0q.c)
 *     McTemplateK0qx @ 0x1C00411A8 (McTemplateK0qx.c)
 *     McTemplateK0qxqqq @ 0x1C004122C (McTemplateK0qxqqq.c)
 *     McTemplateK0x @ 0x1C00412E0 (McTemplateK0x.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     WPP_SF_DDDDDDDDDDD @ 0x1C00417A4 (WPP_SF_DDDDDDDDDDD.c)
 *     WPP_SF_dd @ 0x1C0041D74 (WPP_SF_dd.c)
 *     WPP_SF_ddLLL @ 0x1C0041DB8 (WPP_SF_ddLLL.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 */

void __fastcall ndisNsiClientParameterChangeHandler(unsigned __int64 a1, int **a2, _DWORD *a3, int a4)
{
  int v4; // edi
  int *v8; // r14
  __int64 v9; // [rsp+28h] [rbp-70h]

  v4 = a4;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqqL(0x62u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2, a3, a4);
  v8 = *a2;
  if ( *a2 && a1 <= 0x11 )
  {
    if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 1:
          if ( (unsigned __int8)byte_1C00A0265 >= 4u )
            WPP_SF_dd(
              0x64u,
              &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids,
              HIWORD(*(_QWORD *)v8),
              (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
          if ( (byte_1C00A2081 & 0x20) != 0 )
            McTemplateK0qx(
              HIWORD(*(_QWORD *)*a2),
              (__int64)a2,
              (__int64)a3,
              HIWORD(*(_QWORD *)*a2),
              (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
          break;
        case 6:
          if ( (unsigned __int8)byte_1C00A0265 >= 4u )
          {
            WPP_SF_DDDDDDDDDDD(
              0x65u,
              &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids,
              *v8,
              *((unsigned __int16 *)v8 + 2));
            v4 = a4;
          }
          if ( (byte_1C00A2081 & 0x20) != 0 )
            McTemplateK0j(a1, (__int64)a2, (__int64)a3, (__int64)v8);
          break;
        case 7:
          if ( (unsigned __int8)byte_1C00A0265 >= 4u )
            WPP_SF_D(0x66u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, *v8);
          if ( (byte_1C00A2081 & 0x20) != 0 )
            McTemplateK0q(a1, &ChangeNotificationCompartment, &NDIS_PROVIDER_ID, **a2);
          break;
        case 0x11:
          if ( (unsigned __int8)byte_1C00A0265 >= 4u )
            WPP_SF_dd(
              0x67u,
              &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids,
              HIWORD(*(_QWORD *)v8),
              (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
          if ( (byte_1C00A2081 & 0x20) != 0 )
            McTemplateK0x(a1, &ChangeNotificationTimestamping, &NDIS_PROVIDER_ID, *(_QWORD *)*a2);
          break;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C00A0265 >= 4u )
        WPP_SF_ddLLL(a1, HIWORD(*(_QWORD *)v8), HIWORD(*(_QWORD *)v8), (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
      if ( (byte_1C00A2081 & 0x20) != 0 )
        McTemplateK0qxqqq(
          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
          (__int64)a2,
          HIWORD(*(_QWORD *)*a2),
          HIWORD(*(_QWORD *)*a2),
          BYTE3(*(_QWORD *)*a2),
          *a3,
          a3[4],
          a3[5]);
    }
  }
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    LODWORD(v9) = v4;
    WPP_SF_qqqL(0x68u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2, a3, v9);
  }
}

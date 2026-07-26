/*
 * XREFs of ndisSriovInterfaceSetVfPowerState @ 0x1C00FBCB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceSetVfPowerState(void *a1, __int16 a2, int a3, char a4)
{
  int SetMiniport; // eax
  unsigned int v9; // ebx
  _BYTE v11[248]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+130h] [rbp+30h] BYREF
  __int64 v13; // [rsp+138h] [rbp+38h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0LL;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x67u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1);
  LODWORD(v12) = 1048960;
  WORD2(v12) = a2;
  LODWORD(v13) = a3;
  BYTE4(v13) = a4;
  memset(v11, 0, sizeof(v11));
  *(_DWORD *)&v11[88] |= 8u;
  *(_DWORD *)&v11[8] = 0;
  *(_QWORD *)&v11[104] = &ndisIntReqGeneric;
  *(_DWORD *)v11 = 15466902;
  *(_QWORD *)&v11[40] = &v12;
  *(_DWORD *)&v11[32] = 66134;
  *(_DWORD *)&v11[4] = 1;
  *(_DWORD *)&v11[48] = 16;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v11, 0LL, 0LL);
  v9 = SetMiniport;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x68u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1, SetMiniport);
  return v9;
}

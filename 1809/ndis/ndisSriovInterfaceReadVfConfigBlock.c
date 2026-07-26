/*
 * XREFs of ndisSriovInterfaceReadVfConfigBlock @ 0x1C00FB9E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovInterfaceReadVfConfigBlock(void *a1, __int16 a2, int a3, void *a4, unsigned int Size)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  unsigned int SetMiniport; // edi
  _BYTE v13[248]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_q(0x5Du, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size + 20, 0x6F69444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size + 20);
    v9[4] = 20;
    *v9 = 1311104;
    *((_WORD *)v9 + 2) = a2;
    v9[2] = a3;
    v9[3] = Size;
    memset(v13, 0, sizeof(v13));
    *(_DWORD *)&v13[88] |= 8u;
    *(_QWORD *)&v13[104] = &ndisIntReqGeneric;
    *(_DWORD *)v13 = 15466902;
    *(_QWORD *)&v13[4] = 12LL;
    *(_DWORD *)&v13[32] = 66131;
    *(_DWORD *)&v13[56] = 0;
    *(_QWORD *)&v13[40] = v9;
    *(_DWORD *)&v13[48] = Size + 20;
    *(_DWORD *)&v13[52] = Size + 20;
    SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v13, 0LL, 0LL);
    if ( !SetMiniport )
      memmove(a4, (char *)v9 + (unsigned int)v9[4], Size);
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
    SetMiniport = -1073741670;
  }
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x5Eu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, (__int64)a1, SetMiniport);
  return SetMiniport;
}

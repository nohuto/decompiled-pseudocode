/*
 * XREFs of ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0105B18
 * Callers:
 *     ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BDF78 (-Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ??1NetworkInterfaceBindProperties@@QEAA@XZ @ 0x1C0081C50 (--1NetworkInterfaceBindProperties@@QEAA@XZ.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C00BF898 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C00BFA48 (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ndisBuildMonitoringLwfBindings @ 0x1C0105D14 (ndisBuildMonitoringLwfBindings.c)
 *     ndisIntersectAtoms @ 0x1C0105F08 (ndisIntersectAtoms.c)
 *     ndisIsLwfBindable @ 0x1C010607C (ndisIsLwfBindable.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0106168 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C01061F8 (ndisIsProtocolBindingEnabled.c)
 *     ndisReadNicBindProperties @ 0x1C0106590 (ndisReadNicBindProperties.c)
 */

__int64 __fastcall ndisBuildBindings(const struct _GUID *a1, struct Ndis::BindStack *a2)
{
  unsigned int v2; // ebx
  struct Ndis::BindStack *v3; // r12
  unsigned int NicBindProperties; // eax
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned int v11; // r13d
  _QWORD *v12; // r14
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  Ndis::BindStack *v15; // rax
  const struct _GUID *v16; // r15
  _BYTE v17[8]; // [rsp+20h] [rbp-49h] BYREF
  Ndis::BindStack *v18; // [rsp+28h] [rbp-41h]
  _BYTE v19[16]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-19h] BYREF
  int v22; // [rsp+70h] [rbp+7h]

  v2 = 0;
  v18 = a2;
  v3 = a2;
  v20[0] = 0LL;
  v20[1] = 0LL;
  memset(v21, 0, sizeof(v21));
  v22 = 0;
  NicBindProperties = ndisReadNicBindProperties(a1, v19);
  if ( NicBindProperties )
    goto LABEL_11;
  v5 = P;
  v6 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)P + 7);
  while ( v6 != v8 )
  {
    if ( v6 >= *((unsigned int *)v5 + 7) )
LABEL_25:
      __fastfail(5u);
    v9 = v7 + v5[4];
    if ( !(unsigned __int8)ndisIntersectAtoms(v20, v9 + 24)
      || (unsigned __int8)ndisIntersectAtoms(v21, v9 + 24)
      || (unsigned __int8)ndisIntersectAtoms(v20, v9 + 40) )
    {
      v3 = v18;
    }
    else
    {
      NicBindProperties = ndisIsProtocolBindingEnabled(v19, v9, v17);
      if ( NicBindProperties )
        goto LABEL_11;
      v3 = v18;
      if ( v17[0] )
      {
        NicBindProperties = Ndis::BindStack::AddStaticProtocolBinding(
                              v18,
                              *(const wchar_t **)(*(_QWORD *)(v9 + 16) + 8LL));
        if ( NicBindProperties )
          goto LABEL_11;
      }
    }
    ++v6;
    v7 += 64LL;
  }
  NicBindProperties = ndisBuildMonitoringLwfBindings(v19, v3, 0LL, 0LL);
  v11 = 1;
  if ( NicBindProperties )
  {
LABEL_11:
    v2 = NicBindProperties;
  }
  else
  {
    v12 = P;
    v13 = 0LL;
    v14 = 0LL;
    v15 = (Ndis::BindStack *)*((unsigned int *)P + 11);
    v18 = v15;
    while ( (Ndis::BindStack *)v13 != v15 )
    {
      if ( v13 >= *((unsigned int *)v12 + 11) )
        goto LABEL_25;
      v16 = (const struct _GUID *)(v14 + v12[6]);
      if ( (unsigned __int8)ndisIsLwfBindable(v19, v16) )
      {
        NicBindProperties = ndisIsLwfBindingEnabled_0(v19, v16, v17);
        if ( NicBindProperties )
          goto LABEL_11;
        if ( v17[0] )
        {
          NicBindProperties = Ndis::BindStack::AddStaticFilterBinding(v3, v16, 0);
          if ( NicBindProperties )
            goto LABEL_11;
          NicBindProperties = ndisBuildMonitoringLwfBindings(v19, v3, v16, v11++);
          if ( NicBindProperties )
            goto LABEL_11;
        }
      }
      v15 = v18;
      ++v13;
      v14 += 64LL;
    }
  }
  NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties((NetworkInterfaceBindProperties *)v19);
  return v2;
}

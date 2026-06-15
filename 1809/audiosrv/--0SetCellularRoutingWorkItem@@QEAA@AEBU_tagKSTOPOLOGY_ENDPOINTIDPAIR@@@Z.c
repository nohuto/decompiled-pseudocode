/*
 * XREFs of ??0SetCellularRoutingWorkItem@@QEAA@AEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x1801433B0
 * Callers:
 *     ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180144C00 (-SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndp.c)
 * Callees:
 *     <none>
 */

SetCellularRoutingWorkItem *__fastcall SetCellularRoutingWorkItem::SetCellularRoutingWorkItem(
        SetCellularRoutingWorkItem *this,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rax
  __int128 v4; // xmm1

  *((_DWORD *)this + 5) = 0;
  *(_QWORD *)this = &PhoneTopologyWorkItem::`vftable';
  v2 = (_OWORD *)((char *)this + 24);
  v3 = 8LL;
  *((_DWORD *)this + 4) = 1;
  do
  {
    *v2 = *(_OWORD *)a2;
    v2[1] = *((_OWORD *)a2 + 1);
    v2[2] = *((_OWORD *)a2 + 2);
    v2[3] = *((_OWORD *)a2 + 3);
    v2[4] = *((_OWORD *)a2 + 4);
    v2[5] = *((_OWORD *)a2 + 5);
    v2[6] = *((_OWORD *)a2 + 6);
    v2 += 8;
    v4 = *((_OWORD *)a2 + 7);
    a2 = (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)((char *)a2 + 128);
    *(v2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *v2 = *(_OWORD *)a2;
  *((_QWORD *)v2 + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 268) = 4;
  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &SetCellularRoutingWorkItem::`vftable';
  return this;
}

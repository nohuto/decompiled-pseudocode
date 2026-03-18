/*
 * XREFs of DpiGetMonitorColorimetryOverride @ 0x1C0274178
 * Callers:
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C029D420 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiFdoGetChildDescriptor @ 0x1C001E720 (DpiFdoGetChildDescriptor.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E5B90 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiFdoValidateDxgkColorimetry @ 0x1C02676A4 (DpiFdoValidateDxgkColorimetry.c)
 */

__int64 __fastcall DpiGetMonitorColorimetryOverride(__int64 a1, unsigned int a2, _OWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v6; // ebx
  _QWORD *ChildDescriptor; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  DXGADAPTER *v11; // rbx
  const GUID *v12; // r8
  int v13; // eax
  struct _DXGKARG_QUERYADAPTERINFO v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v6 = -1071841279;
  ChildDescriptor = DpiFdoGetChildDescriptor(v3, a2);
  if ( !ChildDescriptor )
    return 3221225485LL;
  memset(a3, 0, 0x34uLL);
  v9 = ChildDescriptor[13];
  if ( v9 )
  {
    v10 = v9 + 68;
    if ( RtlCompareMemory(a3, (const void *)(v9 + 68), 0x34uLL) != 52 )
    {
      v6 = 0;
      *a3 = *(_OWORD *)v10;
      a3[1] = *(_OWORD *)(v10 + 16);
      a3[2] = *(_OWORD *)(v10 + 32);
      *((_DWORD *)a3 + 12) = *(_DWORD *)(v10 + 48);
    }
  }
  else if ( *((_BYTE *)ChildDescriptor + 65) )
  {
    if ( *(int *)(v3 + 3808) >= 8704 )
    {
      v15 = a2;
      memset(&v14, 0, sizeof(v14));
      v11 = *(DXGADAPTER **)(v3 + 3792);
      v14.pInputData = &v15;
      v14.Type = DXGKQAITYPE_QUERYCOLORIMETRYOVERRIDES;
      v14.InputDataSize = 4;
      v14.OutputDataSize = 52;
      v14.pOutputData = a3;
      DXGADAPTER::IsCoreResourceSharedOwner(v11);
      if ( (int)DXGADAPTER::DdiQueryAdapterInfo(v11, &v14, v12) < 0
        || (v13 = DpiFdoValidateDxgkColorimetry((unsigned int *)a3, a2), v6 = v13, v13 < 0)
        || v13 == 279 )
      {
        memset(a3, 0, 0x34uLL);
        return (unsigned int)-1071841279;
      }
    }
  }
  return v6;
}

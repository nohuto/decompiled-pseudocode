/*
 * XREFs of VfPnpDumpIrpStack @ 0x140941180
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 */

unsigned __int8 __fastcall VfPnpDumpIrpStack(__int64 a1)
{
  unsigned __int8 v2; // al
  const char *v3; // rbx
  const char *v4; // rdx
  const char *v5; // rcx
  unsigned __int8 result; // al
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  const char *v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx

  DbgPrintEx(0x5Du, 0, "IRP_MJ_PNP.");
  v2 = *(_BYTE *)(a1 + 1);
  v3 = "(Bogus)";
  if ( v2 > 0x18u )
  {
    v5 = "IRP_MN_BOGUS";
    if ( v2 != 0xFF )
      v5 = "(Bogus)";
    VfUtilDbgPrint(v5);
  }
  else
  {
    VfUtilDbgPrint(PnPIrpNames[v2]);
  }
  result = *(_BYTE *)(a1 + 1);
  if ( result != 7 )
  {
    if ( result == 12 )
    {
      v14 = *(_DWORD *)(a1 + 8);
      if ( v14 )
      {
        if ( v14 == 1 )
          v3 = "(DeviceTextLocationInformation)";
      }
      else
      {
        v3 = "(DeviceTextDescription)";
      }
    }
    else
    {
      if ( result <= 0xEu )
        return result;
      if ( result <= 0x10u )
        return DbgPrintEx(
                 0x5Du,
                 0,
                 "(WhichSpace=%x, Buffer=%p, Offset=%x, Length=%x)",
                 *(_DWORD *)(a1 + 8),
                 *(const void **)(a1 + 16),
                 *(_DWORD *)(a1 + 24),
                 *(_DWORD *)(a1 + 32));
      if ( result == 18 )
      {
        v4 = "(False)";
        v10 = "(True)";
LABEL_23:
        if ( !*(_BYTE *)(a1 + 8) )
          v10 = v4;
        return VfUtilDbgPrint(v10, v4);
      }
      if ( result != 19 )
      {
        if ( result != 22 )
          return result;
        v7 = *(_DWORD *)(a1 + 16);
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( !v8 )
          {
            VfUtilDbgPrint("(DeviceUsageTypePaging");
            goto LABEL_22;
          }
          v9 = v8 - 1;
          if ( !v9 )
          {
            VfUtilDbgPrint("(DeviceUsageTypeHibernation");
            goto LABEL_22;
          }
          if ( v9 == 1 )
          {
            VfUtilDbgPrint("(DeviceUsageTypeDumpFile");
LABEL_22:
            v4 = ", InPath=FALSE)";
            v10 = ", InPath=TRUE)";
            goto LABEL_23;
          }
        }
        else
        {
          v3 = "(DeviceUsageTypeUndefined";
        }
        VfUtilDbgPrint(v3);
        goto LABEL_22;
      }
      v11 = *(_DWORD *)(a1 + 8);
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
              v3 = "(BusQueryInstanceID)";
          }
          else
          {
            v3 = "(BusQueryCompatibleIDs)";
          }
        }
        else
        {
          v3 = "(BusQueryHardwareIDs)";
        }
      }
      else
      {
        v3 = "(BusQueryDeviceID)";
      }
    }
    return VfUtilDbgPrint(v3, v4);
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( !v16 )
      return VfUtilDbgPrint("(EjectionRelations)", v4);
    v17 = v16 - 1;
    if ( !v17 )
      return VfUtilDbgPrint("(PowerRelations)", v4);
    v18 = v17 - 1;
    if ( !v18 )
      return VfUtilDbgPrint("(RemovalRelations)", v4);
    if ( v18 == 1 )
      return VfUtilDbgPrint("(TargetDeviceRelation)", v4);
    return VfUtilDbgPrint(v3, v4);
  }
  v10 = "(BusRelations)";
  return VfUtilDbgPrint(v10, v4);
}

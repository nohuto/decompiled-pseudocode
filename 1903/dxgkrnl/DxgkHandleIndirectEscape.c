/*
 * XREFs of DxgkHandleIndirectEscape @ 0x1C02ABFC8
 * Callers:
 *     DxgkEscape @ 0x1C01012F0 (DxgkEscape.c)
 * Callees:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001D820 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001D944 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001DC2C (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001DC88 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C004BA54 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C01F68EC (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1C0205304 (DxgkSetIndirectDisplayRenderAdapter.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C0234438 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0234584 (DxgkIddHandleSetDisplayConfig.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C02AAE38 (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02AB890 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     DpiIndirectDdiIoControl @ 0x1C02ABE14 (DpiIndirectDdiIoControl.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // rax
  _DWORD *v6; // r12
  struct _LUID *v7; // rbx
  PVOID PoolWithQuotaTag; // rdi
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  char *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int AdapterSessionDiagnostics; // eax
  PVOID v26; // r15
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rcx
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  void *v31; // [rsp+38h] [rbp-80h] BYREF
  void *v32; // [rsp+40h] [rbp-78h] BYREF
  struct _IO_REMOVE_LOCK *v33; // [rsp+48h] [rbp-70h] BYREF
  char v34; // [rsp+50h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v36[80]; // [rsp+68h] [rbp-50h] BYREF
  int DeviceObjectFromAdapter; // [rsp+C0h] [rbp+8h] BYREF
  void *v38; // [rsp+D0h] [rbp+18h] BYREF
  struct _LUID *v39; // [rsp+D8h] [rbp+20h] BYREF

  if ( (unsigned int)a1 < 0x30 )
  {
    DeviceObjectFromAdapter = -1073741789;
LABEL_3:
    v4 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = DeviceObjectFromAdapter;
    WdLogEvent5_WdError(v4);
    return (unsigned int)DeviceObjectFromAdapter;
  }
  DeviceObjectFromAdapter = DpiIndirectEscapeAccessCheck();
  if ( DeviceObjectFromAdapter < 0 )
    goto LABEL_3;
  v6 = a2 + 10;
  a2[10] = 0;
  v7 = 0LL;
  v39 = 0LL;
  PoolWithQuotaTag = 0LL;
  v38 = 0LL;
  v9 = a2[3];
  if ( !v9
    || (v7 = (struct _LUID *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v9, 0x74727044u),
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v39),
        v39 = v7,
        v31 = 0LL,
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v31),
        v7) )
  {
    v12 = a2[6];
    if ( !v12
      || (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v12, 0x74727044u),
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v38),
          v38 = PoolWithQuotaTag,
          v32 = 0LL,
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v32),
          PoolWithQuotaTag) )
    {
      v15 = a2[3];
      if ( (_DWORD)v15 )
      {
        v16 = (char *)*((_QWORD *)a2 + 2);
        if ( (unsigned __int64)&v16[v15] > MmUserProbeAddress || &v16[v15] < v16 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          LODWORD(v15) = a2[3];
          v16 = (char *)*((_QWORD *)a2 + 2);
        }
        memmove(v7, v16, (unsigned int)v15);
      }
      v17 = a2[6];
      if ( v17 )
        ProbeForWrite(*((volatile void **)a2 + 4), v17, 1u);
      v18 = a2[1];
      if ( (_DWORD)v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          Object = 0LL;
          DeviceObjectFromAdapter = DxgkGetDeviceObjectFromAdapter(*a2, (__int64)a2, &Object);
          if ( DeviceObjectFromAdapter >= 0 )
          {
            v26 = Object;
            v27 = *((_QWORD *)Object + 8);
            if ( *(_BYTE *)(v27 + 1159) )
            {
              v33 = (struct _IO_REMOVE_LOCK *)*((_QWORD *)Object + 8);
              v34 = 0;
              DeviceObjectFromAdapter = AUTO_REMOVE_LOCK::Acquire(&v33);
              if ( DeviceObjectFromAdapter >= 0 )
              {
                AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v36, (struct _COMMON_PNP_CONTEXT *)v27);
                DeviceObjectFromAdapter = DpiIndirectDdiIoControl(v27);
                AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v36);
              }
              AUTO_REMOVE_LOCK::Release((PVOID *)&v33);
            }
            else
            {
              DeviceObjectFromAdapter = -1073741275;
            }
            ObfDereferenceObject(v26);
          }
          goto LABEL_40;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          DxgkIddHandleSetDisplayConfig(*a2, a2[3], (DWORD *)v7, &DeviceObjectFromAdapter);
          goto LABEL_40;
        }
        v18 = (unsigned int)(v20 - 1);
        if ( (_DWORD)v18 )
        {
          if ( (_DWORD)v18 != 1 )
          {
            DeviceObjectFromAdapter = -1073741637;
            v21 = WdLogNewEntry5_WdError(v18, a2, a3);
            *(_QWORD *)(v21 + 24) = DeviceObjectFromAdapter;
            WdLogEvent5_WdError(v21);
LABEL_40:
            if ( DeviceObjectFromAdapter < 0 )
              goto LABEL_10;
            if ( a2[6] >= *v6 )
            {
              if ( *v6 )
                memmove(*((void **)a2 + 4), PoolWithQuotaTag, (unsigned int)*v6);
              goto LABEL_10;
            }
            DeviceObjectFromAdapter = -1073741811;
            v28 = WdLogNewEntry5_WdError(v23, v22, v24);
            v29 = DeviceObjectFromAdapter;
            goto LABEL_37;
          }
          AdapterSessionDiagnostics = DxgkIddGetAdapterSessionDiagnostics(
                                        *a2,
                                        a2[6],
                                        (unsigned __int8 *)PoolWithQuotaTag,
                                        a2 + 10);
LABEL_39:
          DeviceObjectFromAdapter = AdapterSessionDiagnostics;
          goto LABEL_40;
        }
        if ( a2[3] >= 8 )
        {
          AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapter(*a2, v7);
          goto LABEL_39;
        }
      }
      else if ( a2[3] >= 0x240 )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        HIWORD(v7[64].HighPart) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v7);
        AdapterSessionDiagnostics = DpiIndirectStartAdapter(&DestinationString, v7, a2[3]);
        goto LABEL_39;
      }
      DeviceObjectFromAdapter = -1073741811;
      v28 = WdLogNewEntry5_WdError(v18, a2, a3);
      v29 = a2[3];
LABEL_37:
      *(_QWORD *)(v28 + 24) = v29;
      WdLogEvent5_WdError(v28);
      goto LABEL_10;
    }
  }
  DeviceObjectFromAdapter = -1073741801;
  v13 = WdLogNewEntry5_WdLowResource(v10, a2, a3, v11);
  *(_QWORD *)(v13 + 24) = DeviceObjectFromAdapter;
  WdLogEvent5_WdLowResource(v13);
LABEL_10:
  v14 = DeviceObjectFromAdapter;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v38);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v39);
  return v14;
}

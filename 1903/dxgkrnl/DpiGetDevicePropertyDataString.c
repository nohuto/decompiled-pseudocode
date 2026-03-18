/*
 * XREFs of DpiGetDevicePropertyDataString @ 0x1C0160EBC
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C004C510 (DpiMiracastInterfaceChange.c)
 *     DpiFdoInitializeFdo @ 0x1C016362C (DpiFdoInitializeFdo.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

__int64 __fastcall DpiGetDevicePropertyDataString(
        PDEVICE_OBJECT Pdo,
        DEVPROPKEY *PropertyKey,
        int a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _DWORD *a6)
{
  void *Data; // rdi
  _QWORD *v10; // rsi
  _DWORD *v11; // r14
  NTSTATUS DevicePropertyData; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  PVOID PoolWithTag; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS v22; // eax
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  ULONG Type; // [rsp+70h] [rbp+8h] BYREF
  size_t Size; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(Size) = a3;
  Data = 0LL;
  if ( Pdo )
  {
    if ( PropertyKey )
    {
      v10 = a5;
      if ( a5 )
      {
        v11 = a6;
        if ( a6 )
        {
          DevicePropertyData = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, 0, 0LL, (PULONG)&Size, &Type);
          v16 = DevicePropertyData;
          if ( DevicePropertyData != -1073741789 )
            goto LABEL_13;
          if ( Type != 18 )
          {
            LODWORD(v16) = -1073741811;
            v25 = WdLogNewEntry5_WdError(v14, v13, v15);
            *(_QWORD *)(v25 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v25);
            return (unsigned int)v16;
          }
          LODWORD(Size) = Size + 2;
          PoolWithTag = ExAllocatePoolWithTag(a4, (unsigned int)Size, 0x74727044u);
          Data = PoolWithTag;
          if ( !PoolWithTag )
          {
            LODWORD(v16) = -1073741670;
            v26 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
            *(_QWORD *)(v26 + 24) = -1073741670LL;
            WdLogEvent5_WdLowResource(v26);
            return (unsigned int)v16;
          }
          memset(PoolWithTag, 0, (unsigned int)Size);
          v22 = IoGetDevicePropertyData(Pdo, PropertyKey, 0, 0, Size, Data, (PULONG)&Size, &Type);
          v16 = v22;
          if ( v22 < 0 )
          {
LABEL_13:
            v27 = WdLogNewEntry5_WdError(v14, v13, v15);
            *(_QWORD *)(v27 + 24) = v16;
            WdLogEvent5_WdError(v27);
            if ( (int)v16 < 0 )
            {
              if ( Data )
                ExFreePoolWithTag(Data, 0);
              return (unsigned int)v16;
            }
          }
          v23 = Size;
          *v10 = Data;
          *v11 = v23;
          return (unsigned int)v16;
        }
      }
    }
  }
  return -1073741811LL;
}

/*
 * XREFs of _CmGetDeviceContainerMappedProperty @ 0x1406EB444
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1406EB2F0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     _CmIsLocalMachineContainer @ 0x1406DC740 (_CmIsLocalMachineContainer.c)
 *     _CmGetContainerBooleanProperty @ 0x1408FA4F8 (_CmGetContainerBooleanProperty.c)
 */

__int64 __fastcall CmGetDeviceContainerMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // r10d
  int v11; // r9d
  __int64 v13; // rcx
  bool IsLocalMachineContainer; // cf
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const DEVPROPKEY *v18; // r9

  v10 = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v11 = *(_DWORD *)(a5 + 16);
    switch ( v11 )
    {
      case 'F':
        v13 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data1 )
          v13 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsLocalMachine.fmtid.Data4;
        if ( !v13 )
        {
          *a6 = 17;
          *a9 = 1;
          if ( a8 )
          {
            IsLocalMachineContainer = CmIsLocalMachineContainer(a1, a2);
            v10 = 0;
            *a7 = -IsLocalMachineContainer;
          }
          else
          {
            return (unsigned int)-1073741789;
          }
        }
        break;
      case 'S':
        v16 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_HasProblem.fmtid.Data1 )
          v16 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_HasProblem.fmtid.Data4;
        if ( !v16 )
        {
          v18 = &DEVPKEY_Device_HasProblem;
          return (unsigned int)CmGetContainerBooleanProperty(
                                 a1,
                                 (_DWORD)a2,
                                 a3,
                                 (_DWORD)v18,
                                 (__int64)a6,
                                 (__int64)a7,
                                 a8,
                                 (__int64)a9);
        }
        break;
      case '7':
        v17 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsConnected.fmtid.Data1 )
          v17 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsConnected.fmtid.Data4;
        if ( !v17 )
        {
          v18 = (const DEVPROPKEY *)&DEVPKEY_Device_IsConnected;
          return (unsigned int)CmGetContainerBooleanProperty(
                                 a1,
                                 (_DWORD)a2,
                                 a3,
                                 (_DWORD)v18,
                                 (__int64)a6,
                                 (__int64)a7,
                                 a8,
                                 (__int64)a9);
        }
        break;
      case 'l':
        v15 = *(_QWORD *)a5 - *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data1 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)DEVPKEY_DeviceContainer_IsRebootRequired.fmtid.Data4;
        if ( !v15 )
        {
          v18 = &DEVPKEY_Device_IsRebootRequired;
          return (unsigned int)CmGetContainerBooleanProperty(
                                 a1,
                                 (_DWORD)a2,
                                 a3,
                                 (_DWORD)v18,
                                 (__int64)a6,
                                 (__int64)a7,
                                 a8,
                                 (__int64)a9);
        }
        break;
    }
  }
  return v10;
}

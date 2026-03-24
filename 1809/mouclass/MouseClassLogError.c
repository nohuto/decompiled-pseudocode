/*
 * XREFs of MouseClassLogError @ 0x1C0002B34
 * Callers:
 *     MouseClassCreate @ 0x1C0001010 (MouseClassCreate.c)
 *     MouseClassClose @ 0x1C00013B0 (MouseClassClose.c)
 *     MouseClassPoRequestComplete @ 0x1C0002BE0 (MouseClassPoRequestComplete.c)
 *     MouseClassWWPowerUpComplete @ 0x1C0003F00 (MouseClassWWPowerUpComplete.c)
 *     MouCreateClassObject @ 0x1C000C410 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000CD54 (MouseAddDeviceEx.c)
 *     MouseClassFindMorePorts @ 0x1C000D530 (MouseClassFindMorePorts.c)
 *     DriverEntry @ 0x1C000F080 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MouseClassLogError(void *a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, char a7)
{
  _WORD *ErrorLogEntry; // r10
  _DWORD *v11; // rcx
  __int64 v12; // r8

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 4 * ((unsigned __int8)a5 + 12));
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[1] = 4 * a5;
    *(_BYTE *)ErrorLogEntry = a7;
    *((_DWORD *)ErrorLogEntry + 3) = a2;
    *((_QWORD *)ErrorLogEntry + 3) = 0LL;
    *((_BYTE *)ErrorLogEntry + 1) = 0;
    *((_DWORD *)ErrorLogEntry + 4) = a3;
    *((_DWORD *)ErrorLogEntry + 5) = a4;
    if ( a5 )
    {
      v11 = a6;
      v12 = a5;
      do
      {
        *(_DWORD *)((char *)v11 + (char *)ErrorLogEntry - (char *)a6 + 40) = *v11;
        ++v11;
        --v12;
      }
      while ( v12 );
    }
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}

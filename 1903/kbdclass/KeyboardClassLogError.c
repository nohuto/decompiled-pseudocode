/*
 * XREFs of KeyboardClassLogError @ 0x1C0004FD4
 * Callers:
 *     KeyboardClassPoRequestComplete @ 0x1C00010D0 (KeyboardClassPoRequestComplete.c)
 *     KeyboardClassClose @ 0x1C0001BD0 (KeyboardClassClose.c)
 *     KeyboardClassCreate @ 0x1C0001D40 (KeyboardClassCreate.c)
 *     KeyboardClassWWPowerUpComplete @ 0x1C0005AA0 (KeyboardClassWWPowerUpComplete.c)
 *     KeyboardClassFindMorePorts @ 0x1C000D610 (KeyboardClassFindMorePorts.c)
 *     KeyboardAddDeviceEx @ 0x1C000DB20 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DFA0 (KbdCreateClassObject.c)
 *     DriverEntry @ 0x1C0010080 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyboardClassLogError(void *a1, int a2, int a3, int a4, unsigned int a5, _DWORD *a6, char a7)
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

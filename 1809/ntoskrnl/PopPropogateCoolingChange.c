/*
 * XREFs of PopPropogateCoolingChange @ 0x14018DA84
 * Callers:
 *     PoSetThermalActiveCooling @ 0x140755C10 (PoSetThermalActiveCooling.c)
 *     PoSetThermalPassiveCooling @ 0x140867470 (PoSetThermalPassiveCooling.c)
 *     PopCoolingExtensionPnpNotification @ 0x140867570 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1408676CC (PopDeactiveThermalRequest.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PopDiagTraceCoolingExtensionActiveUpdate @ 0x140755CAC (PopDiagTraceCoolingExtensionActiveUpdate.c)
 *     PopDiagTraceCoolingExtensionPassiveUpdate @ 0x140870F70 (PopDiagTraceCoolingExtensionPassiveUpdate.c)
 */

void __fastcall PopPropogateCoolingChange(__int64 a1)
{
  char v2; // si
  unsigned __int8 v3; // di
  __int64 *i; // rdx
  unsigned __int8 v5; // cl
  __int64 v6; // rdx
  struct _KEVENT *v7; // rcx
  struct _KEVENT *v8; // rcx

  if ( *(_BYTE *)(a1 + 67) )
  {
    *(_BYTE *)(a1 + 67) = 0;
    return;
  }
  do
  {
    while ( 1 )
    {
      v2 = 0;
      v3 = 100;
      if ( *(_BYTE *)(a1 + 64) )
      {
        for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); i = (__int64 *)*i )
        {
          if ( *((_BYTE *)i + 18) )
          {
            v5 = *((_BYTE *)i + 16);
            if ( v5 >= v3 )
              v5 = v3;
            v3 = v5;
            if ( *((_BYTE *)i + 17) )
              v2 = 1;
          }
        }
      }
      if ( v3 == *(_BYTE *)(a1 + 66) )
        break;
      *(_BYTE *)(a1 + 66) = v3;
      *(_BYTE *)(a1 + 67) = 1;
      PopReleaseRwLock(a1 + 32);
      PopDiagTraceCoolingExtensionPassiveUpdate(a1);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 136))(*(_QWORD *)(a1 + 96), v3);
      PopAcquireRwLockExclusive(a1 + 32);
      if ( *(_BYTE *)(a1 + 67) )
      {
        *(_BYTE *)(a1 + 67) = 0;
        break;
      }
    }
    if ( v2 == *(_BYTE *)(a1 + 65) )
      goto LABEL_15;
    *(_BYTE *)(a1 + 65) = v2;
    *(_BYTE *)(a1 + 67) = 1;
    PopReleaseRwLock(a1 + 32);
    PopDiagTraceCoolingExtensionActiveUpdate(a1);
    LOBYTE(v6) = v2;
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 96), v6);
    PopAcquireRwLockExclusive(a1 + 32);
  }
  while ( !*(_BYTE *)(a1 + 67) );
  *(_BYTE *)(a1 + 67) = 0;
LABEL_15:
  v7 = *(struct _KEVENT **)(a1 + 80);
  if ( v7 )
    KeSetEvent(v7, 0, 0);
  v8 = *(struct _KEVENT **)(a1 + 72);
  if ( v8 )
    KeSetEvent(v8, 0, 0);
}

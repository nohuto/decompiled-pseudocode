/*
 * XREFs of rimFindReferencedRimObj @ 0x1C0135CE8
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C014964C (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0149910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0051B38 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(unsigned int a1, __int16 a2, __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *v13; // rbx
  int v14; // eax
  int v15; // ebp
  NTSTATUS v16; // ebx

  v8 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v12 = &gObRimList;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_22;
  while ( 1 )
  {
    v13 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v13[5].Flink) && !BYTE1(v13->Blink) && (a1 & HIDWORD(v13[5].Flink)) != 0 )
    {
      if ( a1 <= 0x10 )
      {
        v14 = 65814;
        if ( _bittest(&v14, a1) )
        {
          if ( LODWORD(v13[54].Flink) )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
      if ( a1 == 32 )
        break;
    }
LABEL_12:
    Flink = Flink->Flink;
    if ( Flink == &gObRimList )
      goto LABEL_19;
  }
  v15 = (int)v13[54].Flink;
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)&Flink[-1], a2, a3) )
  {
    v12 = &gObRimList;
    if ( v15 )
      v8 = v13;
    goto LABEL_12;
  }
  if ( !v15 )
    goto LABEL_18;
LABEL_17:
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v9, v10);
LABEL_18:
  v8 = v13;
LABEL_19:
  if ( !v8 )
  {
LABEL_22:
    v16 = -1073741637;
    goto LABEL_23;
  }
  v16 = ObReferenceObjectByPointer(v8, 3u, ExRawInputManagerObjectType, 1);
  if ( v16 >= 0 )
    *a4 = v8;
LABEL_23:
  qword_1C0218788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v16;
}

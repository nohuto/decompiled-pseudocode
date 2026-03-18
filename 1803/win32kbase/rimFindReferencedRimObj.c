/*
 * XREFs of rimFindReferencedRimObj @ 0x1C00DEBE0
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00F37B0 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00F39F8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 */

__int64 __fastcall rimFindReferencedRimObj(int a1, __int16 a2, unsigned __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v9; // rbx
  int Blink_high; // ecx
  int v11; // ecx
  struct _LIST_ENTRY *v12; // rdx
  int v13; // ecx
  struct _LIST_ENTRY *v14; // rcx
  NTSTATUS v15; // edi

  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      v9 = Flink - 1;
      if ( !LOBYTE(Flink[3].Blink) && !BYTE1(v9[4].Blink) && !BYTE1(v9->Blink) )
      {
        Blink_high = HIDWORD(v9[4].Blink);
        if ( (Blink_high & a1) != 0 && !HIDWORD(v9[53].Flink) )
        {
          if ( (unsigned int)(Blink_high - 1) <= 1 )
            break;
          if ( (Blink_high & 3) != 0 )
            break;
          v11 = HIDWORD(v9[4].Blink) & 0x1C;
          if ( v11 == 4 && a2 == 13 && (unsigned __int16)(a3 - 1) <= 1u )
            break;
          if ( v11 == 8 && a2 == 13 && a3 == 5 || v11 == 16 && a2 == 13 && a3 == 4 )
            break;
        }
      }
      Flink = Flink->Flink;
      v9 = 0LL;
    }
    while ( Flink != &gObRimList );
    if ( v9 )
      goto LABEL_53;
  }
  v12 = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      v9 = v12 - 1;
      if ( !LOBYTE(v12[3].Blink)
        && !BYTE1(v9[4].Blink)
        && !BYTE1(v9->Blink)
        && (HIDWORD(v9[4].Blink) & a1) != 0
        && !HIDWORD(v9[53].Flink) )
      {
        v13 = HIDWORD(v9[4].Blink) & 0x1C;
        if ( v13 == 12 && a2 == 13 && ((a3 - 1) & 0xFFFA) == 0 && a3 != 6 )
          break;
        if ( v13 == 24 && a2 == 13 && (unsigned __int16)(a3 - 4) <= 1u
          || v13 == 20 && a2 == 13 && ((a3 - 1) & 0xFFFC) == 0 && a3 != 3
          || v13 == 28 && (a2 == 13 && a3 != 3 && a3 && a3 < 6u || a2 == 1 && a3 == 14) )
        {
          break;
        }
      }
      v12 = v12->Flink;
      v9 = 0LL;
    }
    while ( v12 != &gObRimList );
    if ( v9 )
      goto LABEL_53;
  }
  v14 = gObRimList.Flink;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_55;
  do
  {
    v9 = v14 - 1;
    if ( !LOBYTE(v14[3].Blink) && !BYTE1(v9[4].Blink) && (HIDWORD(v9[4].Blink) & 0x20) != 0 && LODWORD(v9[53].Flink) )
      break;
    v14 = v14->Flink;
    v9 = 0LL;
  }
  while ( v14 != &gObRimList );
  if ( !v9 )
  {
LABEL_55:
    v15 = -1073741637;
  }
  else
  {
LABEL_53:
    v15 = ObReferenceObjectByPointer(v9, 3u, ExRawInputManagerObjectType, 1);
    if ( v15 >= 0 )
      *a4 = v9;
  }
  qword_1C01A1640 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}

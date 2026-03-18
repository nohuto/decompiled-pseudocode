/*
 * XREFs of ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C002E2A0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     GreGetObjectOwner @ 0x1C0020BF0 (GreGetObjectOwner.c)
 *     HMDestroyUnlockedObject @ 0x1C002D920 (HMDestroyUnlockedObject.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     HMChangeOwnerPheProcess @ 0x1C0081280 (HMChangeOwnerPheProcess.c)
 *     FixupGlobalCursor @ 0x1C008B8A0 (FixupGlobalCursor.c)
 */

void __fastcall DestroyProcessesObjects(struct tagPROCESSINFO *a1)
{
  _BOOL8 v2; // r14
  char *v3; // rbx
  __int64 v4; // rsi
  char *v5; // rdi
  char *v6; // rbx
  _QWORD *v7; // rdi
  char *v8; // rsi
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int CurrentProcessId; // ebx

  v2 = *(_QWORD *)a1 == (_QWORD)gpepCSRSS;
  if ( qword_1C01CFE10 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    if ( (unsigned int)GreGetObjectOwner((unsigned int)qword_1C01CFE08, 1) == (CurrentProcessId & 0xFFFFFFFC) )
      StopFade();
  }
  v3 = (char *)&gcachedCaptions;
  v4 = 5LL;
  v5 = (char *)&gcachedCaptions;
  do
  {
    if ( *(_QWORD *)v3 && *(struct tagPROCESSINFO **)(*(_QWORD *)v3 + 24LL) == a1 )
      HMAssignmentUnlock(v5);
    v5 += 16;
    v3 += 16;
    --v4;
  }
  while ( v4 );
  v6 = (char *)qword_1C01CBA58;
  v7 = gpKernelHandleTable;
  v8 = (char *)qword_1C01CBA58 + 32 * (unsigned int)giheLast;
  if ( qword_1C01CBA58 <= v8 )
  {
    do
    {
      v9 = v6[24];
      if ( v9 && (*((_BYTE *)&unk_1C018DB4C + 24 * v9) & 2) != 0 && (struct tagPROCESSINFO *)v7[1] == a1 )
      {
        if ( v2 && v9 == 3 )
          FixupGlobalCursor(*v7, a1);
        if ( (v6[25] & 1) == 0 )
          HMDestroyUnlockedObject(v6);
        v10 = v6[24];
        if ( v10 && gptiRit )
        {
          if ( v10 == 3 )
          {
            if ( (int)IsZombieCursorSupported() >= 0 )
              ZombieCursor(*v7);
          }
          else
          {
            HMChangeOwnerPheProcess(v6);
          }
        }
      }
      v6 += 32;
      v7 += 3;
    }
    while ( v6 <= v8 );
  }
}

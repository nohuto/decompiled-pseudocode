/*
 * XREFs of PoSetThermalActiveCooling @ 0x140756DE0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopPropogateCoolingChange @ 0x14018DBE4 (PopPropogateCoolingChange.c)
 *     PopDiagTraceThermalRequestActiveUpdate @ 0x140756EC8 (PopDiagTraceThermalRequestActiveUpdate.c)
 *     PoGetThermalRequestSupport @ 0x140756F20 (PoGetThermalRequestSupport.c)
 */

__int64 __fastcall PoSetThermalActiveCooling(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  char v6; // bp

  v4 = 0;
  if ( (unsigned __int8)PoGetThermalRequestSupport(a1, 1LL) )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = a2 != 0;
    PopAcquireRwLockExclusive(v5 + 32);
    if ( *(_BYTE *)(a1 + 18) )
    {
      if ( *(_BYTE *)(a1 + 17) != v6 )
      {
        *(_BYTE *)(a1 + 17) = v6;
        PopDiagTraceThermalRequestActiveUpdate(a1);
        PopPropogateCoolingChange(v5);
      }
    }
    else
    {
      v4 = -1073741431;
    }
    PopReleaseRwLock(v5 + 32);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}

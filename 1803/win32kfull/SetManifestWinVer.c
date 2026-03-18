/*
 * XREFs of SetManifestWinVer @ 0x1C00E0360
 * Callers:
 *     <none>
 * Callees:
 *     SbGetProcessSwitchContext @ 0x1C00E0488 (SbGetProcessSwitchContext.c)
 */

__int64 SetManifestWinVer()
{
  unsigned __int16 v0; // bx
  _QWORD *v1; // rcx
  __int64 ProcessWow64Process; // rax
  __int64 v3; // rcx
  __int64 ProcessSwitchContext; // rax
  _QWORD *v5; // r9
  int v6; // edx
  unsigned int i; // ecx
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 result; // rax
  char *v11; // [rsp+50h] [rbp+8h]

  v0 = -26368;
  v1 = *(_QWORD **)(gptiCurrent + 416LL);
  if ( v1 )
  {
    ProcessWow64Process = PsGetProcessWow64Process(*v1);
    v3 = ProcessWow64Process
       ? *(unsigned int *)(ProcessWow64Process + 488)
       : *(_QWORD *)(PsGetProcessPeb(**(_QWORD **)(gptiCurrent + 416LL)) + 728);
    ProcessSwitchContext = SbGetProcessSwitchContext(v3);
    if ( ProcessSwitchContext )
    {
      v5 = (_QWORD *)(ProcessSwitchContext + 48);
      v6 = 0;
      if ( ProcessSwitchContext != -48 )
      {
        v11 = 0LL;
        for ( i = 0; i < 5; ++i )
        {
          v8 = 32LL * i;
          v9 = *v5 - *(_QWORD *)((char *)&SbSupportedOsList + v8 + 4);
          if ( *v5 == *(_QWORD *)((char *)&SbSupportedOsList + v8 + 4) )
            v9 = *(_QWORD *)(ProcessSwitchContext + 56) - *(_QWORD *)((char *)&SbSupportedOsList + v8 + 12);
          if ( !v9 )
          {
            v6 = 1;
            v11 = (char *)&SbSupportedOsList + v8;
            break;
          }
        }
      }
      if ( v6 )
        v0 = *((_WORD *)v11 + 11) | (*((_WORD *)v11 + 10) << 8);
    }
  }
  result = v0;
  *(_DWORD *)(gptiCurrent + 628LL) = v0;
  return result;
}

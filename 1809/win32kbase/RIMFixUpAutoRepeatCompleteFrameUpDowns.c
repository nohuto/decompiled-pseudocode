/*
 * XREFs of RIMFixUpAutoRepeatCompleteFrameUpDowns @ 0x1C01231B4
 * Callers:
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 * Callees:
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall RIMFixUpAutoRepeatCompleteFrameUpDowns(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  int v9; // r8d
  __int64 v10; // rdx
  unsigned int i; // ecx
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // r8
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // edi
  __int64 v21; // r8
  unsigned int v22; // ecx

  if ( (*(_DWORD *)(a2 + 200) & 0x80u) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 184) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_QWORD *)(a1 + 344) == -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  result = *(unsigned int *)(a3 + 24);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  for ( i = result; (unsigned int)v10 < (unsigned int)result; i = result )
  {
    v12 = *(_QWORD *)(a3 + 88);
    v13 = 168LL * (unsigned int)v10;
    v14 = *(_DWORD *)(v13 + v12 + 28);
    if ( (v14 & 0x10000) != 0 )
    {
      v15 = v14 & 0xFFFCFFFF | 0x20000;
      *(_DWORD *)(v13 + v12 + 28) = v15;
      if ( (v15 & 0x2000) != 0 )
        v9 = 1;
    }
    result = *(unsigned int *)(a3 + 24);
    v10 = (unsigned int)(v10 + 1);
  }
  if ( *(_QWORD *)(a1 + 640) && v9 )
  {
    PoLatencySensitivityHint(2LL, v10);
    result = *(unsigned int *)(a3 + 24);
    i = *(_DWORD *)(a3 + 24);
  }
  if ( (_DWORD)result )
  {
    v16 = (_DWORD *)(*(_QWORD *)(a3 + 88) + 28LL);
    v17 = i;
    do
    {
      v18 = (*v16 & 0x40000) == 0;
      result = v8 + 1;
      v16 += 42;
      if ( v18 )
        result = v8;
      v8 = result;
      --v17;
    }
    while ( v17 );
    if ( (_DWORD)result )
    {
      do
      {
        v19 = *(_DWORD *)(a3 + 24);
        v20 = 0;
        if ( v19 )
        {
          v21 = *(_QWORD *)(a3 + 88);
          while ( 1 )
          {
            result = v20;
            if ( (*(_DWORD *)(168LL * v20 + v21 + 28) & 0x40000) != 0 )
              break;
            if ( ++v20 >= v19 )
              goto LABEL_32;
          }
          result = v20;
          ++v7;
          if ( *(_QWORD *)(a3 + 72) == v21 + 168LL * v20 )
            *(_QWORD *)(a3 + 72) = 0LL;
          if ( v20 < v19 )
          {
            do
            {
              result = v19 - 1;
              v22 = v19;
              if ( v20 < (unsigned int)result )
              {
                result = (unsigned __int64)memmove(
                                             (void *)(*(_QWORD *)(a3 + 88) + 168LL * v20),
                                             (const void *)(*(_QWORD *)(a3 + 88) + 168LL * (v20 + 1)),
                                             0xA8uLL);
                v22 = *(_DWORD *)(a3 + 24);
              }
              ++v20;
              v19 = v22;
            }
            while ( v20 < v22 );
          }
        }
LABEL_32:
        ;
      }
      while ( v7 < v8 );
      *(_DWORD *)(a3 + 24) -= v7;
    }
  }
  return result;
}

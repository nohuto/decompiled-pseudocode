/*
 * XREFs of PopReportDirectedDripsCandidateChildren @ 0x14087E0E4
 * Callers:
 *     PopDripsWatchdogReportDirectedDripsDevice @ 0x14087A99C (PopDripsWatchdogReportDirectedDripsDevice.c)
 * Callees:
 *     PopReportDirectedDripsCandidateDevice @ 0x140869B90 (PopReportDirectedDripsCandidateDevice.c)
 *     PopMarkDirectedDripsCandidateDevice @ 0x14087E044 (PopMarkDirectedDripsCandidateDevice.c)
 */

__int64 __fastcall PopReportDirectedDripsCandidateChildren(__int64 a1, char a2)
{
  __int64 v2; // rdi
  char v3; // bp
  __int64 i; // r14
  _QWORD *v7; // rax
  char v8; // si
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // rbx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = a2 | 4;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 888); i = (unsigned int)(i + 1) )
    PopMarkDirectedDripsCandidateDevice(*(_QWORD *)(*(_QWORD *)(a1 + 880) + 8 * i), v2, v3);
  v7 = *(_QWORD **)(v2 + 8);
  v8 = a2 | 8;
  v9 = (_QWORD *)v2;
  while ( v7 )
  {
    v9 = v7;
    v7 = (_QWORD *)v7[1];
  }
  while ( v9 != (_QWORD *)v2 )
  {
    PopMarkDirectedDripsCandidateDevice((__int64)v9, v2, v8);
    v10 = (_QWORD *)*v9;
    if ( *v9 )
    {
      do
      {
        v9 = v10;
        v10 = (_QWORD *)v10[1];
      }
      while ( v10 );
    }
    else
    {
      v9 = (_QWORD *)v9[2];
    }
  }
  result = *(_QWORD *)(v2 + 8);
  v12 = v2;
  while ( result )
  {
    v12 = result;
    result = *(_QWORD *)(result + 8);
  }
  while ( v12 != v2 )
  {
    if ( (*(_DWORD *)(v12 + 296) & 0x80u) != 0 )
    {
      PopReportDirectedDripsCandidateDevice(a1, *(struct _DEVICE_OBJECT **)(v12 + 32));
      *(_DWORD *)(v12 + 296) &= ~0x80u;
    }
    result = *(_QWORD *)v12;
    if ( *(_QWORD *)v12 )
    {
      do
      {
        v12 = result;
        result = *(_QWORD *)(result + 8);
      }
      while ( result );
    }
    else
    {
      v12 = *(_QWORD *)(v12 + 16);
    }
  }
  return result;
}

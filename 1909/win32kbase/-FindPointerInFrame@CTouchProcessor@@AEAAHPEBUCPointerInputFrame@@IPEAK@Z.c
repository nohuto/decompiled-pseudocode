/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C01648FC
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C0168BE0 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v5; // ebp
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  _DWORD *v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  _DWORD *v13; // rax

  v5 = a3;
  if ( *((_QWORD *)this + 10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v7 = *((unsigned int *)a2 + 12);
  v8 = (unsigned int)v7;
  v9 = *a4;
  if ( *a4 >= (unsigned int)v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, (unsigned int)v7, a3);
    v7 = *((unsigned int *)a2 + 12);
    v8 = v7;
    v9 = *a4;
  }
  if ( v9 < (unsigned int)v8 )
  {
    v10 = (_DWORD *)(*((_QWORD *)a2 + 16) + 496LL * v9 + 180);
    do
    {
      if ( *v10 == v5 )
        break;
      ++v9;
      v10 += 124;
    }
    while ( v9 < (unsigned int)v8 );
  }
  v11 = v9 == (_DWORD)v7;
  if ( v9 > (unsigned int)v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v8, a3);
    v11 = v9 == *((_DWORD *)a2 + 12);
  }
  if ( v11 )
  {
    v12 = *a4;
    v9 = 0;
    if ( !(_DWORD)v12 )
      goto LABEL_17;
    v13 = (_DWORD *)(*((_QWORD *)a2 + 16) + 180LL);
    do
    {
      if ( *v13 == v5 )
        break;
      ++v9;
      v13 += 124;
    }
    while ( v9 < (unsigned int)v12 );
    if ( v9 >= (unsigned int)v12 )
LABEL_17:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v8, a3);
  }
  if ( v9 >= *((_DWORD *)a2 + 12) || *(unsigned __int16 *)(496LL * v9 + *((_QWORD *)a2 + 16) + 180) != v5 )
    return 0LL;
  *a4 = v9;
  return 1LL;
}

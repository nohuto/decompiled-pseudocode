/*
 * XREFs of rimObsPushInputMessage @ 0x1C012D234
 * Callers:
 *     rimObsDeliverInputToObserver @ 0x1C012CCD8 (rimObsDeliverInputToObserver.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     rimObsCopyMessage @ 0x1C012CB70 (rimObsCopyMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsPushInputMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // eax
  signed int v8; // esi
  unsigned __int64 v9; // rax
  unsigned int v10; // r14d
  void *v11; // rdi
  _QWORD *v12; // rax

  if ( *(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = a1 + 144;
  v6 = *(_DWORD *)(v5 + 16);
  if ( v6 == -1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v6 = *(_DWORD *)(v5 + 16);
  }
  if ( v6 < *(_DWORD *)(v5 + 24) )
  {
    v9 = *(_QWORD *)(a2 + 24);
    v8 = v9 > 0xFFFFFFBF ? 0xC0000095 : 0;
    if ( v9 <= 0xFFFFFFBF )
    {
      v10 = v9 + 48;
      v11 = Win32AllocPoolZInit((unsigned int)(v9 + 64), 0x716D4F52u);
      if ( !v11 )
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0xAu, (__int64)&WPP_45cc41b0333434924b60e5f2a9a53a17_Traceguids);
        v8 = -1073741670;
      }
      if ( v8 < 0 || (v8 = rimObsCopyMessage(a2, 0LL, (void **)v11 + 2, v10), v8 < 0) )
      {
        if ( v11 )
          Win32FreePool((__int64)v11);
      }
      else
      {
        v12 = *(_QWORD **)(v5 + 8);
        if ( *v12 != v5 )
          __fastfail(3u);
        *(_QWORD *)v11 = v5;
        *((_QWORD *)v11 + 1) = v12;
        *v12 = v11;
        *(_QWORD *)(v5 + 8) = v11;
        ++*(_DWORD *)(v5 + 16);
      }
    }
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 20);
    if ( v7 != -1 )
      *(_DWORD *)(v5 + 20) = v7 + 1;
    return (unsigned int)-1073741756;
  }
  return (unsigned int)v8;
}

/*
 * XREFs of WppClassicProviderCallback @ 0x1C007E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisEnableWppTracingCallback @ 0x1C007E5EC (ndisEnableWppTracingCallback.c)
 */

void __fastcall WppClassicProviderCallback(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rbx
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r9

  if ( (unsigned __int8)a2 <= 1u )
  {
    v4 = 0;
    v5 = a4;
    v6 = a2;
    if ( (_BYTE)a2 )
    {
      *(_DWORD *)(a4 + 44) = *((_DWORD *)a3 + 1);
      *(_BYTE *)(a4 + 41) = *((_BYTE *)a3 + 2);
      v7 = *a3;
      *(_QWORD *)(a4 + 24) = *a3;
      LOBYTE(a4) = *((_BYTE *)a3 + 2);
      imp_WppRecorderReplay(WPP_GLOBAL_Control, v7, *((unsigned int *)a3 + 1), a4);
      v4 = *(_BYTE *)(v5 + 41);
      v8 = *(unsigned int *)(v5 + 44);
    }
    else
    {
      *(_BYTE *)(a4 + 41) = 0;
      *(_DWORD *)(a4 + 44) = 0;
      *(_QWORD *)(a4 + 24) = 0LL;
      v8 = 0LL;
    }
    LOBYTE(a3) = v6;
    ndisEnableWppTracingCallback(a1, a2, a3, v8, v4);
  }
}

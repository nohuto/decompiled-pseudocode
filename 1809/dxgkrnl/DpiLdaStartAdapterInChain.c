/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x1C0273300
 * Callers:
 *     DpiFdoStartAdapterThread @ 0x1C0148060 (DpiFdoStartAdapterThread.c)
 * Callees:
 *     DpiFdoStartAdapter @ 0x1C01487C8 (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(
        __int64 a1,
        __int64 a2,
        bool *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // rdi
  bool *v8; // r13
  char v9; // r11
  __int64 v10; // rsi
  __int64 v11; // rdi
  int started; // ebx
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // rbp
  __int64 v16; // r9
  unsigned int v17; // esi
  __int64 v18; // rbp
  struct _DEVICE_OBJECT *v19; // rcx
  char v21; // [rsp+68h] [rbp+10h]

  v21 = a2;
  v6 = *(_QWORD *)(a1 + 64);
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( *(_BYTE *)(v6 + 508) != 1 )
  {
    v11 = *(_QWORD *)(v6 + 2656);
    if ( !v11 )
    {
LABEL_3:
      started = 1075708986;
      v13 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v13 + 24) = v10;
      goto LABEL_4;
    }
    v6 = *(_QWORD *)(v11 + 64);
  }
  a1 = *(unsigned int *)(v6 + 2664);
  if ( (_DWORD)a1 != *(_DWORD *)(v6 + 504) )
    goto LABEL_3;
  a3 = 0LL;
  *(_BYTE *)(v6 + 2668) = 0;
  if ( (_DWORD)a1 )
  {
    v14 = *(_QWORD *)(v6 + 2656);
    LOBYTE(a2) = 0;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v14 + 8LL * (_QWORD)a3);
      v16 = *(_QWORD *)(v15 + 64);
      if ( *(_BYTE *)(v16 + 232) == 1 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v16 + 236) - 1) > 1 )
        goto LABEL_3;
      if ( (_BYTE)a2 || *(_DWORD *)(v6 + 1116) != *(_DWORD *)(v16 + 1116) )
        LOBYTE(a2) = 1;
      a3 = (bool *)(unsigned int)((_DWORD)a3 + 1);
      *(_BYTE *)(v6 + 2668) = a2;
      if ( (unsigned int)a3 >= (unsigned int)a1 )
        goto LABEL_15;
    }
    started = -1071774669;
    v13 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v13 + 24) = v15;
LABEL_4:
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)started;
  }
LABEL_15:
  v17 = 1;
  if ( (unsigned int)a1 > 1 )
  {
    do
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 2656) + 8LL * v17) + 64LL);
      if ( *(_DWORD *)(v18 + 236) == 1 )
      {
        started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v18 + 24), v9, v8, a4, a5, a6);
        if ( started < 0 )
        {
          v19 = *(struct _DEVICE_OBJECT **)(v18 + 152);
LABEL_22:
          IoInvalidateDeviceState(v19);
          return (unsigned int)started;
        }
        v9 = v21;
      }
      ++v17;
    }
    while ( v17 < *(_DWORD *)(v6 + 2664) );
  }
  started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v6 + 24), v9, v8, a4, a5, a6);
  if ( started < 0 )
  {
    v19 = *(struct _DEVICE_OBJECT **)(v6 + 152);
    goto LABEL_22;
  }
  return (unsigned int)started;
}

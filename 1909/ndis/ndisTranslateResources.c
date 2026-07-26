/*
 * XREFs of ndisTranslateResources @ 0x1C002EA18
 * Callers:
 *     NdisMMapIoSpace @ 0x1C002D850 (NdisMMapIoSpace.c)
 *     ?ndisImmediateReadWritePort@@YAXPEAXK0KE@Z @ 0x1C008085C (-ndisImmediateReadWritePort@@YAXPEAXK0KE@Z.c)
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00809C8 (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 *     NdisMRegisterIoPortRange @ 0x1C009E7E0 (NdisMRegisterIoPortRange.c)
 *     NdisMRegisterInterrupt @ 0x1C00A1070 (NdisMRegisterInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisTranslateResources(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _QWORD *a5)
{
  int v7; // ebp
  unsigned int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r12d
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // r9
  unsigned __int16 *v17; // r8
  __int64 v18; // r14
  __int64 v19; // rax
  char v21; // [rsp+30h] [rbp-38h]

  v7 = a2;
  v9 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      26,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1,
      v21);
  }
  v10 = *(_QWORD *)(a1 + 944);
  if ( !v10 )
    goto LABEL_18;
  v11 = *(_QWORD *)(a1 + 952);
  if ( !v11 )
    goto LABEL_18;
  v12 = *(_DWORD *)(v10 + 16);
  v13 = v11 + 12;
  v14 = v10 + 12;
  v15 = 0LL;
  if ( !v12 )
    goto LABEL_18;
  v16 = 0LL;
  v17 = (unsigned __int16 *)(v14 + 12);
  v18 = v13 - v14;
  while ( 1 )
  {
    if ( *((unsigned __int8 *)v17 - 4) != v7 )
      goto LABEL_21;
    if ( v7 == 1 )
      goto LABEL_11;
    if ( v7 != 2 )
      break;
    if ( a3 == *v17 )
    {
      *a4 = *(unsigned __int16 *)((char *)v17 + v18);
      goto LABEL_14;
    }
LABEL_15:
    if ( !v9 )
      goto LABEL_16;
LABEL_21:
    v15 = (unsigned int)(v15 + 1);
    ++v16;
    v17 += 10;
    if ( (unsigned int)v15 >= v12 )
      goto LABEL_18;
  }
  if ( v7 == 3 )
  {
LABEL_11:
    v19 = a3 - *(_QWORD *)v17;
    if ( v19 >= 0 && v19 < (unsigned __int64)*((unsigned int *)v17 + 2) )
    {
      a2 = v19 + *(_QWORD *)((char *)v17 + v18);
      *a4 = a2;
LABEL_14:
      v9 = 0;
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  if ( v7 != 4 || a3 != *(_DWORD *)v17 )
    goto LABEL_15;
  v9 = 0;
  *a4 = *(unsigned int *)(v13 + 20 * v16 + 12);
LABEL_16:
  LODWORD(a2) = (_DWORD)a5;
  if ( a5 )
    *a5 = v13 + 4 * (v15 + 4 * v15 + 2);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      27,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      a1,
      v9);
  }
  return v9;
}

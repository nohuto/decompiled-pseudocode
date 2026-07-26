/*
 * XREFs of ?NdisPDGetBuffersFromBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@PEAKPEAPEAU_PD_BUFFER@@@Z @ 0x1C00BED40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 */

void __fastcall NdisPDGetBuffersFromBufferSet(
        struct PD_BUFFER_SET_HANDLE__ *a1,
        unsigned int *a2,
        struct _PD_BUFFER **a3)
{
  unsigned int v3; // esi
  unsigned int *v4; // rdi
  unsigned int v5; // r10d
  unsigned int *v6; // r11
  struct PD_BUFFER_SET_HANDLE__ *v7; // r9
  unsigned int v8; // eax
  struct _PD_BUFFER *v9; // rax
  struct _PD_BUFFER *v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = (unsigned int *)&v10;
  v5 = 0;
  v6 = a2;
  v10 = 0LL;
  v7 = a1;
  while ( v7 )
  {
    if ( v5 >= v3 )
      break;
    v8 = *((_DWORD *)v7 + 13);
    if ( v8 >= *((_DWORD *)v7 + 12) )
    {
      v7 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v7 + 8);
    }
    else
    {
      ++v5;
      a2 = *(unsigned int **)(*((_QWORD *)v7 + 7) + 8LL * v8);
      *(_QWORD *)v4 = a2;
      v4 = a2;
      ++*((_DWORD *)v7 + 13);
    }
  }
  *(_QWORD *)v4 = 0LL;
  v9 = v10;
  *v6 = v5;
  *a3 = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      82,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      *v6);
  }
}

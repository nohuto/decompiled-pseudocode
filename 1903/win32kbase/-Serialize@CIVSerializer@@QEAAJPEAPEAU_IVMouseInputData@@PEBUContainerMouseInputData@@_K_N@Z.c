/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C018B794
 * Callers:
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0189930 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0189F9C (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C0189210 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IVMouseInputData **a2,
        const struct ContainerMouseInputData *a3,
        __int64 a4,
        bool a5)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _IVMouseInputData *v14; // rcx
  _WORD *v15; // rcx
  _WORD *v16; // rdx
  __int16 v17; // ax

  v6 = a4;
  v7 = (36 * a4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a5 )
  {
    *((_QWORD *)this + 4) += v7;
  }
  else
  {
    v10 = *((_QWORD *)this + 5);
    if ( !CIVSerializer::Ensure(this, v7) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = (struct _IVMouseInputData *)(v10 + *((_QWORD *)this + 2));
    *a2 = v14;
    if ( v6 )
    {
      v15 = (_WORD *)((char *)v14 + 8);
      v16 = (_WORD *)((char *)a3 + 4);
      do
      {
        *(v15 - 4) = *(v16 - 2);
        *(v15 - 2) = *(v16 - 1);
        v17 = *v16;
        v16 += 28;
        *v15 = v17;
        v15 += 18;
        *(v15 - 16) = *(v16 - 27);
        *((_DWORD *)v15 - 7) = *((_DWORD *)v16 - 13);
        *((_DWORD *)v15 - 6) = *((_DWORD *)v16 - 12);
        *((_DWORD *)v15 - 5) = *((_DWORD *)v16 - 11);
        *((_DWORD *)v15 - 4) = *((_DWORD *)v16 - 10);
        *((_DWORD *)v15 - 3) = *((_DWORD *)v16 - 3);
        --v6;
      }
      while ( v6 );
      v14 = *a2;
    }
    *a2 = (struct _IVMouseInputData *)(((unsigned __int64)v14 - *((_QWORD *)this + 2)) | 1);
  }
  return 0LL;
}

/*
 * XREFs of NdisInitializeWrapper @ 0x1C009C370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __stdcall NdisInitializeWrapper(
        PNDIS_HANDLE NdisWrapperHandle,
        PVOID SystemSpecific1,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  PVOID v5; // r14
  __int64 v7; // rbp
  _QWORD *PoolWithTag; // rax
  int v9; // edx
  _QWORD *v10; // rbx
  unsigned int v11; // r9d

  v5 = SystemSpecific1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(SystemSpecific1) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)SystemSpecific1,
      1,
      10,
      (struct _GUID *)&WPP_7f9bbe2bb6303683d7762c790bde233d_Traceguids);
  }
  *NdisWrapperHandle = 0LL;
  v7 = *(unsigned __int16 *)SystemSpecific2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 + 26, 0x6877444Eu);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *NdisWrapperHandle = PoolWithTag;
    memset(PoolWithTag, 0, v7 + 26);
    *v10 = v5;
    v10[2] = v10 + 3;
    v11 = *(unsigned __int16 *)SystemSpecific2;
    *((_WORD *)v10 + 4) = v11;
    *((_WORD *)v10 + 5) = v11 + 2;
    memmove(v10 + 3, *((const void **)SystemSpecific2 + 1), v11);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      1,
      11,
      (struct _GUID *)&WPP_7f9bbe2bb6303683d7762c790bde233d_Traceguids);
  }
}

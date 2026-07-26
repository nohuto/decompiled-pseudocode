/*
 * XREFs of NdisMInvalidateConfigBlock @ 0x1C00B1310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall NdisMInvalidateConfigBlock(__int64 a1, __int16 a2, _MDL *a3)
{
  __int16 v4; // bp
  _IRP *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // dx
  _IRP::<unnamed_type_AssociatedIrp> v10; // rax
  UCHAR Irql; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      123,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  IoAcquireCancelSpinLock(&Irql);
  v7 = *(_QWORD *)(a1 + 4624);
  if ( v7 )
  {
    v6 = *(_IRP **)(a1 + 4624);
    _InterlockedExchange64((volatile __int64 *)(v7 + 104), 0LL);
    *(_QWORD *)(a1 + 4624) = 0LL;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 4616);
    if ( v8 )
    {
      *(_QWORD *)(a1 + 4616) = (unsigned __int64)a3 | v8;
      if ( *(_WORD *)(a1 + 4672) != v4 )
        *(_WORD *)(a1 + 4672) = -1;
    }
    else
    {
      *(_QWORD *)(a1 + 4616) = a3;
      *(_WORD *)(a1 + 4672) = v4;
    }
  }
  IoReleaseCancelSpinLock(Irql);
  if ( v6 )
  {
    v10.MasterIrp = (_IRP *)v6->AssociatedIrp;
    v10.MasterIrp->Type = v4;
    v10.MasterIrp->MdlAddress = a3;
    v6->IoStatus.Status = 0;
    v6->IoStatus.Information = 16LL;
    IofCompleteRequest(v6, 0);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      26,
      124,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
}

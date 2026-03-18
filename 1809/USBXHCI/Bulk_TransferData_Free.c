/*
 * XREFs of Bulk_TransferData_Free @ 0x1C0032AA4
 * Callers:
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C0032F2C (Bulk_Transfer_PrepareForCompletion.c)
 * Callees:
 *     TR_ReleaseDoubleBuffer @ 0x1C0024F50 (TR_ReleaseDoubleBuffer.c)
 */

void __fastcall Bulk_TransferData_Free(__int64 a1)
{
  _QWORD *v1; // rdx
  struct _MDL *v3; // rcx
  __int64 v4; // rdx
  unsigned __int16 v5; // ax
  struct _MDL *v6; // rax

  v1 = *(_QWORD **)(a1 + 96);
  if ( v1 )
  {
    TR_ReleaseDoubleBuffer(*(_QWORD *)(a1 + 56), v1);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v3 = *(struct _MDL **)(a1 + 80);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    v5 = *(_WORD *)(v4 + 2);
    if ( v5 <= 0x38u || v5 > 0x3Au )
      v6 = *(struct _MDL **)(v4 + 48);
    else
      v6 = 0LL;
    if ( v3 != v6 && v3 != *(struct _MDL **)(*(_QWORD *)(a1 + 56) + 120LL) )
    {
      IoFreeMdl(v3);
      *(_QWORD *)(a1 + 80) = 0LL;
    }
  }
  *(_BYTE *)(a1 + 16) = 0;
}

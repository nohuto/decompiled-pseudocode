/*
 * XREFs of ndisReturnPeriodicReceives @ 0x1C006EB34
 * Callers:
 *     NdisReturnNetBufferLists @ 0x1C00036A0 (NdisReturnNetBufferLists.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0026640 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C0005F90 (NdisFreeNetBufferList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0055588 (ExFreeToNPagedLookasideList.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisReturnPeriodicReceives(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  _QWORD *p_Alignment; // r14
  struct _NET_BUFFER_LIST *v4; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  _MDL *CurrentMdl; // rsi

  v2 = 0LL;
  p_Alignment = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
      v4->Link.Alignment = 0LL;
      if ( v4->NdisPoolHandle == WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 3248));
        FirstNetBuffer = v4->FirstNetBuffer;
        v8 = (struct _NPAGED_LOOKASIDE_LIST *)v4->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v4);
      }
      else
      {
        if ( v2 )
          *p_Alignment = v4;
        else
          v2 = v4;
        p_Alignment = &v4->Link.Alignment;
      }
      v4 = Alignment;
    }
    while ( Alignment );
  }
  return v2;
}

/*
 * XREFs of RawCreate @ 0x140690610
 * Callers:
 *     RawDispatch @ 0x14064C600 (RawDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     RawInitiateDeleteVolume @ 0x14010C6BC (RawInitiateDeleteVolume.c)
 *     IoCheckLinkShareAccess @ 0x1405FADE0 (IoCheckLinkShareAccess.c)
 *     IoSetLinkShareAccess @ 0x1406907B0 (IoSetLinkShareAccess.c)
 */

__int64 __fastcall RawCreate(PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader, PIRP Irp, __int64 a3)
{
  struct _FAST_MUTEX *p_PagingIoResource; // r13
  __int64 v7; // r8
  int v8; // ecx
  int v9; // eax
  int v10; // r14d
  int v11; // r15d
  int v12; // eax
  NTSTATUS v13; // esi

  p_PagingIoResource = (struct _FAST_MUTEX *)&AdvancedHeader[2].PagingIoResource;
  ExAcquireFastMutex((PFAST_MUTEX)&AdvancedHeader[2].PagingIoResource);
  v7 = *(_QWORD *)(a3 + 48);
  if ( v7 && (*(_WORD *)(v7 + 88) || *(_QWORD *)(v7 + 64))
    || (v8 = *(_DWORD *)(a3 + 16), (v8 & 0xFF000000) != 0x1000000)
    || (v8 & 1) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_15;
  }
  v9 = *(_DWORD *)&AdvancedHeader[1].NodeTypeCode;
  if ( (v9 & 1) != 0 )
  {
    v13 = -1073741790;
    goto LABEL_15;
  }
  if ( (v9 & 2) != 0 )
  {
    v13 = -1073741202;
    goto LABEL_15;
  }
  v10 = *(unsigned __int16 *)(a3 + 26);
  v11 = *(_DWORD *)(*(_QWORD *)(a3 + 8) + 16LL);
  if ( *(_DWORD *)&AdvancedHeader[1].Flags )
  {
    v13 = IoCheckLinkShareAccess(v11, v10, v7, (unsigned int *)&AdvancedHeader[1].Resource + 1, 0LL, 1);
    if ( v13 >= 0 )
    {
      v12 = *(_DWORD *)&AdvancedHeader[1].Flags;
      if ( v12 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_15:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_11;
  }
LABEL_9:
  IoSetLinkShareAccess(v11, v10, *(_QWORD *)(a3 + 48), (_DWORD)AdvancedHeader + 116, 0LL, 0);
  v12 = *(_DWORD *)&AdvancedHeader[1].Flags;
LABEL_10:
  ++LODWORD(AdvancedHeader[1].Resource);
  *(_DWORD *)&AdvancedHeader[1].Flags = v12 + 1;
  v13 = 0;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 16LL) = AdvancedHeader[1].FileContextSupportPointer;
  Irp->IoStatus.Information = 1LL;
  *(_DWORD *)(*(_QWORD *)(a3 + 48) + 80LL) |= 8u;
  *(_QWORD *)(*(_QWORD *)(a3 + 48) + 24LL) = AdvancedHeader;
LABEL_11:
  if ( *(_DWORD *)&AdvancedHeader[1].Flags || !RawInitiateDeleteVolume(AdvancedHeader, 0, 1) )
    KeReleaseGuardedMutex(p_PagingIoResource);
  Irp->IoStatus.Status = v13;
  IofCompleteRequest(Irp, 1);
  return (unsigned int)v13;
}

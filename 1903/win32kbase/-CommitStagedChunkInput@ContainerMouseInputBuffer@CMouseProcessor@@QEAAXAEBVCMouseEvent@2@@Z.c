/*
 * XREFs of ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0190558
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0032408 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0034D34 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0034F70 (HMValidateHandleNoSecure.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01912A0 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  __int64 v4; // r9
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( *((_BYTE *)this + 912) )
  {
    v4 = *((_QWORD *)this + 113);
    *(_WORD *)v4 = *(_WORD *)(*((_QWORD *)a2 + 1) + 24LL);
    *(_WORD *)(v4 + 2) = *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL);
    *(_DWORD *)(v4 + 8) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    v5 = *((_QWORD *)a2 + 1);
    *(_QWORD *)(*((_QWORD *)this + 113) + 24LL) = *(_QWORD *)(v5 + 16);
    if ( *(_DWORD *)v5 == 3 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( v6 )
      {
        v7 = HMValidateHandleNoSecure(v6, 19);
        if ( v7 )
          *(_QWORD *)(*((_QWORD *)this + 113) + 24LL) = *(_QWORD *)(v7 + 24);
      }
    }
    if ( *(_DWORD *)v5 != 2 )
    {
      if ( *(_DWORD *)v5 == 1 )
        *(_QWORD *)(*((_QWORD *)this + 113) + 24LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)this + 113) + 48LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 148LL);
      *(_BYTE *)(*((_QWORD *)this + 113) + 32LL) = 1;
      *(_QWORD *)(*((_QWORD *)this + 113) + 40LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL);
    }
    v8 = (unsigned __int16)++*((_WORD *)this + 448);
    *((_QWORD *)this + 113) = (char *)this + 56 * v8;
    if ( (unsigned int)v8 > 0x10 )
      CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(this);
    *((_BYTE *)this + 912) = 0;
  }
}

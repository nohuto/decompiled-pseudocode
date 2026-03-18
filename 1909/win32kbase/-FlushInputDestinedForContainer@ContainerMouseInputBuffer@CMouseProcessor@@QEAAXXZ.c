/*
 * XREFs of ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C018F0B0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00316B8 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C018E368 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
        CMouseProcessor::ContainerMouseInputBuffer *this)
{
  unsigned __int16 v1; // ax
  __int64 v3; // xmm0_8
  int v4; // eax
  CMouseProcessor::ContainerMouseInputBuffer *v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+2Ch] [rbp-1Ch]
  int v8; // [rsp+34h] [rbp-14h]

  v1 = *((_WORD *)this + 448);
  if ( v1 )
  {
    v3 = *(_QWORD *)((char *)this + 916);
    v6 = v1;
    v4 = *((_DWORD *)this + 231);
    v5 = this;
    v8 = v4;
    v7 = v3;
    (*(void (__fastcall **)(CHidInput *, char *, CMouseProcessor::ContainerMouseInputBuffer **))(*(_QWORD *)gpMouseSensor
                                                                                               + 152LL))(
      gpMouseSensor,
      (char *)this + 930,
      &v5);
    memset(this, 0, 56LL * *((unsigned __int16 *)this + 448));
    *((_WORD *)this + 448) = 0;
    *((_QWORD *)this + 113) = this;
    *((_BYTE *)this + 928) = 0;
    *((_BYTE *)this + 924) = 0;
  }
}

/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItemBase@@@Z @ 0x18018D1B0
 * Callers:
 *     ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z @ 0x180179790 (-AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItemBase@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItemBase *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  signed int v6; // eax
  struct CResponseItemBase *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *((_DWORD *)this + 292);
  v3 = v2 + 1;
  if ( v2 + 1 >= v2 )
  {
    v4 = 0;
    if ( v3 <= *((_DWORD *)this + 291) )
    {
      *(_QWORD *)(*((_QWORD *)this + 143) + 8LL * *((unsigned int *)this + 292)) = v8;
      *((_DWORD *)this + 292) = v3;
      goto LABEL_8;
    }
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1144, 8, 1, &v8);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v6, 0xC3u, 0LL);
  }
  else
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  if ( (v4 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x7Fu, 0LL);
    return v4;
  }
LABEL_8:
  (*(void (__fastcall **)(struct CResponseItemBase *))(*(_QWORD *)v8 + 24LL))(v8);
  return v4;
}

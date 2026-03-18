/*
 * XREFs of ?AddResponse@CFrameInfo@@QEAAJPEAVCResponseItem@@@Z @ 0x18014C2A0
 * Callers:
 *     ?AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z @ 0x180149B30 (-AddResponseItem@CPartitionVerticalBlankScheduler@@UEAAJPEAVCResponseItem@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFrameInfo::AddResponse(CFrameInfo *this, struct CResponseItem *a2)
{
  char *v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // eax
  struct CResponseItem *v8; // rax
  struct CResponseItem *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (char *)this + 1144;
  v3 = *((_DWORD *)this + 292);
  v4 = v3 + 1;
  v5 = v3 + 1 < v3 ? 0x80070216 : 0;
  if ( v3 + 1 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *((_DWORD *)this + 291) )
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1144, 8, 1, &v10);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v7, 0xC0u);
  }
  else
  {
    v6 = v3;
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * v3) = v10;
    *((_DWORD *)v2 + 6) = v4;
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x81u);
  }
  else
  {
    v8 = v10;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    ++*((_DWORD *)v8 + 4);
  }
  return (unsigned int)v5;
}

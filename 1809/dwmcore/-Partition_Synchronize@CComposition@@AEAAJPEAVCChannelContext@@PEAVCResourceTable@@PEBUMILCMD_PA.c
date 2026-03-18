/*
 * XREFs of ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x18014BA7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::Partition_Synchronize(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SYNCHRONIZE *a4)
{
  void **v6; // rcx
  LPVOID v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx

  v7 = operator new(0x38uLL);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 9);
    v6 = &CResponseItem::`vftable';
    v9 = *(_QWORD *)((char *)a4 + 4);
    *(_QWORD *)v7 = &CResponseItem::`vftable';
    *((_QWORD *)v7 + 3) = v8;
    *((_DWORD *)v7 + 2) = 0;
    *((_DWORD *)v7 + 4) = 1;
    *((_WORD *)v7 + 16) = 0;
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    *((_QWORD *)v7 + 5) = v9;
    *(_QWORD *)v7 = &CEventResponse::`vftable';
    *((_BYTE *)v7 + 48) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
  {
    if ( *((_DWORD *)a4 + 3) )
      (*(void (__fastcall **)(_QWORD, LPVOID, _QWORD))(**((_QWORD **)this + 67) + 120LL))(
        *((_QWORD *)this + 67),
        v7,
        0LL);
    CResponseItem::ReleaseResponseRef((CResponseItem *)v7);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024882, 0x57Eu);
    SetEvent(*(HANDLE *)((char *)a4 + 4));
    CloseHandle(*(HANDLE *)((char *)a4 + 4));
  }
  return 0LL;
}

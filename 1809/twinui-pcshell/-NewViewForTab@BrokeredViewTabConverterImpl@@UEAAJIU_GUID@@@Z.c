/*
 * XREFs of ?NewViewForTab@BrokeredViewTabConverterImpl@@UEAAJIU_GUID@@@Z @ 0x1801CD640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BrokeredViewTabConverterImpl::NewViewForTab(
        BrokeredViewTabConverterImpl *this,
        __int64 a2,
        struct _GUID *a3)
{
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = (__int128)*a3;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)this + 8) + 80LL))(
           *((_QWORD *)this + 8),
           a2,
           &v4);
}

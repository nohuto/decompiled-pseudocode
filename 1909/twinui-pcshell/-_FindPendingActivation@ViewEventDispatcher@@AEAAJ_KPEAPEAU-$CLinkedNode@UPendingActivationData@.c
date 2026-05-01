/*
 * XREFs of ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18029362C
 * Callers:
 *     ?ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z @ 0x1802897DC (-ActivationCompleted@ViewEventDispatcher@@QEAAX_K@Z.c)
 *     ?GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18028B160 (-GetPendingActivationData@ViewEventDispatcher@@UEAAJ_KPEAPEAUIPropertySet@Collections@Foundation.c)
 *     ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x18028D550 (-RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z.c)
 *     ?TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x180290380 (-TryShowAsStandaloneAsync@ViewEventDispatcher@@QEAAXIIW4ViewSizePreference@ViewManagement@UI@Win.c)
 * Callees:
 *     ??$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x18001A490 (--$PendingActivationFind@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 *     ??$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z @ 0x180286C40 (--$PendingActivationFind@AEA_KAEAY08$$CBG@ViewManagerInteropTraceLogging@@SAXAEA_KAEAY08$$CBG@Z.c)
 *     ?Step@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ @ 0x18028E25C (-Step@-$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAHXZ.c)
 */

__int64 __fastcall ViewEventDispatcher::_FindPendingActivation(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 result; // rax
  __int64 **v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  *a3 = 0LL;
  v10 = (__int64 **)(a1 + 528);
  v11 = 0LL;
  do
  {
    LOBYTE(v4) = CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Step(&v10);
    if ( !v4 )
    {
      ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const (&)[9]>((__int64)&v13);
      return 2147647531LL;
    }
    v7 = v11;
    v8 = (_QWORD *)(v11 + 8);
    if ( !v11 )
      v8 = (_QWORD *)v5;
  }
  while ( v6 != *v8 );
  if ( v11 )
    v5 = v11 + 8;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v5 + 8), 0LL);
  ViewManagerInteropTraceLogging::PendingActivationFind<unsigned __int64 &,unsigned short const *>(
    (__int64)&v13,
    &StringRawBuffer);
  result = 0LL;
  *a3 = v7;
  return result;
}

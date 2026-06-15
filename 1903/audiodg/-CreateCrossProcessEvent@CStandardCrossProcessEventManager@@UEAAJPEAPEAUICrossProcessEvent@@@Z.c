/*
 * XREFs of ?CreateCrossProcessEvent@CStandardCrossProcessEventManager@@UEAAJPEAPEAUICrossProcessEvent@@@Z @ 0x140037650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140026880 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x140027298 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140028F08 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x140036EE8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall CStandardCrossProcessEventManager::CreateCrossProcessEvent(
        CStandardCrossProcessEventManager *this,
        struct ICrossProcessEvent **a2)
{
  wil::details *v3; // rbx
  __int64 v4; // rdx
  wil::details *v5; // rcx
  wil::details *Event; // rdi
  __int64 v7; // r8
  const char *v8; // r9
  signed int LastErrorFailHr; // edi
  void *v10; // rdx
  int v11; // eax
  struct ICrossProcessEvent *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ICrossProcessEvent *v15; // [rsp+40h] [rbp+18h] BYREF
  wil::details *v16; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v16,
      Event);
    v3 = v16;
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5, v4, v7, v8);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v15 = 0LL;
    v16 = v3;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(&v15, &v16);
    LastErrorFailHr = v11;
    if ( v11 >= 0 )
    {
      v12 = v15;
      v3 = 0LL;
      if ( v15 )
      {
        *a2 = v15;
        (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v12 + 8LL))(v12);
        v12 = v15;
      }
      else
      {
        *a2 = 0LL;
      }
      LastErrorFailHr = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpstandardevent.h",
        (const char *)(unsigned int)v11);
      v12 = v15;
    }
    if ( v12 )
      (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpstandardevent.h",
      (const char *)(unsigned int)LastErrorFailHr);
  }
  if ( v3 )
    wil::details::CloseHandle(v3, v10);
  return (unsigned int)LastErrorFailHr;
}

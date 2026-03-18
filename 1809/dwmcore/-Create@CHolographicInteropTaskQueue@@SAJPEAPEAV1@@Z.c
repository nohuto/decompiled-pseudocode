/*
 * XREFs of ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x180211A70
 * Callers:
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x18020AFF0 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x18021203C (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180085E50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180143A08 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Create(struct CHolographicInteropTaskQueue **a1)
{
  union _SLIST_HEADER *v2; // rax
  __int64 v3; // rcx
  struct CHolographicInteropTaskQueue *v4; // rdi
  int LastErrorFailHr; // ebx
  __int64 v6; // rdx
  wil::details *v7; // rcx
  wil::details *Event; // rbx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rcx
  bool v12; // sf
  void (__fastcall **v13)(struct CHolographicInteropTaskQueue *); // rax

  v2 = (union _SLIST_HEADER *)operator new(0x40uLL);
  v4 = (struct CHolographicInteropTaskQueue *)v2;
  if ( v2 )
  {
    *((_DWORD *)&v2->HeaderX64 + 2) = 0;
    v2->Alignment = (ULONGLONG)&CHolographicInteropTaskQueue::`vftable';
    v2[3].Alignment = 0LL;
    InitializeSListHead(v2 + 1);
    InitializeSListHead((PSLIST_HEADER)v4 + 2);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)v4 + 6,
        Event);
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v7, v6, v9, v10);
    }
    v12 = LastErrorFailHr < 0;
    if ( LastErrorFailHr > 0 )
    {
      LastErrorFailHr = (unsigned __int16)LastErrorFailHr | 0x80070000;
      v12 = LastErrorFailHr < 0;
    }
    if ( v12 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, LastErrorFailHr, 0x34u);
    if ( LastErrorFailHr < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, LastErrorFailHr, 0x12u);
      (*(void (__fastcall **)(struct CHolographicInteropTaskQueue *))(*(_QWORD *)v4 + 8LL))(v4);
    }
    else
    {
      v13 = *(void (__fastcall ***)(struct CHolographicInteropTaskQueue *))v4;
      *a1 = v4;
      (*v13)(v4);
    }
  }
  else
  {
    LastErrorFailHr = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x10u);
  }
  return (unsigned int)LastErrorFailHr;
}

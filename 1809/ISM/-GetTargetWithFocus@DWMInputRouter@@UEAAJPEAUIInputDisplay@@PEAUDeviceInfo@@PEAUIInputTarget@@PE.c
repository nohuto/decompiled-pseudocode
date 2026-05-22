/*
 * XREFs of ?GetTargetWithFocus@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18008AB70
 * Callers:
 *     ?GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180006200 (-GetTargetWithFocus@MPCInputRouter@@MEAAJPEAUIInputDisplay@@PEAUDeviceInfo@@PEAUIInputTarget@@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@KUInputContext@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@@std@@QEAAAEAUInputContext@@AEBK@Z @ 0x18008C7FC (--A-$unordered_map@KUInputContext@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$pair@$$CBKUInp.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800C25EC (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::GetTargetWithFocus(
        DWMInputRouter *this,
        struct IInputDisplay *a2,
        struct DeviceInfo *a3,
        struct IInputTarget *a4,
        struct IInputTarget **a5)
{
  struct IInputTarget **v7; // r14
  __int64 v9; // rdi
  struct IInputBuffer *v10; // r9
  struct IInputTarget *v11; // rcx
  __int64 v12; // rbx
  struct IInputDisplay *v13; // rbx
  int v14; // eax
  struct IInputDisplay *v15; // rcx
  int v16; // eax
  struct IInputTarget **v17; // rbx
  struct IInputTarget *v18; // rcx
  struct IInputTarget *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IInputDisplay *v21; // [rsp+68h] [rbp+10h] BYREF

  v21 = a2;
  v7 = a5;
  if ( a5 )
  {
    if ( a3 )
    {
      a5 = 0LL;
      v9 = std::unordered_map<unsigned long,InputContext>::operator[]((char *)this + 672, a3);
      v11 = *(struct IInputTarget **)v9;
      v12 = *((_QWORD *)this + 40);
      if ( *(_QWORD *)v9 != v12 )
      {
        if ( v12 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*((_QWORD *)this + 40));
          v11 = *(struct IInputTarget **)v9;
        }
        *(_QWORD *)v9 = v12;
        if ( v11 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v13 = v21;
      if ( !v21 )
      {
        v14 = (*(__int64 (__fastcall **)(DWMInputRouter *, struct DeviceInfo *, struct IInputDisplay **))(*(_QWORD *)this + 80LL))(
                this,
                a3,
                &v21);
        if ( v14 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x597,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v14);
          JUMPOUT(0x18008AD56LL);
        }
        v13 = v21;
      }
      v15 = *(struct IInputDisplay **)(v9 + 8);
      if ( v15 != v13 )
      {
        if ( v13 )
        {
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v13 + 8LL))(v13);
          v15 = *(struct IInputDisplay **)(v9 + 8);
        }
        *(_QWORD *)(v9 + 8) = v13;
        if ( v15 )
          (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = ContextualProcessorManager::OnFocusRequest(
              *((ContextualProcessorManager **)this + 38),
              a3,
              (struct InputContext *)v9,
              v10,
              (struct IInputTarget **)&a5);
      v17 = a5;
      if ( v16 >= 0 )
      {
        if ( a5 )
          (*((void (__fastcall **)(struct IInputTarget **))*a5 + 1))(a5);
        *v7 = (struct IInputTarget *)v17;
      }
      else
      {
        v18 = *(struct IInputTarget **)v9;
        if ( *(_QWORD *)v9 )
        {
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 8LL))(v18);
          v18 = *(struct IInputTarget **)v9;
        }
        *v7 = v18;
      }
      if ( v17 )
        (*((void (__fastcall **)(struct IInputTarget **))*v17 + 2))(v17);
    }
    else
    {
      v19 = (struct IInputTarget *)*((_QWORD *)this + 40);
      if ( v19 )
      {
        (*(void (__fastcall **)(struct IInputTarget *, struct IInputDisplay *, _QWORD, struct IInputTarget *))(*(_QWORD *)v19 + 8LL))(
          v19,
          a2,
          0LL,
          a4);
        v19 = (struct IInputTarget *)*((_QWORD *)this + 40);
      }
      *v7 = v19;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x58B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}

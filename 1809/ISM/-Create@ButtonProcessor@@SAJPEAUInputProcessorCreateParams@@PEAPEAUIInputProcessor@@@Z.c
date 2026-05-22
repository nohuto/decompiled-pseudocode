/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EA710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180051FB0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x18009D6D4 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ??0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EA488 (--0ButtonProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  ButtonProcessor *v4; // rax
  ButtonProcessor *v5; // rbx
  ButtonProcessor *v6; // rdi
  signed int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  HKEY v14; // rcx
  __int64 v15; // rcx
  PTP_WORK ThreadpoolWork; // rbp
  struct _TP_WORK *v17; // r14
  DWORD LastError; // ebx
  signed int v19; // eax
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF
  ButtonProcessor *v21; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (ButtonProcessor *)malloc(0xA8uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0xA8uLL);
  if ( v5 )
    v6 = ButtonProcessor::ButtonProcessor(v5, *a1, a1[1]);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v7 = -2147024882;
    v8 = 106LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v20 = 0LL;
  v21 = 0LL;
  v10 = *((_QWORD *)v6 + 5);
  if ( v10 )
  {
    *((_QWORD *)v6 + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = CoreUICreate((char *)v6 + 40);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = 57LL;
LABEL_13:
    v13 = (unsigned int)v11;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)v13);
    goto LABEL_29;
  }
  *((_WORD *)v6 + 28) = 0;
  v14 = (HKEY)*((_QWORD *)v6 + 6);
  if ( v14 )
  {
    *((_QWORD *)v6 + 6) = 0LL;
    (*(void (__fastcall **)(HKEY))(*(_QWORD *)v14 + 16LL))(v14);
  }
  RegistryWatcher::Create(
    v14,
    L"SYSTEM\\INPUT\\BUTTONS",
    v6,
    (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
    (struct RegistryWatcher **)v6 + 6);
  *(_DWORD *)(*((_QWORD *)v6 + 4) + 4LL) |= 4u;
  *(_QWORD *)&v20 = *((_QWORD *)v6 + 4);
  v21 = v6;
  *((_QWORD *)&v20 + 1) = *((_QWORD *)v6 + 3);
  v15 = *((_QWORD *)v6 + 8);
  if ( v15 )
  {
    *((_QWORD *)v6 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v11 = CreateChildInputProcessor(4, &v20, (__int64)v6 + 64);
  v7 = v11;
  if ( v11 < 0 )
  {
    v12 = 84LL;
    goto LABEL_13;
  }
  ThreadpoolWork = CreateThreadpoolWork(ButtonProcessor::StaticExecuteWorkItems, v6, 0LL);
  v17 = (struct _TP_WORK *)*((_QWORD *)v6 + 20);
  if ( v17 )
  {
    LastError = GetLastError();
    WaitForThreadpoolWorkCallbacks(v17, 0);
    CloseThreadpoolWork(v17);
    SetLastError(LastError);
  }
  *((_QWORD *)v6 + 20) = ThreadpoolWork;
  if ( !ThreadpoolWork )
  {
    v19 = GetLastError();
    v7 = (unsigned __int16)v19 | 0x80070000;
    if ( v19 <= 0 )
      v7 = v19;
    if ( v7 < 0 )
    {
      v13 = (unsigned int)v7;
      v12 = 89LL;
      goto LABEL_14;
    }
  }
  v7 = 0;
LABEL_29:
  if ( v7 < 0 )
  {
    v8 = 109LL;
    goto LABEL_8;
  }
  *a2 = v6;
  return 0LL;
}

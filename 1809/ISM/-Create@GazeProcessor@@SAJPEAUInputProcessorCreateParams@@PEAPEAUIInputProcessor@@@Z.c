/*
 * XREFs of ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800EBB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z @ 0x18009DCBC (-Create@InputConfigContextProvider@@SAJPEAPEAUISystemContextProvider@@@Z.c)
 *     ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800EB870 (--0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  GazeProcessor *v4; // rax
  GazeProcessor *v5; // rbx
  GazeProcessor *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  GazeProcessor *v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, GazeProcessor **); // rbx
  GazeProcessor *v18; // rcx
  GazeProcessor *v19; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  GazeProcessor *v21; // [rsp+60h] [rbp+30h] BYREF

  v4 = (GazeProcessor *)malloc(0xD8uLL);
  v5 = v4;
  if ( v4 )
    memset_0(v4, 0, 0xD8uLL);
  v21 = v5;
  if ( v5 )
    v6 = GazeProcessor::GazeProcessor(v5, *a1, a1[1]);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v7 = -2147024882;
    v8 = 89LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v21 = 0LL;
  v10 = (_QWORD *)((char *)v6 + 192);
  v11 = *((_QWORD *)v6 + 24);
  if ( v11 )
  {
    *v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = InputConfigContextProvider::Create((struct ISystemContextProvider **)v6 + 24);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 51LL;
    goto LABEL_13;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 24LL))(*v10, (__int64)v6 + 8);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 53LL;
    goto LABEL_13;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 6) + 64LL))(*((_QWORD *)v6 + 6));
  v16 = *((_QWORD *)v6 + 8);
  if ( v16 )
  {
    *((_QWORD *)v6 + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v15 + 80LL))(
          v15,
          *((_QWORD *)v6 + 7),
          (__int64)v6 + 64);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 57LL;
    goto LABEL_13;
  }
  v17 = (__int64 (__fastcall ***)(_QWORD, GUID *, GazeProcessor **))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 6) + 64LL))(*((_QWORD *)v6 + 6));
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v12 = (**v17)(v17, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v21);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 60LL;
    goto LABEL_13;
  }
  v12 = (*(__int64 (__fastcall **)(GazeProcessor *, __int64))(*(_QWORD *)v21 + 24LL))(v21, (__int64)v6 + 16);
  v7 = v12;
  if ( v12 < 0 )
  {
    v13 = 62LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
      (const char *)(unsigned int)v12);
    v14 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_30;
  }
  v19 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(GazeProcessor *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v7 = 0;
LABEL_30:
  if ( v7 < 0 )
  {
    v8 = 91LL;
    goto LABEL_8;
  }
  *a2 = (GazeProcessor *)((char *)v6 + 24);
  return 0LL;
}

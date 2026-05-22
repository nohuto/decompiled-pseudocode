/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800765A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z @ 0x18002A778 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180076044 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1800764CC (-Inject@InjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  unsigned __int64 SizeForPointerCount; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  struct InputInfo *v10; // rdx
  _OWORD *v11; // r8
  char *v12; // rsi
  __int64 v13; // r9
  char *v14; // rax
  int v15; // eax
  const struct std::nothrow_t *v16; // rdx
  unsigned int v17; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct InputInfo *v20; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp+20h] BYREF

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  SizeForPointerCount = (unsigned int)PointerInputInfo::GetSizeForPointerCount(a2);
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>(
    (void **)&v20,
    SizeForPointerCount,
    v8,
    v9);
  v10 = v20;
  *(_DWORD *)v20 = 8;
  *((_DWORD *)v10 + 2) = TickCount;
  *((LARGE_INTEGER *)v10 + 2) = PerformanceCount;
  *((_QWORD *)v10 + 4) = *((_QWORD *)this + 266);
  *((_DWORD *)v10 + 53) = a2;
  if ( a2 )
  {
    v11 = (_OWORD *)((char *)v10 + 280);
    v12 = (char *)(a3 - v10);
    v13 = a2;
    do
    {
      v14 = &v12[(_QWORD)v11 - 280];
      *(v11 - 4) = *(_OWORD *)v14;
      *(v11 - 3) = *((_OWORD *)v14 + 1);
      *(v11 - 2) = *((_OWORD *)v14 + 2);
      *(v11 - 1) = *((_OWORD *)v14 + 3);
      *v11 = *((_OWORD *)v14 + 4);
      v11[1] = *((_OWORD *)v14 + 5);
      v11[2] = *((_OWORD *)v14 + 6);
      v11[3] = *((_OWORD *)v14 + 7);
      v11[4] = *((_OWORD *)v14 + 8);
      *(_DWORD *)v11 = *((_DWORD *)v10 + 2);
      *((_QWORD *)v11 + 2) = *((_QWORD *)v10 + 2);
      v11 += 9;
      --v13;
    }
    while ( v13 );
  }
  v15 = (unsigned int)InjectionDevice::Inject((ControllerProcessor *)((char *)this + 7832), v10);
  v17 = v15;
  if ( v15 >= 0 )
    v17 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBCD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v15);
  if ( v20 )
    operator delete(v20, v16);
  return v17;
}

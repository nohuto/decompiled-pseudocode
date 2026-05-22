/*
 * XREFs of ?InjectManipulationInput@ControllerProcessor@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x1800377F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::InjectManipulationInput(
        ControllerProcessor *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  DWORD TickCount; // ebx
  int *v7; // rcx
  __int64 v8; // r8
  int *v9; // rdx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v15[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v16; // [rsp+40h] [rbp-C0h]
  int v17; // [rsp+48h] [rbp-B8h]
  int v18; // [rsp+60h] [rbp-A0h]
  char v19; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v20; // [rsp+218h] [rbp+118h]
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+598h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v15, 0, 0x640uLL);
  v16 = PerformanceCount;
  v20 = *((_QWORD *)this + 212);
  v17 = 1600;
  v15[0] = 8;
  v15[2] = TickCount;
  if ( a2 )
  {
    v7 = (int *)&v19;
    v8 = a2;
    v9 = (int *)((char *)a3 + 32);
    do
    {
      *(v7 - 1) = *(v9 - 7);
      v7[1] = *v9;
      v7[2] = v9[1];
      v10 = 0;
      *v7 = 0;
      if ( (*(_BYTE *)(v9 - 5) & 2) != 0 )
      {
        v10 = 1;
        *v7 = 1;
      }
      if ( (*(v9 - 5) & 0x30000) != 0 )
        *v7 = v10 | 2;
      ++v18;
      v9 += 36;
      v7 += 8;
      --v8;
    }
    while ( v8 );
  }
  if ( !*((_BYTE *)this + 6632) )
  {
    v11 = -2147418113;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v12 = *((_QWORD *)this + 705);
  v15[1] = *((_DWORD *)this + 1412);
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 24LL))(v12, v15);
  if ( v11 < 0 )
    goto LABEL_11;
  return 0LL;
}

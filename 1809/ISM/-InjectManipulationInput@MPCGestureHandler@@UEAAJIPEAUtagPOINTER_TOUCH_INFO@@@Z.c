/*
 * XREFs of ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x18004DC90
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z @ 0x18004E914 (-MPCGestureHandler_PointerUpdated_@ISMTracing@@QEAAXJJIKKKK@Z.c)
 *     ?MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z @ 0x18004EA30 (-MPCGestureHandler_PointerUp_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     ?MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z @ 0x18004EB28 (-MPCGestureHandler_PointerDown_@ISMTracing@@QEAAXJJIKK@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGestureHandler::InjectManipulationInput(
        LARGE_INTEGER *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  __int64 v4; // r14
  _DWORD *QuadPart; // r8
  DWORD TickCount; // eax
  char v8; // r15
  int *v9; // rbx
  char *v10; // rdi
  int v11; // eax
  _DWORD *v12; // rcx
  ISMTracing *v13; // rcx
  _DWORD *v14; // rcx
  ISMTracing *v15; // rcx
  unsigned __int64 v16; // rcx
  bool v17; // dl
  _DWORD *v18; // rcx
  ISMTracing *v19; // rcx
  int v20; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+48h] [rbp-C0h] BYREF
  char v23[4]; // [rsp+58h] [rbp-B0h] BYREF
  char v24[4]; // [rsp+5Ch] [rbp-ACh]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  LARGE_INTEGER v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+70h] [rbp-98h]
  int v28; // [rsp+88h] [rbp-80h]
  char v29; // [rsp+94h] [rbp-74h] BYREF
  int v30; // [rsp+1E0h] [rbp+D8h]
  int v31; // [rsp+1F4h] [rbp+ECh]
  int v32; // [rsp+208h] [rbp+100h]
  int v33; // [rsp+21Ch] [rbp+114h]
  char v34[1104]; // [rsp+248h] [rbp+140h]
  wil::details::in1diag3 *retaddr; // [rsp+6C0h] [rbp+5B8h]

  v4 = a2;
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v23, 0, 0x640uLL);
  QuadPart = (_DWORD *)this[101].QuadPart;
  v27 = 1600;
  *(_DWORD *)v24 = *QuadPart;
  *(_DWORD *)v23 = QuadPart[1];
  TickCount = GetTickCount();
  v30 = 1065353216;
  v8 = 1;
  LODWORD(v25) = TickCount;
  v26 = PerformanceCount;
  *(_DWORD *)v34 = this[104].LowPart;
  v31 = 1065353216;
  v32 = 1065353216;
  v33 = 1065353216;
  if ( (_DWORD)v4 )
  {
    v9 = (int *)&v29;
    v10 = (char *)a3 + 12;
    do
    {
      *(v9 - 1) = *((_DWORD *)v10 - 2) + 2;
      v9[1] = *((_DWORD *)v10 + 5);
      v9[2] = *((_DWORD *)v10 + 6);
      v11 = 0;
      *v9 = 0;
      if ( (*v10 & 2) != 0 )
      {
        v11 = 1;
        *v9 = 1;
      }
      if ( (*(_DWORD *)v10 & 0x10000) != 0 )
      {
        *v9 = v11 | 2;
        v12 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v12 )
        {
          if ( *v12 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCGestureHandler_PointerDown_(v13, v9[1], v9[2], *(v9 - 1), v24[0], v34[0]);
          }
        }
      }
      if ( (*(_DWORD *)v10 & 0x40000) != 0 )
      {
        v14 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
        if ( v14 )
        {
          if ( *v14 )
          {
            ISMTracing::Instance();
            ISMTracing::MPCGestureHandler_PointerUp_(v15, v9[1], v9[2], *(v9 - 1), v24[0], v34[0]);
          }
        }
      }
      if ( (*(_DWORD *)v10 & 0x20000) != 0 )
        *v9 |= 2u;
      if ( LOBYTE(this[113].LowPart) && *(_DWORD *)v10 == 2 )
      {
        v16 = v26.QuadPart - this[114].QuadPart;
        v17 = v16 < this[115].QuadPart;
        if ( v16 >= this[115].QuadPart )
          this[114] = v26;
      }
      else
      {
        this[114].QuadPart = 0LL;
        v17 = 0;
      }
      ++v28;
      v8 &= v17;
      v18 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v18 && *v18 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCGestureHandler_PointerUpdated_(v19, v9[1], v9[2], *(v9 - 1), *v9, v24[0], v34[0], v23[0]);
      }
      v10 += 144;
      v9 += 8;
      --v4;
    }
    while ( v4 );
    if ( !v8 )
    {
      v20 = (*(__int64 (__fastcall **)(LARGE_INTEGER, char *))(*(_QWORD *)this[102].QuadPart + 24LL))(this[102], v23);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x169,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
          (const char *)(unsigned int)v20);
        JUMPOUT(0x18004DF24LL);
      }
    }
  }
  return 0LL;
}

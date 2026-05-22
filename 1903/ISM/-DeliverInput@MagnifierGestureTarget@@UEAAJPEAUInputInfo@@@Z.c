/*
 * XREFs of ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180105CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800DC3E0 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?AveragePoint@@YA?AUtagPOINT@@PEBUInputInfo@@@Z @ 0x180105C68 (-AveragePoint@@YA-AUtagPOINT@@PEBUInputInfo@@@Z.c)
 */

__int64 __fastcall MagnifierGestureTarget::DeliverInput(MagnifierGestureTarget *this, struct InputInfo *a2)
{
  char *v4; // r9
  int v5; // ecx
  int v6; // edx
  char *v7; // r8
  int v8; // eax
  _BOOL8 v9; // r9
  struct tagPOINT v10; // rax
  __int64 v11; // rcx
  struct tagPOINT v12; // rax
  __int64 v13; // rcx
  const char *v15; // [rsp+28h] [rbp-10h]
  const char *v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v18; // [rsp+40h] [rbp+8h] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x43,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
    (const char *)(*((_DWORD *)this + 8) == 2),
    (void *)"Shouldn't deliver input after completed",
    v15);
  v4 = (char *)a2 + 216;
  v5 = 0;
  v6 = 0;
  if ( a2 == (struct InputInfo *)-216LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
  {
    _o_terminate(0LL);
    __debugbreak();
  }
  v7 = &v4[144 * *((unsigned int *)a2 + 53)];
  while ( v4 != v7 )
  {
    v8 = v6 + 1;
    if ( (v4[12] & 4) == 0 )
      v8 = v6;
    v4 += 144;
    v6 = v8;
  }
  if ( v6 )
  {
    LOBYTE(v5) = *((_BYTE *)this + 28) != 0;
    *((_DWORD *)this + 8) = v5;
  }
  else
  {
    v9 = *((_BYTE *)this + 28) == 0;
    *((_DWORD *)this + 8) = 2;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x52,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\ma"
                    "gnifiertarget.cpp",
      (const char *)v9,
      (void *)"First delivered input shouldn't be completed",
      v16);
  }
  if ( *((_DWORD *)this + 6) == 1 )
  {
    v10 = AveragePoint(a2);
    v11 = *((_QWORD *)this + 2);
    v18 = v10;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, struct tagPOINT *))(*(_QWORD *)(v11 + 8) + 40LL))(
      v11 + 8,
      *((unsigned int *)this + 8),
      *((unsigned int *)a2 + 53),
      &v18);
  }
  else
  {
    v12 = AveragePoint(a2);
    v13 = *((_QWORD *)this + 2);
    v18 = v12;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, struct tagPOINT *))(*(_QWORD *)(v13 + 8) + 32LL))(
      v13 + 8,
      *((unsigned int *)this + 8),
      *((unsigned int *)a2 + 53),
      &v18);
  }
  *((_BYTE *)this + 28) = 1;
  return 0LL;
}

/*
 * XREFs of ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800CFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x18001EB60 (-terminate@details@gsl@@YAXXZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800A83BC (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?AveragePoint@@YA?AUtagPOINT@@PEBUInputInfo@@@Z @ 0x1800CFDE4 (-AveragePoint@@YA-AUtagPOINT@@PEBUInputInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierGestureTarget::DeliverInput(MagnifierGestureTarget *this, struct InputInfo *a2)
{
  gsl::details *v4; // rcx
  int v5; // edx
  int v6; // r11d
  _DWORD *v7; // r10
  int v8; // r9d
  int v9; // eax
  _BOOL8 v10; // r9
  struct tagPOINT v11; // rax
  __int64 v12; // rcx
  struct tagPOINT v13; // rax
  __int64 v14; // rcx
  const char *v16; // [rsp+28h] [rbp-20h]
  const char *v17; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tagPOINT v19; // [rsp+50h] [rbp+8h] BYREF

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x43,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
    (const char *)(*((_DWORD *)this + 8) == 2),
    (unsigned __int16 *)"Shouldn't deliver input after completed",
    v16);
  v5 = 0;
  v6 = 0;
  if ( a2 == (struct InputInfo *)-56LL && MEMORY[0xFFFFFFFFFFFFFFF8] )
LABEL_16:
    gsl::details::terminate(v4);
  v4 = 0LL;
  v7 = (_DWORD *)((char *)a2 + 60);
  while ( v4 != (gsl::details *)*((unsigned int *)a2 + 12) )
  {
    v8 = *v7 & 2;
    if ( (__int64)v4 < 0 )
      goto LABEL_16;
    v9 = v6 + 1;
    v4 = (gsl::details *)((char *)v4 + 1);
    v7 += 8;
    if ( !v8 )
      v9 = v6;
    v6 = v9;
  }
  if ( v6 )
  {
    LOBYTE(v5) = *((_BYTE *)this + 28) != 0;
    *((_DWORD *)this + 8) = v5;
  }
  else
  {
    v10 = *((_BYTE *)this + 28) == 0;
    *((_DWORD *)this + 8) = 2;
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\magnifier\\processor\\magnifiertarget.cpp",
      (const char *)v10,
      (unsigned __int16 *)"First delivered input shouldn't be completed",
      v17);
  }
  if ( *((_DWORD *)this + 6) == 1 )
  {
    v11 = AveragePoint(a2);
    v12 = *((_QWORD *)this + 2);
    v19 = v11;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, struct tagPOINT *))(*(_QWORD *)(v12 + 8) + 40LL))(
      v12 + 8,
      *((unsigned int *)this + 8),
      *((unsigned int *)a2 + 12),
      &v19);
  }
  else
  {
    v13 = AveragePoint(a2);
    v14 = *((_QWORD *)this + 2);
    v19 = v13;
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, struct tagPOINT *))(*(_QWORD *)(v14 + 8) + 32LL))(
      v14 + 8,
      *((unsigned int *)this + 8),
      *((unsigned int *)a2 + 12),
      &v19);
  }
  *((_BYTE *)this + 28) = 1;
  return 0LL;
}

/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800B6790
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rcx
  char v6; // si
  char v8; // al
  __int64 v9; // rcx
  char v10; // al
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  __int64 result; // rax
  char v14; // al
  __int64 *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax

  v4 = 0;
  v5 = *((_QWORD *)this + 12);
  v6 = 0;
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 194LL);
    v9 = *((_QWORD *)this + 12);
    if ( v8 )
    {
      if ( !*(_QWORD *)(v9 + 56) || *(float *)(v9 + 72) <= 0.0 || *(float *)(v9 + 76) <= 0.0 )
      {
        v4 = 0;
        goto LABEL_7;
      }
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL))(v9, 39LL);
    v11 = (_QWORD *)*((_QWORD *)this + 12);
    if ( !v10 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 125LL);
      v15 = (__int64 *)*((_QWORD *)this + 12);
      v16 = v14 == 0;
      v17 = *v15;
      if ( !v16 )
      {
        v4 = 1;
        v6 = (*(__int64 (**)(void))(v17 + 232))();
        goto LABEL_7;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v17 + 48))(v15, 83LL) )
        goto LABEL_7;
      v6 = 0;
      goto LABEL_6;
    }
    v12 = v11[11];
    if ( v12 && (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12) )
LABEL_6:
      v4 = 1;
  }
LABEL_7:
  result = v4;
  *a3 = v6;
  return result;
}

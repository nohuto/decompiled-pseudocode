/*
 * XREFs of wistd::__function::__func__lambda_25b1f1d8f440e7dcc4a4f15c551c995c__long___cdecl(unsigned_long)_::__move @ 0x1803A8BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KPEAX@Z @ 0x1801002A4 (--2@YAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_25b1f1d8f440e7dcc4a4f15c551c995c__long___cdecl_unsigned_long__::__move(
        __int64 a1,
        void *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 result; // rax

  v2 = operator new(a1, a2);
  v4 = (_QWORD *)(v3 + 8);
  *v2 = &off_18042FFF8;
  v5 = v2 + 1;
  v2[1] = 0LL;
  if ( v2 + 1 != v4 )
  {
    *v5 = *v4;
    *v4 = 0LL;
  }
  result = v4[1];
  v5[1] = result;
  return result;
}

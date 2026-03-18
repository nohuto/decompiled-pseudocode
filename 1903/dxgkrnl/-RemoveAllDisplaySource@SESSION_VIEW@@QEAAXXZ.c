/*
 * XREFs of ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C00CD098
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C00CED2C (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C014BC54 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::RemoveAllDisplaySource(SESSION_VIEW *this)
{
  SESSION_VIEW *v1; // rdx
  SESSION_VIEW *v2; // rax
  SESSION_VIEW *v3; // r9
  SESSION_VIEW *v4; // r10
  SESSION_VIEW **v5; // rax

  v1 = (SESSION_VIEW *)*((_QWORD *)this + 6);
  while ( v1 != (SESSION_VIEW *)((char *)this + 48) )
  {
    v2 = v1;
    v3 = v1;
    v1 = *(SESSION_VIEW **)v1;
    *((_QWORD *)v2 - 1) = 0LL;
    v4 = *(SESSION_VIEW **)v2;
    if ( *(SESSION_VIEW **)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = (SESSION_VIEW **)*((_QWORD *)v2 + 1), *v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    --*((_DWORD *)this + 10);
  }
}

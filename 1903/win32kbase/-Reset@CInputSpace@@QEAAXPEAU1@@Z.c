/*
 * XREFs of ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C0067778
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0065C58 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputSpace::Reset(CInputSpace *this, struct CInputSpace ***a2)
{
  struct CInputSpace *v3; // r8
  __int64 v4; // rdx
  CInputSpace *v5; // rax
  __int128 v6; // xmm1
  struct CInputSpace *v7; // rdx
  struct CInputSpace *v8; // rax
  struct CInputSpace *v9; // rcx
  struct CInputSpace **v10; // r8
  struct CInputSpace **v11; // r8

  v3 = (struct CInputSpace *)a2;
  v4 = 9LL;
  v5 = this;
  do
  {
    *(_OWORD *)v5 = *(_OWORD *)v3;
    *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
    *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
    *((_OWORD *)v5 + 4) = *((_OWORD *)v3 + 4);
    *((_OWORD *)v5 + 5) = *((_OWORD *)v3 + 5);
    *((_OWORD *)v5 + 6) = *((_OWORD *)v3 + 6);
    v5 = (CInputSpace *)((char *)v5 + 128);
    v6 = *((_OWORD *)v3 + 7);
    v3 = (struct CInputSpace *)((char *)v3 + 128);
    *((_OWORD *)v5 - 1) = v6;
    --v4;
  }
  while ( v4 );
  v7 = (CInputSpace *)((char *)this + 1200);
  *(_OWORD *)v5 = *(_OWORD *)v3;
  *((_OWORD *)v5 + 1) = *((_OWORD *)v3 + 1);
  *((_OWORD *)v5 + 2) = *((_OWORD *)v3 + 2);
  *((_OWORD *)v5 + 3) = *((_OWORD *)v3 + 3);
  v8 = (struct CInputSpace *)(a2 + 150);
  *((_QWORD *)this + 151) = (char *)this + 1200;
  *((_QWORD *)this + 150) = (char *)this + 1200;
  v9 = (struct CInputSpace *)a2[150];
  if ( v9 != (struct CInputSpace *)(a2 + 150) )
  {
    if ( *((struct CInputSpace **)v9 + 1) != v8
      || (v10 = a2[151], *v10 != v8)
      || (*v10 = v9,
          *((_QWORD *)v9 + 1) = v10,
          a2[151] = (struct CInputSpace **)(a2 + 150),
          *(_QWORD *)v8 = v8,
          v11 = (struct CInputSpace **)*((_QWORD *)v7 + 1),
          *(struct CInputSpace **)(*(_QWORD *)v7 + 8LL) != v7)
      || *v11 != v7
      || *(struct CInputSpace **)(*(_QWORD *)v9 + 8LL) != v9
      || **((struct CInputSpace ***)v9 + 1) != v9 )
    {
      __fastfail(3u);
    }
    *v11 = v9;
    *((_QWORD *)v7 + 1) = *((_QWORD *)v9 + 1);
    **((_QWORD **)v9 + 1) = v7;
    *((_QWORD *)v9 + 1) = v11;
    *((_DWORD *)a2 + 299) = 0;
  }
}

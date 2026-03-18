/*
 * XREFs of ?_ProcessOutputConfig@CInputConfig@@AEAAXPEAUCOutputConfig@@@Z @ 0x1C0053648
 * Callers:
 *     ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0053798 (-_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputConfig::_ProcessOutputConfig(CInputConfig *this, struct COutputConfig *a2)
{
  int v2; // r10d
  signed int *v3; // r9
  __int64 v4; // rbp
  __int64 v6; // r14
  signed int v7; // r11d
  signed int v8; // ebx
  signed int v9; // edi
  signed int v10; // esi
  signed int *v11; // rdx
  signed int *v12; // rax
  __int128 v13; // [rsp+0h] [rbp-18h]

  v2 = *((_DWORD *)a2 + 3);
  v3 = 0LL;
  v13 = 0uLL;
  v4 = 0LL;
  if ( v2 )
  {
    v6 = *((_QWORD *)a2 + 2);
    v7 = (unsigned __int128)0LL >> 96;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    do
    {
      v11 = (signed int *)(v6 + 80 * v4);
      if ( v10 >= *v11 )
        v10 = *v11;
      if ( v9 >= v11[1] )
        v9 = v11[1];
      if ( v8 <= v11[2] )
        v8 = v11[2];
      if ( v7 <= v11[3] )
        v7 = v11[3];
      if ( (v11[4] & 1) == 0 )
        v11 = v3;
      v4 = (unsigned int)(v4 + 1);
      v3 = v11;
    }
    while ( (_DWORD)v4 != v2 );
    *((_QWORD *)&v13 + 1) = __PAIR64__(v7, v8);
    *(_QWORD *)&v13 = __PAIR64__(v9, v10);
  }
  *((_DWORD *)a2 + 10) = 0;
  v12 = (signed int *)((char *)a2 + 24);
  *(_OWORD *)((char *)a2 + 24) = v13;
  if ( v3 )
    v12 = v3;
  *(_OWORD *)((char *)a2 + 104) = *(_OWORD *)v12;
  *(_OWORD *)((char *)a2 + 120) = *((_OWORD *)v12 + 1);
  *(_OWORD *)((char *)a2 + 136) = *((_OWORD *)v12 + 2);
  *(_OWORD *)((char *)a2 + 152) = *((_OWORD *)v12 + 3);
  *(_OWORD *)((char *)a2 + 168) = *((_OWORD *)v12 + 4);
}

/*
 * XREFs of ?_Getcat@?$codecvt@GDH@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18004523C
 * Callers:
 *     ??$use_facet@V?$codecvt@GDH@std@@@std@@YAAEBV?$codecvt@GDH@0@AEBVlocale@0@@Z @ 0x1800B8800 (--$use_facet@V-$codecvt@GDH@std@@@std@@YAAEBV-$codecvt@GDH@0@AEBVlocale@0@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180024538 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x1800245D4 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADED8 (--2@YAPEAX_K@Z.c)
 *     _Getcvt @ 0x1800AF7BC (_Getcvt.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::codecvt<unsigned short,char,int>::_Getcat(_QWORD *a1, __int64 *a2)
{
  char v4; // si
  _DWORD *v5; // rbx
  __int64 v6; // rax
  const char *v7; // rdx
  _Cvtvec *v8; // rax
  _Cvtvec v10; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE v11[104]; // [rsp+58h] [rbp-70h] BYREF

  v4 = 0;
  if ( a1 && !*a1 )
  {
    v5 = operator new(0x40uLL);
    if ( v5 )
    {
      v6 = *a2;
      if ( *a2 )
      {
        v7 = *(const char **)(v6 + 40);
        if ( !v7 )
          v7 = (const char *)(v6 + 48);
      }
      else
      {
        v7 = (const char *)&word_1800FD7D0;
      }
      std::_Locinfo::_Locinfo((std::_Locinfo *)v11, v7);
      v4 = 1;
      v5[2] = 0;
      *(_QWORD *)v5 = &std::codecvt<unsigned short,char,int>::`vftable';
      v8 = Getcvt(&v10);
      *((_OWORD *)v5 + 1) = *(_OWORD *)&v8->_Page;
      *((_OWORD *)v5 + 2) = *(_OWORD *)&v8->_Isleadbyte[4];
      *((_OWORD *)v5 + 3) = *(_OWORD *)&v8->_Isleadbyte[20];
    }
    else
    {
      v5 = 0LL;
    }
    *a1 = v5;
    if ( (v4 & 1) != 0 )
      std::_Locinfo::~_Locinfo((std::_Locinfo *)v11);
  }
  return 2LL;
}

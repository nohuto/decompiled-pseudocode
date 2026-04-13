/*
 * XREFs of ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x1800B33F4
 * Callers:
 *     ??0_Locimp@locale@std@@AEAA@AEBV012@@Z @ 0x1800AEB20 (--0_Locimp@locale@std@@AEAA@AEBV012@@Z.c)
 * Callees:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180024538 (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x1800245D4 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800AE0C8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800AEA54 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800AEAE4 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x1800B34D8 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::locale::_Locimp::_Locimp_ctor(
        struct std::locale::_Locimp *a1,
        const struct std::locale::_Locimp *a2)
{
  __int64 v4; // rbx
  void *v5; // rax
  __int64 v6; // rcx
  _BYTE v7[112]; // [rsp+30h] [rbp-78h] BYREF
  char v8; // [rsp+B8h] [rbp+10h] BYREF

  if ( a2 == std::locale::_Locimp::_Clocptr )
  {
    std::_Locinfo::_Locinfo((std::_Locinfo *)v7, "C");
    std::locale::_Locimp::_Makeloc((const struct std::_Locinfo *)v7, 63, a1, 0LL);
    std::_Locinfo::~_Locinfo((std::_Locinfo *)v7);
  }
  else
  {
    std::_Lockit::_Lockit((std::_Lockit *)&v8, 0);
    v4 = *((_QWORD *)a1 + 3);
    if ( v4 )
    {
      v5 = malloc(8 * v4);
      *((_QWORD *)a1 + 2) = v5;
      if ( !v5 )
        std::_Xbad_alloc();
      do
      {
        --v4;
        v6 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8 * v4);
        *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v4) = v6;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      }
      while ( v4 );
    }
    std::_Lockit::~_Lockit((std::_Lockit *)&v8);
  }
}

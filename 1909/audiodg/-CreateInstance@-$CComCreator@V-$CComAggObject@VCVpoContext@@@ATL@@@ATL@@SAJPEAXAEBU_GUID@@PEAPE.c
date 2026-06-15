/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003D004
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14003CFF0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@V-$CComCre.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C3C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComAggObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x14003CC40 (--0-$CComAggObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComAggObject<CVpoContext>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v7; // esi
  void *v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v7 = -2147024882;
    v8 = operator new(0x78uLL);
    if ( v8 )
      v9 = ATL::CComAggObject<CVpoContext>::CComAggObject<CVpoContext>((__int64)v8, a1);
    else
      v9 = 0LL;
    v12 = v9;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v7 = -2147024882;
    v9 = v12;
  }
  if ( v9 )
  {
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 48));
    if ( v10 >= 0 )
    {
      *(_BYTE *)(v9 + 88) = 1;
      v10 = 0;
    }
    v11 = 0;
    if ( v10 < 0 )
      v11 = v10;
    v7 = 0;
    if ( v11 < 0 )
      v7 = v11;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  return v7;
}

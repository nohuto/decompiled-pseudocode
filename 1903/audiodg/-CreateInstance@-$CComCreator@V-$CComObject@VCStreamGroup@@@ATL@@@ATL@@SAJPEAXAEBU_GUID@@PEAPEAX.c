/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010E78
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011180 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140010E0C (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v5; // esi
  CStreamGroup *v6; // rax
  CStreamGroup *v7; // rdi
  int v8; // eax
  CStreamGroup *v12; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v5 = -2147024882;
    v6 = (CStreamGroup *)operator new(0x190uLL);
    if ( v6 )
      v7 = ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>(v6);
    else
      v7 = 0LL;
    v12 = v7;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = v12;
  }
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 86);
    v8 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v7 + 352));
    if ( v8 >= 0 )
    {
      *((_BYTE *)v7 + 392) = 1;
      v8 = 0;
    }
    v5 = 0;
    if ( v8 < 0 )
      v5 = v8;
    _InterlockedDecrement((volatile signed __int32 *)v7 + 86);
    if ( v5 || (v5 = (**(__int64 (__fastcall ***)(CStreamGroup *, __int64, _QWORD *))v7)(v7, v4, v3)) != 0 )
      (*(void (__fastcall **)(CStreamGroup *, __int64))(*(_QWORD *)v7 + 104LL))(v7, 1LL);
  }
  return v5;
}

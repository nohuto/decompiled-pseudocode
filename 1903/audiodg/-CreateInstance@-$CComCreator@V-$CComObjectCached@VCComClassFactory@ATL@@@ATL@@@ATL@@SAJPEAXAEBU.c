/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140026C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002651C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned int v7; // r14d
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  int v10; // eax
  _DWORD *v11; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v7 = -2147024882;
    v8 = operator new(0x48uLL);
    v9 = v8;
    if ( v8 )
    {
      v8[2] = 0;
      memset_0(v8 + 4, 0, 0x28uLL);
      *((_BYTE *)v9 + 56) = 0;
      *(_QWORD *)v9 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
    }
    else
    {
      v9 = 0LL;
    }
    v11 = v9;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = a1;
    v7 = -2147024882;
    v9 = v11;
  }
  if ( v9 )
  {
    *((_QWORD *)v9 + 8) = v5;
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 4));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 56) = 1;
      v10 = 0;
    }
    v7 = 0;
    if ( v10 < 0 )
      v7 = v10;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v9);
  }
  return v7;
}

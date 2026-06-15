/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400042E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000456C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001B8BC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14002E1AC (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r13
  __int64 v5; // r12
  unsigned int v6; // r14d
  char *v7; // rax
  char *v8; // rsi
  int v9; // eax
  char *v11; // [rsp+20h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  v5 = a1;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v7 = (char *)operator new(0x48uLL);
    v8 = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 2) = 0;
      memset_0(v7 + 16, 0, 0x28uLL);
      v8[56] = 0;
      *(_QWORD *)v8 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
    }
    else
    {
      v8 = 0LL;
    }
    v11 = v8;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = a1;
    v6 = -2147024882;
    v8 = v11;
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = v5;
    v9 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v8 + 16));
    if ( v9 >= 0 )
    {
      v8[56] = 1;
      v9 = 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9;
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(void *, __int64, _QWORD *))v8)(v8, v4, v3)) != 0 )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v8);
  }
  return v6;
}

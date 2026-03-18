/*
 * XREFs of ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C001ABDC
 * Callers:
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0006668 (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C0017AE4 (-PopulateFromInfo@CAdapterCollection@@QEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001AA50 (--1CTokenManager@@AEAA@XZ.c)
 *     ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C001AB60 (-ResetAdapterCollection@CTokenManager@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAdapterCollection::InternalDiscard(CAdapterCollection *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 != v1 )
  {
    while ( 1 )
    {
      v3 = v1[1];
      if ( *(_QWORD **)v3 != v1 || (v4 = *(_QWORD **)(v3 + 8), *v4 != v3) )
        __fastfail(3u);
      v1[1] = v4;
      *v4 = v1;
      if ( (_QWORD *)v3 == v1 )
        break;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)((v3 - 8) & -(__int64)(v3 != 0)) + 8LL))(
        (v3 - 8) & -(__int64)(v3 != 0),
        -v3);
    }
    *((_DWORD *)this + 1) = 0;
    ++*((_DWORD *)this + 2);
  }
}

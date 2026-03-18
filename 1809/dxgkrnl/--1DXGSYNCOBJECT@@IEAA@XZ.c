/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C00DDDA4
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00DDC2C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  bool v1; // di
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rdx
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v1 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 42) - 5) <= 1 )
  {
    if ( (*((_BYTE *)this + 172) & 1) == 0 )
      v1 = *((_BYTE *)this + 255) != 0;
    Global = DXGGLOBAL::GetGlobal((__int64)this);
    LOBYTE(v4) = v1;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(*((_QWORD *)Global + 14) + 8LL) + 920LL))(
      (char *)this + 120,
      v4);
  }
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( *((_DWORD *)this + 18) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 1499LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v7 + 24) = 1500LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_QWORD *)this + 5) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 389LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v9 + 24) = 390LL;
    WdLogEvent5_WdAssertion(v9);
  }
  *((_QWORD *)this + 2) = 0LL;
}

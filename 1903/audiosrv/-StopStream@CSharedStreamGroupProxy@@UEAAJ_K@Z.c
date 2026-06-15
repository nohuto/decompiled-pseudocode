/*
 * XREFs of ?StopStream@CSharedStreamGroupProxy@@UEAAJ_K@Z @ 0x1800F0F80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800437A0 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::StopStream(CSharedStreamGroupProxy *this)
{
  unsigned int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10));
  --*((_DWORD *)this + 68);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return v2;
}

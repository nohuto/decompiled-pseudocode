/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x180090100
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180090A90 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, const struct tagMsgRoutingInfo *a2, void *a3)
{
  char v4; // bl
  char result; // al
  InputSite *v7; // rcx
  void *v8; // rax

  v4 = 0;
  if ( *(_DWORD *)a2 == *((_DWORD *)this + 18) )
    result = operator==(a2, (char *)this + 72);
  else
    result = 0;
  if ( result )
  {
    v7 = (InputSite *)*((_QWORD *)this + 14);
    v8 = 0LL;
    if ( v7 && *((_BYTE *)v7 + 384) )
      v8 = *(void **)InputSite::GetLegacyInputSinkData(v7);
    if ( a3 == v8 )
      return 1;
    if ( a3 )
    {
      if ( v8 )
        return (*(__int64 (__fastcall **)(DWMInputTarget *, void *))(*(_QWORD *)this + 40LL))(this, a3);
    }
    return v4;
  }
  return result;
}

/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@EEAAXXZ @ 0x1800A76B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Ref_count_obj<SpatialInteractionDevices::SpatialInputReportCaps>::_Destroy(_QWORD *a1)
{
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char *v4; // r8
  char *v5; // rcx

  v2 = (char *)a1[21];
  if ( v2 )
  {
    v3 = 12 * ((a1[23] - (_QWORD)v2) / 12LL);
    if ( v3 >= 0x1000 )
    {
      v4 = (char *)*((_QWORD *)v2 - 1);
      v3 += 39LL;
      v5 = (char *)(v2 - v4);
      if ( (unsigned __int64)(v5 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v5, v3);
        JUMPOUT(0x1800A773BLL);
      }
      v2 = v4;
    }
    operator delete(v2, (const struct std::nothrow_t *)v3);
    a1[21] = 0LL;
    a1[22] = 0LL;
    a1[23] = 0LL;
  }
}

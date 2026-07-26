/*
 * XREFs of _lambda_36d6f42f749579043faa114aff526cbd_::operator() @ 0x1C010268C
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___ @ 0x1C0109F74 (KRegKey--QueryValueBlob__lambda_36d6f42f749579043faa114aff526cbd___.c)
 * Callees:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C0102744 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010550C (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 */

__int64 __fastcall lambda_36d6f42f749579043faa114aff526cbd_::operator()(Ndis::BindStack **a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 result; // rax

  v5 = (unsigned int)a3 / 0x12;
  if ( (unsigned int)a3 % 0x12uLL )
    return 3221225485LL;
  if ( v5 > 0x80 )
    return 3221226539LL;
  if ( !(unsigned __int8)Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
                           &(*a1)->Filters,
                           v5,
                           a3,
                           0LL) )
    return 3221225626LL;
  v6 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      result = Ndis::BindStack::AddStaticFilterBinding(*a1, (const struct _GUID *)a2, *(unsigned __int16 *)(a2 + 16));
      if ( (_DWORD)result )
        break;
      ++v6;
      a2 += 18LL;
      if ( v6 >= v5 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    ++(*a1)->ChangeEpoch;
    return 0LL;
  }
  return result;
}

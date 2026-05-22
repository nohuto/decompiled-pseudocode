/*
 * XREFs of ?NodeId@ValidateProperty@Holographic@Internal@Windows@@YAJPEBX_K@Z @ 0x180110C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::Holographic::ValidateProperty::NodeId(
        Windows::Internal::Holographic::ValidateProperty *this,
        const void *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == (const void *)16 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\validateproperty.h",
    (const char *)0x8007000DLL);
  return 2147942413LL;
}

/*
 * XREFs of std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const________std::_Iterator_base0_::operator__ @ 0x1800D7BC4
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18007B5F8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const________std::_Iterator_base0_::operator__(
        __int64 **a1)
{
  __int64 *v1; // rax
  __int64 *i; // rdx
  __int64 *v4; // r8

  v1 = *a1;
  i = (__int64 *)(*a1)[2];
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)v1[1]; !*((_BYTE *)i + 25) && v1 == (__int64 *)i[2]; i = (__int64 *)i[1] )
    {
      *a1 = i;
      v1 = i;
    }
  }
  else
  {
    v4 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v4;
        v4 = (__int64 *)*v4;
      }
      while ( !*((_BYTE *)v4 + 25) );
    }
  }
  *a1 = i;
  return a1;
}

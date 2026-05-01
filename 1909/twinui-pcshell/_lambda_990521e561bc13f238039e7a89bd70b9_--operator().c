/*
 * XREFs of _lambda_990521e561bc13f238039e7a89bd70b9_::operator() @ 0x18034DB68
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@4Collections@Foundation@6@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@KeyboardHosting@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUCoreKeyboardPositionAndSizeOption@Core@Text@2UI@5@PEAI@Z @ 0x18034E450 (-GetMany@-$SimpleVectorIterator@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

unsigned int **__fastcall lambda_990521e561bc13f238039e7a89bd70b9_::operator()(unsigned int ***a1)
{
  unsigned int **result; // rax
  unsigned int v2; // edi
  unsigned int *v4; // rdx

  result = *a1;
  v2 = 0;
  v4 = **a1;
  if ( *v4 )
  {
    do
    {
      memset_0(&(*a1[1])[14 * v2], 0, 0x38uLL);
      result = *a1;
      ++v2;
      v4 = **a1;
    }
    while ( v2 < *v4 );
  }
  *v4 = 0;
  return result;
}

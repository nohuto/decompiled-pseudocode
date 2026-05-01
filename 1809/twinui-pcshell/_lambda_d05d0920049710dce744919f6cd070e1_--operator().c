/*
 * XREFs of _lambda_d05d0920049710dce744919f6cd070e1_::operator() @ 0x180119BAC
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_52a7191194288d558a59d95d8b14255d___lambda_d05d0920049710dce744919f6cd070e1___ @ 0x180117F50 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_52a7191194288d558a59d95d8b14255d___lambda_d0.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_017bf1ffedd19da74d73882f3e6b9703___lambda_d05d0920049710dce744919f6cd070e1___ @ 0x1801182AC (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vector_Windows--.c)
 * Callees:
 *     <none>
 */

unsigned int **__fastcall lambda_d05d0920049710dce744919f6cd070e1_::operator()(unsigned int ***a1)
{
  unsigned int **result; // rax
  unsigned int v2; // r8d
  unsigned int *v3; // rdx
  __int64 v4; // rdx

  result = *a1;
  v2 = 0;
  v3 = **a1;
  if ( *v3 )
  {
    do
    {
      v4 = v2++;
      (*a1[1])[v4] = 0;
      result = *a1;
      v3 = **a1;
    }
    while ( v2 < *v3 );
  }
  *v3 = 0;
  return result;
}

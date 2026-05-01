/*
 * XREFs of ?HasLowerPrecedenceThan@ExternalResourceSet@ExecutionModel@@UEBA_NPEAU_ResourceInfo@2@K@Z @ 0x180062EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ExternalResourceSet::HasLowerPrecedenceThan(
        ExecutionModel::ExternalResourceSet *this,
        struct ExecutionModel::_ResourceInfo *a2,
        int a3)
{
  int v3; // r10d
  bool result; // al

  v3 = *((_DWORD *)this + 6 * *(int *)a2 + 52);
  result = *((_DWORD *)a2 + 4) < v3;
  if ( *((_DWORD *)a2 + 4) >= v3
    && v3 == *((_DWORD *)a2 + 4)
    && ((*((_BYTE *)this + 1472) & 4) != 0 || *((_DWORD *)this + 2) != a3) )
  {
    return 1;
  }
  return result;
}
